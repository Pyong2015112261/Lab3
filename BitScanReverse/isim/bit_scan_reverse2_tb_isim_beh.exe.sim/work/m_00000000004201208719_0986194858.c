/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/pauly/Desktop/Lab3-1/bit_scan_reverse.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_4_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t24[8];
    char t53[8];
    char t61[8];
    char t84[8];
    char t111[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    int t118;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(4, ng0);
    t2 = (t0 + 2688);
    *((int *)t2) = 1;
    t3 = (t0 + 2400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(5, ng0);

LAB5:    xsi_set_current_line(6, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t16);
    t27 = (t25 | t26);
    *((unsigned int *)t24) = t27;
    t28 = (t6 + 4);
    t29 = (t16 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB6;

LAB7:
LAB8:    t52 = (t0 + 1448);
    t54 = (t0 + 1448);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t53, t56, 2, t57, 32, 1);
    t58 = (t53 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (!(t59));
    if (t60 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(7, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    t15 = (t0 + 1048U);
    t17 = *((char **)t15);
    memset(t53, 0, 8);
    t15 = (t53 + 4);
    t28 = (t17 + 4);
    t25 = *((unsigned int *)t17);
    t26 = (t25 >> 2);
    t27 = (t26 & 1);
    *((unsigned int *)t53) = t27;
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 2);
    t33 = (t32 & 1);
    *((unsigned int *)t15) = t33;
    memset(t24, 0, 8);
    t29 = (t53 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t53);
    t37 = (t36 & t35);
    t40 = (t37 & 1U);
    if (t40 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t29) == 0)
        goto LAB11;

LAB13:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;

LAB14:    t38 = (t24 + 4);
    t39 = (t53 + 4);
    t41 = *((unsigned int *)t53);
    t42 = (~(t41));
    *((unsigned int *)t24) = t42;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t39) != 0)
        goto LAB16;

LAB15:    t49 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t49 & 1U);
    t50 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t50 & 1U);
    t51 = *((unsigned int *)t16);
    t59 = *((unsigned int *)t24);
    t62 = (t51 & t59);
    *((unsigned int *)t61) = t62;
    t52 = (t16 + 4);
    t54 = (t24 + 4);
    t55 = (t61 + 4);
    t63 = *((unsigned int *)t52);
    t64 = *((unsigned int *)t54);
    t65 = (t63 | t64);
    *((unsigned int *)t55) = t65;
    t66 = *((unsigned int *)t55);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB17;

LAB18:
LAB19:    t85 = *((unsigned int *)t6);
    t86 = *((unsigned int *)t61);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t58 = (t6 + 4);
    t88 = (t61 + 4);
    t89 = (t84 + 4);
    t90 = *((unsigned int *)t58);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t89) = t92;
    t93 = *((unsigned int *)t89);
    t94 = (t93 != 0);
    if (t94 == 1)
        goto LAB20;

LAB21:
LAB22:    t110 = (t0 + 1448);
    t112 = (t0 + 1448);
    t113 = (t112 + 72U);
    t114 = *((char **)t113);
    t115 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t111, t114, 2, t115, 32, 1);
    t116 = (t111 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (!(t117));
    if (t118 == 1)
        goto LAB23;

LAB24:    goto LAB2;

LAB6:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t6 + 4);
    t39 = (t16 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (~(t40));
    t42 = *((unsigned int *)t6);
    t43 = (t42 & t41);
    t44 = *((unsigned int *)t39);
    t45 = (~(t44));
    t46 = *((unsigned int *)t16);
    t47 = (t46 & t45);
    t48 = (~(t43));
    t49 = (~(t47));
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t48);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    goto LAB8;

LAB9:    xsi_vlogvar_wait_assign_value(t52, t24, 0, *((unsigned int *)t53), 1, 0LL);
    goto LAB10;

LAB11:    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB16:    t44 = *((unsigned int *)t24);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t24) = (t44 | t45);
    t46 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t38) = (t46 | t48);
    goto LAB15;

LAB17:    t68 = *((unsigned int *)t61);
    t69 = *((unsigned int *)t55);
    *((unsigned int *)t61) = (t68 | t69);
    t56 = (t16 + 4);
    t57 = (t24 + 4);
    t70 = *((unsigned int *)t16);
    t71 = (~(t70));
    t72 = *((unsigned int *)t56);
    t73 = (~(t72));
    t74 = *((unsigned int *)t24);
    t75 = (~(t74));
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t43 = (t71 & t73);
    t47 = (t75 & t77);
    t78 = (~(t43));
    t79 = (~(t47));
    t80 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t80 & t78);
    t81 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t81 & t79);
    t82 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t82 & t78);
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t79);
    goto LAB19;

LAB20:    t95 = *((unsigned int *)t84);
    t96 = *((unsigned int *)t89);
    *((unsigned int *)t84) = (t95 | t96);
    t97 = (t6 + 4);
    t98 = (t61 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (~(t99));
    t101 = *((unsigned int *)t6);
    t60 = (t101 & t100);
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t61);
    t105 = (t104 & t103);
    t106 = (~(t60));
    t107 = (~(t105));
    t108 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t108 & t106);
    t109 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t109 & t107);
    goto LAB22;

LAB23:    xsi_vlogvar_wait_assign_value(t110, t84, 0, *((unsigned int *)t111), 1, 0LL);
    goto LAB24;

}


extern void work_m_00000000004201208719_0986194858_init()
{
	static char *pe[] = {(void *)Always_4_0};
	xsi_register_didat("work_m_00000000004201208719_0986194858", "isim/bit_scan_reverse2_tb_isim_beh.exe.sim/work/m_00000000004201208719_0986194858.didat");
	xsi_register_executes(pe);
}
