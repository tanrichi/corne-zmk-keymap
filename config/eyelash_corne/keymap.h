/*                                      42 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────┬──────────────────────────────────────╮ ╭──────────────────────────┬──────────────────────────────────────╮
  │  0   1   2   3   4   5 │        6        7   8   9  10  11  12│ │  LT5 LT4 LT3 LT2 LT1 LT0 │     LS0      RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 13  14  15  16  17  18 │   19  20  21    22  23  24 25  26  27│ │  LM5 LM4 LM3 LM2 LM1 LM0 │ LS1 LS2 LS3  RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 28  29  30  31  32  33 │       34        35  36  37 38  39  40│ │  LB5 LB4 LB3 LB2 LB1 LB0 │     LS4      RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───────────╮ 41  42  43 │                 44  45  46 ╭─────────╯ ╰───────────╮  LH2 LH1 LH0 │              RH0 RH1 RH2 ╭───────────╯
              ╰────────────┴────────────────────────────╯                       ╰──────────────┴──────────────────────────╯             */

#pragma once

#define LS0  6 // joystick
#define LS1  19
#define LS2  20
#define LS3  21
#define LS4  34

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  7  // right-top row
#define RT1  8
#define RT2  9
#define RT3  10
#define RT4  11
#define RT5  12

#define LM0 18  // left-middle row
#define LM1 17
#define LM2 16
#define LM3 15
#define LM4 14
#define LM5 13

#define RM0 22  // right-middle row
#define RM1 23
#define RM2 24
#define RM3 25
#define RM4 26
#define RM5 27

#define LB0 33  // left-bottom row
#define LB1 32
#define LB2 31
#define LB3 30
#define LB4 29
#define LB5 28

#define RB0 35  // right-bottom row
#define RB1 36
#define RB2 37
#define RB3 38
#define RB4 39
#define RB5 40

#define LH0 43  // left thumb keys
#define LH1 42
#define LH2 41

#define RH0 44  // right thumb keys
#define RH1 45
#define RH2 46
