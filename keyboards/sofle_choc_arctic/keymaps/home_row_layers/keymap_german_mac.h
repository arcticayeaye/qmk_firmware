// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
custom mac de keycode with renamed macros
*******************************************************************************/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define MAC_DE_CIRC KC_GRV  // ^ (dead)
#define MAC_DE_1    KC_1    // 1
#define MAC_DE_2    KC_2    // 2
#define MAC_DE_3    KC_3    // 3
#define MAC_DE_4    KC_4    // 4
#define MAC_DE_5    KC_5    // 5
#define MAC_DE_6    KC_6    // 6
#define MAC_DE_7    KC_7    // 7
#define MAC_DE_8    KC_8    // 8
#define MAC_DE_9    KC_9    // 9
#define MAC_DE_0    KC_0    // 0
#define MAC_DE_SS   KC_MINS // ß
#define MAC_DE_ACUT KC_EQL  // ´ (dead)
#define MAC_DE_Q    KC_Q    // Q
#define MAC_DE_W    KC_W    // W
#define MAC_DE_E    KC_E    // E
#define MAC_DE_R    KC_R    // R
#define MAC_DE_T    KC_T    // T
#define MAC_DE_Z    KC_Y    // Z
#define MAC_DE_U    KC_U    // U
#define MAC_DE_I    KC_I    // I
#define MAC_DE_O    KC_O    // O
#define MAC_DE_P    KC_P    // P
#define MAC_DE_UDIA KC_LBRC // Ü
#define MAC_DE_PLUS KC_RBRC // +
#define MAC_DE_A    KC_A    // A
#define MAC_DE_S    KC_S    // S
#define MAC_DE_D    KC_D    // D
#define MAC_DE_F    KC_F    // F
#define MAC_DE_G    KC_G    // G
#define MAC_DE_H    KC_H    // H
#define MAC_DE_J    KC_J    // J
#define MAC_DE_K    KC_K    // K
#define MAC_DE_L    KC_L    // L
#define MAC_DE_ODIA KC_SCLN // Ö
#define MAC_DE_ADIA KC_QUOT // Ä
#define MAC_DE_HASH KC_NUHS // #
#define MAC_DE_LABK KC_NUBS // <
#define MAC_DE_Y    KC_Z    // Y
#define MAC_DE_X    KC_X    // X
#define MAC_DE_C    KC_C    // C
#define MAC_DE_V    KC_V    // V
#define MAC_DE_B    KC_B    // B
#define MAC_DE_N    KC_N    // N
#define MAC_DE_M    KC_M    // M
#define MAC_DE_COMM KC_COMM // ,
#define MAC_DE_DOT  KC_DOT  // .
#define MAC_DE_MINS KC_SLSH // -
#define MAC_DE_DEG  S(MAC_DE_CIRC) // °
#define MAC_DE_EXLM S(MAC_DE_1)    // !
#define MAC_DE_DQUO S(MAC_DE_2)    // "
#define MAC_DE_SECT S(MAC_DE_3)    // §
#define MAC_DE_DLR  S(MAC_DE_4)    // $
#define MAC_DE_PERC S(MAC_DE_5)    // %
#define MAC_DE_AMPR S(MAC_DE_6)    // &
#define MAC_DE_SLSH S(MAC_DE_7)    // /
#define MAC_DE_LPRN S(MAC_DE_8)    // (
#define MAC_DE_RPRN S(MAC_DE_9)    // )
#define MAC_DE_EQL  S(MAC_DE_0)    // =
#define MAC_DE_QUES S(MAC_DE_SS)   // ?
#define MAC_DE_GRV  S(MAC_DE_ACUT) // ` (dead)
#define MAC_DE_ASTR S(MAC_DE_PLUS) // *
#define MAC_DE_QUOT S(MAC_DE_HASH) // '
#define MAC_DE_RABK S(MAC_DE_LABK) // >
#define MAC_DE_SCLN S(MAC_DE_COMM) // ;
#define MAC_DE_COLN S(MAC_DE_DOT)  // :
#define MAC_DE_UNDS S(MAC_DE_MINS) // _
#define MAC_DE_DLQU A(MAC_DE_CIRC) // „
#define MAC_DE_IEXL A(MAC_DE_1)    // ¡
#define MAC_DE_LDQU A(MAC_DE_2)    // “
#define MAC_DE_PILC A(MAC_DE_3)    // ¶
#define MAC_DE_CENT A(MAC_DE_4)    // ¢
#define MAC_DE_LBRC A(MAC_DE_5)    // [
#define MAC_DE_RBRC A(MAC_DE_6)    // ]
#define MAC_DE_PIPE A(MAC_DE_7)    // |
#define MAC_DE_LCBR A(MAC_DE_8)    // {
#define MAC_DE_RCBR A(MAC_DE_9)    // }
#define MAC_DE_NEQL A(MAC_DE_0)    // ≠
#define MAC_DE_IQUE A(MAC_DE_SS)   // ¿
#define MAC_DE_LDAQ A(MAC_DE_Q)    // «
#define MAC_DE_NARS A(MAC_DE_W)    // ∑
#define MAC_DE_EURO A(MAC_DE_E)    // €
#define MAC_DE_REGD A(MAC_DE_R)    // ®
#define MAC_DE_DAGG A(MAC_DE_T)    // †
#define MAC_DE_OMEG A(MAC_DE_Z)    // Ω
#define MAC_DE_DIAE A(MAC_DE_U)    // ¨ (dead)
#define MAC_DE_FRSL A(MAC_DE_I)    // ⁄
#define MAC_DE_OSTR A(MAC_DE_O)    // Ø
#define MAC_DE_PI   A(MAC_DE_P)    // π
#define MAC_DE_BULT A(MAC_DE_UDIA) // •
#define MAC_DE_PLMN A(MAC_DE_PLUS) // ±
#define MAC_DE_ARNG A(MAC_DE_A)    // Å
#define MAC_DE_SLQU A(MAC_DE_S)    // ‚
#define MAC_DE_PDIF A(MAC_DE_D)    // ∂
#define MAC_DE_FHK  A(MAC_DE_F)    // ƒ
#define MAC_DE_COPY A(MAC_DE_G)    // ©
#define MAC_DE_FORD A(MAC_DE_H)    // ª
#define MAC_DE_MORD A(MAC_DE_J)    // º
#define MAC_DE_INCR A(MAC_DE_K)    // ∆
#define MAC_DE_AT   A(MAC_DE_L)    // @
#define MAC_DE_OE   A(MAC_DE_ODIA) // Œ
#define MAC_DE_AE   A(MAC_DE_ADIA) // Æ
#define MAC_DE_LSQU A(MAC_DE_HASH) // ‘
#define MAC_DE_LTEQ A(MAC_DE_LABK) // ≤
#define MAC_DE_YEN  A(MAC_DE_Y)    // ¥
#define MAC_DE_AEQL A(MAC_DE_X)    // ≈
#define MAC_DE_CCCE A(MAC_DE_C)    // Ç
#define MAC_DE_SQRT A(MAC_DE_V)    // √
#define MAC_DE_INTG A(MAC_DE_B)    // ∫
#define MAC_DE_TILD A(MAC_DE_N)    // ~ (dead)
#define MAC_DE_MICR A(MAC_DE_M)    // µ
#define MAC_DE_INFN A(MAC_DE_COMM) // ∞
#define MAC_DE_ELLP A(MAC_DE_DOT)  // …
#define MAC_DE_NDSH A(MAC_DE_MINS) // –
#define MAC_DE_NOT  S(A(MAC_DE_1))    // ¬
#define MAC_DE_RDQU S(A(MAC_DE_2))    // ”
#define MAC_DE_PND  S(A(MAC_DE_4))    // £
#define MAC_DE_FI   S(A(MAC_DE_5))    // ﬁ
#define MAC_DE_BSLS S(A(MAC_DE_7))    // (backslash)
#define MAC_DE_STIL S(A(MAC_DE_8))    // ˜
#define MAC_DE_MDDT S(A(MAC_DE_9))    // ·
#define MAC_DE_MACR S(A(MAC_DE_0))    // ¯
#define MAC_DE_DOTA S(A(MAC_DE_SS))   // ˙
#define MAC_DE_RNGA S(A(MAC_DE_ACUT)) // ˚
#define MAC_DE_RDAQ S(A(MAC_DE_Q))    // »
#define MAC_DE_PERM S(A(MAC_DE_E))    // ‰
#define MAC_DE_CEDL S(A(MAC_DE_R))    // ¸
#define MAC_DE_DACU S(A(MAC_DE_T))    // ˝
#define MAC_DE_CARN S(A(MAC_DE_Z))    // ˇ
#define MAC_DE_AACU S(A(MAC_DE_U))    // Á
#define MAC_DE_UCIR S(A(MAC_DE_I))    // Û
#define MAC_DE_NARP S(A(MAC_DE_P))    // ∏
#define MAC_DE_APPL S(A(MAC_DE_PLUS)) //  (Apple logo)
#define MAC_DE_IACU S(A(MAC_DE_S))    // Í
#define MAC_DE_TM   S(A(MAC_DE_D))    // ™
#define MAC_DE_IDIA S(A(MAC_DE_F))    // Ï
#define MAC_DE_IGRV S(A(MAC_DE_G))    // Ì
#define MAC_DE_OACU S(A(MAC_DE_H))    // Ó
#define MAC_DE_DLSI S(A(MAC_DE_J))    // ı
#define MAC_DE_FL   S(A(MAC_DE_L))    // ﬂ
#define MAC_DE_GTEQ S(A(MAC_DE_LABK)) // ≥
#define MAC_DE_DDAG S(A(MAC_DE_Y))    // ‡
#define MAC_DE_UGRV S(A(MAC_DE_X))    // Ù
#define MAC_DE_LOZN S(A(MAC_DE_V))    // ◊
#define MAC_DE_LSAQ S(A(MAC_DE_B))    // ‹
#define MAC_DE_RSAQ S(A(MAC_DE_N))    // ›
#define MAC_DE_BREV S(A(MAC_DE_M))    // ˘
#define MAC_DE_OGON S(A(MAC_DE_COMM)) // ˛
#define MAC_DE_DIV  S(A(MAC_DE_DOT))  // ÷
#define MAC_DE_MDSH S(A(MAC_DE_MINS)) // —

