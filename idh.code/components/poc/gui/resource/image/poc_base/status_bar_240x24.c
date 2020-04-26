#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t status_bar_240x24_map[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
  0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x18, 0x01, 0x03, 0x00, 0x00, 0x00, 0xfe, 0x8c, 0xe2, 
  0x3e, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0, 
  0x00, 0x00, 0x00, 0x06, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x55, 0xc2, 
  0xd3, 0x7e, 0x00, 0x00, 0x00, 0x02, 0x74, 0x52, 0x4e, 0x53, 0x00, 0xee, 0x31, 0x21, 0x02, 0x47, 
  0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0e, 0x74, 0x00, 0x00, 0x0e, 0x74, 
  0x01, 0x6b, 0x24, 0xb3, 0xd6, 0x00, 0x00, 0x00, 0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 
  0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61, 0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61, 
  0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78, 
  0x00, 0x00, 0x00, 0x13, 0x49, 0x44, 0x41, 0x54, 0x28, 0x91, 0x63, 0xf8, 0x8f, 0x17, 0x30, 0x8c, 
  0x4a, 0x8f, 0x4a, 0x0f, 0x07, 0x69, 0x00, 0x69, 0xb6, 0xcd, 0x4f, 0x25, 0xc8, 0xed, 0xa6, 0x00, 
  0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 
};

lv_img_dsc_t status_bar_240x24 = {
  .header.always_zero = 0,
  .header.w = 240,
  .header.h = 24,
  .data_size = 187,
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .data = status_bar_240x24_map,
};