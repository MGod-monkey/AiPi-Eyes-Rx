#ifdef __has_include
    #if __has_include("lvgl.h")
        #ifndef LV_LVGL_H_INCLUDE_SIMPLE
            #define LV_LVGL_H_INCLUDE_SIMPLE
        #endif
    #endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
    #include "lvgl.h"
#else
    #include "lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_JIGUANGKOU_IMG
#define LV_ATTRIBUTE_IMG_JIGUANGKOU_IMG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_JIGUANGKOU_IMG uint8_t jiguangkou_img_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x03, 0x02, 0x47, 0x17, 0x47, 0x47, 0x47, 0x7f, 0x47, 0xa7, 0x47, 0xbd, 0x47, 0xc6, 0x47, 0xbe, 0x47, 0xab, 0x47, 0x84, 0x47, 0x4d, 0x47, 0x1b, 0x63, 0x03, 0x00, 0x00,
  0x03, 0x02, 0x47, 0x1e, 0x27, 0x63, 0x47, 0xb2, 0x47, 0xe3, 0x47, 0xf8, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xf9, 0x47, 0xe7, 0x47, 0xb9, 0x47, 0x6c, 0x47, 0x23, 0x63, 0x03,
  0x47, 0x13, 0x47, 0x5d, 0x47, 0xbb, 0x47, 0xf2, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xf4, 0x47, 0xc4, 0x47, 0x66, 0x27, 0x18,
  0x47, 0x3a, 0x47, 0xa7, 0x47, 0xf0, 0x47, 0xff, 0x47, 0xff, 0x4b, 0xff, 0x4b, 0xff, 0x6b, 0xff, 0x4b, 0xff, 0x4b, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xf4, 0x47, 0xb0, 0x47, 0x45,
  0x47, 0x6a, 0x47, 0xd7, 0x47, 0xfe, 0x47, 0xff, 0x4b, 0xff, 0x6b, 0xff, 0xb7, 0xff, 0xb7, 0xff, 0xb7, 0xff, 0x93, 0xff, 0x6b, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xde, 0x47, 0x76,
  0x47, 0x8e, 0x47, 0xef, 0x47, 0xff, 0x47, 0xff, 0x6f, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x93, 0xff, 0x4b, 0xff, 0x47, 0xff, 0x47, 0xf3, 0x47, 0x9a,
  0x47, 0xa3, 0x47, 0xf7, 0x47, 0xff, 0x4b, 0xff, 0x93, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x6b, 0xff, 0x4b, 0xff, 0x47, 0xfb, 0x47, 0xad,
  0x47, 0xa9, 0x47, 0xf9, 0x47, 0xff, 0x4b, 0xff, 0xb3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x6f, 0xff, 0x47, 0xff, 0x47, 0xfc, 0x47, 0xb3,
  0x47, 0xa0, 0x47, 0xf6, 0x47, 0xff, 0x4b, 0xff, 0x93, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xff, 0x6b, 0xff, 0x4b, 0xff, 0x47, 0xfa, 0x47, 0xab,
  0x47, 0x89, 0x47, 0xec, 0x47, 0xff, 0x47, 0xff, 0x6f, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xff, 0x93, 0xff, 0x4b, 0xff, 0x47, 0xff, 0x47, 0xf1, 0x47, 0x94,
  0x47, 0x60, 0x47, 0xd0, 0x47, 0xfd, 0x47, 0xff, 0x4b, 0xff, 0x6b, 0xff, 0xb3, 0xff, 0xb7, 0xff, 0xb7, 0xff, 0x8f, 0xff, 0x4b, 0xff, 0x47, 0xff, 0x47, 0xfe, 0x47, 0xd7, 0x47, 0x6c,
  0x47, 0x31, 0x47, 0x9a, 0x47, 0xe8, 0x47, 0xff, 0x47, 0xff, 0x4b, 0xff, 0x4b, 0xff, 0x6b, 0xff, 0x4b, 0xff, 0x4b, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xed, 0x47, 0xa2, 0x47, 0x3b,
  0x47, 0x0e, 0x47, 0x4f, 0x47, 0xac, 0x47, 0xeb, 0x47, 0xfd, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xff, 0x47, 0xfe, 0x47, 0xee, 0x47, 0xb5, 0x47, 0x56, 0x4b, 0x11,
  0x03, 0x01, 0x47, 0x16, 0x47, 0x50, 0x47, 0x9e, 0x47, 0xd5, 0x47, 0xf0, 0x47, 0xfa, 0x47, 0xfd, 0x47, 0xfb, 0x47, 0xf2, 0x47, 0xd9, 0x47, 0xa4, 0x47, 0x57, 0x27, 0x19, 0x03, 0x01,
  0x00, 0x00, 0x03, 0x01, 0x27, 0x10, 0x47, 0x37, 0x47, 0x6b, 0x47, 0x94, 0x47, 0xab, 0x47, 0xb3, 0x47, 0xad, 0x47, 0x97, 0x47, 0x6f, 0x47, 0x3c, 0x47, 0x12, 0x03, 0x01, 0x01, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x1f, 0x00, 0x02, 0x1f, 0x39, 0x17, 0x5f, 0x39, 0x47, 0x5f, 0x39, 0x7f, 0x3f, 0x39, 0xa7, 0x5f, 0x39, 0xbd, 0x5f, 0x39, 0xc6, 0x5f, 0x39, 0xbe, 0x5f, 0x39, 0xab, 0x5f, 0x39, 0x84, 0x5f, 0x39, 0x4d, 0x5f, 0x39, 0x1b, 0x1f, 0x58, 0x03, 0x00, 0x00, 0x00,
  0x1f, 0x00, 0x02, 0x7f, 0x31, 0x1e, 0x5f, 0x39, 0x63, 0x5f, 0x39, 0xb2, 0x5f, 0x39, 0xe3, 0x5f, 0x39, 0xf8, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xf9, 0x5f, 0x39, 0xe7, 0x5f, 0x39, 0xb9, 0x5f, 0x39, 0x6c, 0x3f, 0x39, 0x23, 0x1f, 0x58, 0x03,
  0x5f, 0x39, 0x13, 0x5f, 0x39, 0x5d, 0x3f, 0x39, 0xbb, 0x5f, 0x39, 0xf2, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xf4, 0x5f, 0x39, 0xc4, 0x3f, 0x39, 0x66, 0x7f, 0x39, 0x18,
  0x5f, 0x39, 0x3a, 0x5f, 0x39, 0xa7, 0x3f, 0x39, 0xf0, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x7f, 0x41, 0xff, 0xff, 0x49, 0xff, 0x3f, 0x5a, 0xff, 0x3f, 0x52, 0xff, 0xbf, 0x41, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xf4, 0x5f, 0x39, 0xb0, 0x3f, 0x39, 0x45,
  0x5f, 0x39, 0x6a, 0x5f, 0x39, 0xd7, 0x5f, 0x39, 0xfe, 0x5f, 0x39, 0xff, 0xbf, 0x41, 0xff, 0xdf, 0x6a, 0xff, 0x7f, 0x94, 0xff, 0x5f, 0xb5, 0xff, 0xff, 0xa4, 0xff, 0xdf, 0x83, 0xff, 0x3f, 0x52, 0xff, 0x5f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x5f, 0x39, 0xde, 0x5f, 0x39, 0x76,
  0x5f, 0x39, 0x8e, 0x3f, 0x39, 0xef, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0xbf, 0x62, 0xff, 0x1f, 0xad, 0xff, 0x1f, 0xe7, 0xff, 0x9f, 0xf7, 0xff, 0x7f, 0xf7, 0xff, 0x5f, 0xce, 0xff, 0xff, 0x8b, 0xff, 0xdf, 0x49, 0xff, 0x3f, 0x39, 0xff, 0x5f, 0x39, 0xf3, 0x5f, 0x39, 0x9a,
  0x5f, 0x39, 0xa3, 0x5f, 0x39, 0xf7, 0x3f, 0x39, 0xff, 0xbf, 0x41, 0xff, 0xdf, 0x8b, 0xff, 0xdf, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x9f, 0xb5, 0xff, 0xbf, 0x62, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xfb, 0x3f, 0x39, 0xad,
  0x5f, 0x39, 0xa9, 0x5f, 0x39, 0xf9, 0x3f, 0x39, 0xff, 0xdf, 0x49, 0xff, 0x5f, 0x94, 0xff, 0x3f, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xce, 0xff, 0xff, 0x6a, 0xff, 0x5f, 0x39, 0xff, 0x3f, 0x39, 0xfc, 0x5f, 0x39, 0xb3,
  0x5f, 0x39, 0xa0, 0x3f, 0x39, 0xf6, 0x5f, 0x39, 0xff, 0x9f, 0x41, 0xff, 0xdf, 0x83, 0xff, 0xbf, 0xde, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 0x7f, 0xb5, 0xff, 0x9f, 0x62, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xfa, 0x5f, 0x39, 0xab,
  0x5f, 0x39, 0x89, 0x5f, 0x39, 0xec, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x9f, 0x62, 0xff, 0xff, 0xac, 0xff, 0xff, 0xe6, 0xff, 0x9f, 0xf7, 0xff, 0x7f, 0xf7, 0xff, 0x5f, 0xce, 0xff, 0xdf, 0x8b, 0xff, 0xdf, 0x49, 0xff, 0x3f, 0x39, 0xff, 0x5f, 0x39, 0xf1, 0x3f, 0x39, 0x94,
  0x5f, 0x39, 0x60, 0x5f, 0x39, 0xd0, 0x3f, 0x39, 0xfd, 0x5f, 0x39, 0xff, 0x9f, 0x41, 0xff, 0xbf, 0x62, 0xff, 0x3f, 0x94, 0xff, 0x1f, 0xad, 0xff, 0xdf, 0xa4, 0xff, 0x9f, 0x83, 0xff, 0x1f, 0x52, 0xff, 0x7f, 0x39, 0xff, 0x3f, 0x39, 0xfe, 0x5f, 0x39, 0xd7, 0x5f, 0x39, 0x6c,
  0x3f, 0x39, 0x31, 0x5f, 0x39, 0x9a, 0x3f, 0x39, 0xe8, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x7f, 0x41, 0xff, 0xdf, 0x49, 0xff, 0x3f, 0x52, 0xff, 0x1f, 0x52, 0xff, 0xbf, 0x41, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xff, 0x5f, 0x39, 0xed, 0x5f, 0x39, 0xa2, 0x5f, 0x39, 0x3b,
  0x3f, 0x39, 0x0e, 0x5f, 0x39, 0x4f, 0x5f, 0x39, 0xac, 0x5f, 0x39, 0xeb, 0x5f, 0x39, 0xfd, 0x3f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x3f, 0x39, 0xff, 0x5f, 0x39, 0xfe, 0x5f, 0x39, 0xee, 0x5f, 0x39, 0xb5, 0x5f, 0x39, 0x56, 0x7f, 0x41, 0x11,
  0x1f, 0x00, 0x01, 0x3f, 0x39, 0x16, 0x5f, 0x39, 0x50, 0x5f, 0x39, 0x9e, 0x5f, 0x39, 0xd5, 0x3f, 0x39, 0xf0, 0x5f, 0x39, 0xfa, 0x5f, 0x39, 0xfd, 0x5f, 0x39, 0xfb, 0x5f, 0x39, 0xf2, 0x5f, 0x39, 0xd9, 0x5f, 0x39, 0xa4, 0x5f, 0x39, 0x57, 0x5f, 0x31, 0x19, 0x1f, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x1f, 0x00, 0x01, 0x1f, 0x31, 0x10, 0x3f, 0x39, 0x37, 0x5f, 0x39, 0x6b, 0x3f, 0x39, 0x94, 0x5f, 0x39, 0xab, 0x5f, 0x39, 0xb3, 0x3f, 0x39, 0xad, 0x5f, 0x39, 0x97, 0x5f, 0x39, 0x6f, 0x5f, 0x39, 0x3c, 0x5f, 0x39, 0x12, 0x1f, 0x00, 0x01, 0x01, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x02, 0x39, 0x1f, 0x17, 0x39, 0x5f, 0x47, 0x39, 0x5f, 0x7f, 0x39, 0x3f, 0xa7, 0x39, 0x5f, 0xbd, 0x39, 0x5f, 0xc6, 0x39, 0x5f, 0xbe, 0x39, 0x5f, 0xab, 0x39, 0x5f, 0x84, 0x39, 0x5f, 0x4d, 0x39, 0x5f, 0x1b, 0x58, 0x1f, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x1f, 0x02, 0x31, 0x7f, 0x1e, 0x39, 0x5f, 0x63, 0x39, 0x5f, 0xb2, 0x39, 0x5f, 0xe3, 0x39, 0x5f, 0xf8, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xf9, 0x39, 0x5f, 0xe7, 0x39, 0x5f, 0xb9, 0x39, 0x5f, 0x6c, 0x39, 0x3f, 0x23, 0x58, 0x1f, 0x03,
  0x39, 0x5f, 0x13, 0x39, 0x5f, 0x5d, 0x39, 0x3f, 0xbb, 0x39, 0x5f, 0xf2, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xf4, 0x39, 0x5f, 0xc4, 0x39, 0x3f, 0x66, 0x39, 0x7f, 0x18,
  0x39, 0x5f, 0x3a, 0x39, 0x5f, 0xa7, 0x39, 0x3f, 0xf0, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x41, 0x7f, 0xff, 0x49, 0xff, 0xff, 0x5a, 0x3f, 0xff, 0x52, 0x3f, 0xff, 0x41, 0xbf, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xf4, 0x39, 0x5f, 0xb0, 0x39, 0x3f, 0x45,
  0x39, 0x5f, 0x6a, 0x39, 0x5f, 0xd7, 0x39, 0x5f, 0xfe, 0x39, 0x5f, 0xff, 0x41, 0xbf, 0xff, 0x6a, 0xdf, 0xff, 0x94, 0x7f, 0xff, 0xb5, 0x5f, 0xff, 0xa4, 0xff, 0xff, 0x83, 0xdf, 0xff, 0x52, 0x3f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x5f, 0xde, 0x39, 0x5f, 0x76,
  0x39, 0x5f, 0x8e, 0x39, 0x3f, 0xef, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x62, 0xbf, 0xff, 0xad, 0x1f, 0xff, 0xe7, 0x1f, 0xff, 0xf7, 0x9f, 0xff, 0xf7, 0x7f, 0xff, 0xce, 0x5f, 0xff, 0x8b, 0xff, 0xff, 0x49, 0xdf, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x5f, 0xf3, 0x39, 0x5f, 0x9a,
  0x39, 0x5f, 0xa3, 0x39, 0x5f, 0xf7, 0x39, 0x3f, 0xff, 0x41, 0xbf, 0xff, 0x8b, 0xdf, 0xff, 0xde, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xb5, 0x9f, 0xff, 0x62, 0xbf, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xfb, 0x39, 0x3f, 0xad,
  0x39, 0x5f, 0xa9, 0x39, 0x5f, 0xf9, 0x39, 0x3f, 0xff, 0x49, 0xdf, 0xff, 0x94, 0x5f, 0xff, 0xef, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xce, 0x1f, 0xff, 0x6a, 0xff, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x3f, 0xfc, 0x39, 0x5f, 0xb3,
  0x39, 0x5f, 0xa0, 0x39, 0x3f, 0xf6, 0x39, 0x5f, 0xff, 0x41, 0x9f, 0xff, 0x83, 0xdf, 0xff, 0xde, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xbf, 0xff, 0xb5, 0x7f, 0xff, 0x62, 0x9f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xfa, 0x39, 0x5f, 0xab,
  0x39, 0x5f, 0x89, 0x39, 0x5f, 0xec, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x62, 0x9f, 0xff, 0xac, 0xff, 0xff, 0xe6, 0xff, 0xff, 0xf7, 0x9f, 0xff, 0xf7, 0x7f, 0xff, 0xce, 0x5f, 0xff, 0x8b, 0xdf, 0xff, 0x49, 0xdf, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x5f, 0xf1, 0x39, 0x3f, 0x94,
  0x39, 0x5f, 0x60, 0x39, 0x5f, 0xd0, 0x39, 0x3f, 0xfd, 0x39, 0x5f, 0xff, 0x41, 0x9f, 0xff, 0x62, 0xbf, 0xff, 0x94, 0x3f, 0xff, 0xad, 0x1f, 0xff, 0xa4, 0xdf, 0xff, 0x83, 0x9f, 0xff, 0x52, 0x1f, 0xff, 0x39, 0x7f, 0xff, 0x39, 0x3f, 0xfe, 0x39, 0x5f, 0xd7, 0x39, 0x5f, 0x6c,
  0x39, 0x3f, 0x31, 0x39, 0x5f, 0x9a, 0x39, 0x3f, 0xe8, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x41, 0x7f, 0xff, 0x49, 0xdf, 0xff, 0x52, 0x3f, 0xff, 0x52, 0x1f, 0xff, 0x41, 0xbf, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xff, 0x39, 0x5f, 0xed, 0x39, 0x5f, 0xa2, 0x39, 0x5f, 0x3b,
  0x39, 0x3f, 0x0e, 0x39, 0x5f, 0x4f, 0x39, 0x5f, 0xac, 0x39, 0x5f, 0xeb, 0x39, 0x5f, 0xfd, 0x39, 0x3f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x3f, 0xff, 0x39, 0x5f, 0xfe, 0x39, 0x5f, 0xee, 0x39, 0x5f, 0xb5, 0x39, 0x5f, 0x56, 0x41, 0x7f, 0x11,
  0x00, 0x1f, 0x01, 0x39, 0x3f, 0x16, 0x39, 0x5f, 0x50, 0x39, 0x5f, 0x9e, 0x39, 0x5f, 0xd5, 0x39, 0x3f, 0xf0, 0x39, 0x5f, 0xfa, 0x39, 0x5f, 0xfd, 0x39, 0x5f, 0xfb, 0x39, 0x5f, 0xf2, 0x39, 0x5f, 0xd9, 0x39, 0x5f, 0xa4, 0x39, 0x5f, 0x57, 0x31, 0x5f, 0x19, 0x00, 0x1f, 0x01,
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x01, 0x31, 0x1f, 0x10, 0x39, 0x3f, 0x37, 0x39, 0x5f, 0x6b, 0x39, 0x3f, 0x94, 0x39, 0x5f, 0xab, 0x39, 0x5f, 0xb3, 0x39, 0x3f, 0xad, 0x39, 0x5f, 0x97, 0x39, 0x5f, 0x6f, 0x39, 0x5f, 0x3c, 0x39, 0x5f, 0x12, 0x00, 0x1f, 0x01, 0x00, 0x01, 0x00,
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x02, 0xff, 0x21, 0x37, 0x17, 0xff, 0x28, 0x36, 0x47, 0xff, 0x26, 0x36, 0x7f, 0xff, 0x26, 0x37, 0xa7, 0xff, 0x27, 0x37, 0xbd, 0xff, 0x27, 0x37, 0xc6, 0xff, 0x27, 0x37, 0xbe, 0xff, 0x27, 0x37, 0xab, 0xff, 0x27, 0x38, 0x84, 0xff, 0x28, 0x38, 0x4d, 0xff, 0x26, 0x39, 0x1b, 0xff, 0x00, 0x55, 0x03, 0x00, 0x00, 0x00, 0x00,
  0xff, 0x00, 0x00, 0x02, 0xff, 0x2a, 0x33, 0x1e, 0xff, 0x27, 0x36, 0x63, 0xff, 0x27, 0x38, 0xb2, 0xff, 0x26, 0x37, 0xe3, 0xff, 0x27, 0x38, 0xf8, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xf9, 0xff, 0x27, 0x37, 0xe7, 0xff, 0x27, 0x37, 0xb9, 0xff, 0x26, 0x36, 0x6c, 0xff, 0x24, 0x3a, 0x23, 0xff, 0x00, 0x55, 0x03,
  0xff, 0x28, 0x36, 0x13, 0xff, 0x26, 0x37, 0x5d, 0xff, 0x26, 0x37, 0xbb, 0xff, 0x27, 0x37, 0xf2, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xf4, 0xff, 0x27, 0x37, 0xc4, 0xff, 0x25, 0x37, 0x66, 0xff, 0x2a, 0x35, 0x18,
  0xff, 0x28, 0x39, 0x3a, 0xff, 0x26, 0x37, 0xa7, 0xff, 0x26, 0x37, 0xf0, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x2c, 0x3d, 0xff, 0xff, 0x3a, 0x4b, 0xff, 0xff, 0x46, 0x54, 0xff, 0xff, 0x43, 0x51, 0xff, 0xff, 0x33, 0x43, 0xff, 0xff, 0x29, 0x39, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xf4, 0xff, 0x27, 0x37, 0xb0, 0xff, 0x25, 0x37, 0x45,
  0xff, 0x26, 0x37, 0x6a, 0xff, 0x27, 0x38, 0xd7, 0xff, 0x26, 0x37, 0xfe, 0xff, 0x27, 0x37, 0xff, 0xff, 0x32, 0x41, 0xff, 0xff, 0x58, 0x65, 0xff, 0xff, 0x8c, 0x94, 0xff, 0xff, 0xa6, 0xac, 0xff, 0xff, 0x9e, 0xa5, 0xff, 0xff, 0x77, 0x80, 0xff, 0xff, 0x43, 0x52, 0xff, 0xff, 0x29, 0x39, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x27, 0x37, 0xde, 0xff, 0x27, 0x38, 0x76,
  0xff, 0x26, 0x38, 0x8e, 0xff, 0x26, 0x37, 0xef, 0xff, 0x27, 0x37, 0xff, 0xff, 0x29, 0x39, 0xff, 0xff, 0x53, 0x60, 0xff, 0xff, 0xa0, 0xa8, 0xff, 0xff, 0xde, 0xe1, 0xff, 0xff, 0xf0, 0xf2, 0xff, 0xff, 0xed, 0xee, 0xff, 0xff, 0xc8, 0xcc, 0xff, 0xff, 0x7c, 0x85, 0xff, 0xff, 0x39, 0x49, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x27, 0x38, 0xf3, 0xff, 0x26, 0x37, 0x9a,
  0xff, 0x27, 0x37, 0xa3, 0xff, 0x26, 0x37, 0xf7, 0xff, 0x25, 0x36, 0xff, 0xff, 0x32, 0x42, 0xff, 0xff, 0x7a, 0x83, 0xff, 0xff, 0xd5, 0xd8, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf3, 0xf3, 0xff, 0xff, 0xaf, 0xb4, 0xff, 0xff, 0x52, 0x5f, 0xff, 0xff, 0x28, 0x38, 0xff, 0xff, 0x26, 0x36, 0xfb, 0xff, 0x26, 0x37, 0xad,
  0xff, 0x27, 0x38, 0xa9, 0xff, 0x27, 0x37, 0xf9, 0xff, 0x25, 0x36, 0xff, 0xff, 0x36, 0x45, 0xff, 0xff, 0x88, 0x91, 0xff, 0xff, 0xe3, 0xe5, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xfb, 0xff, 0xff, 0xbf, 0xc3, 0xff, 0xff, 0x5d, 0x68, 0xff, 0xff, 0x29, 0x39, 0xff, 0xff, 0x25, 0x36, 0xfc, 0xff, 0x26, 0x38, 0xb3,
  0xff, 0x26, 0x38, 0xa0, 0xff, 0x26, 0x37, 0xf6, 0xff, 0x25, 0x36, 0xff, 0xff, 0x32, 0x41, 0xff, 0xff, 0x78, 0x81, 0xff, 0xff, 0xd3, 0xd6, 0xff, 0xff, 0xfd, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xf2, 0xff, 0xff, 0xad, 0xb2, 0xff, 0xff, 0x50, 0x5e, 0xff, 0xff, 0x28, 0x38, 0xff, 0xff, 0x26, 0x37, 0xfa, 0xff, 0x27, 0x37, 0xab,
  0xff, 0x27, 0x38, 0x89, 0xff, 0x27, 0x37, 0xec, 0xff, 0x27, 0x37, 0xff, 0xff, 0x29, 0x39, 0xff, 0xff, 0x51, 0x5e, 0xff, 0xff, 0x9d, 0xa5, 0xff, 0xff, 0xdc, 0xdf, 0xff, 0xff, 0xef, 0xf0, 0xff, 0xff, 0xeb, 0xed, 0xff, 0xff, 0xc6, 0xca, 0xff, 0xff, 0x79, 0x83, 0xff, 0xff, 0x38, 0x47, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x26, 0x37, 0xf1, 0xff, 0x26, 0x37, 0x94,
  0xff, 0x28, 0x38, 0x60, 0xff, 0x26, 0x37, 0xd0, 0xff, 0x26, 0x37, 0xfd, 0xff, 0x27, 0x37, 0xff, 0xff, 0x31, 0x40, 0xff, 0xff, 0x55, 0x62, 0xff, 0xff, 0x85, 0x8e, 0xff, 0xff, 0x9f, 0xa6, 0xff, 0xff, 0x97, 0x9f, 0xff, 0xff, 0x71, 0x7c, 0xff, 0xff, 0x41, 0x50, 0xff, 0xff, 0x2a, 0x39, 0xff, 0xff, 0x25, 0x37, 0xfe, 0xff, 0x27, 0x38, 0xd7, 0xff, 0x26, 0x36, 0x6c,
  0xff, 0x24, 0x39, 0x31, 0xff, 0x26, 0x37, 0x9a, 0xff, 0x26, 0x37, 0xe8, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x2c, 0x3c, 0xff, 0xff, 0x39, 0x49, 0xff, 0xff, 0x44, 0x53, 0xff, 0xff, 0x41, 0x50, 0xff, 0xff, 0x33, 0x42, 0xff, 0xff, 0x28, 0x39, 0xff, 0xff, 0x27, 0x37, 0xff, 0xff, 0x27, 0x37, 0xed, 0xff, 0x27, 0x37, 0xa2, 0xff, 0x27, 0x38, 0x3b,
  0xff, 0x24, 0x37, 0x0e, 0xff, 0x27, 0x37, 0x4f, 0xff, 0x27, 0x37, 0xac, 0xff, 0x27, 0x37, 0xeb, 0xff, 0x26, 0x37, 0xfd, 0xff, 0x25, 0x36, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x25, 0x36, 0xff, 0xff, 0x26, 0x37, 0xfe, 0xff, 0x27, 0x38, 0xee, 0xff, 0x26, 0x37, 0xb5, 0xff, 0x27, 0x38, 0x56, 0xff, 0x2d, 0x3c, 0x11,
  0xff, 0x00, 0x00, 0x01, 0xff, 0x23, 0x3a, 0x16, 0xff, 0x26, 0x36, 0x50, 0xff, 0x27, 0x37, 0x9e, 0xff, 0x26, 0x37, 0xd5, 0xff, 0x26, 0x37, 0xf0, 0xff, 0x27, 0x37, 0xfa, 0xff, 0x26, 0x37, 0xfd, 0xff, 0x27, 0x37, 0xfb, 0xff, 0x27, 0x37, 0xf2, 0xff, 0x27, 0x37, 0xd9, 0xff, 0x27, 0x38, 0xa4, 0xff, 0x26, 0x38, 0x57, 0xff, 0x29, 0x33, 0x19, 0xff, 0x00, 0x00, 0x01,
  0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x01, 0xff, 0x20, 0x30, 0x10, 0xff, 0x25, 0x38, 0x37, 0xff, 0x26, 0x37, 0x6b, 0xff, 0x26, 0x37, 0x94, 0xff, 0x27, 0x37, 0xab, 0xff, 0x26, 0x38, 0xb3, 0xff, 0x26, 0x37, 0xad, 0xff, 0x27, 0x38, 0x97, 0xff, 0x27, 0x37, 0x6f, 0xff, 0x26, 0x37, 0x3c, 0xff, 0x2a, 0x39, 0x12, 0xff, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t jiguangkou_img = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 15,
  .header.h = 15,
  .data_size = 225 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = jiguangkou_img_map,
};
