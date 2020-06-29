#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

const LV_ATTRIBUTE_MEM_ALIGN uint8_t stat_sys_battery_charge_anim15_map[] = {
  0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 
  0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x0c, 0x08, 0x03, 0x00, 0x00, 0x00, 0x58, 0xcc, 0x1d, 
  0x8e, 0x00, 0x00, 0x00, 0x03, 0x73, 0x42, 0x49, 0x54, 0x08, 0x08, 0x08, 0xdb, 0xe1, 0x4f, 0xe0, 
  0x00, 0x00, 0x00, 0x3c, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf7, 
  0xf7, 0xee, 0xf6, 0xf9, 0xef, 0xef, 0xef, 0xe7, 0xf2, 0xf6, 0xde, 0xde, 0xde, 0xd6, 0xd6, 0xd6, 
  0xc7, 0xc7, 0xc7, 0xbc, 0xbc, 0xbc, 0x00, 0xff, 0x40, 0xb6, 0xb6, 0xb6, 0xa0, 0xa0, 0xa0, 0x8d, 
  0x8d, 0x8d, 0x82, 0x82, 0x82, 0x5a, 0x5a, 0x5a, 0x51, 0x51, 0x51, 0x4b, 0x4b, 0x4b, 0x42, 0x42, 
  0x42, 0x3a, 0x3a, 0x3a, 0xea, 0xa6, 0xe8, 0x92, 0x00, 0x00, 0x00, 0x14, 0x74, 0x52, 0x4e, 0x53, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xba, 0xe1, 0x63, 0xa9, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
  0x00, 0x00, 0x0e, 0x74, 0x00, 0x00, 0x0e, 0x74, 0x01, 0x6b, 0x24, 0xb3, 0xd6, 0x00, 0x00, 0x00, 
  0x1f, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6f, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x4d, 0x61, 
  0x63, 0x72, 0x6f, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x20, 0x46, 0x69, 0x72, 0x65, 0x77, 0x6f, 0x72, 
  0x6b, 0x73, 0x20, 0x38, 0xb5, 0x68, 0xd2, 0x78, 0x00, 0x00, 0x00, 0x57, 0x49, 0x44, 0x41, 0x54, 
  0x08, 0x99, 0x65, 0xcf, 0x51, 0x12, 0x80, 0x20, 0x08, 0x04, 0x50, 0x49, 0x83, 0xca, 0x4a, 0x70, 
  0xef, 0x7f, 0xd7, 0x32, 0xa7, 0x51, 0x6b, 0xff, 0x78, 0x1f, 0x0b, 0x38, 0xa2, 0xd0, 0xc5, 0x7b, 
  0x22, 0x47, 0x94, 0xb4, 0xcf, 0x5c, 0x48, 0x73, 0xcb, 0x96, 0x1b, 0x41, 0x1b, 0x85, 0x32, 0x47, 
  0x80, 0x4f, 0x0c, 0xc4, 0x9c, 0x44, 0x56, 0x8c, 0xc4, 0xcb, 0x21, 0x6c, 0x1d, 0x09, 0xb3, 0x00, 
  0x1a, 0x2b, 0x4d, 0xbb, 0xdd, 0x06, 0x7b, 0xaa, 0xde, 0x8d, 0xf6, 0x3f, 0xa2, 0xa7, 0x5c, 0xe9, 
  0xfb, 0xd0, 0x05, 0x56, 0xd6, 0x09, 0xc9, 0x79, 0x4f, 0x95, 0x3a, 0x00, 0x00, 0x00, 0x00, 0x49, 
  0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82, 
};

lv_img_dsc_t stat_sys_battery_charge_anim15 = {
  .header.always_zero = 0,
  .header.w = 18,
  .header.h = 12,
  .data_size = 327,
  .header.cf = LV_IMG_CF_RAW_ALPHA,
  .data = stat_sys_battery_charge_anim15_map,
};
