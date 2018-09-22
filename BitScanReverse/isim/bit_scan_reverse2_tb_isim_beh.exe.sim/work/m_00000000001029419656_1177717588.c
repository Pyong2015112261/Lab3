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
static const char *ng0 = "bit_scan_reverse(4'b%b) = %d ";
static const char *ng1 = "C:/Users/pauly/Desktop/Lab3-1/bit_scan_reverse2_tb.v";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {10U, 0U};
static unsigned int ng9[] = {15U, 0U};

void Monitor_28_2(char *);
void Monitor_28_2(char *);


static void Monitor_28_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t3, 4, (char)118, t5, 2);

LAB1:    return;
}

static void Initial_15_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng1);

LAB4:    xsi_set_current_line(17, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(19, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(19, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(20, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(20, ng1);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(21, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(21, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(22, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(22, ng1);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(23, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(23, ng1);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(24, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(24, ng1);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(25, ng1);
    t2 = (t0 + 2176);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(25, ng1);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB1;

}

static void Initial_27_1(char *t0)
{

LAB0:    xsi_set_current_line(27, ng1);

LAB2:    xsi_set_current_line(28, ng1);
    Monitor_28_2(t0);

LAB1:    return;
}

void Monitor_28_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2672);
    t2 = (t0 + 3184);
    xsi_vlogfile_monitor((void *)Monitor_28_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000001029419656_1177717588_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Initial_27_1,(void *)Monitor_28_2};
	xsi_register_didat("work_m_00000000001029419656_1177717588", "isim/bit_scan_reverse2_tb_isim_beh.exe.sim/work/m_00000000001029419656_1177717588.didat");
	xsi_register_executes(pe);
}
