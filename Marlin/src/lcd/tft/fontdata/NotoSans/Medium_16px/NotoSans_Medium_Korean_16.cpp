/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>

// NotoSans Medium Korean 22pt, capital 'A' heigth: 16px, width: 100%, range: 0xac70-0xd788, glyphs: 110
extern const uint8_t NotoSans_Medium_Korean_16[11557] = {
  162,16,112,172,136,215,21,250, // unifont_t
  // 0xac70  거
  112,172,17,21,105,20,1,253,0,0,0,11,128,0,0,0,11,128,63,255,240,11,128,63,255,240,11,128,0,1,240,11,128,0,2,240,11,128,0,2,224,11,128,0,3,208,11,128,0,7,207,255,128,0,15,143,255,128,0,47,0,11,128,0,189,0,11,128,1,248,0,11,128,11,224,0,11,128,127,128,0,11,128,189,0,0,11,128,32,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,6,64,
  // 0xace0  고
  224,172,18,16,80,20,1,0,15,255,255,255,0,15,255,255,255,0,0,0,0,15,0,0,0,0,15,0,0,0,0,15,0,0,0,0,15,0,0,0,0,31,0,0,3,192,31,0,0,3,192,31,0,0,3,192,46,0,0,3,192,62,0,0,3,192,25,0,0,3,192,0,0,0,3,192,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xadf8  그
  248,173,18,16,80,20,1,0,15,255,255,255,0,15,255,255,255,0,0,0,0,31,0,0,0,0,47,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,61,0,0,0,0,61,0,0,0,0,60,0,0,0,0,20,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xae09  급
  9,174,18,19,95,20,1,254,11,255,255,255,0,11,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,30,0,0,0,0,46,0,0,0,0,61,0,255,255,255,255,240,255,255,255,255,240,0,0,0,0,0,0,0,0,0,0,11,128,0,31,0,11,128,0,31,0,11,234,170,191,0,11,255,255,255,0,11,128,0,31,0,11,128,0,31,0,11,255,255,255,0,11,255,255,255,0,
  // 0xae30  기
  48,174,17,21,105,20,1,253,0,0,0,15,64,0,0,0,15,64,63,255,248,15,64,47,255,248,15,64,0,0,244,15,64,0,0,244,15,64,0,0,240,15,64,0,2,240,15,64,0,3,224,15,64,0,11,192,15,64,0,15,128,15,64,0,63,0,15,64,0,252,0,15,64,7,240,0,15,64,63,192,0,15,64,126,0,0,15,64,32,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,6,64,
  // 0xae45  깅
  69,174,17,22,110,20,1,253,0,0,0,1,0,0,0,0,15,64,47,255,244,15,64,47,255,244,15,64,0,0,240,15,64,0,1,240,15,64,0,3,224,15,64,0,11,192,15,64,0,31,64,15,64,0,253,0,15,64,11,244,0,15,64,191,128,0,15,64,56,0,0,15,64,0,6,186,128,0,0,127,255,252,0,1,249,0,127,0,2,224,0,15,64,3,208,0,15,64,2,224,0,15,64,1,249,0,127,0,0,127,255,252,0,0,6,186,128,0,
  // 0xb044  끄
  68,176,18,16,80,20,1,0,47,255,47,255,0,31,255,47,255,0,0,15,0,15,0,0,31,0,15,0,0,31,0,15,0,0,31,0,15,0,0,46,0,31,0,0,46,0,31,0,0,61,0,31,0,0,60,0,46,0,0,124,0,61,0,0,104,0,45,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb0b4  내
  180,176,16,21,84,20,2,253,0,0,45,15,0,0,45,15,240,0,45,15,244,0,45,15,244,0,45,15,244,0,45,15,244,0,45,15,244,0,45,15,244,0,47,255,244,0,47,255,244,0,45,15,244,0,45,15,244,5,45,15,255,255,45,15,255,250,45,15,0,0,45,15,0,0,45,15,0,0,45,15,0,0,45,15,0,0,4,15,0,0,0,5,
  // 0xb178  노
  120,177,18,17,85,20,1,0,6,64,0,0,0,15,128,0,0,0,15,128,0,0,0,15,128,0,0,0,15,128,0,0,0,15,128,0,0,0,15,128,0,0,0,15,128,0,0,0,15,255,255,255,0,11,255,255,255,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb204  누
  4,178,18,21,105,20,1,253,1,0,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,160,0,0,
  // 0xb274  뉴
  116,178,18,21,105,20,1,253,1,0,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,100,1,144,0,
  // 0xb2c8  니
  200,178,16,22,88,20,2,253,0,0,0,4,0,0,0,46,16,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,0,0,46,184,1,105,46,191,255,254,46,191,254,144,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,20,
  // 0xb2e4  다
  228,178,18,21,105,20,2,253,0,0,0,244,0,0,0,0,244,0,255,255,192,244,0,255,255,192,244,0,240,0,0,244,0,240,0,0,244,0,240,0,0,244,0,240,0,0,244,0,240,0,0,255,224,240,0,0,255,224,240,0,0,244,0,240,0,0,244,0,240,0,20,244,0,255,255,248,244,0,255,254,164,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,80,0,
  // 0xb2f9  당
  249,178,18,22,110,20,2,253,0,0,0,16,0,0,0,0,184,0,255,255,128,184,0,255,255,128,184,0,240,0,0,184,0,240,0,0,184,0,240,0,0,191,208,240,0,0,191,208,240,0,0,184,0,240,1,100,184,0,255,255,248,184,0,255,250,80,184,0,0,0,0,184,0,0,42,233,0,0,2,255,255,208,0,15,208,6,240,0,15,0,0,184,0,31,0,0,124,0,15,0,0,184,0,15,208,6,240,0,3,255,255,208,0,0,43,233,0,0,
  // 0xb3c4  도
  196,179,18,17,85,20,1,0,11,255,255,254,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb3cc  돌
  204,179,18,20,100,20,1,254,7,255,255,254,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,7,255,255,255,0,0,0,240,0,0,191,255,255,255,240,255,255,255,255,240,0,0,0,0,0,0,0,0,0,0,15,255,255,255,0,10,170,170,191,0,0,0,0,31,0,11,255,255,255,0,11,234,170,170,0,11,128,0,0,0,11,234,170,170,64,11,255,255,255,64,
  // 0xb3d9  동
  217,179,18,20,100,20,1,253,11,255,255,255,0,11,255,255,254,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,191,255,255,255,240,0,0,0,0,0,0,47,255,128,0,2,255,255,248,0,7,208,0,125,0,11,128,0,47,0,11,128,0,46,0,7,228,1,189,0,1,255,255,244,0,0,26,170,64,0,
  // 0xb418  되
  24,180,17,21,105,20,1,253,0,0,0,15,64,0,0,0,15,64,31,255,254,15,64,31,255,254,15,64,31,0,0,15,64,31,0,0,15,64,31,0,0,15,64,31,0,0,15,64,31,255,254,15,64,31,255,255,15,64,0,31,0,15,64,0,31,0,15,64,0,31,0,15,64,0,31,1,79,64,191,255,255,207,64,191,255,169,79,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,6,0,
  // 0xb41c  된
  28,180,17,20,100,20,1,254,0,0,0,15,64,15,255,253,15,64,15,255,253,15,64,15,0,0,15,64,15,0,0,15,64,15,0,0,15,64,15,255,253,15,64,15,255,254,15,64,0,31,0,15,64,0,31,0,15,64,0,31,86,79,64,191,255,255,207,64,127,234,149,15,64,0,0,0,15,64,1,144,0,15,64,2,224,0,5,0,2,224,0,0,0,2,224,0,0,0,2,255,255,255,192,2,255,255,255,192,
  // 0xb428  됨
  40,180,17,20,100,20,1,254,0,0,0,11,128,15,255,254,11,128,15,255,253,11,128,15,0,0,11,128,15,0,0,11,128,15,0,0,11,128,15,255,254,11,128,15,255,254,11,128,0,31,0,11,128,0,31,21,139,128,191,255,255,203,128,127,170,80,11,128,0,0,0,5,0,2,255,255,255,64,2,255,255,255,128,2,224,0,11,128,2,224,0,11,128,2,224,0,11,128,2,255,255,255,128,2,255,255,255,128,
  // 0xb4a4  뒤
  164,180,17,21,105,20,1,253,0,0,0,11,128,15,255,253,11,128,15,255,253,11,128,15,0,0,11,128,15,0,0,11,128,15,0,0,11,128,15,0,0,11,128,15,255,254,11,128,15,255,254,11,128,0,0,0,11,128,0,0,5,75,128,255,255,255,203,128,191,255,165,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,30,0,11,128,0,0,0,6,64,
  // 0xb4dc  드
  220,180,18,16,80,20,1,0,11,255,255,255,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb514  디
  20,181,16,21,84,20,2,253,0,0,0,61,0,0,0,61,191,255,240,61,191,255,224,61,184,0,0,61,184,0,0,61,184,0,0,61,184,0,0,61,184,0,0,61,184,0,0,61,184,0,0,61,184,0,0,61,184,0,20,61,191,255,253,61,191,255,168,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,20,
  // 0xb77c  라
  124,183,18,21,105,20,2,253,0,0,0,184,0,0,0,0,184,0,255,255,192,184,0,255,255,192,184,0,0,7,192,184,0,0,7,192,184,0,0,7,192,184,0,255,255,192,184,0,255,255,192,191,224,240,0,0,191,224,240,0,0,184,0,240,0,0,184,0,240,0,0,184,0,240,1,104,184,0,255,255,252,184,0,255,250,144,184,0,0,0,0,184,0,0,0,0,184,0,0,0,0,184,0,0,0,0,184,0,0,0,0,100,0,
  // 0xb7ec  러
  236,183,16,21,84,20,2,253,0,0,0,46,0,0,0,46,255,255,128,46,255,255,128,46,0,11,128,46,0,11,128,46,0,11,128,46,255,255,143,254,255,255,143,254,240,0,0,46,240,0,0,46,240,0,0,46,240,0,0,46,240,1,96,46,255,255,244,46,255,250,80,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,25,
  // 0xb808  레
  8,184,17,21,105,20,1,253,0,0,2,131,192,0,0,3,195,192,127,254,3,195,192,127,254,3,195,192,0,30,3,195,192,0,30,3,195,192,0,30,3,195,192,0,30,127,195,192,127,254,127,195,192,127,254,3,195,192,124,0,3,195,192,124,0,3,195,192,124,0,3,195,192,124,1,67,195,192,127,255,211,195,192,63,250,67,195,192,0,0,3,195,192,0,0,3,195,192,0,0,3,195,192,0,0,2,131,192,0,0,0,2,128,
  // 0xb825  력
  37,184,16,21,84,20,2,253,0,0,0,46,255,255,64,46,255,255,64,46,0,11,95,254,0,11,79,254,170,175,64,46,255,255,64,46,240,0,15,254,240,0,31,254,240,1,80,46,255,255,224,46,255,250,144,46,0,0,0,45,0,0,0,0,15,255,255,254,15,255,255,254,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,25,
  // 0xb85c  로
  92,184,18,17,85,20,1,0,11,255,255,255,0,11,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,11,255,255,255,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,64,11,255,255,255,64,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb8cc  료
  204,184,18,17,85,20,1,0,11,255,255,255,0,11,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,11,255,255,255,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,64,11,255,255,255,64,0,60,2,208,0,0,60,2,208,0,0,60,2,208,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb974  르
  116,185,18,17,85,20,1,0,11,255,255,255,0,11,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,11,255,255,255,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,64,11,255,255,255,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xb9ac  리
  172,185,16,21,84,20,2,253,0,0,0,61,0,0,0,61,255,255,208,61,191,255,208,61,0,3,208,61,0,3,208,61,0,3,208,61,191,255,208,61,255,255,208,61,248,0,0,61,248,0,0,61,248,0,0,61,248,0,0,61,248,0,105,61,255,255,254,61,191,254,148,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,25,
  // 0xb9b0  린
  176,185,16,20,80,20,2,254,0,0,0,61,191,255,192,61,255,255,192,61,0,3,192,61,0,3,192,61,0,3,192,61,255,255,192,61,254,170,128,61,244,0,0,61,244,0,4,61,255,255,253,61,255,255,164,61,0,0,0,61,1,0,0,61,11,128,0,45,11,128,0,0,11,128,0,0,11,128,0,0,11,255,255,255,11,255,255,255,
  // 0xb9bd  립
  189,185,16,20,80,20,2,254,0,0,0,61,255,255,192,61,255,255,192,61,0,3,192,61,0,3,192,61,255,255,192,61,254,170,128,61,244,0,0,61,244,0,88,61,255,255,253,61,255,254,148,61,0,0,0,0,7,128,0,45,11,128,0,61,11,255,255,253,11,255,255,253,11,128,0,61,11,128,0,61,11,255,255,253,11,255,255,253,
  // 0xb9c1  링
  193,185,16,21,84,20,2,253,0,0,0,61,255,255,192,61,255,255,192,61,0,3,192,61,0,3,192,61,170,171,192,61,255,255,192,61,244,0,0,61,244,0,4,61,255,255,253,61,255,255,168,61,0,0,0,61,0,0,0,20,0,47,254,64,2,255,255,244,7,208,0,188,11,128,0,61,11,128,0,61,7,228,1,252,1,255,255,240,0,26,250,64,
  // 0xba48  멈
  72,186,16,20,80,20,2,254,0,0,0,46,255,255,192,46,255,255,192,46,240,3,192,46,240,3,192,46,240,3,255,254,240,3,255,254,240,3,192,46,240,3,192,46,255,255,192,46,255,255,192,46,0,0,0,46,0,0,0,0,7,255,255,254,7,255,255,254,7,128,0,46,7,128,0,46,7,128,0,46,7,255,255,254,7,255,255,254,
  // 0xba54  메
  84,186,16,21,84,20,2,253,0,0,15,15,0,0,15,15,255,253,15,15,255,253,15,15,240,45,15,15,240,45,15,15,240,45,15,15,240,47,255,15,240,47,255,15,240,45,15,15,240,45,15,15,240,45,15,15,240,45,15,15,255,253,15,15,255,253,15,15,0,0,15,15,0,0,15,15,0,0,15,15,0,0,15,15,0,0,5,15,0,0,0,5,
  // 0xba74  면
  116,186,16,21,84,20,2,254,0,0,0,4,0,0,0,46,255,255,192,46,255,255,192,46,240,3,255,254,240,3,255,254,240,3,192,46,240,3,192,46,240,3,192,46,240,3,255,254,255,255,255,254,255,255,192,46,0,0,0,46,0,0,0,46,1,64,0,46,7,192,0,46,7,192,0,0,7,192,0,0,7,192,0,0,7,255,255,255,7,255,255,255,
  // 0xbaa8  모
  168,186,18,17,85,20,1,0,11,255,255,255,0,15,255,255,255,0,15,64,0,15,0,15,64,0,15,0,15,64,0,15,0,15,64,0,15,0,15,64,0,15,0,15,64,0,15,0,15,255,255,255,0,15,255,255,255,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xbabb  못
  187,186,18,20,100,20,1,253,11,255,255,255,0,11,255,255,255,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,255,255,255,0,11,255,255,254,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,191,255,255,255,240,0,0,0,0,0,0,0,244,0,0,0,1,244,0,0,0,3,252,0,0,0,11,254,0,0,0,127,79,208,0,11,252,3,254,64,15,208,0,127,64,4,0,0,1,0,
  // 0xbbf8  미
  248,187,16,21,84,20,2,253,0,0,0,61,0,0,0,61,255,255,208,61,255,255,208,61,244,2,208,61,244,2,208,61,244,2,208,61,244,2,208,61,244,2,208,61,244,2,208,61,244,2,208,61,244,2,208,61,244,2,208,61,255,255,208,61,255,255,208,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,20,
  // 0xbc00  밀
  0,188,16,20,80,20,2,254,0,0,0,61,255,255,224,61,255,255,224,61,244,2,224,61,244,2,224,61,244,2,224,61,244,2,224,61,244,2,224,61,255,255,224,61,191,255,208,61,0,0,0,20,6,170,170,169,11,255,255,253,0,0,0,61,0,0,0,61,11,255,255,253,11,234,170,169,11,128,0,0,11,255,255,255,11,255,255,255,
  // 0xbc14  바
  20,188,18,21,105,20,2,253,0,0,0,244,0,80,1,64,244,0,240,3,192,244,0,240,3,192,244,0,240,3,192,244,0,240,3,192,244,0,240,3,192,244,0,255,255,192,244,0,255,255,192,255,224,240,3,192,255,224,240,3,192,244,0,240,3,192,244,0,240,3,192,244,0,240,3,192,244,0,255,255,192,244,0,255,255,192,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,244,0,0,0,0,100,0,
  // 0xbc84  버
  132,188,16,22,88,20,2,253,0,0,0,4,0,0,0,46,80,2,128,46,240,3,192,46,240,3,192,46,240,3,192,46,240,3,192,46,240,3,192,46,255,255,255,254,255,255,255,254,240,3,192,46,240,3,192,46,240,3,192,46,240,3,192,46,240,3,192,46,255,255,192,46,255,255,192,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,25,
  // 0xbca0  베
  160,188,16,22,88,20,2,253,0,0,0,5,0,0,15,15,0,4,15,15,240,45,15,15,240,45,15,15,240,45,15,15,240,45,15,15,240,45,15,15,255,255,255,15,255,255,255,15,240,45,15,15,240,45,15,15,240,45,15,15,240,45,15,15,255,253,15,15,255,253,15,15,0,0,15,15,0,0,15,15,0,0,15,15,0,0,15,15,0,0,5,15,0,0,0,5,
  // 0xbca8  벨
  168,188,17,20,100,20,2,254,0,0,15,15,0,240,30,15,15,0,240,30,15,15,0,250,190,15,15,0,255,255,255,15,0,240,31,255,15,0,240,30,15,15,0,240,30,15,15,0,255,254,15,15,0,255,254,15,15,0,0,0,5,5,0,7,255,255,254,0,7,255,255,255,0,0,0,0,31,0,0,0,0,31,0,7,255,255,255,0,7,234,170,170,0,7,192,0,0,0,7,234,170,170,64,7,255,255,255,128,
  // 0xbcf8  본
  248,188,18,19,95,20,1,254,11,128,0,31,0,11,128,0,31,0,11,255,255,255,0,11,255,255,255,0,11,128,0,31,0,11,128,0,31,0,11,255,255,255,0,7,255,255,254,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,0,0,0,0,0,6,64,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,
  // 0xbe44  비
  68,190,16,21,84,20,2,253,0,0,0,61,80,0,80,61,244,2,224,61,244,2,224,61,244,2,224,61,244,2,224,61,244,2,224,61,255,255,224,61,255,255,224,61,244,2,224,61,244,2,224,61,244,2,224,61,244,2,224,61,244,2,224,61,255,255,224,61,191,255,224,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,25,
  // 0xc0ac  사
  172,192,19,21,105,20,1,253,0,0,0,61,0,0,40,0,61,0,0,60,0,61,0,0,60,0,61,0,0,60,0,61,0,0,124,0,61,0,0,125,0,61,0,0,189,0,61,0,0,254,0,63,248,0,255,0,63,248,2,235,128,61,0,7,199,208,61,0,15,130,240,61,0,127,0,253,61,0,252,0,61,61,0,112,0,4,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,25,0,
  // 0xc0bd  삽
  189,192,19,21,105,20,1,254,0,0,0,4,0,0,20,0,46,0,0,60,0,46,0,0,60,0,46,0,0,125,0,46,0,0,190,0,47,244,0,255,0,47,244,2,235,192,46,0,11,195,240,46,0,127,65,253,46,0,254,0,60,46,0,52,0,0,46,0,0,0,0,0,0,3,192,0,46,0,3,192,0,46,0,3,250,170,190,0,3,255,255,254,0,3,192,0,46,0,3,192,0,46,0,3,255,255,254,0,3,255,255,254,0,
  // 0xc0c8  새
  200,192,17,21,105,20,1,253,0,0,7,131,192,0,80,7,131,192,0,240,7,131,192,0,240,7,131,192,0,240,7,131,192,0,244,7,131,192,0,244,7,131,192,0,244,7,131,192,1,248,7,255,192,2,252,7,255,192,3,253,7,131,192,11,159,7,131,192,15,15,135,131,192,62,7,247,131,192,252,1,231,131,192,112,0,71,131,192,0,0,7,131,192,0,0,7,131,192,0,0,7,131,192,0,0,2,67,192,0,0,0,2,128,
  // 0xc124  설
  36,193,17,21,105,20,1,254,0,0,0,1,0,0,40,0,11,128,0,60,0,11,128,0,60,0,11,128,0,125,11,255,128,0,190,11,255,128,0,255,64,11,128,3,231,208,11,128,15,195,248,11,128,191,0,190,11,128,124,0,24,11,128,0,0,0,1,0,1,170,170,170,64,1,255,255,255,128,0,0,0,11,128,0,0,0,11,128,1,255,255,255,128,1,250,170,170,64,1,240,0,0,0,1,255,255,255,192,1,255,255,255,192,
  // 0xc18c  소
  140,193,18,17,85,20,1,0,0,0,240,0,0,0,0,240,0,0,0,1,244,0,0,0,2,248,0,0,0,3,252,0,0,0,15,239,0,0,0,63,15,192,0,1,253,3,244,0,47,240,0,255,128,63,128,0,31,192,4,0,240,1,64,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xc18d  속
  141,193,18,21,105,20,1,253,0,0,240,0,0,0,0,244,0,0,0,2,248,0,0,0,7,253,0,0,0,31,159,64,0,1,254,11,244,0,47,244,1,255,128,31,64,240,31,64,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,0,0,0,0,0,0,0,0,0,0,15,255,255,255,0,15,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,0,0,0,10,0,
  // 0xc2a4  스
  164,194,18,17,85,20,1,0,0,0,240,0,0,0,0,240,0,0,0,1,244,0,0,0,2,248,0,0,0,3,252,0,0,0,11,255,0,0,0,47,15,128,0,0,253,7,240,0,27,244,1,254,64,63,192,0,63,192,25,0,0,6,128,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xc2ac  슬
  172,194,18,20,100,20,1,254,0,0,244,0,0,0,1,244,0,0,0,3,252,0,0,0,15,239,0,0,0,191,11,228,0,47,248,1,255,192,31,64,0,27,128,0,0,0,0,0,191,255,255,255,240,255,255,255,255,240,0,0,0,0,0,0,0,0,0,0,15,255,255,255,0,10,170,170,191,0,0,0,0,31,0,11,255,255,255,0,11,234,170,169,0,11,128,0,0,0,11,234,170,170,64,11,255,255,255,64,
  // 0xc2dc  시
  220,194,17,20,100,20,1,254,0,0,0,15,64,0,0,0,15,64,0,61,0,15,64,0,61,0,15,64,0,61,0,15,64,0,62,0,15,64,0,62,0,15,64,0,63,0,15,64,0,127,0,15,64,0,255,128,15,64,1,247,192,15,64,3,227,240,15,64,15,192,248,15,64,127,64,127,79,64,189,0,31,15,64,32,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,
  // 0xc2dd  식
  221,194,17,22,110,20,1,253,0,0,0,1,0,0,20,0,15,64,0,61,0,15,64,0,61,0,15,64,0,61,0,15,64,0,62,0,15,64,0,191,0,15,64,0,255,128,15,64,3,227,224,15,64,15,194,248,15,64,191,64,191,15,64,124,0,29,15,64,0,0,0,15,64,0,0,0,0,0,2,255,255,255,64,3,255,255,255,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,5,0,
  // 0xc5b4  어
  180,197,17,22,110,20,1,253,0,0,0,5,0,0,0,0,11,128,1,253,0,11,128,11,255,128,11,128,31,71,208,11,128,61,1,240,11,128,60,0,240,11,128,124,0,244,11,128,120,0,191,255,128,184,0,191,255,128,120,0,244,11,128,124,0,240,11,128,60,0,240,11,128,61,2,224,11,128,31,71,192,11,128,11,255,128,11,128,1,253,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,6,64,
  // 0xc5c6  없
  198,197,19,21,105,20,1,253,0,0,0,11,128,2,254,0,11,128,31,255,224,11,128,61,1,244,11,128,120,0,191,255,128,184,0,191,255,128,124,0,244,11,128,62,2,240,11,128,31,255,208,11,128,2,254,0,11,128,0,0,0,5,64,0,0,0,0,0,11,66,208,60,0,11,66,208,60,0,11,235,208,125,0,11,255,208,190,0,11,66,208,255,0,11,66,211,219,192,11,235,239,195,244,11,255,222,0,176,0,0,0,0,0,
  // 0xc5d1  엑
  209,197,17,21,105,20,1,253,0,0,3,195,192,2,248,3,195,192,31,255,3,195,192,61,15,131,195,192,120,3,195,195,192,180,3,255,195,192,180,3,255,195,192,184,3,195,195,192,61,11,131,195,192,47,255,3,195,192,7,248,3,195,192,0,0,3,195,192,0,0,0,0,0,1,255,255,255,128,2,255,255,255,192,0,0,0,7,192,0,0,0,7,192,0,0,0,7,192,0,0,0,7,192,0,0,0,7,192,0,0,0,2,128,
  // 0xc5d4  엔
  212,197,18,21,105,20,1,254,0,0,0,1,64,0,0,3,195,192,6,248,3,195,192,31,255,3,195,192,61,15,131,195,192,120,3,195,195,192,180,3,255,195,192,180,3,255,195,192,180,3,195,195,192,124,7,195,195,192,62,31,67,195,192,31,255,3,195,192,2,248,3,195,192,0,0,3,195,192,0,80,3,195,192,0,240,3,195,192,0,240,0,1,64,0,240,0,0,0,0,240,0,0,0,0,255,255,255,208,0,255,255,255,208,
  // 0xc5f4  열
  244,197,17,21,105,20,1,254,0,0,0,1,0,1,185,0,11,128,15,255,192,11,128,63,2,255,255,128,124,0,255,255,128,184,0,184,11,128,184,0,184,11,128,124,0,255,255,128,63,2,255,255,128,15,255,192,11,128,1,185,0,11,128,0,0,0,0,0,1,170,170,170,64,1,255,255,255,128,0,0,0,11,128,0,0,0,11,128,1,255,255,255,128,1,250,170,170,64,1,240,0,0,0,1,255,255,255,192,1,255,255,255,192,
  // 0xc608  예
  8,198,17,22,110,20,1,253,0,0,0,1,64,0,0,3,195,192,2,244,3,195,192,15,252,3,195,192,47,110,3,195,192,60,15,3,195,192,124,11,255,195,192,120,7,255,195,192,180,7,131,195,192,180,3,195,195,192,180,3,195,195,192,180,7,131,195,192,120,7,255,195,192,60,15,255,195,192,62,47,3,195,192,15,253,3,195,192,2,244,3,195,192,0,0,3,195,192,0,0,3,195,192,0,0,3,195,192,0,0,1,67,192,0,0,0,1,64,
  // 0xc624  오
  36,198,18,17,85,20,1,0,0,27,254,64,0,0,255,255,244,0,3,244,0,188,0,15,192,0,47,0,15,0,0,15,64,15,0,0,15,64,15,0,0,15,0,15,128,0,47,0,3,244,0,189,0,1,255,255,244,0,0,27,254,64,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xc628  온
  40,198,18,20,100,20,1,254,0,26,250,64,0,1,255,255,244,0,7,244,1,189,0,15,128,0,47,0,15,64,0,31,0,15,128,0,47,0,7,244,1,189,0,1,255,255,244,0,0,26,254,64,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,0,0,0,0,0,6,64,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,
  // 0xc644  완
  68,198,19,20,100,20,1,254,0,0,0,46,0,1,255,64,46,0,11,255,240,46,0,31,0,248,46,0,45,0,124,46,0,61,0,60,46,0,46,0,184,46,0,15,230,240,47,244,2,255,192,47,244,0,61,0,46,0,0,61,86,46,0,255,255,255,110,0,191,250,80,46,0,0,0,0,46,0,2,128,0,46,0,3,192,0,25,0,3,192,0,0,0,3,192,0,0,0,3,255,255,255,64,3,255,255,255,64,
  // 0xc6d0  원
  208,198,17,21,105,20,1,254,0,0,0,5,0,0,106,64,11,128,7,255,240,11,128,15,128,188,11,128,31,0,60,11,128,31,0,60,11,128,15,128,188,11,128,7,255,240,11,128,0,106,64,11,128,0,0,5,75,128,255,255,255,203,128,255,255,250,75,128,0,31,0,11,128,0,31,11,255,128,0,31,6,175,128,7,222,0,11,128,7,192,0,6,64,7,192,0,0,0,7,192,0,0,0,7,255,255,255,192,7,255,255,255,192,
  // 0xc704  위
  4,199,17,21,105,20,1,253,0,0,0,11,128,0,191,128,11,128,7,255,248,11,128,15,128,125,11,128,31,0,46,11,128,31,0,46,11,128,15,64,125,11,128,7,255,248,11,128,0,191,144,11,128,0,0,0,11,128,0,0,90,203,128,255,255,255,203,128,191,255,148,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,30,0,11,128,0,0,0,6,64,
  // 0xc73c  으
  60,199,18,17,85,20,1,0,0,11,254,64,0,0,191,255,240,0,3,244,1,252,0,11,192,0,63,0,15,64,0,15,0,15,0,0,15,64,15,0,0,15,64,15,64,0,15,0,11,192,0,62,0,3,248,1,252,0,0,191,255,224,0,0,10,250,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xc74c  음
  76,199,18,20,100,20,1,254,0,26,170,64,0,1,255,255,248,0,7,228,1,190,0,15,128,0,31,0,15,64,0,31,0,11,208,0,126,0,2,255,255,248,0,0,47,255,128,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,191,255,255,255,240,0,0,0,0,0,11,255,255,254,0,11,255,255,255,0,11,64,0,31,0,11,64,0,31,0,11,64,0,31,0,11,255,255,255,0,11,255,255,255,0,
  // 0xc774  이
  116,199,16,22,88,20,2,253,0,0,0,20,0,0,0,61,2,248,0,61,31,255,0,61,62,15,192,61,124,3,192,61,244,2,224,61,240,1,240,61,240,1,240,61,240,0,240,61,240,1,240,61,240,1,240,61,244,2,224,61,124,3,192,61,62,15,192,61,31,255,0,61,3,248,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,61,0,0,0,25,
  // 0xc77c  일
  124,199,17,21,105,20,1,254,0,0,0,5,0,1,186,0,15,64,15,255,208,15,64,63,66,240,15,64,60,0,184,15,64,124,0,124,15,64,124,0,124,15,64,60,0,184,15,64,63,66,240,15,64,15,255,208,15,64,1,186,0,15,64,0,0,0,5,0,1,255,255,255,64,2,255,255,255,64,0,0,0,15,64,0,0,0,15,64,1,255,255,255,64,1,250,170,170,64,1,224,0,0,0,1,255,255,255,192,1,255,255,255,192,
  // 0xc77d  읽
  125,199,17,21,105,20,1,253,0,0,0,15,64,2,254,64,15,64,15,255,224,15,64,62,1,244,15,64,124,0,184,15,64,120,0,124,15,64,124,0,184,15,64,62,1,244,15,64,15,255,224,15,64,2,254,64,15,64,0,0,0,5,0,7,255,207,255,64,11,255,207,255,64,0,3,192,15,64,0,3,192,15,64,7,255,192,15,64,7,234,128,15,64,7,128,0,15,64,7,235,248,15,64,7,255,228,15,64,0,0,0,0,0,
  // 0xc785  입
  133,199,17,20,100,20,1,254,0,0,0,15,64,2,254,64,15,64,15,255,224,15,64,62,1,244,15,64,124,0,124,15,64,124,0,60,15,64,124,0,124,15,64,62,1,244,15,64,15,255,224,15,64,2,254,64,15,64,0,0,0,6,64,0,64,0,1,0,1,224,0,15,64,1,224,0,15,64,1,250,170,175,64,1,255,255,255,64,1,224,0,15,64,1,224,0,15,64,1,255,255,255,64,1,255,255,255,64,
  // 0xc790  자
  144,199,19,21,105,20,1,253,0,0,0,61,0,0,0,0,61,0,191,255,253,61,0,127,255,252,61,0,0,60,0,61,0,0,60,0,61,0,0,124,0,61,0,0,125,0,61,0,0,190,0,63,248,0,255,0,63,248,1,255,64,61,0,3,215,192,61,0,11,195,240,61,0,47,64,252,61,0,254,0,127,61,0,184,0,12,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,25,0,
  // 0xc791  작
  145,199,19,21,105,20,1,253,0,0,0,46,0,127,255,252,46,0,127,255,252,46,0,0,60,0,46,0,0,125,0,46,0,0,190,0,47,244,0,255,0,47,244,2,255,128,46,0,11,195,224,46,0,127,65,253,46,0,189,0,60,46,0,32,0,0,46,0,0,0,0,0,0,7,255,255,254,0,7,255,255,254,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,21,0,
  // 0xc798  잘
  152,199,19,20,100,20,1,254,0,0,0,46,0,127,255,252,46,0,127,255,252,46,0,0,124,0,46,0,0,189,0,47,244,0,255,0,47,244,2,255,128,46,0,11,195,244,46,0,191,65,254,46,0,189,0,44,46,0,16,0,0,4,0,2,170,170,169,0,3,255,255,254,0,0,0,0,46,0,0,0,0,46,0,3,255,255,254,0,3,234,170,169,0,3,192,0,0,0,3,250,170,170,0,3,255,255,255,64,
  // 0xc7a5  장
  165,199,19,22,110,20,1,253,0,0,0,4,0,0,0,0,46,0,127,255,252,46,0,127,255,252,46,0,0,60,0,46,0,0,124,0,46,0,0,189,0,47,244,0,255,0,47,244,1,255,128,46,0,7,215,224,46,0,31,194,253,46,0,255,0,125,46,0,120,0,4,46,0,0,0,0,21,0,0,27,255,128,0,0,255,255,248,0,3,224,0,125,0,7,192,0,46,0,3,192,0,46,0,3,244,1,189,0,0,255,255,244,0,0,10,186,64,0,
  // 0xc7ac  재
  172,199,17,21,105,20,1,253,0,0,3,131,192,0,0,7,195,192,191,255,215,195,192,191,255,215,195,192,0,240,7,195,192,0,240,7,195,192,0,244,7,195,192,0,244,7,195,192,1,248,7,255,192,2,252,7,255,192,3,253,7,195,192,7,159,7,195,192,15,15,135,195,192,63,7,247,195,192,252,1,247,195,192,116,0,71,195,192,0,0,7,195,192,0,0,7,195,192,0,0,7,195,192,0,0,2,67,192,0,0,0,2,128,
  // 0xc800  저
  0,200,17,21,105,20,1,253,0,0,0,11,128,0,0,0,11,128,127,255,254,11,128,127,255,253,11,128,0,60,0,11,128,0,61,0,11,128,0,61,0,11,128,0,126,11,255,128,0,191,11,255,128,0,255,0,11,128,1,251,128,11,128,3,211,208,11,128,11,194,240,11,128,47,64,253,11,128,254,0,63,11,128,120,0,9,11,128,16,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,6,64,
  // 0xc804  전
  4,200,17,21,105,20,1,254,0,0,0,1,0,0,0,0,11,128,63,255,253,11,128,63,255,253,11,128,0,61,0,11,128,0,61,0,11,128,0,126,7,255,128,0,191,7,255,128,0,255,128,11,128,3,227,224,11,128,31,193,253,11,128,191,0,126,11,128,56,0,8,11,128,0,0,0,11,128,0,80,0,11,128,1,240,0,11,64,1,240,0,0,0,1,240,0,0,0,1,240,0,0,0,1,255,255,255,192,1,255,255,255,192,
  // 0xc815  정
  21,200,17,21,105,20,1,253,0,0,0,11,128,63,255,253,11,128,63,255,253,11,128,0,61,0,11,128,0,61,0,11,128,0,126,3,255,128,0,255,3,255,128,1,251,192,11,128,7,211,240,11,128,47,193,253,11,128,191,0,125,11,128,56,0,8,11,128,0,0,0,5,0,0,7,255,208,0,0,127,255,253,0,1,244,0,47,0,2,224,0,11,128,2,224,0,15,64,0,249,0,111,0,0,127,255,252,0,0,6,170,128,0,
  // 0xc81c  제
  28,200,17,22,110,20,1,253,0,0,0,1,64,0,0,3,195,192,0,0,3,195,192,191,255,211,195,192,127,255,211,195,192,0,240,3,195,192,0,240,3,195,192,0,240,3,195,192,0,244,255,195,192,1,244,255,195,192,2,252,3,195,192,3,252,3,195,192,7,158,3,195,192,15,15,67,195,192,63,11,211,195,192,252,3,243,195,192,180,0,147,195,192,0,0,3,195,192,0,0,3,195,192,0,0,3,195,192,0,0,2,131,192,0,0,0,1,64,
  // 0xc8fd  죽
  253,200,18,20,100,20,1,253,15,255,255,255,64,15,255,255,255,64,0,3,252,0,0,0,11,254,0,0,0,127,79,208,0,47,252,2,255,128,47,128,0,47,128,0,0,0,0,0,191,255,255,255,240,255,255,255,255,240,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,15,255,255,255,0,11,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,0,0,0,9,0,
  // 0xc900  준
  0,201,18,19,95,20,1,254,15,255,255,255,64,15,255,255,255,64,0,2,252,0,0,0,7,253,0,0,0,31,159,64,0,1,254,11,244,0,47,244,1,255,192,30,64,0,27,64,0,0,0,0,0,191,255,255,255,240,255,255,255,255,240,0,0,244,0,0,0,0,244,0,0,11,64,244,0,0,11,128,244,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,
  // 0xc911  중
  17,201,18,20,100,20,1,253,15,255,255,255,64,15,255,255,255,64,0,3,252,0,0,0,11,254,0,0,0,127,79,208,0,47,252,2,255,128,47,144,0,47,128,0,0,0,0,0,191,255,255,255,240,255,255,255,255,240,0,0,240,0,0,0,0,240,0,0,0,26,250,64,0,1,255,255,244,0,7,228,1,189,0,11,128,0,47,0,11,128,0,47,0,7,228,1,189,0,1,255,255,244,0,0,26,170,64,0,
  // 0xc990  즐
  144,201,18,20,100,20,1,254,15,255,255,255,64,15,255,255,255,64,0,2,252,0,0,0,7,254,0,0,0,127,79,224,0,47,252,2,255,192,30,128,0,27,128,0,0,0,0,0,191,255,255,255,240,255,255,255,255,240,0,0,0,0,0,0,0,0,0,0,15,255,255,255,0,10,170,170,191,0,0,0,0,31,0,11,255,255,255,0,11,234,170,170,0,11,128,0,0,0,11,234,170,170,64,11,255,255,255,64,
  // 0xc9c0  지
  192,201,17,21,105,20,1,253,0,0,0,15,64,0,0,0,15,64,127,255,255,15,64,63,255,255,15,64,0,61,0,15,64,0,61,0,15,64,0,62,0,15,64,0,62,0,15,64,0,63,0,15,64,0,191,64,15,64,0,251,128,15,64,2,227,208,15,64,7,209,244,15,64,31,128,254,15,64,191,0,63,79,64,124,0,10,15,64,16,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,6,0,
  // 0xcc98  처
  152,204,17,22,110,20,1,253,0,0,0,1,0,0,60,0,11,128,0,60,0,11,128,0,60,0,11,128,127,255,253,11,128,127,255,253,11,128,0,60,0,11,128,0,61,0,11,128,0,61,0,11,128,0,126,11,255,128,0,191,11,255,128,0,255,64,11,128,2,231,192,11,128,7,211,224,11,128,15,129,248,11,128,127,0,127,11,128,124,0,29,11,128,16,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,6,64,
  // 0xcd08  초
  8,205,18,18,90,20,1,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,31,255,255,255,64,15,255,255,255,64,0,0,244,0,0,0,2,248,0,0,0,3,253,0,0,0,15,175,64,0,0,191,11,224,0,47,248,2,255,128,47,128,0,47,192,4,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xcd95  축
  149,205,18,21,105,20,1,253,0,0,240,0,0,0,0,240,0,0,15,255,255,255,64,15,255,255,255,0,0,2,248,0,0,0,7,254,0,0,0,127,95,208,0,47,252,2,255,192,30,128,0,27,128,0,0,0,0,0,191,255,255,255,240,255,255,255,255,240,0,0,240,0,0,0,0,240,0,0,11,255,255,254,0,15,255,255,255,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,0,0,0,31,0,0,0,0,5,0,
  // 0xcd9c  출
  156,205,18,21,105,20,1,254,0,0,80,0,0,0,0,240,0,0,10,170,254,170,0,15,255,255,255,64,0,2,248,0,0,0,11,254,0,0,1,191,159,228,0,63,253,7,255,192,47,144,0,43,128,0,0,0,0,0,255,255,255,255,240,170,170,254,170,160,0,0,240,0,0,10,170,250,170,0,15,255,255,255,0,0,0,0,31,0,6,170,170,175,0,11,255,255,255,0,11,128,0,0,0,11,234,170,170,64,11,255,255,255,64,
  // 0xcda4  춤
  164,205,18,20,100,20,1,254,0,0,240,0,0,0,0,240,0,0,15,255,255,255,64,15,255,255,255,0,0,2,248,0,0,0,11,254,0,0,1,191,79,228,0,63,248,1,255,192,25,0,0,6,64,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,0,0,240,0,0,0,0,240,0,0,11,255,255,255,0,11,255,255,255,0,11,64,0,31,0,11,64,0,31,0,11,255,255,255,0,11,255,255,255,0,
  // 0xcde8  취
  232,205,17,21,105,20,1,253,0,31,0,11,128,0,31,0,11,128,47,255,255,11,128,31,255,255,11,128,0,47,0,11,128,0,63,64,11,128,0,191,208,11,128,7,242,253,11,128,63,192,127,11,128,25,0,5,11,128,0,0,5,75,128,191,255,255,203,128,191,255,165,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,31,0,11,128,0,30,0,11,128,0,0,0,6,64,
  // 0xce58  치
  88,206,17,22,110,20,1,253,0,0,0,1,0,0,46,0,15,64,0,46,0,15,64,0,46,0,15,64,63,255,255,15,64,63,255,255,15,64,0,46,0,15,64,0,46,0,15,64,0,63,0,15,64,0,63,0,15,64,0,127,64,15,64,0,191,192,15,64,0,243,208,15,64,3,225,240,15,64,15,192,253,15,64,127,0,63,79,64,60,0,11,15,64,16,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,5,0,
  // 0xce68  침
  104,206,17,20,100,20,1,254,0,46,0,15,64,0,46,0,15,64,63,255,255,15,64,63,255,254,15,64,0,62,0,15,64,0,63,0,15,64,0,127,64,15,64,0,251,192,15,64,3,243,244,15,64,47,192,255,15,64,127,0,47,15,64,36,0,0,15,64,0,0,0,0,0,2,255,255,255,64,2,255,255,255,64,2,224,0,11,64,2,224,0,11,64,2,224,0,11,64,2,255,255,255,64,2,255,255,255,64,
  // 0xce74  카
  116,206,19,21,105,20,1,253,0,0,0,61,0,0,0,0,61,0,47,255,244,61,0,47,255,240,61,0,0,0,240,61,0,0,0,240,61,0,0,1,240,61,0,106,191,224,61,0,191,255,208,63,248,20,7,192,63,244,0,15,128,61,0,0,63,0,61,0,0,189,0,61,0,3,244,0,61,0,31,208,0,61,0,191,64,0,61,0,56,0,0,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,61,0,0,0,0,20,0,
  // 0xcf1c  켜
  28,207,17,21,105,20,1,253,0,0,0,11,128,0,0,0,11,128,63,255,240,11,128,47,255,240,11,128,0,0,240,11,128,0,1,255,255,128,0,2,255,255,128,191,255,208,11,128,191,255,192,11,128,16,11,128,11,128,0,31,0,11,128,0,62,47,255,128,0,252,47,255,128,3,240,0,11,128,47,192,0,11,128,190,0,0,11,128,52,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,5,64,
  // 0xd0d1  탑
  209,208,18,20,100,20,2,254,0,0,0,184,0,255,255,192,184,0,255,255,192,184,0,240,0,0,184,0,240,0,0,191,208,255,255,128,191,208,255,255,128,184,0,240,0,0,184,0,240,0,80,184,0,255,255,244,184,0,255,250,144,184,0,0,0,0,16,0,15,0,0,116,0,15,0,0,184,0,15,255,255,248,0,15,255,255,248,0,15,0,0,184,0,15,0,0,184,0,15,255,255,248,0,15,255,255,248,0,
  // 0xd130  터
  48,209,16,21,84,20,2,253,0,0,0,46,0,0,0,46,255,255,192,46,255,255,192,46,244,0,0,46,244,0,0,46,244,0,0,46,255,255,95,254,255,255,95,254,244,0,0,46,244,0,0,46,244,0,0,46,244,0,0,46,244,1,96,46,255,255,244,46,255,250,80,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,46,0,0,0,25,
  // 0xd14c  테
  76,209,16,22,88,20,2,253,0,0,0,5,0,0,15,15,0,0,15,15,255,252,15,15,255,252,15,15,240,0,15,15,240,0,15,15,240,0,15,15,240,2,255,15,255,246,255,15,255,240,15,15,240,0,15,15,240,0,15,15,240,0,15,15,240,5,15,15,255,255,15,15,255,233,15,15,0,0,15,15,0,0,15,15,0,0,15,15,0,0,10,15,0,0,0,10,
  // 0xd1a0  토
  160,209,18,17,85,20,1,0,11,255,255,255,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,253,0,11,255,255,253,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,240,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xd2b8  트
  184,210,18,17,85,20,1,0,11,255,255,255,0,11,255,255,255,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,254,0,11,255,255,253,0,11,128,0,0,0,11,128,0,0,0,11,128,0,0,0,11,255,255,255,0,11,255,255,255,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xd39c  펜
  156,211,18,20,100,20,1,254,0,0,2,131,192,0,0,3,211,192,191,255,227,211,192,191,255,211,211,192,15,15,3,211,192,15,15,3,211,192,15,15,63,211,192,15,15,63,211,192,15,15,3,211,192,15,15,19,211,192,255,255,243,211,192,191,234,83,211,192,0,0,3,211,192,0,160,3,211,192,0,240,2,131,192,0,240,0,0,0,0,240,0,0,0,0,240,0,0,0,0,255,255,255,208,0,255,255,255,224,
  // 0xd504  프
  4,213,18,16,80,20,1,0,31,255,255,255,128,31,255,255,255,64,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,0,124,2,224,0,31,255,255,255,64,31,255,255,255,64,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,240,255,255,255,255,240,
  // 0xd558  하
  88,213,19,21,105,20,1,253,0,124,0,46,0,0,124,0,46,0,0,124,0,46,0,255,255,254,46,0,255,255,254,46,0,0,0,0,46,0,0,186,0,46,0,11,255,208,46,0,31,66,240,47,248,46,0,184,47,248,60,0,120,46,0,60,0,120,46,0,61,0,184,46,0,31,65,240,46,0,11,255,208,46,0,1,254,64,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,25,0,
  // 0xd569  합
  105,213,19,21,105,20,1,254,0,20,0,0,0,0,60,0,46,0,0,60,0,46,0,255,255,255,46,0,191,255,254,46,0,0,0,0,46,0,2,255,64,47,244,15,255,240,47,244,46,0,184,46,0,61,0,120,46,0,47,65,244,46,0,11,255,224,46,0,0,170,0,46,0,0,0,0,0,0,3,192,0,46,0,3,192,0,46,0,3,255,255,254,0,3,255,255,254,0,3,192,0,46,0,3,255,255,254,0,3,255,255,254,0,
  // 0xd648  홈
  72,214,18,21,105,20,1,254,0,0,160,0,0,0,0,240,0,0,42,170,254,170,128,63,255,255,255,192,0,0,0,0,0,0,111,255,144,0,3,254,170,252,0,7,192,0,61,0,3,224,0,125,0,1,255,255,244,0,0,6,249,64,0,0,0,240,0,0,255,255,255,255,240,191,255,255,255,240,0,0,0,0,0,10,170,170,170,0,11,255,255,255,0,11,64,0,31,0,11,64,0,31,0,11,234,170,191,0,11,255,255,255,0,
  // 0xd654  화
  84,214,19,21,105,20,1,253,0,61,0,46,0,0,61,0,46,0,191,255,255,46,0,255,255,255,46,0,0,0,0,46,0,1,255,128,46,0,11,255,240,46,0,31,0,184,46,0,46,0,124,47,244,31,0,124,47,244,15,129,244,46,0,7,255,224,46,0,0,126,64,46,0,0,61,0,46,0,0,61,90,46,0,255,255,255,110,0,255,250,148,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,46,0,0,0,0,25,0,
  // 0xd788  히
  136,215,17,21,105,20,1,253,0,46,0,15,64,0,46,0,15,64,0,46,0,15,64,127,255,255,79,64,127,255,255,79,64,0,0,0,15,64,0,110,64,15,64,3,255,240,15,64,15,192,248,15,64,15,0,60,15,64,31,0,61,15,64,30,0,61,15,64,15,0,60,15,64,15,128,188,15,64,3,255,240,15,64,0,191,128,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,15,64,0,0,0,6,0,
};

#endif // HAS_GRAPHICAL_TFT
