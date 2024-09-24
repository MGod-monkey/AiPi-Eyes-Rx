#  基于小安派AiPi-Eyes-R1的N合1触摸屏游戏

游戏均移植自：[**【老虎爱3D-bilibili】**](https://space.bilibili.com/344482629)（这位是真大佬，我只是大自然的搬运工，并做适配）

目前存在的游戏：

- 植物大战僵尸：`demos/pvz`
- 羊了个羊：`demos/yang`
- 消消乐：`demos/xiaoxiaole`
- 华容道：`demos/huarongdao`

PVZ功能展示可见：

<div align=center class="video">
    <iframe src="//player.bilibili.com/player.html?isOutside=true&aid=113174703513154&bvid=BV1oRtkeVEXW&cid=25674586199&p=1&autoplay=0&high_quality=1" 
    scrolling="no" 
    border="0" 
    frameborder="no" 
    framespacing="0" 
    high_quality=1
    danmaku=1 
    allowfullscreen="true"> 
    </iframe>
</div>

羊了个羊：

![](https://s2.loli.net/2024/09/24/ZHpGJSmoEvK6WNe.png)

![image-20240924173240903](https://s2.loli.net/2024/09/24/8p2iKJGkPU5saVE.png)

消消乐：

![image-20240924173318883](https://s2.loli.net/2024/09/24/zFwNIgXlMTo7tDS.png)

华容道：

![image-20240924173401211](https://s2.loli.net/2024/09/24/YS9oLu5tZzFwUCb.png)

---



基于[官方示例文档](https://gitee.com/Ai-Thinker-Open/AiPi-Open-Kits/tree/master/AiPi-Eyes-Rx)修改的，适用于4寸电容屏的小安派R1和R2，R1和R2的区别和修改如下：

>**小安派 - Eyes-R1 带外置 ES8388 音频芯片，支持两路音频输入输出。**
>
>**小安派 - Eyes-R2 采用内置 CodeC，支持单路音频输入输出。**

>
>如果是编译带8388的开发板（AiPi-Eyes-R1）需要配置如下参数
>
>- 修改 `app_main.h` #define DEF_USER_ES8388_EN (1)
>
>- 修改`proj.conf`
>  - set(CONFIG_SOLUTION_FUNC_AUDIO_AUADC 0)​ set(CONFIG_SOLUTION_FUNC_AUDIO_AUDAC 0)
>
>
>如果是编译不带8388的开发板（AiPi-Eyes-R2）需要配置如下参数
>
>- 修改 `app_main.h` #define DEF_USER_ES8388_EN (0)
>
>- 修改 `proj.conf`
>  - set(CONFIG_SOLUTION_FUNC_AUDIO_AUADC 1)​ set(CONFIG_SOLUTION_FUNC_AUDIO_AUDAC 1)

## 1.硬件说明

硬件仅用到了：

- 小安派Rx
- 4寸 480*480像素的电容屏
- TTL下载器

![image-20240924174107397](https://s2.loli.net/2024/09/24/m9SecXJMLV8vUB5.png)

## 2.软件说明

修改`demos/lv_demos.h`即可体验不同的游戏（一次只能设置一个游戏为1然后编译）

```c
#define LV_USE_GAME_PVZ 0
// #define LV_USE_GAME_2048 0
#define LV_USE_GAME_YANG 1
#define LV_USE_GAME_XIAOXIAOLE 0
#define LV_USE_GAME_HUARONGDAO 0
```

`main.c`主程序说明如下：

- lvgl任务线程函数

```c
static void user_task(void *pvParameters)
{
    lv_task_handler();

    printf("[LVGL] init success \r\n");
    while (1) {

        lv_task_handler();
        bflb_mtimer_delay_ms(1);
    }
}
```

- 初试化lvgl

```c
/* lvgl init */
lv_init();
lv_port_disp_init();	//初试化显示屏
lv_port_indev_init();   //初试化触摸接口
```

- 根据定义，设置不同的初试游戏函数（2048等待后续移植）

```c
#if LV_USE_GAME_PVZ
    pvz_start()
#endif

#if LV_USE_GAME_2048
    // 2048_start();
#endif

#if LV_USE_GAME_YANG
    yang_game();
#endif

#if LV_USE_GAME_XIAOXIAOLE
    xiaoxiaole();
#endif

#if LV_USE_GAME_HUARONGDAO
    huarongdao();
#endif
```

简单解析一下`xiaoxiaole.c`的游戏初试化程序，大部分都是lvgl库中的知识，文档可以见[https://lvgl.100ask.net/master/index.html](https://lvgl.100ask.net/master/index.html)

```c
void xiaoxiaole()
{
    // 根据屏幕尺寸来灵活设置图片的放大倍数
    // lv_disp_get_hor_res(lv_disp_get_default())获取默认显示屏的水平像素
	if(lv_disp_get_hor_res(lv_disp_get_default())>=lv_disp_get_ver_res(lv_disp_get_default()))
		{screen_ratio=(float)lv_disp_get_ver_res(lv_disp_get_default())/400;}
		else
		{
			screen_ratio=(float)lv_disp_get_hor_res(lv_disp_get_default())/480;
		}
    	// screen_ratio放大倍数
		// 移除屏幕滚动条
		lv_obj_clear_flag(lv_scr_act(), LV_OBJ_FLAG_SCROLLABLE);

		screen1=lv_tileview_create(lv_scr_act());
		lv_obj_set_style_bg_color(screen1,lv_color_hex(0x000000), LV_PART_MAIN);
		lv_obj_clear_flag(screen1, LV_OBJ_FLAG_SCROLLABLE);

    	//背景图片（如果很卡的话，把这个背景图片删掉）
		//////////////////////////////////////////////////////////////////////////////////////
		bgmap=lv_img_create(screen1);
		lv_img_set_src(bgmap, &xiaoxiaole_bg_img);
		lv_img_set_pivot(bgmap,0,0);
		lv_img_set_zoom(bgmap,256*1.5*1.2);
		lv_obj_clear_flag(bgmap, LV_OBJ_FLAG_SCROLLABLE);
		///////////////////////////////////////////////////////////////////////////////////
		
    	//注册消消乐滑块窗口的地方
		game_window=lv_tileview_create(screen1);
		lv_obj_set_style_bg_color(game_window,lv_color_hex(0x000000), LV_PART_MAIN);
		lv_obj_set_style_bg_opa(game_window,200, LV_PART_MAIN);
		lv_obj_clear_flag(game_window, LV_OBJ_FLAG_SCROLLABLE);
		lv_obj_set_style_outline_width(game_window, 6, LV_PART_MAIN);
		lv_obj_set_style_outline_color(game_window, lv_color_hex(0xbb7700), LV_PART_MAIN);
		lv_obj_center(game_window);
		lv_obj_set_size(game_window,280*screen_ratio,280*screen_ratio);
			
    	// 定义刷新按钮
		refs_btn=lv_img_create(screen1);
		lv_img_set_src(refs_btn, &refs_btn_img);
		// lv_obj_set_align(refs_btn,LV_ALIGN_RIGHT_MID);
		lv_obj_align(refs_btn,LV_ALIGN_RIGHT_MID,8,0);
		lv_obj_add_flag(refs_btn, LV_OBJ_FLAG_CLICKABLE);
		lv_obj_add_event_cb(refs_btn,map_refs,LV_EVENT_CLICKED,0);
		lv_img_set_zoom(refs_btn, 150);
		
    	// 定义退出按钮（退出按钮的事件函数还没有用到）
		exit_btn=lv_img_create(screen1);
		lv_img_set_src(exit_btn, &exit_img);
		lv_obj_align(exit_btn,LV_ALIGN_TOP_RIGHT,10,-20);
		// lv_obj_set_align(exit_btn,LV_ALIGN_TOP_RIGHT);
		lv_obj_add_flag(exit_btn, LV_OBJ_FLAG_CLICKABLE);
		lv_obj_add_event_cb(exit_btn,exit_game_cb,LV_EVENT_CLICKED,0);
		lv_img_set_zoom(exit_btn, 130);
		
    	// 定义硬币图片
		coin=lv_img_create(screen1);
		lv_img_set_src(coin, &coin_img);
		lv_img_set_zoom(coin, 130);
		lv_obj_align(coin,LV_ALIGN_TOP_LEFT,10,-20);
		
    	// 定义得分
		score=0;
		
		score_lable=lv_label_create(screen1);
		lv_label_set_text_fmt(score_lable,"SCORE:%d",score);
		lv_obj_set_style_text_font(score_lable,&lv_font_montserrat_20,0);
		lv_obj_set_y(score_lable,40);
		lv_obj_set_style_text_color(score_lable, lv_color_hex(0x00aaff), LV_PART_MAIN);
		
		game_init();
}

static void	game_init()
{
	int i, j;
	lv_obj_refr_size(game_window);
	
    // 生成一个8*8的不同颜色的方块
	for(j=0;j<8;j++)
		{
			for(i=0;i<8;i++)
			{
				game_obj[j][i].x=i;
				game_obj[j][i].y=j;
				game_obj[j][i].alive=1;
				game_obj[j][i].color_index=rand()%7;
				game_obj[j][i].obj=lv_btn_create(game_window);
				lv_obj_set_pos(game_obj[j][i].obj,i*35*screen_ratio+1,j*35*screen_ratio+1);
				lv_obj_set_size(game_obj[j][i].obj,35*screen_ratio-2,35*screen_ratio-2);
				lv_obj_set_style_bg_color(game_obj[j][i].obj,lv_color_hex(color_lib[game_obj[j][i].color_index]),0);
				game_obj[j][i].obj->user_data=&game_obj[j][i];
				lv_obj_add_event_cb(game_obj[j][i].obj,move_obj_cb,LV_EVENT_PRESSING,0);
				lv_obj_add_event_cb(game_obj[j][i].obj,move_obj_cb,LV_EVENT_RELEASED,0);
			}
		}	
    	// 每次方块填满都会进行检测，是否有可以消除的方块
		if(map_is_full()&&same_color_check()){same_color_flash();lv_obj_clear_flag(refs_btn, LV_OBJ_FLAG_CLICKABLE);}	
}
```

## 3. 编译烧录

环境搭建安装参考：[小安派 R2 初体验 - 开箱 + 环境搭建 + 编译烧录](https://www.mgodmonkey.cn/posts/639d096c.html)

编译：`make BL_SDK_BASE=E:/Aithinker_Ai/AiPi-Open-Kits/aithinker_Ai-M6X_SDK`,`BL_SDK_BASE` 后面为自己的 `aithinker_Ai-M6X_SDK` 文件夹存储地址

烧录：`make flash COMX=COM5 BL_SDK_BASE=E:/Aithinker_Ai/AiPi-Open-Kits/aithinker_Ai-M6X_SDK`

> 注：
>
> 目前连接显示屏烧录的时候经常会失败，原因是TTL下载器供电不稳，因此有以下两种解决方式：
>
> - 不连接显示屏烧录
> - 连接显示屏，但需要连接TYPE-C供电，然后用TTL下载器烧录
>
> 这不得不吐槽一下，我看电路板还有挺大的空间的，为啥不将下载模块设计在上面呢？到时一根Typec连接电脑就能烧录了，难道是为了推广专用下载器吗，，，

## 4.后续计划

- 移植更多的游戏

- 看看能不能把背景音乐也添加上
