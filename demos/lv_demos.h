/**
 * @file lv_demos.h
 *
 */

#ifndef LV_DEMOS_H
#define LV_DEMOS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl.h"


/*********************
 *      DEFINES
 *********************/
#define LV_USE_GAME_PVZ 0
#define LV_USE_GAME_2048 0
#define LV_USE_GAME_YANG 1
#define LV_USE_GAME_XIAOXIAOLE 0
#define LV_USE_GAME_HUARONGDAO 0

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**********************
 *      MACROS
 **********************/

#if LV_USE_GAME_PVZ
#include "pvz/pvz.h"
#endif

#if LV_USE_GAME_2048
#include "2048/lv_demo_2048.h"
#endif

#if LV_USE_GAME_YANG
#include "yang/yang.h"
#endif

#if LV_USE_GAME_XIAOXIAOLE
#include "xiaoxiaole/xiaoxiaole.h"
#endif

#if LV_USE_GAME_HUARONGDAO
#include "huarongdao/huaorngdao.h"
#endif

// #if LV_USE_DEMO_BENCHMARK
// #include "benchmark/lv_demo_benchmark.h"
// #endif

// #if LV_USE_DEMO_STRESS
// #include "stress/lv_demo_stress.h"
// #endif

// #if LV_USE_DEMO_KEYPAD_AND_ENCODER
// #include "keypad_encoder/lv_demo_keypad_encoder.h"
// #endif

// #if LV_USE_DEMO_MUSIC
// #include "music/lv_demo_music.h"
// #endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_DEMO_H*/
