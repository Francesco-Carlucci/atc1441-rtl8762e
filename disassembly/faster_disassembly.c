void sub_18c(void* arg1, int32_t arg2, void* arg3, void* arg4, void* arg5 @ r6, void* arg6 @ r7) __noreturn
{
    void* r5 = *(arg1 + 4);
    *(r5 + 0x78) = arg1 << 2;
    *(arg5 + 0x74) = r5;
    void* r5_1 = *(arg1 + 8);
    *(r5_1 + 0x20) = r5_1;  /* "23" */
    *(arg1 + 0x18) = arg1 << 2;  /* ".06_240523" */
    *(arg3 + 0x1a) = r5_1;  /* "6_240523" */
    *(arg4 + 0x14) = arg1 << 2;  /* "3.00.06_240523" */
    *(arg1 + 0x1e) = r5_1;  /* "0523" */
    *(arg6 + 0x1e) = arg1 << 2;  /* "0523" */
    void* arg_334 = arg1;
    
    while (true)
        /* nop */
}

int32_t sub_1fa8(int32_t arg1)
{
    int32_t result = arg1 << 0x1f;  /* "523" */
    *0x20100030 = *0x20100030 << 1 >> 1 | result;
    return result;
}

int32_t sub_1fbc()
{
    *0x2010003c = 0x719784(*0x104d6c) << 0x15 | 0x719784(*0x104d6e) << 0xa | 0x719784(*0x104d70);
        /* ".00.06_240523" */
    uint32_t r0_9 = *0x104d6c;
    uint32_t r1_1 = *0x104d70;
    
    if (r0_9 <= r1_1)
        r0_9 = r1_1;
    
    uint32_t r2_1 = *0x104d6e;
    
    if (r0_9 <= r2_1)
        r0_9 = r2_1;
    
    return 0x719794(r0_9);
}

uint32_t sub_2004(int32_t arg1, int32_t arg2)
{
    *0x104d68 = *0x2010000c;
    *0x20100034 = arg1;
    *0x20100018 = 0x10e;
    *0x2010000c = 4;
    uint32_t result = *0x2010000c << 0x18 >> 0x1f;  /* ".06_240523" */  /* "523" */
    
    if (result)
    {
        *0x20100018 = 0x80;
        result = *0x2010000c & 0xffffff7f;
        *0x2010000c = result;
    }
    
    if (arg2)
        return result;
    
    return sub_1fa8(1);
}

int32_t sub_2044(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    *0x104d68 = 0;
    *0x104d6c = 0;
    *0x104d70 = 0;
    var_18 = 2;
    
    if (0x7168a8(6, &var_18, 0x104d70))
        *0x104d70 = 0x271;
    
    var_18 = 2;
    
    if (0x7168a8(5, &var_18, 0x104d6e))
        *0x104d6e = 0x1388;
    
    var_18 = 2;
    
    if (0x7168a8(4, &var_18, 0x104d6c))
        *0x104d6c = 0x1388;
    
    sub_1fbc();
    return sub_1fa8(0);
}

void sub_20ac(int32_t arg1)
{
    if (arg1 != 1)
        return;
    
    /* unimplemented  {cpsid I} */
    
    while (true)
        /* nop */
}

uint32_t sub_20b8()
{
    *0x2013100c = (*0x2013100c >> 8 << 8) + 0x76;
    uint32_t r0 = *0x103af0;
    
    if (!r0 && 0xfff0ef00(r0))
        sub_371e();
    
    uint32_t result = *0x103af0;
    
    if (result != 2)
        return result;
    
    return 0x719660(result);
}

void sub_2124(int16_t arg1)
{
    uint32_t r1 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *0x12a1e2 |= arg1;
    
    if (!r1)
        /* unimplemented  {cpsie I} */
}

int32_t sub_213a()
{
    sub_2124(1);
    sub_21c0();
    *0x103af0 = 2;
    return 2;
}

void sub_214e(int32_t arg1)
{
    uint32_t r1 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *0x12a1e2 &= ~arg1;
    
    if (!r1)
        /* unimplemented  {cpsie I} */
}

uint32_t sub_2164()
{
    *0x20201040 = 4;
    sub_3650();
    sub_3658();
    uint32_t result = *0x12a1e2 << 0x1f;  /* "523" */
    
    if (result)
    {
        sub_21d6();
        0xfff0ef90(3);
        result = 1;
        sub_214e(1);
    }
    
    return result;
}

int32_t sub_218e(int32_t arg1)
{
    int32_t r1_2 = arg1 * 0x109 + *0x12a1dc;
    uint32_t r2_3 = r1_2 >> 9;
    *0x12a1dc = r1_2 - (r2_3 << 9);
    return 0x1e * arg1 + r2_3;  /* "0523" */
}

int32_t sub_21b2()
{
    /* tailcall */
    return sub_21c0();
}

int32_t sub_21c0()
{
    sub_1fa8(0);
    sub_21e0();
    *0x20100018 = 1;
    *0x2010000c = 1;
    return 1;
}

int32_t sub_21d6()
{
    int32_t result = *0x104d68;
    *0x2010000c = result;
    return result;
}

int32_t sub_21e0()
{
    int32_t r6 = sub_218e(*0x20100038) + *0x12f892;
    int32_t r0_3 = 0xfff01b00(r6, 0x271);
    uint32_t r1_5 = (0x270 - (r6 - r0_3 * 0x271)) << 0x10 >> 0x10;  /* "R02_3.00.06_240523" */
    
    if (!r1_5)
    {
        r1_5 = 0x270;
        *0x12f892 = 1;
        r0_3 += 1;
    }
    else
        *0x12f892 = 0;
    
    *0x20100044 = r0_3;
    *0x20100040 = r1_5;
    *0x20201040 = 8;
    int32_t result = (*0x20100030 & 0xfffffff7) | 8;
    *0x20100030 = result;
    return result;
}

int32_t sub_226e(int32_t arg1)
{
    int32_t result = arg1 << 0x10;  /* "R02_3.00.06_240523" */
    *0x20100080 = (*0x20100080 & 0xff00ffff) | result;
    return result;
}

int32_t j_sub_278c(int32_t arg1, int32_t arg2, int32_t arg3, char* arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    void* arg4;
    int32_t arg5;
    int32_t arg6;
    /* tailcall */
    return sub_278c(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

int32_t sub_228c(int32_t arg1, int32_t arg2)
{
    if (!arg2)
        return 0x718ef0(0x104f14, 0, arg1);
    
    if (arg2 == 1)
        return 0x718ef6(0x104f14, 0);
    
    if (arg2 == 2)
        *0x104f2c = 1;
    else if (arg2 == 3)
        *0x104f2c = 0;
    
    return 0x104f2c;
}

void* sub_22c0(void* arg1, int32_t arg2)
{
    int32_t r2_1 = (*(arg1 + 4))[arg2 * 3];
    void* result = 0x58 * arg2 + *(arg1 + 0xc);
    uint32_t r1_2;
    
    if (r2_1 <= 0xfff)
        r1_2 = r2_1 << 0x14 >> 0x14 | *(result + 0x1c) >> 0xc << 0xc;
            /* "3.00.06_240523" */  /* "240523" */
    else
        r1_2 = *(result + 0x1c) | 0xfff;  /* "240523" */
    
    *(result + 0x1c) = r1_2;  /* "240523" */
    return result;
}

uint32_t sub_22ee(void* arg1)
{
    uint32_t r5 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    uint32_t result = *(arg1 + 9);
    
    if (!result)
    {
        result = *(arg1 + 0xc);
        
        if (!*(result + 0x2e8))
        {
            result = *(result + 0x308);
            
            if (!result)
            {
                sub_2f46(0x80);
                result = sub_228c(arg1, 3);
            }
        }
    }
    
    if (!r5)
        /* unimplemented  {cpsie I} */
    
    return result;
}

int32_t sub_232e(void* arg1, int32_t* arg2, char* arg3)
{
    int32_t* var_1c = arg2;
    void* var_20 = arg1;
    uint32_t r1 = *(arg1 + 8);
    uint32_t r4 = 0;
    
    while (true)
    {
        if (r1 <= r4)
        {
            r4 = 0xff;
            break;
        }
        
        uint32_t r2 = 1 << r4;
        uint32_t r7_1 = __mrs(primask);
        /* unimplemented  {cpsid I} */
        uint32_t r3_1 = *(arg1 + 9);
        int32_t r1_2;
        
        r1_2 = r3_1 & r2 ? 0 : 1;
        
        if (r1_2)
            *(arg1 + 9) = r3_1 | r2;
        
        if (!r7_1)
            /* unimplemented  {cpsie I} */
        
        if (r1_2)
            break;
        
        r4 = r4 + 1;
    }
    
    if (r4 == 0xff)
        return 5;
    
    int32_t r0_1 = 0xc * r4;
    *(*(arg1 + 4) + r0_1 + 4) = *arg2;
    *(*(arg1 + 4) + r0_1 + 8) = arg2[1];
    (*(arg1 + 4))[r4 * 3] = arg2[4];
    sub_2f46(0x40);
    sub_228c(arg1, 2);
    sub_22c0(arg1, r4);
    int32_t r0_4 = arg2[5];
    int32_t r2_4 = r0_4 << 0x11;  /* "02_3.00.06_240523" */
    uint32_t r1_8 = r2_4 >> 0x1d;  /* "40523" */
    int32_t var_28;
    uint32_t var_24;
    
    if (r1_8 == 2)
    {
    label_23cc:
        var_24 = r1_8;
        var_28 = 0;
    }
    else if (r1_8 == 1)
    {
        var_24 = 0;
        var_28 = 2;
    }
    else
    {
        r1_8 = r2_4 >> 0x1d;  /* "40523" */
        
        if (!r1_8)
            goto label_23cc;
    }
    
    int32_t* r1_10 = *(arg1 + 0xc);
    uint32_t r2_11 = r0_4 << 0x12 >> 0x1e << 0x14 | r0_4 << 0x17 >> 0x1d << 0xe
        | r0_4 << 0x14 >> 0x1d << 0xb | var_24 << 0x1e >> 0x15 | var_28 << 0x1e >> 0x17;  /* "
        2_3.00.06_240523" */  /* "3.00.06_240523" */  /* ".00.06_240523" */  /* "0.06_240523" */  /* "
        40523" */  /* "0523" */
    void* r3_22 = r4 * 0x58;
    void* r0_8 = r3_22 + r1_10;
    *(r0_8 + 0x18) = r2_11 | r0_4 << 0x1d >> 0x19 | r0_4 << 0x1a >> 0x1d << 1 | r0_4 << 8 >> 0x1f;
        /* ".06_240523" */  /* "06_240523" */  /* "6_240523" */  /* "40523" */  /* "523" */
    *(r0_8 + 0x40) = 0;
    int32_t r2_15 = arg2[5];
    *(r0_8 + 0x44) = (r2_15 << 9 >> 0x1c << 0xb | r2_15 << 0xd >> 0x1c << 7) + 2;  /* "240523" */
    *(r1_10 + r3_22) = arg2[2];
    *(r0_8 + 8) = arg2[3];
    int32_t r0_9 = 1 << r4;
    r1_10[0xe8] = r0_9 << 0x1a >> 0x1a | r0_9 << 0x1a >> 0x12;
        /* "2_3.00.06_240523" */  /* "6_240523" */
    
    if (arg3)
        *arg3 = r4;
    
    return 0;
}

int32_t sub_2458(void* arg1, int32_t arg2)
{
    int32_t var_20_1 = arg2;
    void* r5 = *(arg1 + 0xc);
    
    if (*(arg1 + 8) <= arg2)
        return 1;
    
    int32_t r4 = 1 << arg2;
    int32_t r0_3;
    
    r0_3 = !r4 ? 1 : 0;
    
    if (*(r5 + 0x3a0) & r0_3)
        return 3;
    
    void* r0_6 = arg2 * 0x58 + r5;
    
    if (*(r0_6 + 0x18) << 0x1f)  /* ".06_240523" */  /* "523" */
        return 4;
    
    while (true)
    {
        if (*(r5 + 0x2c0) & r4)
        {
            *(r5 + 0x338) = r4;
            int32_t* r1_4 = *(arg1 + 4);
            int32_t r3_3 = r1_4[arg2 * 3];
            uint32_t r0_17 = *(r0_6 + 0x1c) << 0x14 >> 0x14;  /* "3.00.06_240523" */  /* "240523" */
            r1_4[arg2 * 3] = r3_3 - r0_17;
            
            if (r3_3 == r0_17)
                break;
            
            sub_22c0(arg1, arg2);
            *(r5 + 0x3a0) = r4 << 0x1a >> 0x1a | r4 << 0x1a >> 0x12;
                /* "2_3.00.06_240523" */  /* "6_240523" */
        }
    }
    
    sub_24ee(arg1, arg2);
    sub_22ee(arg1);
    return 0;
}

void sub_24ee(void* arg1, int32_t arg2)
{
    uint32_t r1 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *(arg1 + 9) &= ~(1 << arg2);
    
    if (!r1)
        /* unimplemented  {cpsie I} */
}

int32_t sub_2514(int32_t* arg1, char* arg2)
{
    return sub_232e(0x103a94, arg1, arg2);
}

int32_t sub_2522(int32_t arg1)
{
    return sub_2458(0x103a94, arg1);
}

void* sub_2534(void* arg1, int32_t arg2)
{
    uint32_t r2 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    void* result = *(arg1 + 0xc);
    *(result + 4) = arg2;
    
    if (!r2)
        /* unimplemented  {cpsie I} */
    
    return result;
}

int32_t sub_2546(void* arg1)
{
    return *(*(arg1 + 0xc) + 4);
}

int32_t sub_254c(void* arg1)
{
    return **(arg1 + 0xc);
}

int32_t* sub_2552(void* arg1, int32_t arg2)
{
    uint32_t r2 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    int32_t* result = *(arg1 + 0xc);
    *result = arg2;
    
    if (!r2)
        /* unimplemented  {cpsie I} */
    
    return result;
}

int32_t sub_2564() __pure
{
    return;
}

int32_t sub_2566(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = 0xfff01c8e(0x20132000, arg2, arg3, arg3);
    data_3c = 3;
    return sub_3a22(0x19, 0xc);  /* "06_240523" */
}

int32_t sub_25b2(void* arg1, int32_t arg2)
{
    void* var_20 = arg1 + 0x60;
    int32_t r2;
    int32_t var_24 = r2;
    int32_t var_18;
    int32_t var_18_1 = ((((((((var_18 >> 3 << 3 & 0xfffffe07) + 0x40) & 0xfffff1ff) + 0x200)
        & 0xffff8fff) + 0x1000) & 0xfff87fff) | 0x8000) & 0xff07ffff;
    int32_t r3;
    int32_t var_1c = r3;
    char var_30;
    void var_2c;
    sub_2514(&var_2c, &var_30);
    *(arg1 + 0x10) = arg2;  /* "R02_3.00.06_240523" */
    sub_2522(var_30);
    
    while (*(arg1 + 0x28) << 0x1d >= 0)  /* "40523" */
        /* nop */
    
    int32_t i;
    
    do
        i = *(arg1 + 0x28) << 0x1f;  /* "523" */
     while (i);
    
    *(arg1 + 8) = 0;
    *(arg1 + 0x10) = 0;  /* "R02_3.00.06_240523" */
    return i;
}

int32_t sub_2624(void* arg1)
{
    sub_3640(0x2000);
    sub_2f46(0x400);
    sub_2566(arg1, *(arg1 + 9), 0);
    
    if (*(arg1 + 8) >> 6 == 2)
    {
        sub_2566(arg1, *(arg1 + 0xd), 4);
        sub_2566(arg1, *(arg1 + 0xc), 3);
    }
    
    sub_2566(arg1, *(arg1 + 0xa), 1);
    sub_2566(arg1, *(arg1 + 0xb), 2);
    uint32_t i = 0;
    uint32_t r6 = 5;
    
    do
    {
        sub_2566(arg1, *(arg1 + i + 0xe), r6);
        i = i + 1;
        r6 = r6 + 1;
    } while (!i);
    
    *(*(arg1 + 0x10) + 8) = 0;  /* "R02_3.00.06_240523" */
    *(*(arg1 + 0x10) + 0x14) = *(arg1 + 4);  /* "R02_3.00.06_240523" */  /* "3.00.06_240523" */
    *(*(arg1 + 0x10) + 0xf0) = *(arg1 + 6);  /* "R02_3.00.06_240523" */
    sub_2f46(0x800);
    return 0;
}

int32_t sub_26ba(void* arg1)
{
    if (sub_359a(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x800);
    return 0;
}

int32_t sub_26d6(void* arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r2;
    int32_t var_1c = r2;
    void* var_24 = arg1;
    int32_t* r4 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    sub_2d2c(r4, 0x40);
    sub_25b2(r4, arg2);
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_271e(void* arg1, int32_t arg2)
{
    int32_t r2;
    int32_t var_1c = r2;
    int32_t var_20 = arg2;
    void* var_24 = arg1;
    int32_t* r4 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    void* var_2c = arg1 + 0x14;  /* "3.00.06_240523" */
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    *(&data_f4 + r4) = 0x20a;
    *r4 = 0x470100;
    r4[0x14] = 0x3c;  /* "3.00.06_240523" */
    r4[0x13] = 0;  /* "_3.00.06_240523" */
    r4[0x13] = 2;  /* "_3.00.06_240523" */
    r4[4] = arg2;
    r4[2] = 1;
    void* var_38 = &r4[0x18];  /* ".06_240523" */
    int32_t r3;
    int32_t var_34 = r3;
    int32_t var_30;
    /* tailcall */
    return sub_278c(
        (((((var_30 >> 3 << 3 & 0xfffffe07) + 0x40) & 0xfffff1ff) + 0x200) & 0xffff8fff) + 0x1000, 
        0x8000, 0x78000, r4, 0, arg2);
}

int32_t sub_278c(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ r4, int32_t arg5 @ r5, int32_t arg6 @ r6, char* arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    int32_t arg_18 = ((arg1 & ~arg3) | arg2) & ~(arg3 << 4) & 0xff7fffff;
    int32_t r7;
    int32_t arg_c = r7;
    char arg_0;
    void arg_4;
    sub_2514(&arg_4, &arg_0);
    *(arg4 + 0x10) = arg6;  /* "R02_3.00.06_240523" */
    sub_2522(arg_0);
    
    while (*(arg4 + 0x28) << 0x1d >= 0)  /* "40523" */
        /* nop */
    
    while (*(arg4 + 0x28) << 0x1f)  /* "523" */
        /* nop */
    
    *(arg4 + 8) = arg5;
    *(arg4 + 0x10) = arg5;  /* "R02_3.00.06_240523" */
    sub_2f46(0x800);
    sub_357c(arg7);
    return 0;
}

int32_t sub_27d8(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_20 = arg2;
    void* var_24 = arg1;
    int32_t* r4 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    *(&data_f4 + r4) = 0x219;
    *r4 = 0x5f0100;
    r4[0x14] = 0x3c;  /* "3.00.06_240523" */
    r4[0x13] = 0;  /* "_3.00.06_240523" */
    r4[0x13] = 2;  /* "_3.00.06_240523" */
    r4[4] = arg2;
    r4[2] = 1;
    r4[0x18] = arg3;  /* ".06_240523" */
    r4[0x18] = arg4;  /* ".06_240523" */
    int32_t var_3c_1 = arg5;
    void* var_38_1 = &r4[0x18];  /* ".06_240523" */
    uint32_t var_34_1 = arg6 >> 2;
    int32_t var_30;
    int32_t var_30_1 = ((((((((((((var_30 >> 3 << 3) + 2) & 0xffffffc7) + 0x10) & 0xfffffe3f)
        + 0x80) & 0xfffff1ff) + 0x400) & 0xffff8fff) + 0x1000) & 0xfff87fff) | 0x8000) & 0xff07ffff;
        /* "R02_3.00.06_240523" */
    char var_48;
    void var_44;
    sub_2514(&var_44, &var_48);
    r4[4] = arg2;
    sub_2522(var_48);
    
    while (r4[0xa] << 0x1d >= 0)  /* "40523" */
        /* nop */
    
    while (r4[0xa] << 0x1f)  /* "523" */
        /* nop */
    
    r4[2] = 0;
    r4[4] = 0;
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_289a(void* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    int32_t var_18_1 = arg4;
    int32_t* r4 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    *r4 = 0x70100;
    r4[2] = 1;
    
    for (uint32_t i = 0; i < arg4; i = i + 1)
        r4[0x18] = *(arg3 + i);  /* ".06_240523" */
    
    r4[4] = arg2;
    
    while (r4[0xa] << 0x1d >= 0)  /* "40523" */
        /* nop */
    
    int32_t i_1;
    
    do
        i_1 = r4[0xa] << 0x1f;  /* "523" */
     while (i_1);
    
    r4[2] = i_1;
    r4[4] = i_1;
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_28f8(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    void* var_24 = arg1;
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    int32_t* r4_1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    sub_2f46(0x400);
    sub_2d2c(r4_1, 0x40);
    r4_1[0x18] = arg3;  /* ".06_240523" */
    r4_1[0x18] = arg4 << 8 >> 0x18;  /* ".06_240523" */
    r4_1[0x18] = arg4 << 0x10 >> 0x18;  /* "R02_3.00.06_240523" */  /* ".06_240523" */
    r4_1[0x18] = arg4;  /* ".06_240523" */
    sub_25b2(r4_1, arg2);
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_2968(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    void* var_24 = arg1;
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    int32_t* r4_1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    sub_2f46(0x400);
    sub_2d2c(r4_1, 0x40);
    r4_1[0x18] = arg3;  /* ".06_240523" */
    r4_1[0x18] = arg4 >> 0x18;  /* ".06_240523" */
    r4_1[0x18] = arg4 << 8 >> 0x18;  /* ".06_240523" */
    r4_1[0x18] = arg4 << 0x10 >> 0x18;  /* "R02_3.00.06_240523" */  /* ".06_240523" */
    r4_1[0x18] = arg4;  /* ".06_240523" */
    sub_25b2(r4_1, arg2);
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_29c6(void* arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_18 = arg4;
    void* var_1c = arg3;
    void* var_24 = arg1;
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    int32_t* r4_1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    sub_2f46(0x400);
    *r4_1 = 0x70300;
    r4_1[1] = arg6 - 1;
    r4_1[0x15] = 7;  /* ".00.06_240523" */
    r4_1[0x13] = 0;  /* "_3.00.06_240523" */
    r4_1[0x13] = 1;  /* "_3.00.06_240523" */
    r4_1[2] = 1;
    
    for (uint32_t i = 0; i < arg4; i = i + 1)
        r4_1[0x18] = *(arg3 + i);  /* ".06_240523" */
    
    void* var_3c_1 = &r4_1[0x18];  /* ".06_240523" */
    int32_t var_38_1 = arg5;
    int32_t var_34_1 = arg6;
    int32_t var_30;
    int32_t var_30_1 = ((((((((var_30 >> 3 << 3 & 0xfffffe07) + 0x80) & 0xfffff1ff) + 0x400)
        & 0xffff8fff) + 0x2000) & 0xfff87fff) | 0x8000) & 0xff07ffff;
    char var_48;
    void var_44;
    sub_2514(&var_44, &var_48);
    r4_1[4] = arg2;
    sub_2522(var_48);
    r4_1[2] = 0;
    r4_1[4] = 0;
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_2a84(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    int32_t var_18 = arg4;
    int32_t* var_1c = arg3;
    void* var_24 = arg1;
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    uint32_t r0_2 = *(arg1 + 8);
    int32_t* r4_1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    int32_t r1_4;
    
    if (!(r0_2 << 0x1e))  /* "0523" */
        r1_4 = (r0_2 << 0x1a >> 0x1c) - 8;  /* "6_240523" */  /* "240523" */
    else if (r0_2 >> 6 == 2)
        r1_4 = (r0_2 << 0x1a >> 0x1c) - 2;  /* "6_240523" */  /* "240523" */
    else
        r1_4 = (r0_2 << 0x1a >> 0x1c) - 4;  /* "6_240523" */  /* "240523" */
    
    r4_1[0x3d] = r1_4 << 0x1c >> 0x11 | r0_2 << 0x1e >> 0x1e | 0x220;
        /* "02_3.00.06_240523" */  /* "240523" */  /* "0523" */
    *r4_1 = (*(arg1 + 8) >> 6 << 0x15) + 0x1f0200;  /* ".00.06_240523" */
    r4_1[1] = arg4 - 1;
    r4_1[0x13] = 0;  /* "_3.00.06_240523" */
    r4_1[2] = 1;
    r4_1[0x18] = *(arg1 + 7);  /* ".06_240523" */
    r4_1[0x18] = arg5;  /* ".06_240523" */
    
    if (arg4 <= 0x40)
    {
        r4_1[4] = arg2;
        
        while (r4_1[0xa] << 0x1d >= 0)  /* "40523" */
            /* nop */
        
        int32_t i;
        
        do
            i = r4_1[0xa] << 0x1f;  /* "523" */
         while (i);
        
        for (; i < arg4; i = i + 1)
            arg3[i] = r4_1[0x3b];
    }
    else
    {
        r4_1[0x15] = 7;  /* ".00.06_240523" */
        r4_1[0x13] = 1;  /* "_3.00.06_240523" */
        void* var_3c_1 = &r4_1[0x3b];
        int32_t var_30;
        int32_t var_30_1 = ((((((((((((var_30 & 0xfffffff8) + 2) & 0xffffffc7) + 0x10) & 0xfffffe3f)
            + 0x80) & 0xfffff1ff) + 0x400) & 0xffff8fff) + 0x2000) & 0xfff87fff) | 0x8000)
            & 0xff07ffff;  /* "R02_3.00.06_240523" */
        int32_t* var_38_1 = arg3;
        int32_t var_34_1 = arg4;
        char var_48;
        void var_44;
        sub_2514(&var_44, &var_48);
        r4_1[4] = arg2;
        sub_2522(var_48);
    }
    
    r4_1[2] = 0;
    r4_1[4] = 0;
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_2b9c(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    int32_t var_18 = arg4;
    int32_t* var_1c = arg3;
    void* var_24 = arg1;
    
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    uint32_t r0_2 = *(arg1 + 8);
    int32_t* r4_1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    r4_1[0x3d] = r0_2 << 0x1a >> 0x1c << 0xb | r0_2 << 0x1e >> 0x1e | 0x220;
        /* "6_240523" */  /* "240523" */  /* "0523" */
    *r4_1 = (*(arg1 + 8) >> 6 << 0x15) + 0x1f0200;  /* ".00.06_240523" */
    r4_1[1] = arg4 - 1;
    r4_1[0x13] = 0;  /* "_3.00.06_240523" */
    r4_1[2] = 1;
    uint32_t r0_10 = *(arg1 + 7);
    int32_t r0_11;
    
    if (r0_10 == 0x3b)
        r0_11 = 0x3c;
    else if (r0_10 == 0x6b)
        r0_11 = 0x6c;
    else
        r0_11 = 0xc;
    
    r4_1[0x18] = r0_11;  /* ".06_240523" */
    r4_1[0x18] = arg5;  /* ".06_240523" */
    
    if (arg4 <= 0x40)
    {
        r4_1[4] = arg2;
        
        while (r4_1[0xa] << 0x1d >= 0)  /* "40523" */
            /* nop */
        
        int32_t i;
        
        do
            i = r4_1[0xa] << 0x1f;  /* "523" */
         while (i);
        
        for (; i < arg4; i = i + 1)
            arg3[i] = r4_1[0x3b];
    }
    else
    {
        r4_1[0x15] = 7;  /* ".00.06_240523" */
        r4_1[0x13] = 1;  /* "_3.00.06_240523" */
        void* var_3c_1 = &r4_1[0x3b];
        int32_t var_30;
        int32_t var_30_1 = ((((((((((((var_30 >> 3 << 3) + 2) & 0xffffffc7) + 0x10) & 0xfffffe3f)
            + 0x80) & 0xfffff1ff) + 0x400) & 0xffff8fff) + 0x2000) & 0xfff87fff) | 0x8000)
            & 0xff07ffff;  /* "R02_3.00.06_240523" */
        int32_t* var_38_1 = arg3;
        int32_t var_34_1 = arg4;
        char var_48;
        void var_44;
        sub_2514(&var_44, &var_48);
        r4_1[4] = arg2;
        sub_2522(var_48);
    }
    
    r4_1[2] = 0;
    r4_1[4] = 0;
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

int32_t sub_2caa(void* arg1, int32_t arg2, int32_t arg3)
{
    if (!sub_3560(arg1 + 0x14))  /* "3.00.06_240523" */
        return 2;
    
    sub_2f46(0x400);
    uint32_t r0_2 = *(arg1 + 8);
    int32_t* r3 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    *(&data_f4 + r3) = r0_2 << 0x1a >> 0x1c << 0xb | r0_2 << 0x1e >> 0x1e | 0x218;
        /* "6_240523" */  /* "240523" */  /* "0523" */
    *r3 = (*(arg1 + 8) >> 6 << 0x15) + 0x1f0200;  /* ".00.06_240523" */
    r3[1] = (arg3 >> 2) - 1;
    r3[4] = arg2;
    r3[2] = 1;
    return 0;
}

int32_t sub_2cfe(void* arg1)
{
    return *(arg1 + 0x10) + 0x60;  /* "R02_3.00.06_240523" */
}

uint32_t sub_2d04(void* arg1)
{
    return *(arg1 + 7);
}

int32_t sub_2d08(void* arg1)
{
    void* r1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    int32_t i;
    
    do
        i = *(r1 + 0x28) << 0x1f;  /* "523" */
     while (i);
    
    *(r1 + 8) = i;
    *(r1 + 0x10) = i;  /* "R02_3.00.06_240523" */
    sub_2f46(0x800);
    sub_357c(arg1 + 0x14);  /* "3.00.06_240523" */
    return 0;
}

void sub_2d2c(int32_t* arg1, int32_t arg2)
{
    *arg1 = 0x70100;
    arg1[0x14] = arg2 - 4;  /* "3.00.06_240523" */
    arg1[0x13] = 0;  /* "_3.00.06_240523" */
    arg1[0x13] = 2;  /* "_3.00.06_240523" */
    arg1[2] = 1;
}

int32_t sub_2d50(char* arg1)
{
    *0x103ac8 = 2;
    *0x103aca = 1;
    *0x103acb = *arg1;
    *0x103acc = arg1[1];
    *0x103acd = 0x19;  /* "06_240523" */
    *0x103ace = 0x1a;  /* "6_240523" */
    *0x103acf = 0x1b;  /* "_240523" */
    *0x103ad0 = 0x1c;  /* "240523" */
    *0x103ad1 = 0x1d;  /* "40523" */
    *0x103ad2 = 0x18;  /* ".06_240523" */
    return 0x18;  /* ".06_240523" */
}

int32_t sub_2d7e()
{
    return sub_2624(0x103ac4);
}

int32_t sub_2d88()
{
    return sub_26d6(0x103ac4, 1);
}

int32_t sub_2d98()
{
    return sub_271e(0x103ac4, 1);
}

int32_t sub_2da8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c_1 = arg4;
    int32_t var_10_1 = arg3;
    return sub_27d8(0x103ac4, 1, arg1, arg2, arg3, arg4);
}

int32_t sub_2dbc(void* arg1, int32_t arg2)
{
    return sub_289a(0x103ac4, 1, arg1, arg2);
}

int32_t sub_2dcc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c_1 = arg4;
    int32_t var_10_1 = arg3;
    return sub_28f8(0x103ac4, 1, arg1, arg2, arg3, arg4);
}

int32_t sub_2de0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c_1 = arg4;
    int32_t var_10_1 = arg3;
    return sub_2968(0x103ac4, 1, arg1, arg2, arg3, arg4);
}

int32_t sub_2df4(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c_1 = arg4;
    int32_t var_10_1 = arg3;
    return sub_29c6(0x103ac4, 1, arg1, arg2, arg3, arg4);
}

int32_t sub_2e08(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_8_1 = r3;
    return sub_2a84(0x103ac4, 1, arg1, arg2, arg3);
}

int32_t sub_2e1a(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_8_1 = r3;
    return sub_2b9c(0x103ac4, 1, arg1, arg2, arg3);
}

int32_t sub_2e2c(int32_t arg1)
{
    return sub_2caa(0x103ac4, 1, arg1);
}

uint32_t sub_2e3a()
{
    return sub_2d04(0x103ac4);
}

int32_t sub_2e44()
{
    return sub_2cfe(0x103ac4);
}

int32_t sub_2e4e()
{
    return sub_2d08(0x103ac4);
}

int32_t sub_2e5c()
{
    *0xe000ed94 = 0;
    return 0;
}

int32_t sub_2e64()
{
    sub_3160();
    *0xe000ed94 = 0;
    return 0;
}

int32_t sub_2e72()
{
    return sub_3132(0);
}

int32_t sub_2e7c()
{
    *0xe000ed98 = 7;
    *0xe000ed9c = 0x800000;
    *0xe000eda0 = 0x1002002d;
    *0xe000ed94 = 5;
    __dsb_SY();
    return 0xe000ed80;
}

int32_t sub_2e96()
{
    sub_2e7c();
    return sub_3192();
}

int32_t sub_2ea2()
{
    sub_2e96();
    sub_2d50(0x12dabe);
    sub_2d7e();
    sub_3132(0);
    return sub_2e64();
}

int32_t sub_2ecc()
{
    uint32_t r2 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *0x20132010 = 0xaaaaaaaa;
    *0x20132014 = 0xaaaaaaaa;
    *0x20132014 |= 0x10;  /* "R02_3.00.06_240523" */
    *0x20131000 = (*0x20131000 & 0xffffffe3) + 4;
    *0x20131004 = *0x20131004 >> 4 << 4 | 0x640;
    *0x20131000 |= 1;
    *0x20149010 = 0xaaaaaaaa;
    *0x20149014 = 0xaaaaaaaa;
    
    if (!r2)
        /* unimplemented  {cpsie I} */
    
    return 0x20149000;
}

void sub_2f14(int32_t arg1)
{
    uint32_t r4 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *0x20201004 = arg1;
    
    if (arg1 & 0xaaaaaaaa)
    {
        while (*0x20201004 & arg1)
            /* nop */
    }
    else if (arg1 & 0x55555555)
    {
        while (arg1 & ~*0x20201004)
            /* nop */
    }
    
    if (!r4)
        /* unimplemented  {cpsie I} */
}

void sub_2f46(int32_t arg1)
{
    uint32_t r4 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *0x20132014 = arg1;
    
    if (arg1 & 0xaaaaaaaa)
    {
        while (*0x20132014 & arg1)
            /* nop */
    }
    else if (arg1 & 0x55555555)
    {
        while (arg1 & ~*0x20132014)
            /* nop */
    }
    
    if (!r4)
        /* unimplemented  {cpsie I} */
}

int32_t sub_2f8c(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    var_c = 5;
    int32_t i;
    
    do
    {
        i = sub_2df4(&var_c, 1, &var_10, 1);
        
        if (!(var_10 << 0x1f))  /* "523" */
        {
            if (i || !arg1)
                break;
            
            *arg1 = var_10;
            return i;
        }
    } while (!i);
    
    return i;
}

char* sub_2fc0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    char* result = sub_30fa();
    
    if (!result)
    {
        int32_t r1_1;
        int32_t r2_1;
        int32_t r3_1;
        result = sub_2dcc(arg1, arg2, arg4, arg3);
        
        if (!result)
            return sub_2f8c(result, r1_1, r2_1, r3_1);
    }
    
    return result;
}

char* sub_2fe8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    char* result = sub_30fa();
    
    if (!result)
    {
        int32_t r1_1;
        int32_t r2_1;
        int32_t r3_1;
        result = sub_2de0(arg1, arg2, arg4, arg3);
        
        if (!result)
            return sub_2f8c(result, r1_1, r2_1, r3_1);
    }
    
    return result;
}

char* sub_3010(char arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_10 = arg3;
    int32_t var_14 = arg2;
    char* result = sub_30fa();
    
    if (!result)
    {
        if (!arg3)
        {
            char var_20_1 = arg1;
            uint8_t var_1f_1 = arg2 >> 0x10;  /* "R02_3.00.06_240523" */
            uint8_t var_1e_1 = arg2 >> 8;
            char var_1d_1 = arg2;
        }
        
        int32_t r1_2;
        int32_t r2;
        int32_t r3_1;
        result = sub_2d88();
        
        if (!result)
            return sub_2f8c(result, r1_2, r2, r3_1);
    }
    
    return result;
}

char* sub_304e(char arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_10 = arg3;
    int32_t var_14 = arg2;
    char* result = sub_30fa();
    
    if (!result)
    {
        if (!arg3)
        {
            char var_20_1 = arg1;
            uint8_t var_1f_1 = arg2 >> 0x18;  /* ".06_240523" */
            uint8_t var_1e_1 = arg2 >> 0x10;  /* "R02_3.00.06_240523" */
            uint8_t var_1d_1 = arg2 >> 8;
            char var_1c_1 = arg2;
        }
        
        int32_t r1_2;
        int32_t r2;
        int32_t r3_1;
        result = sub_2d88();
        
        if (!result)
            return sub_2f8c(result, r1_2, r2, r3_1);
    }
    
    return result;
}

int32_t sub_308e(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    return sub_2e08(arg1, arg2, arg3 << 8);
}

int32_t sub_3098(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    return sub_2e1a(arg1, arg2, arg3);
}

int32_t sub_30a0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_2df4(arg1, arg2, arg3, arg4);
}

int32_t sub_30a8()
{
    return sub_2d88();
}

int32_t sub_30b0(void* arg1, int32_t arg2)
{
    return sub_2dbc(arg1, arg2);
}

int32_t sub_30b8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_20 = arg1;
    int32_t result = sub_30fa();
    
    if (!result)
    {
        char* r0_2 = 0x713c44(arg3 + 1);
        *r0_2 = arg1;
        0xfff01bd8(&r0_2[1], arg2, arg3);
        int32_t result_1;
        int32_t r1_2;
        int32_t r2_1;
        int32_t r3_1;
        result_1 = sub_30b0(r0_2, arg3 + 1);
        result = result_1;
        
        if (!result)
            result = sub_2f8c(&data_0, r1_2, r2_1, r3_1);
        
        0x711264(r0_2);
    }
    
    return result;
}

int32_t sub_30fa()
{
    int32_t r3;
    int32_t var_8 = r3;
    var_8 = 6;
    return sub_2d88();
}

int32_t sub_310c(int32_t arg1, int32_t arg2)
{
    *0x20121018 = 0;
    *0x20121010 = arg1;
    *0x20121014 = arg2;
    *0x2012101c = 1;
    int32_t i;
    
    do
        i = *0x2012101c;
     while (i);
    
    return i;
}

int32_t sub_3122()
{
    *0x20121018 = 1;
    *0x2012101c = 1;
    
    while (*0x2012101c)
        /* nop */
    
    return 0x20121000;
}

int32_t sub_3132(int32_t arg1)
{
    *0x20132040 = *0x20132040 >> 1 << 1 | 1;
    sub_2f46(0x100);
    sub_3122();
    *0x20121004 = arg1;
    *0x20121008 = sub_2e44();
    *0x2012100c = 0x13800000;
    return 0x13800000;
}

int32_t sub_3160()
{
    int32_t result = sub_2e2c(0x20);  /* "23" */
    
    if (!result)
    {
        sub_2f46(0x100);
        *0x2012100c = sub_2e3a() | *0x2012100c >> 8 << 8;
        *0x20121000 = 1;
        int32_t i_1 = 0xff;
        int32_t i;
        
        do
        {
            i = i_1;
            i_1 -= 1;
        } while (i >= 1);
    }
    
    return result;
}

int32_t sub_3192()
{
    int32_t result = sub_2e4e();
    
    if (!result)
    {
        *0x20121000 = result;
        sub_2f46(0x200);
    }
    
    return result;
}

char* sub_31b4(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    char* var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    char* r4 = arg4;
    int32_t r5 = arg3;
    int32_t r7 = arg2;
    char* result;
    
    if (arg4 < 0x800000)
    {
        /* unimplemented  {cpsid I} */
        sub_2e96();
        result = sub_2fc0(arg1, r7, r5, r4);
        sub_2e64();
        /* unimplemented  {cpsie I} */
    }
    else
    {
        int32_t r6_1;
        int32_t temp0_1;
        
        do
        {
            r6_1 = 0x100;
            
            if (r5 <= 0x100)
                r6_1 = r5;
            
            int32_t r0 = 0;
            
            while (r0 < r6_1)
            {
                *(0x104dcc + r0) = *r4;
                r0 += 1;
                r4 = &r4[1];
            }
            
            /* unimplemented  {cpsid I} */
            sub_2e96();
            result = sub_2fc0(arg1, r7, r6_1, 0x104dcc);
            sub_2e64();
            /* unimplemented  {cpsie I} */
            
            if (result)
                return result;
            
            r7 += r6_1;
            temp0_1 = r5;
            r5 -= r6_1;
        } while (temp0_1 != r6_1);
    }
    
    return result;
}

char* sub_322a(int32_t arg1, int32_t arg2, int32_t arg3, char* arg4)
{
    char* var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    char* r4 = arg4;
    int32_t r5 = arg3;
    int32_t r7 = arg2;
    char* result;
    
    if (arg4 < 0x800000)
    {
        /* unimplemented  {cpsid I} */
        sub_2e96();
        result = sub_2fe8(arg1, r7, r5, r4);
        sub_2e64();
        /* unimplemented  {cpsie I} */
    }
    else
    {
        int32_t r6_1;
        int32_t temp0_1;
        
        do
        {
            r6_1 = 0x100;
            
            if (r5 <= 0x100)
                r6_1 = r5;
            
            int32_t r0 = 0;
            
            while (r0 < r6_1)
            {
                *(0x104dcc + r0) = *r4;
                r0 += 1;
                r4 = &r4[1];
            }
            
            /* unimplemented  {cpsid I} */
            sub_2e96();
            result = sub_2fe8(arg1, r7, r6_1, 0x104dcc);
            sub_2e64();
            /* unimplemented  {cpsie I} */
            
            if (result)
                return result;
            
            r7 += r6_1;
            temp0_1 = r5;
            r5 -= r6_1;
        } while (temp0_1 != r6_1);
    }
    
    return result;
}

char* sub_329e(char arg1, int32_t arg2, int32_t arg3)
{
    /* unimplemented  {cpsid I} */
    sub_2e96();
    char* result = sub_3010(arg1, arg2, arg3);
    sub_2e64();
    /* unimplemented  {cpsie I} */
    return result;
}

char* sub_32c2(char arg1, int32_t arg2, int32_t arg3)
{
    /* unimplemented  {cpsid I} */
    sub_2e96();
    char* result = sub_304e(arg1, arg2, arg3);
    sub_2e64();
    /* unimplemented  {cpsie I} */
    return result;
}

int32_t sub_32e6(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    /* unimplemented  {cpsid I} */
    sub_2e96();
    int32_t result = sub_30a0(arg1, arg2, arg3, arg4);
    sub_2e64();
    /* unimplemented  {cpsie I} */
    return result;
}

int32_t sub_330e(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    /* unimplemented  {cpsid I} */
    sub_2e96();
    int32_t result = sub_308e(arg1, arg2, arg3);
    sub_2e64();
    /* unimplemented  {cpsie I} */
    return result;
}

int32_t sub_3332(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    /* unimplemented  {cpsid I} */
    sub_2e96();
    int32_t result = sub_3098(arg1, arg2, arg3);
    sub_2e64();
    /* unimplemented  {cpsie I} */
    return result;
}

int32_t sub_3356(int32_t arg1, int32_t arg2, int32_t arg3)
{
    /* unimplemented  {cpsid I} */
    sub_2e96();
    int32_t result = sub_30b8(arg1, arg2, arg3);
    sub_2e64();
    /* unimplemented  {cpsie I} */
    return result;
}

int32_t sub_3380(void* arg1, int32_t arg2, int32_t* arg3)
{
    int32_t* var_18 = arg3;
    int32_t var_1c = arg2;
    void* var_20 = arg1;
    int32_t r6 = 0;
    int32_t* r5 = arg3;
    int32_t r7 = arg2;
    uint32_t r4_1 = arg3 << 0x1e >> 0x1e;  /* "0523" */
    uint32_t var_28;
    
    if (!r4_1)
    {
    label_33be:
        uint32_t i_2 = 0x7100e4(arg1);
        
        for (uint32_t i = r7 >> 2; i; i -= var_28)
        {
            uint32_t i_1 = i_2;
            
            if (i <= i_1)
                i_1 = i;
            
            uint32_t r0_5 = i_1;
            var_28 = r0_5;
            int32_t r0_7 = sub_330e(r5, r0_5, var_20);
            r6 = r0_7;
            
            if (r6)
                return r0_7;
            
            r5 = &r5[var_28];
            var_20 += var_28 << 2;
        }
        
        uint32_t r4_4 = r7 << 0x1e >> 0x1e;  /* "0523" */
        
        if (!r4_4)
            return r6;
        
        r6 = sub_330e(&var_28, 1, var_20);
        
        if (!r6)
        {
            0xfff01bd8(r5, &var_28, r4_4);
            return r6;
        }
    }
    else
    {
        r6 = sub_330e(&var_28, 1, var_20);
        
        if (!r6)
        {
            int32_t r0_2 = 4 - r4_1;
            
            if (r0_2 > r7)
                r0_2 = r7;
            
            uint32_t r4_2 = r0_2;
            0xfff01bd8(r5, &var_28, r4_2);
            r5 += r4_2;
            arg1 = var_20 + r4_2;
            r7 -= r4_2;
            var_20 = arg1;
            goto label_33be;
        }
    }
    return 0;
}

int32_t sub_341e(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    int32_t var_20 = arg1;
    int32_t r6 = 0;
    int32_t r5 = arg3;
    int32_t r7 = arg2;
    uint32_t r4_1 = arg3 << 0x1e >> 0x1e;  /* "0523" */
    uint32_t var_28;
    
    if (!r4_1)
    {
    label_345c:
        uint32_t i_2 = 0x7100e4(arg1);
        
        for (uint32_t i = r7 >> 2; i; i -= var_28)
        {
            uint32_t i_1 = i_2;
            
            if (i <= i_1)
                i_1 = i;
            
            uint32_t r0_5 = i_1;
            var_28 = r0_5;
            int32_t r0_7 = 0x711028(var_20, r0_5, r5);
            r6 = r0_7;
            
            if (r6)
                return r0_7;
            
            uint32_t r0_9 = var_28 << 2;
            r5 += r0_9;
            var_20 += r0_9;
        }
        
        uint32_t r4_4 = r7 << 0x1e >> 0x1e;  /* "0523" */
        
        if (!r4_4)
            return r6;
        
        r6 = 0x711028(var_20, 1, &var_28);
        
        if (!r6)
        {
            0xfff01bd8(r5, &var_28, r4_4);
            return r6;
        }
    }
    else
    {
        r6 = 0x711028(var_20, 1, &var_28);
        
        if (!r6)
        {
            int32_t r0_2 = 4 - r4_1;
            
            if (r0_2 > r7)
                r0_2 = r7;
            
            uint32_t r4_2 = r0_2;
            0xfff01bd8(r5, &var_28, r4_2);
            r5 += r4_2;
            arg1 = var_20 + r4_2;
            r7 -= r4_2;
            var_20 = arg1;
            goto label_345c;
        }
    }
    return 0;
}

int32_t sub_34ba(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 + arg2 > 0xffffff)
        /* tailcall */
        return sub_341e(arg1, arg2, arg3);
    
    /* tailcall */
    return sub_3380(arg1, arg2, arg3);
}

int32_t sub_34cc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0xab;
    return sub_30b0(&var_8, 1);
}

int32_t sub_34de(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0xb9;
    return sub_30b0(&var_8, 1);
}

int32_t sub_34f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0x3a;
    sub_2e96();
    int32_t result = sub_30b0(&var_10, 1);
    sub_2e64();
    return result;
}

int32_t sub_350e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 4;
    sub_2e96();
    int32_t result = sub_30b0(&var_10, 1);
    sub_2e64();
    return result;
}

int32_t* sub_3530(int32_t arg1)
{
    return sub_2552(0x103adc, arg1);
}

int32_t sub_353c()
{
    return sub_254c(0x103adc);
}

int32_t sub_3546()
{
    return sub_2546(0x103adc);
}

void* sub_3550(int32_t arg1)
{
    return sub_2534(0x103adc, arg1);
}

int32_t sub_3560(char* arg1)
{
    int32_t result = 0;
    uint32_t r1 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    
    if (!*arg1)
    {
        result = 1;
        *arg1 = 1;
    }
    
    if (!r1)
        /* unimplemented  {cpsie I} */
    
    return result;
}

int32_t sub_357c(char* arg1)
{
    int32_t result = 0;
    uint32_t r1 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    
    if (*arg1 == 1)
    {
        *arg1 = 0;
        result = 1;
    }
    
    if (!r1)
        /* unimplemented  {cpsie I} */
    
    return result;
}

uint32_t sub_359a(char* arg1)
{
    return *arg1;
}

int32_t sub_35a0()
{
    *0x20132024 = 0;
    *0x20132020 = 0x1800;
    return 0x1800;
}

int32_t sub_35b4()
{
    return *0x104f44;
}

int32_t sub_35c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    *0x20201070 = (*0x20201070 & 0xffbfffff) | arg4 << 0x1f >> 9;  /* "523" */
    *0x20201070 = (*0x20201070 & 0xff7fffff) | arg3 << 0x1f >> 8;  /* "523" */
    *0x20201070 = (*0x20201070 & 0xcfffffff) | arg2 << 0x1e >> 2;  /* "0523" */
    int32_t result = arg1 << 0x1e;  /* "0523" */
    *0x20201070 = *0x20201070 << 2 >> 2 | result;
    return result;
}

int32_t sub_3600()
{
    /* tailcall */
    return sub_35c0(0, 0, 0, 0);
}

int32_t sub_360a(int32_t arg1)
{
    uint32_t r4_1 = arg1 << 0x1f >> 0x1f;  /* "523" */
    *0x20201070 = (*0x20201070 & 0xfffbffff) | r4_1 << 0x12;  /* "2_3.00.06_240523" */
    int32_t result = (*0x20201070 & 0xfffdffff) | r4_1 << 0x11;  /* "02_3.00.06_240523" */
    *0x20201070 = result;
    return result;
}

uint32_t sub_3640(int32_t arg1)
{
    *0x20132018 = arg1;
    uint32_t result = arg1 >> 1;
    *0x20132018 = result;
    return result;
}

int32_t sub_3650()
{
    *0x20201034 = 3;
    return 3;
}

int32_t sub_3658()
{
    *0x20201000 |= 0x60;
    return 0x20201000;
}

int32_t sub_3664()
{
    *0x20201000 &= 0xffffff9f;
    return 0x20201000;
}

int32_t sub_3670()
{
    uint32_t r0 = *0x103af0;
    int32_t r4;
    
    if (r0 == 2)
    {
        int32_t r0_2 = 0x719674(r0);
        r4 = r0_2;
        r0 = r0_2 << 0x1e;  /* "0523" */
        
        if (r0 < 0)
        {
            *0x103af0 = 0;
            0x71c1b8(0);
            r0 = 0x71c184();
        }
    }
    else if (!r0)
    {
        r0 = 0xfff0f462(r0);
        
        r4 = !r0 ? 0 : 3;
    }
    else
        r4 = 1;
    
    int32_t r0_5;
    
    if (0x717f74(r0))
        r0_5 = 1;
    else if (0x70f76c())
        r0_5 = 1;
    else if (!0x70f964())
        r0_5 = 1;
    else
        r0_5 = 0;
    
    if (!r0_5)
        return 4 | r4;
    
    return 0xfb & r4;
}

int32_t sub_36d8()
{
    int32_t result = 0x70e1e8(0xffffffff);
    
    if (!result)
    {
        result = 0x70dfc4();
        
        if (!result)
        {
            uint32_t r4_1 = __mrs(primask);
            /* unimplemented  {cpsid I} */
            int32_t r0 = sub_3670();
            
            if (r0 == 7)
            {
                0x71b9d0();
                j_sub_3806();
                __wfi();
                sub_38ec();
                result = 0x71b998();
            }
            else
            {
                result = r0 << 0x1f;  /* "523" */
                
                if (result)
                    __wfi();
            }
            
            if (!r4_1)
                /* unimplemented  {cpsie I} */
        }
    }
    
    return result;
}

int32_t sub_371e()
{
    sub_2f14(0x400);
    *0x20100030 = (*0x20100030 & 0xffffffef) | 0x10;  /* "R02_3.00.06_240523" */
    
    while (*0x103af0 != 2)
        __wfi();
    
    return 0x103af0;
}

int32_t sub_3742()
{
    *0x2020101c = (*0x2020101c & 0xffffffef) | 0x10;  /* "R02_3.00.06_240523" */
    *0x2020101c = (*0x2020101c & 0xffffefff) | 0x1000;
    return sub_38ca();
}

int32_t sub_3760()
{
    *0xe000e100 = 0x20000;
    0x716b3c(0x20000, 0xe000e100);
    0x717f88(0x104ef0, 9);
    return 0x717f88(0x104f14, 6);
}

int32_t sub_3780(int32_t arg1)
{
    sub_37f2(arg1 + 0xa);
    0x718fbe();
    sub_37f2(arg1 + 0xb);
    *0x2020101c &= 0xfffeffff;
    return 0x20201000;
}

void j_sub_3ce4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __noreturn
{
    /* tailcall */
    return sub_3ce4(arg1, arg2, arg3, arg4);
}

int32_t sub_37e4(int32_t arg1, int32_t arg2) __pure
{
    if (arg1 - arg2 <= 0)
        return 0;
    
    return 1;
}

int32_t sub_37f2(int32_t arg1)
{
    int32_t i;
    
    do
        i = sub_37e4(arg1, *0x20200000);
     while (i);
    
    return i;
}

int32_t sub_3806()
{
    int32_t r0 = sub_3742();
    *0x2020101c &= 0xffffffef;
    *0xe000e180 = 0xffffffe5;
    sub_3650();
    sub_3658();
    int32_t r0_3;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0_3 = sub_2e96();
    sub_34de(r0_3, r1, r2, r3);
    bool cond:0 = !sub_39bc();
    int32_t r0_5 = *0x202010cc;
    int32_t r0_6;
    
    r0_6 = cond:0 ? r0_5 & 0xfffffeff : r0_5 | 0x100;
    
    *0x202010cc = r0_6;
    sub_3970(1);
    *0x20201000 = *0x20201000 >> 3 << 3 | 1;
    sub_360a(0);
    sub_37f2(r0 + 1);
    *0x2020101c = (*0x2020101c & 0xfffeffff) | 0x10000;
    *0x2020101c &= 0xfffdffff;
    *0x20201008 |= 1;
    *0xe000ed10 |= 4;
    *0x104f48 = (sub_353c() & ~*0x103afc) | *0x103b04;
    *0x104f4c = (sub_3546() & ~*0x103afc) | *0x103b00;
    sub_3530(*0x104f48);
    sub_3550(*0x104f4c);
    sub_35a0();
    *0x20201054 = *0x103af8;
    return sub_3970(2);
}

int32_t sub_38ca()
{
    int32_t i;
    
    do
        i = *0x20200000;
     while (*0x20200000 == i);
    
    return i;
}

int32_t j_sub_3806()
{
    /* tailcall */
    return sub_3806();
}

int32_t sub_38d8()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_2d7e();
    sub_34cc(r0, r1, r2, r3);
    sub_2e72();
    return sub_2e64();
}

int32_t sub_38ec()
{
    sub_3530(*0x104f48);
    sub_3550(*0x104f4c);
    *0x20201054 = *0x103af4;
    sub_35a0();
    *0x20201008 &= 0xfffffffb;
    sub_2ecc();
    sub_38d8();
    sub_3600();
    *0x2020101c = (*0x2020101c & 0xfffdffff) | 0x20000;
    int32_t r0_8 = sub_38ca();
    sub_3780(r0_8);
    sub_3a38();
    sub_37f2(r0_8 + 0xc);
    0x71bc94();
    sub_3760();
    *0xe000ed10 &= 0xfffffffb;
    *0x202010cc |= 0x100;
    sub_2f14(0x400);
    *0x20100030 = (*0x20100030 & 0xffffffef) | 0x10;  /* "R02_3.00.06_240523" */
    return 0x10;  /* "R02_3.00.06_240523" */
}

void sub_3970(int32_t arg1)
{
    if (arg1 == 1)
    {
        sub_2f14(0x400);
        
        while (!(*0x20100030 << 0x10 >> 0x1f))  /* "R02_3.00.06_240523" */  /* "523" */
            /* nop */
        
        return;
    }
    
    if (arg1 != 2)
        return;
    
    while (!*0x20100038)
        /* nop */
    
    sub_2f14(0x800);
}

uint32_t sub_39bc()
{
    return *0x104f50;
}

void sub_39c2(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    int32_t r3 = *0x103af4;
    int32_t r3_1;
    
    r3_1 = !(arg2 << 0x1f) ? r3 & ~arg1 : r3 | arg1;  /* "523" */
    
    *0x103af4 = r3_1;
    int32_t r3_2 = *0x103af8;
    int32_t r3_3;
    
    r3_3 = arg2 << 0x1e >= 0 ? r3_2 & ~arg1 : r3_2 | arg1;  /* "0523" */
    
    *0x103af8 = r3_3;
    int32_t r3_4 = *0x103afc;
    int32_t r3_5;
    
    r3_5 = arg2 << 0x1d >= 0 ? r3_4 & ~arg1 : r3_4 | arg1;  /* "40523" */
    
    *0x103afc = r3_5;
    int32_t r3_6 = *0x103b00;
    int32_t r3_7;
    
    r3_7 = arg2 << 0x1c >= 0 ? r3_6 & ~arg1 : r3_6 | arg1;  /* "240523" */
    
    *0x103b00 = r3_7;
    int32_t r1 = *0x103b04;
    int32_t r1_1;
    
    r1_1 = arg2 << 0x1b >= 0 ? r1 & ~arg1 : r1 | arg1;  /* "_240523" */
    
    *0x103b04 = r1_1;
    
    if (!r4)
        /* unimplemented  {cpsie I} */
}

int32_t sub_3a22(int32_t arg1, int32_t arg2)
{
    /* tailcall */
    return sub_39c2(1 << arg1, arg2);
}

int32_t sub_3a2a()
{
    *0x20201060 = 0;
    *0x2020105c = 3;
    *0x20201054 = 3;
    return 0x20201040;
}

int32_t sub_3a38()
{
    *0x2020101c = (*0x2020101c & 0xffffffef) | 0x10;  /* "R02_3.00.06_240523" */
    *0x2020101c &= 0xffffefff;
    return 0x20201000;
}

uint32_t sub_3a5c(uint32_t arg1, int32_t arg2 @ r4, int32_t arg3)
{
    uint8_t entry_r2;
    int32_t entry_r3;
    
    if (*(arg1 + 0x7f) == 1 && *(arg1 + 0x82) << 0x1b >= 0)  /* "_240523" */
    {
        int32_t r0_3;
        r0_3 = 0xfff0f474(0);
        
        if (r0_3 == 2 && !*(*0x12f77c + 9))
        {
            entry_r2 = 0;
            *0x20100080 = (*0x20100080 & 0xff00ffff) | 0x20000;
        }
    }
    
    int32_t lr;
    return sub_162e8(arg1, sub_162e8, entry_r2, entry_r3, arg2, lr);
}

int32_t sub_3aac(void* arg1)
{
    uint32_t r1 = *(arg1 + 0x6d);
    
    if (r1 == 1)
    {
        *(arg1 + 0x66) = 0;
        sub_15f74(arg1, 3, nullptr);
    }
    else if (r1 == 2)
        sub_15f74(arg1, 4, nullptr);
    else if (r1 == 3)
        sub_15f74(arg1, 5, nullptr);
    
    char result = *(arg1 + 0x82) & 0xf7;
    *(arg1 + 0x82) = result;
    *(arg1 + 0x6d) = 0;
    *(arg1 + 0x5c) = 0;
    return result;
}

int32_t sub_3aec(int32_t arg1, void* arg2)
{
    sub_3aac(arg2);
    
    if (!arg1)
        return 0x17055;
    
    return 0x16f71;
}

int32_t sub_3b0c(int32_t arg1, int32_t* arg2)
{
    if (*arg2 >= arg1)
        return 0xfff01b00(arg1, 0x271);
    
    return 0xb;
}

int32_t sub_3b28(int32_t arg1, void* arg2 @ r6)
{
    /* jump -> sub_3aec(arg1, arg2) */
}

int32_t sub_3b4c(int32_t arg1) __pure
{
    do
        arg1 -= 1;
     while (arg1);
    
    return arg1;
}

void sub_3b54(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r4, int32_t arg5 @ r5, int32_t arg6 @ r6, int32_t arg7 @ r7)
{
    *arg1 = arg2;
    arg1[1] = __mrs(psp);
    arg1[2] = arg3;
    arg1[3] = arg4;
    arg1[4] = arg5;
    arg1[5] = arg6;
    arg1[6] = arg7;
}

int32_t sub_3b68(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t r4 = arg2 << 8;
    int32_t r0 = arg1 << 0xc;
    *r0 = (arg2 << 4) - 0x7c;
    *(r0 + 4) = r0;
    *r4 = 0x12;  /* "2_3.00.06_240523" */
    *(r4 + 4) = r0 + 8;
    *(r4 + 8) = 0x54851c;
    *(r4 + 0xc) = (arg2 << 4) - 0x7c;
    *(r0 + 8) = 0x30;  /* "R02_V3.0" */
    *(r0 + 0xc) = r0 + 8;
    *(r0 + 0x10) = r4 + 0x10;  /* "R02_3.00.06_240523" */
    *(r0 + 0x14) = (arg2 << 4) - 0x7c;  /* "3.00.06_240523" */
    *(r0 + 0x18) = arg2 >> 0xc;  /* ".06_240523" */
    data_c0 = 0xc0;
    int32_t arg_340 = 0;
    int32_t arg_2a0 = 0;
    /* unimplemented  {ssat r0, #4, r4, lsl #1} */
    int32_t r0_5 = *((arg6 << 1) + 0x34);  /* "V3.0" */
    int32_t* r1_1 = syscall(r0_5, (0x1ca0c - r0_5) << 1, arg6 << 1, 0x12345678);
    *(r1_1 + 2) = 0x1ca0c - r0_5;
    *r1_1 = ~((0x1ca0c - r0_5) << 1);
    sub_3650();
    sub_3658();
    int32_t r0_8;
    int32_t r1_2;
    int32_t r2_5;
    int32_t r3_2;
    r0_8 = sub_2e96();
    sub_34de(r0_8, r1_2, r2_5, r3_2);
    bool cond:0 = !sub_39bc();
    int32_t r0_10 = *0x202010cc;
    int32_t r0_11;
    
    r0_11 = cond:0 ? r0_10 & 0xfffffeff : r0_10 | 0x100;
    
    *0x202010cc = r0_11;
    sub_3970(1);
    *(0x1ca0c - r0_5) = *(0x1ca0c - r0_5) >> 3 << 3 | 1;
    sub_360a(0);
    sub_37f2(0x1ca0d);
    (0x1ca0c - r0_5)[7] = ((0x1ca0c - r0_5)[7] & 0xfffeffff) | 0x10000;
    (0x1ca0c - r0_5)[7] &= 0xfffdffff;
    (0x1ca0c - r0_5)[2] |= 1;
    *0xe000ed10 |= 4;
    *0x104f48 = (sub_353c() & ~*0x103afc) | *0x103b04;
    *0x104f4c = (sub_3546() & ~*0x103afc) | *0x103b00;
    sub_3530(*0x104f48);
    sub_3550(*0x104f4c);
    sub_35a0();
    *0x20201054 = *0x103af8;
    return sub_3970(2);
}

void sub_3ce2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __noreturn
{
    /* tailcall */
    return sub_3ce4(arg1, arg2, arg3, arg4);
}

void sub_3ce4(int32_t arg1, int32_t, int32_t, int32_t arg4) __noreturn
{
    int32_t arg_3e0 = arg4;
    breakpoint();
}

int32_t sub_42e8()
{
    /* jump -> 0x8139f1 */
}

int32_t sub_42f4(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4 @ r4, int32_t arg5)
{
    /* unimplemented  {hint #0xa} */
    uint32_t i = sub_fd68(arg3, arg4);
    
    do
    {
        sub_1865c(i);
        i += 1;
    } while (i < 4);
    
    *0x1099c9 = 0;
    *0x1099ca = 0;
    *0x1099cc = 0;
    return 0;
}

uint32_t sub_4308()
{
    return sub_17700();
}

void* sub_4314(char arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    return sub_fd04(arg1, arg2, arg3);
}

int32_t sub_431c()
{
    __builtin_memset(0x103d9c, 0, 0x18);  /* ".06_240523" */
    *0x103dcc = 0;
    *0x103dd0 = 0;
    *0x103db4 = 0xc600;
    *0x103dd8 = 0;
    *0x103dc0 = 0;
    *0x103dc4 = 0;
    *0x103dd4 = 0xffffffff;
    
    for (int32_t i = 0; i < 0xfa; )
    {
        int32_t r1_1 = i << 2;
        *(0x109ce0 + r1_1) = 0;
        i += 1;
        *(0x10a0f0 + r1_1) = 0;
    }
    
    for (int32_t i_1 = 0; i_1 < 0xa; )
    {
        int32_t r1_2 = i_1 << 2;
        *(0x10a0c8 + r1_2) = 0;
        i_1 += 1;
        *(0x10a4d8 + r1_2) = 0;
    }
    
    int32_t i_2;
    
    for (i_2 = 0; i_2 < 4; )
    {
        int32_t r3_1 = i_2 << 2;
        i_2 += 1;
        *(0x10a500 + r3_1) = 0;
    }
    
    return i_2;
}

int32_t sub_437a()
{
    sub_4770();
    sub_46e0();
    sub_431c();
    sub_4800();
    *0x103dc8 = 0;
    return 0;
}

int32_t sub_4394(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_1c = arg2;
    int32_t var_20 = arg1;
    int32_t* var_40 = sub_4784(arg1);
    int32_t r0_2 = sub_46f4(arg2);
    
    for (int32_t i = 0; i < 0xf9; )
    {
        int32_t r3_1 = i << 2;
        i += 1;
        *(0x109ce0 + r3_1) = *(r3_1 + 0x109ce4);
    }
    
    *0x10a0c4 = var_40;
    
    for (int32_t i_1 = 0; i_1 < 0xf9; )
    {
        int32_t r3_2 = i_1 << 2;
        i_1 += 1;
        *(0x10a0f0 + r3_2) = *(r3_2 + 0x10a0f4);
    }
    
    *0x10a4d4 = r0_2;
    int32_t r0_5 = *0x103dac;
    int32_t r0_6;
    
    r0_6 = r0_5 >= 0xfa ? 0xfa : r0_5 + 1;
    
    *0x103dac = r0_6;
    int32_t r0_7 = *0x103db0;
    
    if (r0_7 >= 0x19)  /* "06_240523" */
        *0x103db0 = 1;
    else
    {
        *0x103db0 = r0_7 + 1;
        int32_t r3_4 = *0x103db8 + 0x145c0 - (arg1 << 6 >> 5);
        *0x103db8 = r3_4;
        int32_t* r1_4 = *0x103dbc + 0x145c0 - (arg2 << 6 >> 5);
        *0x103dbc = r1_4;
        var_40 = r1_4;
        
        if (r0_7 == 0x18)  /* ".06_240523" */
        {
            for (int32_t i_2 = 0; i_2 < 9; )
            {
                int32_t r1_5 = i_2 << 2;
                i_2 += 1;
                *(0x10a0c8 + r1_5) = *(r1_5 + 0x10a0cc);
            }
            
            *0x10a0ec = 0xff7feb2c(r3_4 << 7, 0x19) >> 7;  /* "06_240523" */
            
            for (int32_t i_3 = 0; i_3 < 9; )
            {
                int32_t r1_6 = i_3 << 2;
                i_3 += 1;
                *(0x10a4d8 + r1_6) = *(r1_6 + 0x10a4dc);
            }
            
            *0x10a4fc = 0xff7feb2c(var_40 << 7, 0x19) >> 7;  /* "06_240523" */
            *0x103db8 = 0;
            *0x103dbc = 0;
            int32_t r0_16 = *0x103d9c;
            int32_t r0_17;
            
            r0_17 = r0_16 >= 0x32 ? 0x32 : r0_16 + 1;  /* "2_V3.0" */
            
            *0x103d9c = r0_17;
        }
    }
    
    int32_t r0_18 = *0x103dc4;
    int32_t r0_19;
    
    r0_19 = r0_18 >= 0x32 ? 1 : r0_18 + 1;  /* "2_V3.0" */
    
    *0x103dc4 = r0_19;
    int32_t* var_3c;
    int32_t* var_38;
    int32_t var_34;
    int32_t var_30;
    int32_t var_2c;
    
    if (*0x103dac != 0xfa || *0x103db0 != 0x19)  /* "06_240523" */
    {
        var_30 = 0xfffffe00;
        var_2c = 0;
        
        for (int32_t i_4 = 0; i_4 < 4; )
        {
            int32_t r2_6 = i_4 << 2;
            i_4 += 1;
            *(0x10a500 + r2_6) = 0;
        }
    }
    else
    {
        var_3c = &var_2c;
        var_34 = 0x10a500;
        var_40 = &var_30;
        int32_t var_28;
        var_38 = &var_28;
        sub_482a(0x109ce0, 0x10a0c8, 0x10a0f0, 0x10a4d8, var_40, var_3c, var_38, 0x10a500);
        int32_t r1_15 = var_28;
        
        if (r1_15 == 1)
        {
            *0x103da0 = 2;
            *0x103da8 += 1;
        label_44f8:
            var_2c = 0;
            var_30 = 0xfffffe00;
        label_451a:
            
            if (*0x103dcc == 1)
                goto label_4528;
        }
        else
        {
            int32_t r0_23 = *0x103da0;
            
            if (r0_23)
                *0x103da0 = r0_23 - 1;
            
            if (r0_23 && r0_23 - 1 > 0)
                goto label_44f8;
            
            if (var_30 <= 0 || r1_15 || *0x103da0)
                goto label_451a;
            
            *0x103dcc = 1;
        label_4528:
            int32_t r0_31 = *0x103dd0 + 1;
            *0x103dd0 = r0_31;
            
            if (r0_31 > 0x5f5e0ff)
                *0x103dd0 = 0x5f5e0ff;
        }
        
        *0x103da4 += 1;
    }
    
    int32_t r0_22 = var_30;
    int32_t r7 = (arg1 - (((arg1 >> 0x1f >> 0x1e) + arg1) >> 2 << 2)) << 2;
        /* "0523" */  /* "523" */
    
    if ((r0_22 > 0 || *0x103d9c < 0xa) && *0x103db0 == 0x19)  /* "06_240523" */
    {
        int32_t r0_36;
        int32_t r1_21;
        
        if (!var_2c)
        {
            int32_t r0_39 = r0_22 >> 9;
            var_30 = r0_39;
            r0_36 = 0xad1 * ((r0_39 * r0_39) >> 9) - 0x3fb1 * r0_39;
            r1_21 = 0x1ff4114;
        }
        else
        {
            int32_t r0_34 = r0_22 >> 9;
            var_30 = r0_34;
            r0_36 = 0xffffd925 * ((r0_34 * r0_34) >> 9) - 0x588 * r0_34;
            r1_21 = 0x1c8875f;
        }
        
        int32_t r0_38 = (r0_36 + r1_21) >> 9;
        
        if (*0x103d9c >= 0xa)
        {
            if (r0_38 - 0xb800 < 0x600)
            {
                int32_t r1_30 = (*(0x103dec
                    + (0xff7feb2c(arg1, 3, 0x600, 0xb800, var_40, var_3c, var_38, var_34) << 2)) << 9)
                    + 0x400;
                int32_t r0_44 = *0x103db4;
                r0_22 = ((0x1c5 * (r1_30 - r0_44)) >> 0xb) + r0_44;
                *0x103dc0 = 0;
                *0x103db4 = r0_22;
            }
            else if (r0_38 >= 0xb800)
            {
                int32_t r1_43 = *0x103db4;
                r0_22 = ((0x1c5 * (r0_38 - r1_43)) >> 0xb) + r1_43;
                *0x103dc0 = 0;
                *0x103db4 = r0_22;
            }
            else
            {
                int32_t r1_35 = *0x103dc0 + 1;
                *0x103dc0 = r1_35;
                
                if (r1_35 < 0xa)
                {
                    int32_t r1_39 = *(0x103dec + (0xff7feb2c(arg1, 3) << 2)) << 9;
                    int32_t r0_50 = *0x103db4;
                    r0_22 = ((0x1c5 * (r1_39 - r0_50)) >> 0xb) + r0_50;
                }
                else
                {
                    int32_t r1_36 = *0x103db4;
                    r0_22 = ((0x1c5 * (r0_38 - r1_36)) >> 0xb) + r1_36;
                }
                
                *0x103db4 = r0_22;
            }
            
            if (r0_22 >= 0xc600)
                r0_22 = *(0x103df8 + (0xff7feb2c(arg1, 3, 0x1c5) << 2)) << 9;
            
            if (r0_22 - 0xbe00 < 0x200)
                r0_22 = *(0x103e04 + (0xff7feb2c(arg1, 6, 0x200) << 2)) << 9;
            
            if (arg3 == 2)
                r0_22 = *(0x103ddc + r7) << 9;
        }
        else
            r0_22 = 0xfffffe00;
    }
    
    if (!*0x103dcc && *0x103d9c >= 0x10 && *0x103db0 == 0x19)  /* "R02_3.00.06_240523" */  /* "
            06_240523" */
        r0_22 = *(0x103ddc + r7) << 9;
    
    if (arg3 == 1)
    {
        if (r0_22 - 1 >= 0x9fff)
        {
        label_4686:
            
            if (r0_22 > 0xc600 && r0_22 > 0)
                r0_22 = 0xc600;
        }
        else
            r0_22 = 0xa000;
    }
    else if (arg3 == 2)
    {
        if (r0_22 - 1 >= 0xbfff)
            goto label_4686;
        
        r0_22 = 0xc000;
    }
    
    return r0_22 >> 9;
}

int32_t sub_46a2() __pure
{
    return 0x103e1c;
}

int32_t sub_46e0()
{
    __builtin_memset(0x104090, 0, 0x14);  /* "3.00.06_240523" */
    *0x1040a4 = 1;
    return 0x104090;
}

int32_t sub_46f4(int32_t arg1)
{
    int32_t r0 = arg1 << 6;
    int32_t r0_1;
    
    if (*0x1040a4 == 1)
    {
        if (r0 <= 0x3ffc0)
            *0x1040a4 = 0;
        else
            r0 -= 0x40000;
        
        int32_t r2_8 = *0x1040a0;
        *0x104090 = r0 - r2_8;
        r0_1 = r2_8;
    }
    else
    {
        if (r0 > 0x3ffc0)
        {
            r0 -= 0x40000;
            *0x1040a4 = 1;
        }
        
        int32_t r2 = *0x104090;
        int32_t r2_1 = ((0x23d7 * (r0 - r2)) >> 0x10) + r2;  /* "R02_3.00.06_240523" */
        r0_1 = r0 - r2_1;
        *0x104090 = r2_1;
        *0x1040a0 = r0_1;
    }
    
    int32_t r2_2 = *0x104094;
    int32_t r2_3 = ((0x23d7 * (r0_1 - r2_2)) >> 0x10) + r2_2;  /* "R02_3.00.06_240523" */
    int32_t r0_2 = r0_1 - r2_3;
    *0x104094 = r2_3;
    int32_t r2_4 = *0x104098;
    int32_t r2_5 = ((0x23d7 * (r0_2 - r2_4)) >> 0x10) + r2_4;  /* "R02_3.00.06_240523" */
    int32_t r0_3 = r0_2 - r2_5;
    *0x104098 = r2_5;
    int32_t r2_6 = *0x10409c;
    int32_t r2_7 = ((0x23d7 * (r0_3 - r2_6)) >> 0x10) + r2_6;  /* "R02_3.00.06_240523" */
    *0x10409c = r2_7;
    return r0_3 - r2_7;
}

int32_t sub_4770()
{
    __builtin_memset(0x1040a8, 0, 0x14);  /* "3.00.06_240523" */
    *0x1040bc = 1;
    return 0x1040a8;
}

int32_t sub_4784(int32_t arg1)
{
    int32_t r0 = arg1 << 6;
    int32_t r0_1;
    
    if (*0x1040bc == 1)
    {
        if (r0 <= 0x3ffc0)
            *0x1040bc = 0;
        else
            r0 -= 0x40000;
        
        int32_t r2_8 = *0x1040b8;
        *0x1040a8 = r0 - r2_8;
        r0_1 = r2_8;
    }
    else
    {
        if (r0 > 0x3ffc0)
        {
            r0 -= 0x40000;
            *0x1040bc = 1;
        }
        
        int32_t r2 = *0x1040a8;
        int32_t r2_1 = ((0x23d7 * (r0 - r2)) >> 0x10) + r2;  /* "R02_3.00.06_240523" */
        r0_1 = r0 - r2_1;
        *0x1040a8 = r2_1;
        *0x1040b8 = r0_1;
    }
    
    int32_t r2_2 = *0x1040ac;
    int32_t r2_3 = ((0x23d7 * (r0_1 - r2_2)) >> 0x10) + r2_2;  /* "R02_3.00.06_240523" */
    int32_t r0_2 = r0_1 - r2_3;
    *0x1040ac = r2_3;
    int32_t r2_4 = *0x1040b0;
    int32_t r2_5 = ((0x23d7 * (r0_2 - r2_4)) >> 0x10) + r2_4;  /* "R02_3.00.06_240523" */
    int32_t r0_3 = r0_2 - r2_5;
    *0x1040b0 = r2_5;
    int32_t r2_6 = *0x1040b4;
    int32_t r2_7 = ((0x23d7 * (r0_3 - r2_6)) >> 0x10) + r2_6;  /* "R02_3.00.06_240523" */
    *0x1040b4 = r2_7;
    return r0_3 - r2_7;
}

int32_t sub_4800()
{
    *0x1040c0 = 0;
    *0x1040c4 = 0;
    
    for (int32_t i = 0; i < 0x1f; )  /* "523" */
    {
        int32_t r1_1 = i << 2;
        *(0x10ac4c + r1_1) = 0;
        *(0x10acc8 + r1_1) = 0;
        i += 1;
        *(0x10ad44 + r1_1) = 0;
    }
    
    return sub_4a88();
}

int32_t sub_482a(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, uint32_t* arg8)
{
    int32_t* var_18 = arg4;
    int32_t* var_20 = arg2;
    int32_t var_3c = 0;
    int32_t var_40 = 0;
    int32_t var_38 = 0;
    sub_4baa(arg1, 0x10ac4c);
    sub_4baa(arg3, 0x10acc8);
    int32_t r0_3 = sub_4b74(arg2);
    int32_t r0_5 = sub_4b74(arg4);
    sub_4b90(0x10ac4c, 0x10acc8, 0x10ad44);
    
    for (int32_t i = 0; i < 7; )
    {
        int32_t r1 = i << 2;
        *(0x10adc0 + r1) = 0;
        i += 1;
        *(0x10addc + r1) = 0;
    }
    
    *0x1040c8 = 0;
    *0x1040cc = 0;
    uint32_t var_48;
    uint32_t var_44;
    uint32_t var_30;
    sub_4aa8(0x10ad44, 0x10ac4c, 0x10acc8, 0x10adc0, 0x1040c8, 0x10addc, 0x1040cc, &var_44, 
        &var_48, &var_30);
    int32_t r0_7 = sub_4d84(0x10ac4c, 0x10adc0, *0x1040c8, 0x10addc, *0x1040cc);
    int32_t r0_9 = sub_4d84(0x10acc8, 0x10adc0, *0x1040c8, 0x10addc, *0x1040cc);
    *arg7 = sub_4c38(var_44, var_48, arg1, arg3);
    
    if (sub_4cf4(arg1, arg3) == 1)
        *arg7 = 1;
    
    if (r0_9 < 0xa6 || r0_7 < 0xa6)
        var_3c = 1;
    
    if (r0_9 > 0xcc || r0_7 > 0xcc)
        var_40 = 1;
    
    if (!var_3c && !var_40)
        var_38 = 1;
    
    uint32_t r1_3 = var_48;
    int32_t result;
    
    if (r1_3 <= 0 || r0_3 <= 0)
        result = 0xfffc0000;
    else
    {
        int32_t r0_21 = 0xff7feb2c(var_44 << 6, r1_3);
        result = (0xff7feb2c(r0_5 << 6, r0_3) * r0_21) << 6;
    }
    
    if (var_3c)
    {
        *arg7 = 1;
        
        if ((var_48 << 0xe < 0x1828f || var_44 << 0xe < 0x1828f) && result < 0x55e35)
            *arg7 = 0;
    }
    
    if (var_40)
    {
        if (var_48 << 0xe < 0x10000 || var_44 << 0xe < 0x14ccd)
            *arg7 = 1;
        
        if ((var_48 << 0xe < 0x10000 || var_44 << 0xe < 0x14ccd) && result < 0x55e35)
            *arg7 = 0;
        
        if (var_44 << 0xe < 0x1cccd && result > 0x55e35)
            *arg7 = 1;
    }
    
    if (var_38)
    {
        if (var_48 << 0xe < 0x1828f || var_44 << 0xe < 0x1828f)
            *arg7 = 1;
        
        if ((var_48 << 0xe < 0x1828f || var_44 << 0xe < 0x1828f) && result < 0x55e35)
            *arg7 = 0;
        
        if (var_44 << 0xe < 0x28000 && result > 0x55e35)
            *arg7 = 1;
    }
    
    *arg6 = 0;
    
    if (var_30 <= 0x8c)
        *0x1040c0 += 1;
    else
        *0x1040c4 += 1;
    
    int32_t r1_12 = *0x1040c4;
    int32_t r3_15;
    
    if (r1_12)
        r3_15 = *0x1040c0;
    
    if (r1_12 && (!r3_15 || r1_12 >= r3_15))
        *arg6 = 1;
    else
        *arg6 = 0;
    
    if (var_44 < 0 || var_48 < 0 || *arg7 == 1)
        result = 0xfffc0000;
    
    *arg8 = var_48;
    arg8[1] = var_44;
    arg8[2] = r0_9;
    arg8[3] = r0_7;
    *arg5 = result;
    return result;
}

int32_t sub_4a88()
{
    for (int32_t i = 0; i < 0x1f; )  /* "523" */
    {
        int32_t r3_1 = i << 2;
        i += 1;
        *(0x10adf8 + r3_1) = 0;
    }
    
    int32_t i_1;
    
    for (i_1 = 0; i_1 < 2; )
    {
        int32_t r3_2 = i_1 << 2;
        i_1 += 1;
        *(0x1040d0 + r3_2) = 0;
    }
    
    return i_1;
}

uint32_t* sub_4aa8(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6, int32_t* arg7, uint32_t* arg8, uint32_t* arg9, uint32_t* arg10)
{
    int32_t* var_24 = arg1;
    
    for (int32_t i = 0; i < 0x1f; )  /* "523" */
    {
        int32_t r2 = i << 2;
        i += 1;
        *(0x10adf8 + r2) = arg1[i];
    }
    
    int32_t i_4 = 0;
    
    for (int32_t i_1 = 0; i_1 < 0xd; i_1 += 1)
    {
        if (*(0x10adf8 + (i_1 << 2)) > *(0x10adf8 + (i_4 << 2)))
            i_4 = i_1;
    }
    
    int32_t r1 = (i_4 + 8) << 1;
    int32_t r0_5 = r1 - 0xe;
    int32_t r1_1 = r1 - 4;
    
    if (r0_5 <= 0)
        r0_5 = 1;
    
    if (r1_1 > 0x1f)  /* "523" */
        r1_1 = 0x1f;  /* "523" */
    
    int32_t i_3 = r0_5 - 1;
    
    for (int32_t i_2 = r0_5 - 1; i_2 < r1_1; i_2 += 1)
    {
        if (*(0x10adf8 + (i_2 << 2)) > *(0x10adf8 + (i_3 << 2)))
            i_3 = i_2;
    }
    
    *0x1040d0 = i_4 + 1;
    *0x1040d4 = i_3 + 1;
    sub_4e98(0x1040d0, arg3, arg4, arg5, arg6, arg7);
    uint32_t var_38;
    uint32_t var_34;
    sub_4e1c(arg3, arg4, arg5, arg6, arg7, 0xfa, &var_38, &var_34);
    uint32_t var_30;
    uint32_t var_2c;
    sub_4e1c(arg2, arg4, arg5, arg6, arg7, 0xfa, &var_30, &var_2c);
    *arg8 = var_30;
    *arg9 = var_38;
    *arg10 = var_34;
    return arg10;
}

int32_t sub_4b74(int32_t* arg1)
{
    int32_t r0 = 0;
    
    for (int32_t i = 0; i < 0xa; )
    {
        int32_t r3_2 = arg1[i];
        i += 1;
        r0 += r3_2;
    }
    
    return 0xff7feb2c(r0, 0xa);
}

void sub_4b90(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    for (int32_t i = 0; i < 0x1f; )  /* "523" */
    {
        i += 1;
        arg3[i] = arg2[i] * arg1[i];
    }
}

int32_t sub_4ba8() __pure
{
    return;
}

int32_t sub_4baa(int32_t* arg1, int32_t* arg2)
{
    int32_t result_1 = 0;
    
    while (true)
    {
        int32_t r5_1 = 0;
        int32_t r1_1 = result_1 << 2;
        int32_t r1_2 = *(0x1040d8 + r1_1);
        int32_t r4_1 = 0;
        int32_t r0 = 0;
        int32_t r1_4 = *(0x104154 + r1_1);
    label_4bd6:
        int32_t r1_5 = 0x1000;
        int32_t r2_1 = 0;
        
        while (true)
        {
            int32_t r3_2 = arg1[r0];
            r0 += 1;
            r5_1 += (r1_5 * r3_2) >> 0xc;
            r4_1 += (r2_1 * r3_2) >> 0xc;
            int32_t r3_6 = r1_5;
            r1_5 = ((r1_2 * r1_5) >> 0xc) - ((r2_1 * r1_4) >> 0xc);
            r2_1 = ((r1_4 * r3_6) >> 0xc) + ((r1_2 * r2_1) >> 0xc);
            
            if (r0 >= 0xfa)
            {
                int32_t r0_1 = r5_1 >> 4;
                int32_t r1_8 = r4_1 >> 4;
                arg2[result_1] = sub_5186(r0_1 * r0_1 + r1_8 * r1_8);
                int32_t result = result_1 + 1;
                result_1 = result;
                
                if (result < 0x1f)  /* "523" */
                    break;
                
                return result;
            }
            
            if (!r0)
                goto label_4bd6;
        }
    }
}

int32_t sub_4c38(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    int32_t var_20 = arg2;
    int32_t var_24 = arg1;
    int32_t r4 = 0;
    int32_t r6 = arg1 * 0x38;
    int32_t r7 = arg1 << 4;
    
    for (int32_t i = 0; i < 0xfa; i += 1)
    {
        int32_t r0_3 = arg3[i];
        
        if (r0_3 > r6 && r0_3 > 0x140)
            r4 += r0_3 - r7;
        
        if (r0_3 < 0 - r6 && r0_3 < 0xfffffec0)
        {
            int32_t r5_3 = r0_3 - r7;
            
            if (r5_3 <= 0)
                r5_3 = r7 - r0_3;
            
            r4 += r5_3;
        }
    }
    
    int32_t r3_2 = 0;
    int32_t r0_5 = arg2 * 0x38;
    int32_t r6_1 = arg2 << 4;
    
    for (int32_t i_1 = 0; i_1 < 0xfa; i_1 += 1)
    {
        int32_t r2_3 = arg4[i_1];
        
        if (r2_3 > r0_5 && r2_3 > 0x140)
            r3_2 += r2_3 - r6_1;
        
        if (r2_3 < 0 - r0_5 && r2_3 < 0xfffffec0)
        {
            int32_t r7_3 = r2_3 - r6_1;
            
            if (r7_3 <= 0)
                r7_3 = r6_1 - r2_3;
            
            r3_2 += r7_3;
        }
    }
    
    int32_t result = 0;
    
    if (0xc8 * arg1 < r4 || r4 > 0x1900)
        result = 1;
    
    if (0x280 * arg2 >= r3_2 && r3_2 <= 0x1900)
        return result;
    
    return 1;
}

int32_t sub_4cf4(int32_t* arg1, int32_t* arg2)
{
    int32_t r5 = 0;
    int32_t r4 = 0x400000;
    int32_t r12 = 0;
    int32_t r3 = 0x400000;
    int32_t r1 = 0;
    int32_t r0 = 0;
    int32_t i = 0;
    int32_t result = 0;
    
    do
    {
        int32_t r7_2 = arg1[i];
        r1 += (0x1493 * (((r7_2 * r7_2) >> 6) - r1)) >> 0x10;  /* "R02_3.00.06_240523" */
        
        if (r1 > r5)
            r5 = r1;
        
        if (r1 < r4 && i > 0x32)  /* "2_V3.0" */
            r4 = r1;
        
        i += 1;
    } while (i < 0xfa);
    
    for (int32_t i_1 = 0; i_1 < 0xfa; i_1 += 1)
    {
        int32_t r2_1 = arg2[i_1];
        r0 += (0x1493 * (((r2_1 * r2_1) >> 6) - r0)) >> 0x10;  /* "R02_3.00.06_240523" */
        
        if (r0 > r12)
            r12 = r0;
        
        if (r0 < r3 && i_1 > 0x32)  /* "2_V3.0" */
            r3 = r0;
    }
    
    if (r4 * 0xf < r5)
        result = 1;
    
    if (r3 * 0xf < r12)
        return 1;
    
    return result;
}

int32_t sub_4d84(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    int32_t* var_24 = arg1;
    int32_t r7 = 0;
    int32_t r4 = 0;
    
    for (int32_t i = 0; i < 0x1f; i += 1)  /* "523" */
    {
        int32_t r0_3 = 0xff7feb2c(arg1[i] << 1, 0xfa);
        r7 += r0_3 * r0_3;
    }
    
    uint32_t r7_1 = sub_5186(r7);
    
    for (int32_t i_1 = 0; i_1 < arg3; i_1 += 1)
    {
        int32_t r0_14 = 0xff7feb2c(*(&arg1[arg2[i_1]] - 4) << 1, 0xfa);
        r4 += r0_14 * r0_14;
    }
    
    for (int32_t i_2 = 0; i_2 < arg5; i_2 += 1)
    {
        int32_t r0_24 = 0xff7feb2c(*(&arg1[arg4[i_2]] - 4) << 1, 0xfa);
        r4 += r0_24 * r0_24;
    }
    
    uint32_t r0_28 = sub_5186(r4);
    
    if (r7_1 <= 0)
        r7_1 = 1;
    
    if (r0_28 <= 0)
        r0_28 = 1;
    
    return 0xff7feb2c(r0_28 << 0xa, r7_1 << 2);
}

uint32_t sub_4e1c(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t arg6, uint32_t* arg7, uint32_t* arg8)
{
    int32_t* var_1c = arg3;
    int32_t var_24 = arg1;
    int32_t r4 = 0;
    
    if (arg6 <= 0)
        arg6 = 1;
    
    int32_t i = 0;
    
    for (int32_t r7 = *arg3; i < r7; i += 1)
    {
        int32_t r0_8 = 0xff7feb2c(*((arg2[i] << 2) + arg1 - 4) << 1, arg6);
        r4 += r0_8 * r0_8;
    }
    
    uint32_t result = sub_5186(r4);
    int32_t i_1 = 0;
    
    for (int32_t r7_1 = *arg5; i_1 < r7_1; i_1 += 1)
    {
        int32_t r0_19 = 0xff7feb2c(*((arg4[i_1] << 2) + arg1 - 4) << 1, arg6);
        r4 += r0_19 * r0_19;
    }
    
    *arg7 = sub_5186(r4);
    *arg8 = result;
    return result;
}

int32_t sub_4e98(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5, int32_t* arg6)
{
    int32_t* var_18 = arg4;
    int32_t* var_1c = arg3;
    int32_t* var_24 = arg1;
    int32_t r5 = *arg1;
    int32_t r0 = arg1[1];
    *arg3 = r5;
    int32_t r0_2 = *arg4 + 1;
    *arg4 = r0_2;
    void* r7 = &arg2[r5];
    int32_t r0_6 = *(r7 - 4);
    int32_t r5_4;
    
    if (r5 + 1 > 0x1f)  /* "523" */
        r5_4 = 0xffffffff;
    else
        r5_4 = arg2[r5];
    
    int32_t r5_7;
    
    if (r5 + 2 > 0x1f)  /* "523" */
        r5_7 = 0xffffffff;
    else
        r5_7 = *(r7 + 4);
    
    int32_t r5_11;
    
    if (r5 - 1 < 1)
        r5_11 = 0xffffffff;
    else
        r5_11 = *(r7 - 8);
    
    int32_t r6_4;
    
    if (r5 - 2 < 1)
        r6_4 = 0xffffffff;
    else
        r6_4 = *(r7 - 0xc);
    
    int32_t r6_5 = r6_4 << 1;
    
    if (r6_5 >= r0_6 || r6_4 == 0xffffffff || r5_11 << 1 >= r0_6 || r5_11 == 0xffffffff
        || r5_4 << 1 >= r0_6 || r5_4 == 0xffffffff || r5_7 << 1 >= r0_6 || r5_7 == 0xffffffff)
    {
        int32_t r6_18 = r5_11 << 1;
        
        if (r6_18 >= r0_6 && r5_11 != 0xffffffff)
        {
            arg3[r0_2] = r5 - 1;
            *arg4 += 1;
        }
        
        int32_t r6_24 = r5_4 << 1;
        
        if (r6_24 >= r0_6 && r5_4 != 0xffffffff)
        {
            arg3[*arg4] = r5 + 1;
            *arg4 += 1;
        }
        
        if (r6_5 >= r0_6 && r6_4 != 0xffffffff && r6_18 < r0_6 && r5_11 != 0xffffffff)
        {
            arg3[*arg4] = r5 - 2;
            int32_t r5_14 = *arg4 + 1;
            *arg4 = r5_14;
            arg3[r5_14] = r5 - 1;
            *arg4 += 1;
        }
        else if (r6_5 >= r0_6 && r6_4 != 0xffffffff && r6_18 >= r0_6 && r5_11 != 0xffffffff)
        {
            arg3[*arg4] = r5 - 2;
            *arg4 += 1;
        }
        
        int32_t r5_21 = r5_7 << 1;
        
        if (r5_21 >= r0_6 && r5_7 != 0xffffffff && r6_24 < r0_6 && r5_4 != 0xffffffff)
        {
            arg3[*arg4] = r5 + 1;
            int32_t r0_9 = *arg4 + 1;
            *arg4 = r0_9;
            arg3[r0_9] = r5 + 2;
            *arg4 += 1;
        }
        else if (r5_21 >= r0_6 && r5_7 != 0xffffffff && r6_24 >= r0_6 && r5_4 != 0xffffffff)
        {
            arg3[*arg4] = r5 + 2;
            *arg4 += 1;
        }
    }
    
    *arg5 = r0;
    int32_t r0_18 = *arg6 + 1;
    *arg6 = r0_18;
    void* r6_49 = &arg2[r0];
    int32_t result = *(r6_49 - 4);
    int32_t r3_2;
    
    if (r0 - 2 < 1)
        r3_2 = 0xffffffff;
    else
        r3_2 = *(r6_49 - 0xc);
    
    int32_t r3_5;
    
    if (r0 - 1 < 1)
        r3_5 = 0xffffffff;
    else
        r3_5 = *(r6_49 - 8);
    
    int32_t r2_5;
    
    if (r0 + 1 > 0x1f)  /* "523" */
        r2_5 = 0xffffffff;
    else
        r2_5 = arg2[r0];
    
    int32_t r5_33;
    
    if (r0 + 2 > 0x1f)  /* "523" */
        r5_33 = 0xffffffff;
    else
        r5_33 = *(r6_49 + 4);
    
    int32_t r6_51 = r3_2 << 1;
    
    if (r6_51 >= result || r3_2 == 0xffffffff || r3_5 << 1 >= result || r3_5 == 0xffffffff
        || r2_5 << 1 >= result || r2_5 == 0xffffffff || r5_33 << 1 >= result
        || r5_33 == 0xffffffff)
    {
        int32_t r6_60 = r3_5 << 1;
        
        if (r6_60 >= result && r3_5 != 0xffffffff)
        {
            arg5[r0_18] = r0 - 1;
            *arg6 += 1;
        }
        
        int32_t r7_10 = r2_5 << 1;
        
        if (r7_10 >= result && r2_5 != 0xffffffff)
        {
            arg5[*arg6] = r0 + 1;
            *arg6 += 1;
        }
        
        if (r6_51 >= result && r3_2 != 0xffffffff && r6_60 < result && r3_5 != 0xffffffff)
        {
            arg5[*arg6] = r0 - 2;
            int32_t r3_8 = *arg6 + 1;
            *arg6 = r3_8;
            arg5[r3_8] = r0 - 1;
            *arg6 += 1;
        }
        else if (r6_51 >= result && r3_2 != 0xffffffff && r6_60 >= result && r3_5 != 0xffffffff)
        {
            arg5[*arg6] = r0 - 2;
            *arg6 += 1;
        }
        
        int32_t r3_14 = r5_33 << 1;
        
        if (r3_14 >= result && r5_33 != 0xffffffff && r7_10 < result && r2_5 != 0xffffffff)
        {
            arg5[*arg6] = r0 + 1;
            int32_t r0_23 = *arg6 + 1;
            *arg6 = r0_23;
            arg5[r0_23] = r0 + 2;
            result = *arg6 + 1;
            *arg6 = result;
        }
        else if (r3_14 >= result && r5_33 != 0xffffffff && r7_10 >= result && r2_5 != 0xffffffff)
        {
            arg5[*arg6] = r0 + 2;
            result = *arg6 + 1;
            *arg6 = result;
        }
    }
    
    return result;
}

uint32_t sub_5186(int32_t arg1) __pure
{
    int32_t r2 = 0;
    int32_t r1 = 0;
    
    for (int32_t i = 0; i < 0x10; i += 1)  /* "R02_3.00.06_240523" */
    {
        r1 <<= 1;
        r2 = (r2 << 2) + (arg1 >> 0x1e);  /* "0523" */
        arg1 <<= 2;
        
        if ((r1 << 1) + 1 <= r2)
        {
            r2 -= (r1 << 1) + 1;
            r1 += 1;
        }
    }
    
    return r1;
}

int32_t sub_51ae(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_1c = arg3;
    int32_t var_24 = arg1;
    
    if (arg2 < 2 || !arg3)
        return arg2;
    
    int32_t var_2c_1 = 0;
    int32_t r7_1 = 0xffffffff;
    void var_b0;
    void* var_38_1 = &var_b0;
    
    while (true)
    {
        int32_t r0_13 = *(var_38_1 + 0x7c);
        
        if (r0_13 <= var_2c_1)
            break;
        
        if (arg4(arg3 * var_2c_1 + arg1, arg3 * r0_13 + arg1) > 0)
        {
            int32_t i = arg3;
            char* r1_6 = arg3 * var_2c_1 + arg1;
            char* r0_11 = arg3 * *(var_38_1 + 0x7c) + arg1;
            
            for (; i; i -= 1)
            {
                char r3 = *r1_6;
                *r1_6 = *r0_11;
                *r0_11 = r3;
                r0_11 = &r0_11[1];
                r1_6 = &r1_6[1];
            }
            
            r7_1 = 0 - r7_1;
        }
        else
        {
            int32_t r0_5 = r7_1 << 2;
            void var_30;
            *(&var_30 + r0_5) += r7_1;
        }
    }
    
    sub_51ae(arg1, var_2c_1, arg3, arg4, var_38_1, arg2 - 1);
    int32_t r0_16 = *(var_38_1 + 0x7c);
    return sub_51ae(arg3 * (r0_16 + 1) + arg1, arg2 - r0_16 - 1, arg3, arg4);
}

void* sub_5250(int32_t* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    void* result = arg4;
    int32_t r5 = 0x3c * (0x3c * (0x18 * (arg1[3] - 1) + arg1[2]) + arg1[1]) + *arg1;
        /* ".06_240523" */
    int32_t r0_11;
    int32_t r1_4;
    r0_11 = 0xff7feb2c(0xc * arg1[5] + arg1[4] - 0x348, 0x30);  /* "R02_V3.0" */
    void* result_1 = 0x7861f80 * r0_11 + r5;
    result = result_1;
    
    if (r1_4 >= 0x1a)  /* "6_240523" */
        result = result_1 + &data_15180;
    
    int32_t r0_14;
    int32_t i;
    r0_14 = 0xff7feb2c(r1_4, 0xc);
    result += 0x1e13380 * r0_14;
    
    while (i > 0)
    {
        i -= 1;
        result += &data_15180 * *(0x81f8b8 + i);
    }
    
    sub_5990(&result, arg1);
    return result;
}

void* sub_52dc(char* arg1)
{
    uint32_t i;
    
    do
    {
        i = *arg1;
        arg1 = &arg1[1];
    } while (i);
    return arg1 - &arg1[1];
}

int32_t sub_52ea(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r1 = 3;
    char* r0 = arg1 + 4;
    int32_t temp0_1;
    
    do
    {
        r0 -= 1;
        arg3 = arg3 << 8 | *r0;
        temp0_1 = r1;
        r1 -= 1;
    } while (temp0_1 - 1 >= 0);
    return arg3;
}

int32_t sub_52fe(int32_t arg1, int32_t arg2) __pure
{
    int32_t result = arg1 << 1;
    
    if (!result)
        return result;
    
    int32_t r2_1 = arg2 << 1;
    
    if (!r2_1)
        return 0;
    
    uint32_t r0_1 = result << 8 >> 9;
    uint32_t r2_3 = r2_1 << 8 >> 9;
    uint32_t r5 = (r0_1 + r2_3) << 7;
    int32_t r4_4 = r2_3 * r0_1 + (r5 << 0x10);  /* "R02_3.00.06_240523" */
    uint32_t r0_4 = r4_4 >> 0x10;  /* "R02_3.00.06_240523" */
    int32_t r2_10 = (((~r0_4 + (r2_3 >> 8) * (r0_1 >> 8) + r5) >> 0x10) + 0x4001) << 0x10;
        /* "R02_3.00.06_240523" */
    int32_t r1_2 = (result >> 0x18) + (r2_1 >> 0x18) - 0x7f;  /* ".06_240523" */
    
    if (r4_4 << 0x10)  /* "R02_3.00.06_240523" */
        r2_10 += 1;
    
    int32_t r0_5 = r0_4 | r2_10;
    
    if (r0_5 >= 0)
    {
        r0_5 <<= 1;
        r1_2 -= 1;
    }
    
    uint32_t r0_9 = ((r1_2 << 0x18) + (r0_5 >> 7) + 1) >> 1;  /* ".06_240523" */
    
    if (r0_5 == 0x80)
        r0_9 = r0_9 >> 1 << 1;
    
    if (r1_2 < 0)
        r0_9 = 0;
    
    return r0_9 | (arg1 ^ arg2) >> 0x1f << 0x1f;  /* "523" */
}

int32_t sub_5378(int32_t arg1, int32_t arg2)
{
    uint32_t r0_1 = arg1 << 1 >> 1;
    uint32_t r2_3 = arg2 << 1 >> 1;
    
    if (r0_1 && r2_3)
    {
        uint32_t i = 0x800000;
        int32_t r1_2 = (r0_1 << 9 >> 9) + 0x800000;
        int32_t r4_3 = (r0_1 >> 0x17) - (r2_3 >> 0x17) + 0x7d;  /* "0.06_240523" */
        
        if (r1_2 < (r2_3 << 9 >> 9) + 0x800000)
            r1_2 <<= 1;
        else
            r4_3 += 1;
        
        if (r4_3 >= 0)
        {
            int32_t r3_2 = 0;
            
            do
            {
                if (r1_2 >= (r2_3 << 9 >> 9) + 0x800000)
                {
                    r1_2 -= (r2_3 << 9 >> 9) + 0x800000;
                    r3_2 |= i;
                }
                
                i u>>= 1;
                r1_2 <<= 1;
            } while (i);
            
            if (r1_2)
            {
                if (r1_2 == (r2_3 << 9 >> 9) + 0x800000)
                    r1_2 = 0x80000000;
                else if (r1_2 >= (r2_3 << 9 >> 9) + 0x800000)
                    r1_2 = 0xfffffffe;
                else
                    r1_2 = 1;
            }
            
            return sub_5a04((r4_3 << 0x17) + r3_2 + ((arg1 ^ arg2) >> 0x1f << 0x1f), r1_2);
                /* "0.06_240523" */  /* "523" */
        }
    }
    
    return 0;
}

void sub_53f4(int32_t arg1, int32_t arg2) __pure
{
    return;
}

int32_t sub_540c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t result = arg1;
    uint32_t r0_2 = (arg2 ^ arg4) >> 0x1f;  /* "523" */
    int32_t r6 = arg2;
    uint32_t r0_4 = arg2 << 1 >> 1;
    uint32_t r1_1 = arg4 << 1 >> 1;
    bool c = result >= arg3;
    bool cond:1 = ~c;
    
    if (r0_4 - r1_1 >= r0_4 && (r0_4 - r1_1 != r0_4 || !c))
    {
        int32_t result_1 = result;
        int32_t r1_2 = r6;
        r6 = arg4;
        result = arg3;
        arg4 = r1_2;
        arg3 = result_1;
    }
    
    if (!(arg4 << 1 >> 1 | arg3))
        return result;
    
    uint32_t r0_9 = r6 >> 0x14;  /* "3.00.06_240523" */
    uint32_t r0_11 = r0_9 << 0x15 >> 0x15;  /* ".00.06_240523" */
    uint32_t r0_12 = r0_11 - (arg4 << 1 >> 0x15);  /* ".00.06_240523" */
    uint32_t r0_23;
    uint32_t r1_11;
    int32_t r2_18;
    uint32_t r3_1;
    
    if (r0_12 >= 0x40)
    {
        uint32_t r0_36 = r0_2 << 1;
        r2_18 = 1 - r0_36;
        r3_1 = 0 - (r0_36 >> 0x1f);  /* "523" */
        r0_23 = result - r0_2;
        r1_11 = r6 - (r0_2 >> 0x1f);  /* "523" */
    }
    else
    {
        int32_t var_2c_1 = arg4 << 0xc >> 0xc | 0x100000;
        int32_t var_30_1 = arg3;
        
        if (r0_2)
        {
            var_30_1 = 0 - arg3;
            var_2c_1 = 0 - var_2c_1;
        }
        
        int32_t r0_20;
        uint32_t r1_8;
        r0_20 = 0xff7fec4c(var_30_1, var_2c_1, 0x40 - r0_12);
        int32_t r5_1 = r0_20;
        uint32_t r4_1 = r1_8;
        int32_t r0_22;
        int32_t r1_10;
        r0_22 = sub_5958(var_30_1, var_2c_1, r0_12);
        r0_23 = r0_22 + result;
        r1_11 = r1_10 + r6;
        
        if ((r1_11 >> 0x14 ^ r0_9) | r0_9 >> 0x1f)  /* "3.00.06_240523" */  /* "523" */
        {
            if (!r0_2)
            {
                r5_1 = r5_1 >> 1 | r4_1 << 0x1f;  /* "523" */
                r4_1 = r4_1 >> 1 | r0_23 << 0x1f;  /* "523" */
                uint32_t r2_17 = r0_9 << 0x14;  /* "3.00.06_240523" */
                int32_t r1_17 = r1_11 - r2_17 + 0x100000;
                int32_t r0_34 = r0_23 >> 1 | r1_17 << 0x1f;  /* "523" */
                r0_23 = r0_34;
                r1_11 = (r1_17 >> 1) + r2_17;
            }
            else
            {
                if (r0_12 <= 1)
                {
                    uint32_t r2_8 = r0_9 << 0x14;  /* "3.00.06_240523" */
                    return sub_5aa0(r0_23, r1_11 - r2_8 + 0x100000, r5_1, r4_1, 0, 
                        r2_8 >> 0x1f << 0x1f, r0_11);  /* "523" */
                }
                
                uint32_t r6_5 = r0_9 << 0x14;  /* "3.00.06_240523" */
                int32_t r7_3 = r1_11 - r6_5 + 0x100000;
                int32_t r0_29 = r0_23 * 2;
                r1_11 = r6_5 - 0x200000 + r7_3 + r7_3;
                r0_23 = r0_29 | r4_1 >> 0x1f;  /* "523" */
                int32_t temp14_1 = r5_1;
                int32_t temp15_1 = r5_1;
                r5_1 *= 2;
                r4_1 = r4_1 + r4_1;
            }
        }
        
        r2_18 = r5_1;
        r3_1 = r4_1;
    }
    
    return sub_5a86(r0_23, r1_11, r2_18, r3_1);
}

int32_t sub_5556(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_540c(arg1, arg2, arg3, arg4 ^ 0x80000000);
}

int32_t sub_5562(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_540c(arg1, arg2 ^ 0x80000000, arg3, arg4);
}

int32_t sub_5574(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r4;
    int32_t var_14 = r4;
    int32_t var_18 = r4;
    int32_t var_20 = arg3;
    int32_t var_28 = arg1;
    uint32_t r1_3 = arg2 << 1 >> 1;
    uint32_t r1_6 = arg4 << 1 >> 1;
    
    if (var_28 | r1_3 && var_20 | r1_6)
    {
        int32_t var_24_2 = r1_3 << 0xc >> 0xc | 0x100000;
        int32_t var_1c_2 = r1_6 << 0xc >> 0xc | 0x100000;
        int32_t r2_1 = 0;
        uint32_t r4_1 = 0;
        int32_t r0_21 = 0;
        
        while (true)
        {
            int32_t r3 = r0_21;
            
            while (true)
            {
                int32_t r12_1 = r3;
                int32_t r1_11 = r0_21 - r3;
                
                while (r1_11 <= r12_1)
                {
                    int32_t r5_2 = *(&var_20 + (r1_11 << 1)) * *(&var_28 + (r3 << 1));
                    int32_t temp0_1 = r2_1;
                    r2_1 += r5_2;
                    r4_1 = r4_1 + 0;
                    r1_11 += 1;
                    r3 -= 1;
                }
                
                int32_t var_38;
                *(&var_38 + (r0_21 << 1)) = r2_1;
                r2_1 = r2_1 >> 0x10 | r4_1 << 0x10;  /* "R02_3.00.06_240523" */
                r4_1 u>>= 0x10;  /* "R02_3.00.06_240523" */
                r0_21 += 1;
                int32_t var_34;
                uint32_t var_30;
                uint32_t var_2c;
                
                if (r0_21 >= 8)
                    return sub_5aa0(var_30, var_2c, var_38, var_34, 0, 
                        (arg2 ^ arg4) >> 0x1f << 0x1f, 
                        (r1_3 << 1 >> 0x15) + (r1_6 << 1 >> 0x15) - 0x3f3);
                        /* ".00.06_240523" */  /* "523" */
                
                if (r0_21 < 3)
                    break;
                
                r3 = 3;
            }
        }
    }
    
    return 0;
}

int32_t sub_5644(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r4_5 = arg2 << 1 >> 1;
    uint32_t r1_1 = arg4 << 1 >> 1;
    
    if (arg1 | r4_5 && arg3 | r1_1)
    {
        int32_t r2_6 = arg1;
        int32_t r3_2 = r4_5 << 0xc >> 0xc | 0x100000;
        int32_t r6_3 = r1_1 << 0xc >> 0xc | 0x100000;
        int32_t var_28_1 = (r4_5 << 1 >> 0x15) - (r1_1 << 1 >> 0x15) + 0x3fd;  /* ".00.06_240523" */
        bool c_1 = r2_6 >= arg3;
        bool cond:0_1 = ~c_1;
        int32_t r0_4;
        
        if (r3_2 - r6_3 >= r3_2 && (r3_2 - r6_3 != r3_2 || !c_1))
        {
            int32_t temp1_1 = r2_6;
            int32_t temp2_1 = r2_6;
            r2_6 *= 2;
            r0_4 = var_28_1;
            r3_2 = r3_2 + r3_2;
        }
        else
        {
            r0_4 = var_28_1 + 1;
            var_28_1 = r0_4;
        }
        
        if (r0_4 >= 0)
        {
            int32_t r0_6 = 0;
            uint32_t r1_4 = 0x100000;
            int32_t r7_2 = 0;
            int32_t lr_1 = 0;
            
            while (r0_6 | r1_4)
            {
                bool c_4 = r2_6 >= arg3;
                bool cond:1_1 = ~c_4;
                
                if (r3_2 - r6_3 < r3_2 || (r3_2 - r6_3 == r3_2 && c_4))
                {
                    int32_t temp7_1 = r2_6;
                    r2_6 -= arg3;
                    r3_2 = r3_2 - r6_3;
                    r7_2 |= r0_6;
                    lr_1 |= r1_4;
                }
                
                int32_t r5_5 = r1_4 << 0x1f;  /* "523" */
                r1_4 u>>= 1;
                r0_6 = r0_6 >> 1 | r5_5;
                int32_t temp5_1 = r2_6;
                int32_t temp6_1 = r2_6;
                r2_6 *= 2;
                r3_2 = r3_2 + r3_2;
            }
            
            if (r2_6 | r3_2)
            {
                if (!((arg3 ^ r2_6) | (r3_2 ^ r6_3)))
                {
                    r2_6 = 0;
                    r3_2 = 0x80000000;
                }
                else
                {
                    bool c_8 = r2_6 >= arg3;
                    bool cond:2_1 = ~c_8;
                    
                    if (r3_2 - r6_3 < r3_2 || (r3_2 - r6_3 == r3_2 && c_8))
                    {
                        r2_6 = 0xfffffffe;
                        r3_2 = 0xffffffff;
                    }
                    else
                    {
                        r2_6 = 1;
                        r3_2 = 0;
                    }
                }
            }
            
            return sub_5a86(r7_2, (var_28_1 << 0x14) + lr_1 + ((arg2 ^ arg4) >> 0x1f << 0x1f), 
                r2_6, r3_2);  /* "3.00.06_240523" */  /* "523" */
        }
    }
    
    return 0;
}

void sub_5734(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    if (arg2 << 1 >> 1 | arg1)
        uint32_t r4_1 = arg2 << 1 >> 0x15;  /* ".00.06_240523" */
}

int32_t sub_5760(int32_t arg1)
{
    uint32_t r1 = arg1 >> 0x1f;  /* "523" */
    return sub_5a14((arg1 ^ arg1 >> 0x1f) + r1, 0, r1 << 0x1f, 0x96);  /* "523" */
}

int32_t sub_5776(int32_t arg1)
{
    return sub_5a14(arg1, 0, 0, 0x96);
}

int32_t sub_5784(int32_t arg1)
{
    int32_t r3;
    int32_t var_8 = r3;
    int32_t r2;
    int32_t var_c_1 = r2;
    int32_t r1;
    int32_t var_10 = r1;
    uint32_t r1_1 = arg1 >> 0x1f;  /* "523" */
    return sub_5aa0((arg1 ^ arg1 >> 0x1f) + r1_1, 0, 0, 0, 0, r1_1 << 0x1f, 0x433);  /* "523" */
}

int32_t sub_57ac(uint32_t arg1)
{
    int32_t r3;
    int32_t var_8 = r3;
    int32_t r2;
    int32_t var_c = r2;
    int32_t r1;
    int32_t var_10 = r1;
    return sub_5aa0(arg1, 0, 0, 0, 0, 0, 0x433);
}

uint32_t sub_57c8(int32_t arg1) __pure
{
    uint32_t r1_1 = arg1 << 1 >> 0x18;  /* ".06_240523" */
    
    if (r1_1 < 0x7f)
        return 0;
    
    uint32_t result;
    
    result = r1_1 > 0x96 ? ((arg1 << 9 >> 9) + 0x800000) << (r1_1 - 0x96)
        : ((arg1 << 9 >> 9) + 0x800000) >> (0x96 - r1_1);
    
    if (!(arg1 >> 0x1f << 0x1f))  /* "523" */
        return result;
    
    return 0 - result;
}

int32_t sub_57fa(int32_t arg1) __pure
{
    uint32_t r1 = arg1 << 1 >> 0x18;  /* ".06_240523" */
    
    if (r1 < 0x7f)
        return 0;
    
    if (r1 > 0x96)
        return ((arg1 << 9 >> 9) + 0x800000) << (r1 - 0x96);
    
    return ((arg1 << 9 >> 9) + 0x800000) >> (0x96 - r1);
}

int32_t sub_5824(int32_t arg1, int32_t arg2)
{
    uint32_t r2_1 = arg2 << 1 >> 0x15;  /* ".00.06_240523" */
    
    if (r2_1 < 0x3ff)
        return 0;
    
    int32_t result;
    
    if (r2_1 > 0x433)
        result = arg1 << (r2_1 - 0x433);
    else
        result = 0xff7fec6c(arg1, arg2 << 0xc >> 0xc | 0x100000, 0x433 - r2_1, 0x433);
    
    if (!(arg2 >> 0x1f << 0x1f))  /* "523" */
        return result;
    
    return 0 - result;
}

int32_t sub_586c(int32_t arg1, int32_t arg2)
{
    uint32_t r2 = arg2 << 1 >> 0x15;  /* ".00.06_240523" */
    
    if (r2 < 0x3ff)
        return 0;
    
    if (r2 > 0x433)
        return arg1 << (r2 - 0x433);
    
    return 0xff7fec6c(arg1, arg2 << 0xc >> 0xc | 0x100000, 0x433 - r2, 0x433);
}

uint32_t sub_58a8(int32_t arg1) __pure
{
    uint32_t r0_1 = arg1 << 1 >> 1;
    
    if (!r0_1)
        return 0;
    
    return r0_1 << 9 >> 9 << 0x1d;  /* "40523" */
}

void sub_58d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    return;
}

int32_t sub_58f8(int32_t arg1, int32_t arg2)
{
    uint32_t r1_1 = arg2 << 1 >> 1;
    
    if (arg1 | r1_1 && (r1_1 >> 0x14) - 0x380 > 0)  /* "3.00.06_240523" */
        return sub_5a04(
            (arg1 >> 0x1d | r1_1 << 0xc >> 0xc << 3) + (arg2 >> 0x1f << 0x1f)
                + (((r1_1 >> 0x14) - 0x380) << 0x17), 
            arg1 << 3);  /* "3.00.06_240523" */  /* "0.06_240523" */  /* "40523" */  /* "523" */
    
    return 0;
}

void sub_5930(int32_t arg1, int32_t arg2) __pure
{
    return;
}

void sub_5944(int32_t arg1, int32_t arg2) __pure
{
    return;
}

int32_t sub_5958(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    if (arg3 < 0x20)  /* "23" */
        return arg1 >> arg3 | arg2 << (0x20 - arg3);  /* "23" */
    
    return arg2 >> (arg3 - 0x20);  /* "23" */
}

int32_t* sub_5980(int32_t* arg1)
{
    return sub_5990(arg1, 0x10ae74);
}

int32_t* sub_5990(int32_t* arg1, int32_t* arg2)
{
    int32_t r0_1;
    int32_t r1;
    r0_1 = 0xff7feb00(*arg1, 0x3c);
    *arg2 = r1;
    int32_t r0_2;
    int32_t r1_1;
    r0_2 = 0xff7feb00(r0_1, 0x3c);
    arg2[1] = r1_1;
    int32_t r0_3;
    int32_t r1_2;
    r0_3 = 0xff7feb00(r0_2, 0x18);  /* ".06_240523" */
    arg2[2] = r1_2;
    arg2[6] = 0xff7feb00(r0_3 + 4, 7);
    int32_t r0_6;
    int32_t r1_5;
    r0_6 = 0xff7feb00((r0_3 << 2) + 0xb6c, 0x5b5);
    uint32_t r0_7 = r1_5 >> 2;
    arg2[5] = r0_6 + 0x44;
    arg2[7] = r0_7;
    
    if (r0_7 >= 0x3b && (r0_6 + 0x44) << 0x1e)  /* "0523" */
        r0_7 += 1;
    
    int32_t r2_2 = 0;
    arg2[4] = 0;
    
    while (true)
    {
        uint32_t r1_7 = *(0x81f8d0 + r2_2);
        
        if (r1_7 > r0_7)
            break;
        
        r0_7 -= r1_7;
        r2_2 += 1;
        arg2[4] = r2_2;
    }
    
    arg2[3] = r0_7 + 1;
    return arg2;
}

void sub_5a04(uint32_t arg1, int32_t arg2) __pure
{
    return;
}

int32_t sub_5a14(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    int32_t r4 = 0;
    
    if (arg1 >> 0x10)  /* "R02_3.00.06_240523" */
        goto label_5a2a;
    
    r4 = 0x10;  /* "R02_3.00.06_240523" */
    arg1 <<= 0x10;  /* "R02_3.00.06_240523" */
    
    if (arg1)
        goto label_5a2a;
    
    if (arg2)
    {
        r4 = 0x11;  /* "02_3.00.06_240523" */
    label_5a2a:
        
        if (!(arg1 >> 0x18))  /* ".06_240523" */
        {
            arg1 <<= 8;
            r4 += 8;
        }
        
        if (!(arg1 >> 0x1c))  /* "240523" */
        {
            arg1 <<= 4;
            r4 += 4;
        }
        
        if (!(arg1 >> 0x1e))  /* "0523" */
        {
            arg1 <<= 2;
            r4 += 2;
        }
        
        if (arg1 >= 0)
        {
            arg1 <<= 1;
            r4 += 1;
        }
        
        if (arg2)
        {
            int32_t r1 = arg2 << r4;
            
            if (r1)
                r1 = 1;
            
            arg1 |= r1 | arg2 >> (0x20 - r4);  /* "23" */
        }
        
        int32_t r1_2 = arg1 << 0x18;  /* ".06_240523" */
        int32_t r3 = arg4 - r4;
        
        if (r3 + 7 < 0)
            return 0;
        
        arg1 = ((r3 + 7) << 0x17) + (arg1 >> 8) + arg3;  /* "0.06_240523" */
        
        if (r1_2 < 0)
        {
            arg1 += 1;
            
            if (!(r1_2 << 1))
                return arg1 >> 1 << 1;
        }
    }
    
    return arg1;
}

void sub_5a86(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    return;
}

int32_t sub_5aa0(uint32_t arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    int32_t r4;
    int32_t var_14 = r4;
    int32_t var_18 = r4;
    uint32_t var_24 = arg2;
    uint32_t var_28 = arg1;
    int32_t r0_1;
    
    if (!arg2)
        r0_1 = sub_7848(arg1) + 0x20;  /* "23" */
    else
        r0_1 = sub_7848(arg2);
    
    int32_t result_2;
    int32_t r1_1;
    result_2 = 0xff7fec4c(arg1, arg2, r0_1);
    int32_t result_1 = result_2;
    int32_t r7 = r1_1;
    int32_t result;
    
    if (!(result_2 | arg3 | r1_1 | arg4))
        result = result_1;
    else
    {
        if (arg3 | arg4)
        {
            int32_t r0_10;
            int32_t r1_4;
            r0_10 = 0xff7fec6c(arg3, arg4, 0x40 - r0_1);
            int32_t r0_12;
            int32_t r1_6;
            r0_12 = 0xff7fec4c(arg3, arg4, r0_1);
            int32_t r0_14;
            
            r0_14 = !(r0_12 | r1_6) ? 0 : 1;
            
            result_1 |= r0_10 | r0_14;
            r7 |= r1_4 | r0_14 >> 0x1f;  /* "523" */
        }
        
        int32_t r0_16 = arg7 - r0_1;
        int32_t r4_4 = result_1 >> 0xb | r7 << 0x15;  /* ".00.06_240523" */
        
        if (r0_16 + 0xa >= 0)
            return sub_5a86(r4_4 + arg5, ((r0_16 + 0xa) << 0x14) + (r7 >> 0xb) + arg6, 0, 
                result_1 << 0x15);  /* "3.00.06_240523" */  /* ".00.06_240523" */
        
        result = 0;
    }
    
    return result;
}

int32_t sub_5b44(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r2;
    int32_t var_1c_1 = r2;
    int32_t var_20 = arg2;
    bool cond:0 = 0 < arg1;
    
    if (0 - arg2 < 0 == 0 - arg2 < 0)
        return 0;
    
    uint32_t r2_3 = arg2 << 1 >> 0x15;  /* ".00.06_240523" */
    int32_t r5_3 = arg2 << 0xc >> 0xc | 0x100000;
    
    if (!(r2_3 << 0x1f))  /* "523" */
    {
        int32_t temp2_1 = arg1;
        int32_t temp3_1 = arg1;
        arg1 *= 2;
        r5_3 = r5_3 + r5_3;
        r2_3 -= 1;
    }
    
    uint32_t r7_1 = 0;
    int32_t r4_1 = arg1;
    int32_t r6_1 = 0;
    int32_t i = 0;
    int32_t i_1 = 0;
    
    do
    {
        int32_t r0_1;
        int32_t r1_6;
        r0_1 = 0xff7fec6c(0, 0x100000, i);
        uint32_t r3_1 = r0_1 + r7_1;
        int32_t r1_7 = r1_6 + r6_1;
        uint32_t r0_2 = r7_1 + r3_1;
        int32_t r2_6 = r6_1 + r1_7;
        bool c_4 = r4_1 >= r0_2;
        bool cond:1_1 = ~c_4;
        
        if (r5_3 - r2_6 < r5_3 || (r5_3 - r2_6 == r5_3 && c_4))
        {
            int32_t temp8_1 = r4_1;
            r4_1 -= r0_2;
            r5_3 = r5_3 - r2_6;
            r6_1 = r1_7;
            r7_1 = r3_1;
        }
        
        int32_t temp6_1 = r4_1;
        int32_t temp7_1 = r4_1;
        r4_1 *= 2;
        r5_3 = r5_3 + r5_3;
        i = i_1 + 1;
        i_1 = i;
    } while (i <= 0x34);  /* "V3.0" */
    
    int32_t r0_8 = r6_1 + r6_1;
    bool c_9 = r7_1 * 2 >= r4_1;
    bool cond:2_1 = ~c_9;
    int32_t r2_7;
    int32_t r3_2;
    
    if (r0_8 - r5_3 < r0_8 || (r0_8 - r5_3 == r0_8 && c_9))
    {
        r2_7 = 0;
        r3_2 = 0;
    }
    else
    {
        r2_7 = 0xffffffff;
        r3_2 = 0xffffffff;
    }
    
    return sub_5a86(r7_1, (((r2_3 >> 1) + 0x1ff) << 0x14) + r6_1, r2_7, r3_2);
        /* "3.00.06_240523" */
}

void sub_5be8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    return;
}

int32_t sub_5c10()
{
    for (int32_t* i = 0x81f99c; i < 0x81fa0c; i = &i[4])
        (i[3] | 1)(*i, i[1], i[2]);
    
    *(sub_42e8() + 0x81);
    /* undefined */
}

void sub_5c34() __noreturn
{
    while (true)
        /* nop */
}

uint32_t sub_5c38(void* arg1)
{
    uint32_t result = sub_a144();
    
    if (!result)
    {
        result = *0x1041e0;
        
        if (result == 3)
        {
            uint32_t r0 = *(arg1 + 1);
            
            if (r0 == 4 || r0 == 5)
                sub_16a98(1);
            else if (r0 == 6)
                sub_16a98(0);
            
            return sub_9044(2, 0);
        }
    }
    
    return result;
}

uint32_t sub_5c74()
{
    uint32_t result = *0x105fb5;
    int32_t var_28;
    int32_t var_24;
    
    if (result - 1 <= 0x3b)
    {
        if (!sub_f57c() && *0x105fb5 > 6)
        {
            *0x105faf = 1;
            var_28 = 0;
            var_24 = 0;
            int32_t var_20_1 = 0;
            int32_t var_1c_1 = 0;
            var_28 = 0x69;
            *var_28[1] = *0x105fb3;
            *var_28[2] = 1;
            *var_28[3] = 0;
            *var_1c_1[3] = sub_c410(&var_28, 0xf);
            sub_a800(&var_28);
            *0x105faf = 0;
            uint32_t r0_7;
            
            if (*0x105fb3 == 3)
                r0_7 = 0x20;  /* "23" */
            else
                r0_7 = 1;
            
            sub_f710(r0_7);
            sub_15bb4(0x105fb8);
        }
        
        result = *0x105fb5;
        
        if (result > 0x32)  /* "2_V3.0" */
        {
            result = *0x105faf;
            
            if (result != 1)
            {
                result = sub_f510();
                
                if (result == 2)
                {
                    var_28 = 0;
                    var_24 = 0;
                    int32_t var_20_2 = 0;
                    int32_t var_1c_2 = 0;
                    var_28 = 0x69;
                    uint32_t r0_8 = *0x105fb3;
                    *var_28[1] = r0_8;
                    *var_28[2] = 0;
                    char r0_12;
                    char r1_1;
                    
                    if (r0_8 == 3)
                    {
                        uint32_t r0_11 = sub_f554();
                        r1_1 = &var_28;
                        *var_28[3] = r0_11;
                        var_24 = 1;
                        
                        if (r0_11 >= 0x5a)
                            goto label_5d5a;
                        
                        r0_12 = 0x5a;
                    label_5d78:
                        *var_28[3] = r0_12;
                    label_5d7a:
                        uint32_t r0_20 = *0x105fb3;
                        
                        if ((r0_20 == 5 || r0_20 == 2) && *0x105fb5 >= 0x33)  /* "_V3.0" */
                        {
                            if (!*0x105fb0)
                            {
                                *0x105fb0 = 1;
                                sub_159c0(*var_28[3], &var_24, &*var_24[1]);
                            }
                            else
                                sub_15174(&var_24, &*var_24[1]);
                        }
                    }
                    else
                    {
                        if (r0_8 == 8)
                        {
                            r1_1 = 0xff7feb2c(0xff7febb4(), 0x14) + 0x1e;
                                /* "3.00.06_240523" */  /* "0523" */
                            *var_28[3] = r1_1;
                        label_5d5a:
                            
                            if (*var_28[3])
                                goto label_5d7a;
                            
                            goto label_5d5e;
                        }
                        
                        char r0_15;
                        
                        if (r0_8 == 9)
                        {
                            r0_15 = sub_e8d0(sub_f51c());
                        label_5d52:
                            r1_1 = &var_28;
                            *var_28[3] = r0_15;
                            goto label_5d5a;
                        }
                        
                        if (r0_8 == 0xa)
                        {
                            r0_15 = sub_f534();
                            goto label_5d52;
                        }
                        
                        uint32_t r0_9 = sub_f51c();
                        r1_1 = &var_28;
                        *var_28[3] = r0_9;
                        
                        if (r0_9 - 0x28 < 0xb5)
                            goto label_5d5a;
                        
                        *var_28[3] = 0;
                    label_5d5e:
                        uint32_t r0_17 = *0x105fb3;
                        
                        if (r0_17 != 0xa)
                        {
                            int32_t r0_18 = 0xff7febb4(r0_17, r1_1);
                            r0_12 = r0_18 - (((r0_18 >> 0x1f >> 0x1e) + r0_18) >> 2 << 2) + 0x5f;
                                /* "0523" */  /* "523" */
                            goto label_5d78;
                        }
                    }
                    *var_1c_2[3] = sub_c410(&var_28, 0xf);
                    return sub_a800(&var_28);
                }
            }
        }
    }
    else if (result >= 0x3b)
    {
        uint32_t r0_28 = *0x105fb3;
        
        if (r0_28 == 0xa)
        {
            var_28 = 0;
            var_24 = 0;
            int32_t var_20_3 = 0;
            int32_t var_1c_3 = 0;
            var_28 = 0x69;
            *var_28[1] = r0_28;
            *var_28[2] = 0;
            *var_28[3] = sub_f534();
            *var_1c_3[3] = sub_c410(&var_28, 0xf);
            sub_a800(&var_28);
            result = sub_f534();
        }
        
        if (r0_28 != 0xa || result)
        {
            *0x105faf = 0;
            uint32_t r0_34;
            
            if (*0x105fb3 == 3)
                r0_34 = 0x20;  /* "23" */
            else
                r0_34 = 1;
            
            sub_f710(r0_34);
            sub_f570();
            return sub_15bb4(0x105fb8);
        }
    }
    return result;
}

uint32_t sub_5e24()
{
    uint32_t r2 = *0x105fb4;
    uint32_t result = 0x16;  /* "00.06_240523" */
    uint32_t r1 = *0x105fb5;
    int32_t var_28;
    
    if (r2 == 1)
    {
        if (r1 - 1 > 0x13)  /* "_3.00.06_240523" */
        {
            *0x105fb5 = 0x16;  /* "00.06_240523" */
            int32_t var_1c_2;
            
            if (!sub_f57c())
            {
                *0x105fc0 = sub_5760(sub_f51c() + 0xff7feb2c(0xff7febb4(), 3) - 1);
                *0x105fad = 1;
                sub_f710(1);
                var_28 = 0;
                int32_t var_24_3 = 0;
                int32_t var_20_3 = 0;
                var_1c_2 = 0;
                var_28 = 0x69;
                *var_28[1] = *0x105fb3;
                *var_28[2] = 1;
                *var_28[3] = sub_57fa(*0x105fc0);
                *var_1c_2[3] = sub_c410(&var_28, 0xf);
                sub_a800(&var_28);
                result = *0x105fae + 1;
                *0x105fae = result;
                
                if (result >= 0x3c)
                {
                    *0x105fae = 0;
                    sub_f710(1);
                    *0x105fb5 = 0;
                    sub_15bb4(0x105fb8);
                    *var_28[2] = 2;
                label_5fbc:
                    *var_1c_2[3] = sub_c410(&var_28, 0xf);
                    return sub_a800(&var_28);
                }
            }
            else
            {
                *0x105fae = 0x38;
                result = *0x105fad;
                
                if (!result)
                {
                    result = *0x105fac + 1;
                    *0x105fac = result;
                    
                    if (result >= 2)
                    {
                        *0x105fac = 0;
                        result = sub_f510();
                        
                        if (result == 2)
                        {
                            int32_t r0_18 = sub_5760(sub_f51c() + 0xff7feb2c(0xff7febb4(), 3) - 1);
                            *0x105fc0 = r0_18;
                            var_28 = 0;
                            int32_t var_24_2 = 0;
                            int32_t var_20_2 = 0;
                            var_1c_2 = 0;
                            var_28 = 0x69;
                            *var_28[1] = *0x105fb3;
                            *var_28[2] = 0;
                            *var_28[3] = sub_57fa(r0_18);
                            goto label_5fbc;
                        }
                        
                        *0x105fc0 = 0;
                    }
                }
                else if (result == 1)
                {
                    *0x105fb5 = 0;
                    return sub_f660(result);
                }
            }
        }
        else
        {
            if (!sub_f57c() && *0x105fb5 > 6)
            {
                *0x105fb5 = 0;
                *0x105fae = 0;
                *0x105fac = 0;
                *0x105fad = 1;
                sub_f710(1);
                sub_15bb4(0x105fb8);
                int32_t r0_6 = sub_5760(sub_f51c() + 0xff7feb2c(0xff7febb4(), 3) - 1);
                *0x105fc0 = r0_6;
                var_28 = 0;
                int32_t var_24_1 = 0;
                int32_t var_20_1 = 0;
                int32_t var_1c_1 = 0;
                var_28 = 0x69;
                *var_28[1] = *0x105fb3;
                *var_28[2] = 2;
                *var_28[3] = sub_57fa(r0_6);
                *var_1c_1[3] = sub_c410(&var_28, 0xf);
                sub_a800(&var_28);
            }
            
            result = *0x105fb5;
            
            if (result == 0x14)  /* "3.00.06_240523" */
            {
                *0x105fae = 0;
                *0x105fad = 0;
                *0x105fac = 0;
            }
        }
    }
    else if (r2 == 3)
    {
        *0x105fae = 0;
        
        if (r1 > 0x14)  /* "3.00.06_240523" */
            *0x105fb5 = 0x16;  /* "00.06_240523" */
        else
            *0x105fb5 = 0;
        
        *0x105fb4 = 1;
        result = sub_f57c();
        
        if (!result)
        {
            *0x105fb5 = 0;
            *0x105fae = 0;
            *0x105fac = 0;
            *0x105fad = 1;
            sub_f710(1);
            sub_15bb4(0x105fb8);
            int32_t r0_40 = sub_5760(sub_f51c() + 0xff7feb2c(0xff7febb4(), 3) - 1);
            *0x105fc0 = r0_40;
            var_28 = 0;
            int32_t var_24_4 = 0;
            int32_t var_20_4 = 0;
            int32_t var_1c_3 = 0;
            var_28 = 0x69;
            *var_28[1] = *0x105fb3;
            *var_28[2] = 2;
            *var_28[3] = sub_57fa(r0_40);
            *var_1c_3[3] = sub_c410(&var_28, 0xf);
            return sub_a800(&var_28);
        }
    }
    return result;
}

uint32_t sub_6034()
{
    sub_14ee0();
    uint32_t result = *0x1099f0;
    
    if (!result)
        return result;
    
    return sub_18618();
}

uint32_t sub_6050()
{
    *0x105fb5 += 1;
    
    if (*0x105fb3 == 6)
        return sub_5e24();
    
    return sub_5c74();
}

int32_t sub_6070()
{
    int32_t i = 0;
    
    if (!*0x103e3d)
    {
        *0x103e3d = 1;
        
        do
        {
            *(0x10ac2c + i) = 0;
            i += 1;
        } while (i < 0xc);
        
        *0x103e3e = 0;
        __builtin_memset(0x103e64, 0, 0x4c);
        *0x103e46 = 0;
        *0x103e47 = 1;
        *0x10ac48 = 0;
        *0x10ac38 = 0;
        *0x10ac3c = 0;
        *0x10ac44 = 0x1388;
        *0x10ac40 = 0x100;
        *0x103e54 = 0;
        *0x103e52 = 0;
        *0x103e56 = 0;
        *0x103e4c = 0;
        __builtin_memset(0x103f74, 0, 0x20);  /* "23" */
        *0x103e4a = 0;
        __builtin_memset(0x103eb4, 0, 0x20);  /* "23" */
        *0x103eb0 = 0x50;
        *0x103e3f = 0;
        
        for (int32_t i_1 = 0; i_1 < 0xa; )
        {
            int32_t r2_1 = i_1 << 2;
            i_1 += 1;
            *(0x10a510 + r2_1) = 0;
        }
        
        *0x103e4e = 0;
        *0x103e50 = 0;
        sub_11e6c();
        sub_118f4();
        *0x103eec = 0x1e0;
        *0x103e3c = 0;
        sub_11950();
        *0x103e58 = 0;
        *0x103e3c = 0;
        sub_11340();
        sub_1320c();
        *0x103e5c = 0;
        *0x103e60 = 0;
        *0x103e40 = 0;
        *0x103f40 = 0;
        sub_115c8();
        i = sub_11c18();
        *0x103e3d = 0;
    }
    
    return i;
}

uint32_t sub_6164(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r7;
    int32_t var_8 = r7;
    int32_t r6;
    int32_t var_c = r6;
    int32_t r5;
    int32_t var_10 = r5;
    int32_t r4;
    int32_t var_14 = r4;
    int32_t r3;
    int32_t var_18 = r3;
    int32_t var_1c = arg3;
    void var_220;
    void* sp = &var_220;
    int32_t r5_1 = arg3;
    int32_t var_1d0;
    __builtin_memset(&var_1d0, 0, 0x14);  /* "3.00.06_240523" */
    void var_1b4;
    0xff7febd8(&var_1b4, 0x81f750, 0x100);
    void var_54;
    0xff7febd8(&var_54, 0x81f850, 0x30);  /* "R02_V3.0" */
    int32_t r4_1 = r5_1;
    
    if (r5_1 == 0x1a)  /* "6_240523" */
        r4_1 = 1;
    else if (r4_1 == 0x17)  /* "0.06_240523" */
    {
        r5_1 = 3;
        r4_1 = 3;
    }
    else if (r4_1 == 9 || r4_1 == 4)
    {
        r5_1 = 0;
        r4_1 = 0;
    }
    
    if (!*0x103e52)
    {
        int32_t r0_4 = *arg1;
        
        if (r0_4 < 0)
            r0_4 = 0 - r0_4;
        
        *0x103e52 = 0xff7feb2c(r0_4 << 1, 0x1f);  /* "523" */
    }
    
    uint32_t result = *0x103e3d;
    
    if (!result)
    {
        *0x103e3d = 1;
        int32_t r0_7 = *0x103e74 + 1;
        *0x103e74 = r0_7;
        int32_t r1_2 = *0x103e78 + arg2;
        *0x103e78 = r1_2;
        
        if (arg2 > 0x3c)
            *0x103e74 = r0_7 - 1;
        
        if (r1_2 <= 0x3ca)
            /* tailcall */
            return sub_6218(r4_1, r5_1, 0);
        
        int32_t r1_4 = *0x103e74;
        int32_t r7_1 = 0x19 - r1_4;  /* "06_240523" */
        
        if (0x19 - r1_4 < 0)  /* "06_240523" */
            r7_1 = 0;
        
        *0x103e74 = 0;
        *0x103e78 = 0;
        int32_t var_1d0_1;
        
        if (r7_1 >= 0x12)  /* "2_3.00.06_240523" */
        {
            var_1d0_1 = 1;
            /* tailcall */
            return sub_6218(r4_1, r5_1, 0x12);  /* "2_3.00.06_240523" */
        }
        
        if (r7_1 > 0)
        {
            var_1d0_1 = 1;
            /* tailcall */
            return sub_6218(r4_1, r5_1, r7_1);
        }
        
        if (r7_1 >= 0)
        {
            sub_6218(r4_1, r5_1, r7_1);
            sp = &var_4;
        }
        
        result = 0;
        *0x103e3d = 0;
    }
    
    *(sp + 0x20c);
    *(sp + 0x210);
    *(sp + 0x214);
    *(sp + 0x218);
    return result;
}

int32_t sub_6218(int32_t arg1 @ r4, int32_t arg2 @ r5, int32_t arg3 @ r7, int32_t arg4, int32_t arg5, char arg6, int32_t* arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    if (!(arg3 | arg5))
    {
        *0x10ac44 = arg7[3];
        *0x10ac48 = arg7[4];
        int32_t r3_1 = *arg7;
        *0x10ac38 = r3_1;
        int32_t r2_1 = arg7[1];
        *0x10ac3c = r2_1;
        int32_t r1_7 = arg7[2];
        *0x10ac40 = r1_7;
        
        if (arg1 == 0x12)  /* "2_3.00.06_240523" */
        {
            *0x10ac38 = r3_1 << 2;
            *0x10ac3c = r2_1 << 2;
            *0x10ac40 = r1_7 << 2;
        }
        else if (arg1 == 9)
        {
            *0x10ac38 = r3_1 >> 1;
            *0x10ac3c = r2_1 >> 1;
            *0x10ac40 = r1_7 >> 1;
        }
    }
    
    if (!arg3 && arg5)
        *0x10ac44 += 0x1000;
    
    if (*0x10ac44 <= 0xfff)
        *0x103e56 = 0;
    else
    {
        int32_t r1_12 = *0x103e56;
        
        if (r1_12 < 0xfa)
            *0x103e56 = r1_12 + 1;
    }
    
    int32_t arg_3c;
    int32_t arg_54;
    sub_11c50(0x10ac38, &arg_3c, &arg_54);
    
    if (!*0x103f7c)
        *0x103f7c = arg_54;
    
    int32_t r1_17 = arg_54;
    int32_t r1_18 = r1_17 - *0x103f7c;
    int32_t r3_4 = r1_18 << 4;
    *0x103e7c = r3_4;
    
    if (r3_4 < 0)
        r3_4 = 0 - r3_4;
    
    *0x103e7c = r3_4;
    int32_t r2_5 = *0x103eb0;
    int32_t r2_6 = ((0x105 * (r3_4 - r2_5) + 0x4000) >> 0xf) + r2_5;
    *0x103eb0 = r2_6;
    
    if (r2_6 > 0xff)
        r2_6 = 0x100;
    
    *0x103eb0 = r2_6;
    
    if (r2_6 <= 0xffffff00)
        r2_6 = 0xffffff00;
    
    *0x103eb0 = r2_6;
    
    if (r1_18 < 0)
        r1_18 = 0 - r1_18;
    
    *0x103f7c = r1_17;
    
    if (r1_18 >= *0x103ea4)
        *0x103ea4 = r1_18;
    
    if (arg1 == 0x19 || arg1 == 1)  /* "06_240523" */
        *0x103e50 = 1;
    
    if (arg1 == 8 || arg1 == 0x17 || arg1 == 9 || arg1 == 4)  /* "0.06_240523" */
        arg1 = 3;
    else
    {
        int32_t r1_23;
        int32_t r2_8;
        int32_t r3_9;
        
        if (arg1 == 1)
        {
        label_633a:
            arg1 = 2;
        label_6342:
            
            if (!*0x103e8c)
                *0x103e8c = arg4;
            
            r2_8 = *0x103e8c;
            r1_23 = r2_8 - arg4;
            
            if (r2_8 - arg4 < 0)
                r1_23 = 0 - r1_23;
            
            r3_9 = 0x12c0;
        label_63e8:
            int32_t r1_29 = arg4;
            
            if (r1_23 >= r3_9)
            {
                *0x103e80 = r1_29;
                arg4 = r2_8;
            }
            
            *0x103e8c = r1_29;
        }
        else
        {
            if (!arg1)
            {
                if (!*0x103e8c)
                    *0x103e8c = arg4;
                
                r2_8 = *0x103e8c;
                r1_23 = r2_8 - arg4;
                
                if (r2_8 - arg4 < 0)
                    r1_23 = 0 - r1_23;
                
                r3_9 = 0x320;
                goto label_63e8;
            }
            
            if (arg1 != 3)
            {
                if (arg1 == 2)
                    goto label_6342;
                
                if (arg1 != 0x12)  /* "2_3.00.06_240523" */
                    goto label_633a;
            }
        }
    }
    
    int32_t r0_4 = sub_11028(arg4);
    *0x103f74 = sub_10ffc(arg4);
    int32_t r0_9 = sub_10fac(sub_11668(&arg_3c, arg2, 0x103eb4));
    int32_t r0_10 = sub_13414(0x10ac38);
    uint32_t r0_11 = sub_11940(0x10ac38);
    int32_t r0_12 = sub_13258(r0_11);
    int32_t r0_14 = sub_11ea8(r0_11);
    *0x103eb4 = r0_14;
    int32_t r3_10 = *0x103e3e + 1;
    *0x103e3e = r3_10;
    uint32_t arg_0;
    int32_t arg_4;
    
    if (*0x103ecc < 0x3c || arg1 == 3)
    {
        arg_0 = arg1;
        arg_4 = *0x103e68;
    }
    else
    {
        arg_4 = *0x103e68;
        arg_0 = 0xffffffff;
    }
    
    void arg_16c;
    sub_11094(r0_9 << 4, 0x10ac2c, &arg_16c, r3_10, arg_0, arg_4);
    uint32_t r2_14;
    
    for (int32_t i = 0; i < 8; )
    {
        r2_14 = (*0x103e3f >> i << 0x1f >> 0x1f) + arg6;  /* "523" */
        i += 1;
        arg6 = r2_14;
    }
    
    int32_t r0_21 = *0x103eb0;
    
    if (r0_21 <= 0x5f || (r0_21 <= 0x78 && r2_14 >= 6 && r0_14 <= 5))
        *0x103f80 += 1;
    else
        *0x103f80 = 0;
    
    if (!arg8)
        *0x103f80 = 0;
    else if (*0x103f80 >= 0xc8)
        *0x103f80 = 0xc8;
    
    int32_t r0_25 = sub_1196c(arg7[3]);
    int32_t r1_35;
    
    r1_35 = r0_25 == 0xffffffff ? 1 : 0;
    
    int32_t arg_18 = r1_35;
    
    if (!arg8)
        arg_18 = 0;
    
    if (r0_25 == 0x65)
        *0x103e56 = 0x32;  /* "2_V3.0" */
    
    int32_t r1_37 = *0x103e3e;
    
    if (r1_37 >= 0x19)  /* "06_240523" */
    {
        *0x103e3e = 0;
        int32_t r1_38 = *0x103e52;
        int16_t r1_39;
        
        r1_39 = r1_38 >= 0x3f ? 0 : r1_38 + 1;
        
        *0x103e52 = r1_39;
        int16_t arg_6c[0x80];
        *0x103e54 = arg_6c[*0x103e52 * 2];
        *0x103eb8 += 1;
        sub_115e0(&arg_16c, *0x103e46, *0x103e47, *0x103f84, *0x103f88, *0x103f8c, *0x103f90);
        
        if (!*0x103e50)
        {
            int32_t r0_34;
            
            if (r0_14 <= 0x10)  /* "R02_3.00.06_240523" */
                r0_34 = 0;
            else
            {
                r0_34 = *0x103ec4 + 1;
                *0x103ec4 = r0_34;
                
                if (r0_34 >= 0x1e)  /* "0523" */
                    r0_34 = 0x1e;  /* "0523" */
            }
            
            *0x103ec4 = r0_34;
            int32_t r0_36;
            
            if (r0_14 <= 0x28)
                r0_36 = 0;
            else
            {
                r0_36 = *0x103ec8 + 1;
                *0x103ec8 = r0_36;
                
                if (r0_36 >= 0x3c)
                    r0_36 = 0x3c;
            }
            
            *0x103ec8 = r0_36;
            int32_t r0_38;
            
            if (r0_14 <= 0x50)
                r0_38 = 0;
            else
            {
                r0_38 = *0x103ecc + 1;
                *0x103ecc = r0_38;
                
                if (r0_38 >= 0xb4)
                    r0_38 = 0xb4;
            }
            
            *0x103ecc = r0_38;
            int32_t r0_40;
            
            if (r0_14 > 0x40)
                r0_40 = 0;
            else
            {
                r0_40 = *0x103ed0 + 1;
                *0x103ed0 = r0_40;
                
                if (r0_40 >= 0x78)
                    r0_40 = 0x78;
            }
            
            *0x103ed0 = r0_40;
        }
        
        *0x103e94 = *0x103e98;
        *0x103e90 = *0x103e64;
        int32_t arg_5c;
        int32_t arg_60;
        sub_113a8(&arg_16c, &arg_5c, 0x103e98, &arg_60);
        int32_t r0_43 = sub_132ac(&arg_16c, arg_60, arg_5c, r0_10, 0x103e84);
        *0x103e64 = r0_43;
        uint8_t r0_45 = *0x103e3f >> 1;
        *0x103e3f = r0_45;
        
        if ((0x64 * r0_43 + 0x80) >> 8 <= 0x3c)
            *0x103e3f = r0_45 - 0x80;
        
        if (!*0x103e88)
            *0x103e88 = *0x103e84;
        
        int32_t r1_53 = *0x103e84;
        int32_t r2_19 = r1_53 - *0x103e88;
        *0x103e88 = r1_53;
        
        if (*0x103f74 < 0)
        {
            uint32_t r1_55 = *0x103e47;
            
            if (!r1_55)
                *0x103e64 = r1_55;
        }
        
        int32_t r1_56 = *0x103e9c;
        
        if (r1_56 < 0x1e)  /* "0523" */
            *0x103e9c = r1_56 + 1;
        
        int32_t r1_58 = *0x103e90;
        int32_t r0_47 = *0x103e64;
        int32_t r1_59 = r1_58 - r0_47;
        int32_t r0_48 = r1_59;
        
        if (r1_58 - r0_47 < 0)
            r1_59 = 0 - r0_48;
        
        if ((0x64 * r1_59 + 0x80) >> 8 > 4 || (0x64 * r0_47 + 0x80) >> 8 < 0x50)
            *0x103ea0 = 0;
        else
        {
            int32_t r2_21 = *0x103ea0 + 1;
            *0x103ea0 = r2_21;
            
            if (r2_21 >= 5)
            {
                *0x103ea0 = 5;
                arg_18 = 0;
                *0x103f80 = 0;
            }
        }
        
        uint32_t r2_22 = *0x103e47;
        
        if (!r2_22 && (0x64 * r0_48 + 0x80) >> 8 > 0xf && *0x103e9c == 0x1e)  /* "0523" */
        {
            *0x103e4a = 5;
            *0x103e4a -= 1;
        }
        else if (*0x103e4a)
            *0x103e4a -= 1;
        
        int32_t r2_23 = *0x103e98;
        int32_t r0_56 = *0x103e94;
        int32_t r1_67 = r0_56 - r2_23;
        
        if (!r2_22)
        {
            uint32_t r3_19 = *0x103e4a;
            
            if (!arg1)
            {
                if (!r3_19)
                {
                    if (r1_67 < 0xffffce00 && r2_23 > 0x8c00)
                        *0x103e98 = r0_56;
                }
                else if (r1_67 <= 0)
                {
                    if (r0_56 <= 0x5a00)
                    {
                        if (r1_67 + 0xa00 < 0x500)
                            *0x103e98 = r0_56 - (((r1_67 >> 0x1f) + r1_67) >> 1);  /* "523" */
                        
                        if (r1_67 + 0xf00 < 0x500)
                            *0x103e98 = r0_56 + 0x200;
                        
                        if (r1_67 < 0xfffff100)
                            *0x103e98 = r0_56;
                    }
                    
                    if (r0_56 - 0x5a00 <= 0x1400)
                    {
                        if (r1_67 + 0xa00 < 0x500)
                            *0x103e98 = r0_56 + 0x100;
                        
                        if (r1_67 < 0xfffff600)
                            *0x103e98 = r0_56;
                    }
                    
                    if (r0_56 > 0x6e00)
                    {
                        if (r1_67 + 0xf00 < 0x500)
                            *0x103e98 = r0_56 + 0x200;
                        
                        if (r1_67 < 0xfffff100)
                            *0x103e98 = r0_56;
                    }
                }
                else if (r0_56 <= 0x6e00)
                {
                    if (r1_67 - 0xa01 <= 0x4ff)
                        *0x103e98 = r0_56 - 0x500;
                    
                    if (r1_67 > 0xf00)
                        *0x103e98 = r0_56;
                }
            }
            else if (r3_19)
            {
                if (r1_67 < 0xffffe200 && r2_23 > 0xa000)
                    *0x103e98 = r0_56;
                
                if (r1_67 > 0x1400 && *0x103e98 < 0x4100)
                    *0x103e98 = r0_56;
            }
        }
        else if (r0_14 >= 0x50)
            *0x103e4c += 1;
        
        int32_t arg_38 = *0x103e4c;
        int32_t r3_18;
        
        r3_18 = !r0_10 ? 0 : 1;
        
        sub_129a0(0x103e68, 0x103e46, 0x103e47, 0x103f84, 0x103f8c, *0x103e98, r0_47, r0_12, r3_18, 
            r0_11 >> 4, r0_4, r0_14, *0x103e70, 0x103ebc, arg1, arg_18, *0x103e56, *0x10ac38);
        
        if (!arg1)
        {
            int32_t r1_73 = *0x103e68;
            
            if (r1_73 >= 0xaa00)
                *0x103e68 = (r1_73 >> 1) + (*0x103e54 << 8) + &data_2800;
            else if (r1_73 >= 0xa000)
                *0x103e68 = r1_73 - (*0x103e54 << 8) - 0x600;
        }
        
        if (arg2 == 0x1a)  /* "6_240523" */
        {
            int32_t r1_82;
            int32_t r2_40;
            
            if (r0_14 > 8)
            {
                if (r0_14 <= 0x20)  /* "23" */
                {
                    r2_40 = *0x103e68;
                    r1_82 = 0x7800;
                    goto label_68ba;
                }
                
                if (r0_14 > 0xa0)
                {
                label_68ce:
                    
                    if (*0x103e68 >= 0xaa00)
                        *0x103e68 = (*0x103e54 << 8) + 0xaa00;
                }
                else if (*0x103e68 >= 0x8700)
                    *0x103e68 = (*0x103e54 << 8) + 0x8700;
            }
            else
            {
                r1_82 = 0x6e00;
                r2_40 = *0x103e68;
            label_68ba:
                
                if (r2_40 >= r1_82)
                    *0x103e68 = (*0x103e54 << 8) + r1_82;
                
                if (r0_14 > 0xa0)
                    goto label_68ce;
            }
            goto label_685a;
        }
        
        if (arg2 && arg2 != 1)
        {
        label_685a:
            
            if (*0x103e68 >= 0xb100)
                *0x103e68 = (*0x103e54 << 8) + 0xb100;
        }
        
        int32_t r1_79 = *0x103eac;
        
        if (r1_79 > 0)
            *0x103eac = r1_79 - 1;
        
        if (*0x103ea4 >= 0xea60)
            *0x103eac = 0x1e;  /* "0523" */
        
        int32_t r1_88;
        int32_t r1_87;
        
        if ((*0x103e88 <= 0xa || r2_19 <= 0xfffed400) && r0_14 >= 0x50)
        {
            *0x103eac = 0xa;
        label_6918:
            r1_87 = *0x103e6c;
            
            if (!r1_87)
                r1_88 = *0x103e68;
            else
            {
                int32_t r2_50 = *0x103e68 - r1_87;
                
                r1_88 = r2_50 < 0x500 ? ((0x195 * r2_50) >> 0xd) + r1_87 : r1_87 + 0x3f;
            }
        }
        else
        {
            if (*0x103eac > 0 || (*0x103e4a && !arg1))
                goto label_6918;
            
            r1_87 = *0x103e6c;
            
            if (!r1_87 || arg1 != 8)
                r1_88 = *0x103e68;
            else
                r1_88 = ((0x1b36 * (*0x103e68 - r1_87)) >> 0xd) + r1_87;
        }
        *0x103e6c = r1_88;
        int32_t r1_89 = *0x103e6c;
        int32_t r0_63 = *0x103e70;
        int32_t r1_90 = r1_89 - r0_63;
        
        if (r1_90 + 0xff < 0x1ff)
            *0x103e6c = r0_63;
        else if (!arg1 && r0_14 >= 0x10 && r0_63 && r1_89)  /* "R02_3.00.06_240523" */
        {
            if (r1_90 >= 0x200)
                *0x103e6c = r0_63 + 0x200;
            
            if (r0_63 - *0x103e6c > 0xff)
                *0x103e6c = r0_63 - 0x80;
        }
        
        *0x103e70 = *0x103e6c;
        
        if (r0_14 > 0x50 || *0x103e68 < 0x9100)
            *0x103ea8 = 0;
        else
        {
            int32_t r1_93 = *0x103ea8;
            
            if (r1_93 < 0x1e)  /* "0523" */
                *0x103ea8 = r1_93 + 1;
        }
        
        uint32_t r1_95 = *0x103e47;
        
        if (r1_95)
            arg1 = 1;
        
        if (*0x103ea8 == 0x3c)
        {
            arg1 = 0;
            *0x103e68 s>>= 1;
        }
        
        for (int32_t i_1 = 0; i_1 < 9; )
        {
            int32_t r2_59 = i_1 << 2;
            i_1 += 1;
            *(0x10a510 + r2_59) = *(r2_59 + 0x10a514);
        }
        
        *0x10a534 = *0x103ec0;
        int32_t r12_3 = 0;
        
        for (int32_t i_2 = 1; i_2 < 0xa; )
        {
            int32_t r2_60 = i_2 << 2;
            int32_t r3_39 = *(0x10a510 + r2_60);
            int32_t r1_100 = *(r2_60 + 0x10a50c);
            int32_t r1_101 = r3_39 - r1_100;
            
            if (r3_39 - r1_100 < 0)
                r1_101 = 0 - r1_101;
            
            i_2 += 1;
            r12_3 += r1_101;
        }
        
        if (r12_3 <= 0xf00 && !r1_95 && arg1 != 0x19)  /* "06_240523" */
            *0x103e4e = 1;
        
        if (*0x103eb8 == 1)
        {
            int32_t arg_8;
            int32_t r2_62;
            
            if (arg2 == 1 || arg2 == 3 || arg2 == 8)
            {
                arg_0 = *0x103ebc;
                r2_62 = r0_14;
                arg_4 = arg1;
                arg_8 = 0;
            }
            else
            {
                arg_8 = *0x103e4e;
                arg_4 = arg1;
                arg_0 = *0x103ebc;
                r2_62 = r0_14;
            }
            
            sub_11f04(*0x103e68 + 0x80, r1_95, r2_62, 0x10ac2c, arg_0, arg_4, arg_8);
            *0x103eb8 = 0;
        }
        
        if (arg1 && !*0x103e47 && arg2 != 1 && arg1 != 0x19 && arg2 != 2 && arg2 != 0x1a
            && arg2 != 3 && arg2 != 0x12 && arg2 != 0x17)  /* "2_3.00.06_240523" */  /* "0.06_240523"
            */  /* "06_240523" */  /* "6_240523" */
        {
            if (*0x103ec4 == 0x1e)  /* "0523" */
            {
                *0x10ac2c = 0;
                *0x10ac2d = 0;
            }
            
            if (*0x103ec8 >= 0x1e)  /* "0523" */
            {
                *0x10ac2c = 0;
                *0x10ac2d = 0;
                *0x10ac2e = 0;
            }
            
            int32_t r3_40 = *0x103ecc;
            
            if (r3_40 >= 0x1e)  /* "0523" */
            {
                *0x10ac2c = 0;
                *0x10ac2d = 0;
                *0x10ac2e = 0;
                *0x10ac2f = 0;
                *0x10ac30 = 1;
                *0x10ac31 = 1;
                *0x10ac32 = 1;
                *0x10ac33 = 1;
                *0x10ac34 = 1;
                
                if (r3_40 == 0xb4)
                {
                    *0x10ac2c = 0;
                    *0x10ac2d = 0;
                    *0x10ac2e = 0;
                    *0x10ac2f = 0;
                    *0x10ac30 = 0;
                    *0x10ac31 = 0;
                    *0x10ac32 = 1;
                    *0x10ac33 = 1;
                    *0x10ac34 = 1;
                    *0x10ac35 = 1;
                }
            }
        }
        
        uint32_t r1_107 = *0x103e47;
        
        if (!(r1_107 | arg1) && *0x103ed0 >= 0x1e)  /* "0523" */
        {
            for (int32_t i_3 = 5; i_3 < 0xc; i_3 += 1)
                *(0x10ac2c + i_3) = 0;
            
            for (int32_t i_4 = 0; i_4 < 5; i_4 += 1)
                *(0x10ac2c + i_4) = 1;
        }
        
        if (arg2 == 2)
        {
            if (!r1_107 && *0x103ec8 >= 0x1e)  /* "0523" */
            {
                for (int32_t i_5 = 0; i_5 < 2; i_5 += 1)
                    *(0x10ac2c + i_5) = 0;
            }
        }
        else if (arg2 == 0x12 && !r1_107 && *0x103ec8 >= 0x1e)  /* "2_3.00.06_240523" */  /* "0523"
            */
        {
            for (int32_t i_6 = 0; i_6 < 3; i_6 += 1)
                *(0x10ac2c + i_6) = 0;
        }
        
        int32_t r1_114 = *0x103e6c;
        
        if (r1_114 && *0x103e56 >= 0x19)  /* "06_240523" */
            *0x103e6c = (*0x103e54 << 8) + r1_114;
        
        int32_t r1_116 = *0x103ec0;
        
        if (!r1_116)
            *0x103ec0 = *0x103e6c;
        else
        {
            int32_t r3_41 = *0x103e6c;
            int32_t r3_42 = r3_41 - r1_116;
            
            if (r3_42 < 0x300 || r1_116 - r3_41 < 0x300)
                *0x103ec0 = r3_41;
            else
                *0x103ec0 = ((0x5cd * r3_42) >> 0xd) + r1_116;
        }
        
        if (r1_107 || r0_14 <= 8)
        {
            for (int32_t i_7 = 0; i_7 < 0xc; i_7 += 1)
                *(0x10ac2c + i_7) = 1;
        }
        
        r1_37 = 0;
        *0x103ea4 = 0;
    }
    
    if (arg3 - 1 >= 0)
        sub_6218(0x103e3c, r1_37);
    
    *0x103e3d = 0;
    return 0;
}

void sub_6c30(int32_t* arg1)
{
    int32_t r2_3;
    
    if (*0x103e68 < 0)
        r2_3 = 0xffffffff;
    else
        r2_3 = (*0x103ec0 + 0x80) >> 8;
    
    *arg1 = r2_3;
    arg1[1] = (0x64 * *0x103e64 + 0x80) >> 8;
}

int32_t sub_6c5c() __pure
{
    return;
}

uint32_t sub_6c5e(void* arg1)
{
    int32_t r2 = 0;
    
    for (int32_t i = 1; i <= 4; )
    {
        uint32_t r3_2 = *(arg1 + (i << 1));
        i += 1;
        r2 += r3_2;
    }
    
    uint32_t r0 = r2 >> 2;
    
    if (r2 - (r0 << 2) >= 2)
        r0 += 1;
    
    return r0;
}

uint32_t sub_6c7e(int32_t arg1) __pure
{
    uint32_t r1_2 = arg1 >> 4;
    
    if (r1_2 <= 9)
    {
        uint32_t r0_1 = arg1 << 0x1c >> 0x1c;  /* "240523" */
        
        if (r0_1 <= 9)
            return (r1_2 << 3) + (r1_2 << 1) + r0_1;
    }
    
    return 0;
}

uint32_t sub_6c9c(uint32_t arg1) __pure
{
    uint32_t r1_1 = 0;
    
    if (arg1 > 0x63)
        return 0;
    
    for (; arg1 > 9; arg1 = arg1 - 0xa)
        r1_1 = r1_1 + 1;
    
    return r1_1 << 4 | arg1;
}

int32_t sub_6cba(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 2;
    *result[1] = arg1;
    *var_c[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

uint32_t sub_6ce2(uint32_t arg1)
{
    uint32_t result_7;
    uint32_t result_4 = result_7;
    uint32_t result_6;
    uint32_t result_3 = result_6;
    uint32_t result_5;
    uint32_t result_2 = result_5;
    uint32_t result = arg1;
    uint32_t result_1 = sub_10610();
    
    if (!result_1)
    {
        result = result_1;
        result_2 = result_1;
        result_3 = result_1;
        result_4 = result_1;
        int32_t r0 = sub_17aac();
        int32_t r0_1 = sub_17a80();
        int32_t r0_2 = sub_17a8c();
        result = 0x73;
        *result[1] = arg1;
        
        if (arg1 == 0x12)  /* "2_3.00.06_240523" */
        {
            *result[2] = r0 >> 0x10;  /* "R02_3.00.06_240523" */
            *result[3] = r0 >> 8;
            result_2 = r0;
            *result_2[1] = r0_1 >> 0x10;  /* "R02_3.00.06_240523" */
            *result_2[2] = r0_1 >> 8;
            *result_2[3] = r0_1;
            result_3 = r0_2 >> 0x10;  /* "R02_3.00.06_240523" */
            *result_3[1] = r0_2 >> 8;
            *result_3[2] = r0_2;
        }
        else if (arg1 == 0xc)
        {
            *result[2] = sub_ec90();
            
            if (sub_a144())
                *result[3] = 1;
        }
        
        *result_4[3] = sub_c410(&result, 0xf);
        sub_a800(&result);
    }
    
    return result;
}

int32_t sub_6d62(void* arg1)
{
    int32_t r4 = 0;
    uint32_t var_84 = 0;
    int32_t var_a8;
    __builtin_memset(&var_a8, 0, 0x20);  /* "23" */
    uint32_t r5 = 0;
    int32_t var_80;
    
    if (!*(arg1 + 1))
    {
        r4 = sub_17aac();
        var_84 = sub_17ab8();
        sub_17fc4(sub_eb1c(), &var_80);
        int32_t var_7c;
        r5 = *var_7c[2];
    }
    
    var_80 = sub_17a80();
    int32_t r0_6 = 0xff7feb00(sub_17a8c(), 0x64);
    void var_1c;
    int32_t r2 = sub_71b4(&var_1c);
    int24_t r0_9 = sub_70b4(&var_1c, *(arg1 + 1), r2);
    int32_t* var_74 = &var_a8;
    var_a8 = 7;
    *var_a8[1] = 0;
    *var_a8[2] = *(arg1 + 1);
    uint32_t r0_11 = r0_9;
    *var_a8[3] = sub_6c9c(r0_11);
    uint32_t r0_13 = *r0_9[1];
    int32_t var_a4;
    var_a4 = sub_6c9c(r0_13);
    uint32_t r0_15 = *r0_9[2];
    *var_a4[1] = sub_6c9c(r0_15);
    *var_a4[2] = r4 >> 0x10;  /* "R02_3.00.06_240523" */
    *var_a4[3] = r4 >> 8;
    int32_t var_a0;
    var_a0 = r4;
    0xff7fec0a(var_74 + 9, 3);
    int32_t var_9c;
    var_9c = var_80 >> 0x10;  /* "R02_3.00.06_240523" */
    *var_9c[1] = var_80 >> 8;
    *var_9c[2] = var_80;
    *var_9c[3] = sub_c410(&var_a8, 0xf);
    sub_a800(&var_a8);
    int32_t var_98;
    var_98 = 7;
    *var_98[1] = 1;
    *var_98[2] = *(arg1 + 1);
    *var_98[3] = sub_6c9c(r0_11);
    int32_t var_94;
    var_94 = sub_6c9c(r0_13);
    *var_94[1] = sub_6c9c(r0_15);
    *var_94[2] = r0_6 >> 0x10;  /* "R02_3.00.06_240523" */
    *var_94[3] = r0_6 >> 8;
    int32_t var_90;
    var_90 = r0_6;
    *var_90[1] = var_84 >> 8;
    *var_90[2] = var_84;
    *var_90[3] = r5 >> 8;
    int32_t var_8c;
    var_8c = r5;
    *var_8c[1] = 0;
    *var_8c[2] = 0;
    *var_8c[3] = sub_c410(&var_98, 0xf);
    return sub_a800(&var_98);
}

uint32_t sub_6e98(void* arg1)
{
    uint32_t r0 = sub_a6c4();
    uint32_t r1;
    
    r1 = r0 <= 0x32 ? 0x14 : r0;  /* "3.00.06_240523" */  /* "2_V3.0" */
    
    sub_90b6(0x2f, r1);
    char var_20 = sub_6c7e(*(arg1 + 1));
    char var_1f = sub_6c7e(*(arg1 + 2));
    char var_1e = sub_6c7e(*(arg1 + 3));
    char var_1d = sub_6c7e(*(arg1 + 4));
    char var_1c = sub_6c7e(*(arg1 + 5));
    char var_1b = sub_6c7e(*(arg1 + 6));
    sub_1936c(sub_71c8(&var_20));
    sub_dba8(sub_71c8(&var_20));
    int32_t r0_17 = sub_7680();
    int32_t r0_19 = sub_71c8(&var_20);
    
    if (r0_17 != r0_19)
    {
        if (!*0x1041e2)
        {
            int32_t r0_28;
            int32_t r1_2;
            int32_t r2_2;
            r0_28 = sub_71c8(&var_20);
            sub_773c(r0_28, r1_2, r2_2);
            *0x1041e2 = 1;
            sub_18f1c();
        }
        else
        {
            int32_t r0_22 = 0xff7feb00(r0_17, 0x384);
            int32_t r0_24;
            int32_t r1_1;
            int32_t r2_1;
            r0_24 = 0xff7feb00(r0_19, 0x384);
            
            if (r0_22 == r0_24)
                sub_773c(r0_19, r1_1, r2_1);
            else if (r0_19 > r0_17)
            {
                sub_773c(0x384 * (r0_22 + 1), 0x384, r2_1);
                r1_1 = sub_17b30();
                sub_773c(r0_19, r1_1, r2_1);
                sub_18f1c();
            }
            else if (r0_17 - r0_19 > 2)
            {
                sub_773c(r0_19, r1_1, r2_1);
                sub_18f1c();
            }
        }
    }
    
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    *var_30[1] = 1;
    *var_30[3] = *var_30[3] | 2 | 0x20;  /* "23" */
    var_28 = 1;
    *var_28[2] = 0x30;  /* "R02_V3.0" */
    *var_28[3] = 1;
    int16_t var_24;
    *var_24[1] = *0[1] | 0x10;  /* "R02_3.00.06_240523" */
    
    if (*(arg1 + 7) != 0xff)
        sub_18e44(sub_7680());
    
    return sub_9066(1, &var_30, 0xe);
}

void* sub_6fc8(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    *0x10bfb2 = *(arg1 + 1);
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    result = 4;
    *var_14[3] = 4;
    sub_a800(&result);
    uint32_t r0_3;
    void* r1_1;
    
    if (*0x10bfb2 == 1)
    {
        *0x105fb1 = *(arg1 + 3);
        r1_1 = arg1 + 3;
        r0_3 = 0;
    }
    else
    {
        r0_3 = *(arg1 + 2);
        r1_1 = arg1 + 3;
    }
    
    sub_a4a8(r0_3, r1_1);
    return result;
}

int32_t sub_7010(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 3;
    *result[1] = sub_ec90();
    
    if (sub_a144())
        *result[2] = 1;
    
    *var_c[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

int32_t sub_704c(void* arg1)
{
    if (*0x1041e0 != 3 || *(arg1 + 1) != 0x55 || *(arg1 + 2) != 0xaa)
        return sub_9044(0x50, 1);
    
    int32_t r2;
    int32_t r3;
    r2 = sub_9044(0x50, 0);
    
    if (!sub_1b3d0())
        r2 = sub_f710(1);
    
    sub_1a404(0, 1, r2, r3);
    return sub_ad20(0x81d40d, 0, 0x2710, 1);
}

int32_t sub_70a4()
{
    return sub_9478(*0x104d78);
}

int32_t sub_70b4(char* arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = arg3;
    sub_7130(&result, &data_15180 * (sub_7b28(arg1) - arg2 - 1));
    return result;
}

int32_t sub_70d4(int32_t arg1)
{
    if (0xff7feb00(arg1, 0x190))
    {
        int32_t r1_2;
        
        if (!(arg1 << 0x1e))  /* "0523" */
            r1_2 = 0xff7feb00(arg1, 0x64);
        
        if (arg1 << 0x1e || !r1_2)  /* "0523" */
            return 0;
    }
    
    return 1;
}

int32_t sub_70fc(int32_t arg1, int32_t arg2)
{
    if (arg2 == 2)
    {
        if (!sub_70d4(arg1 + 0x7d0))
            return 0x1c;  /* "240523" */
        
        return 0x1d;  /* "40523" */
    }
    
    if (arg2 > 7)
    {
        if (arg2 << 0x1f)  /* "523" */
            return 0x1e;  /* "0523" */
    }
    else if (!(arg2 << 0x1f))  /* "523" */
        return 0x1e;  /* "0523" */
    
    return 0x1f;  /* "523" */
}

int32_t sub_7130(int32_t arg1, int32_t arg2)
{
    int32_t var_18 = arg2;
    int32_t i = arg2;
    uint32_t r5 = 0x7d0;
    
    while (sub_8464(r5) <= i)
    {
        i -= sub_8464(r5);
        r5 = r5 + 1;
    }
    
    uint32_t r6 = 1;
    
    while (sub_7d10(r5, r6) <= i)
    {
        i -= sub_7d10(r5, r6);
        r6 = r6 + 1;
    }
    
    char r0_9;
    int32_t r1_2;
    r0_9 = 0xff7feb00(i, &data_15180);
    char r0_11;
    int32_t r1_3;
    r0_11 = 0xff7feb00(r1_2, 0xe10);
    char r0_13;
    char r1_4;
    r0_13 = 0xff7feb00(r1_3, 0x3c);
    char var_28 = r5 + 0x30;  /* "R02_V3.0" */
    char var_27 = r6;
    char var_26 = r0_9 + 1;
    char var_25 = r0_11;
    char var_24 = r0_13;
    char var_23 = r1_4;
    return 0xff7febd8(arg1, &var_28, 6);
}

int32_t sub_71b4(int32_t arg1)
{
    return sub_7130(arg1, sub_7680());
}

int32_t sub_71c8(char* arg1)
{
    uint32_t r0_3;
    
    if (!sub_7b28(arg1))
        r0_3 = sub_7b28(arg1);
    else
        r0_3 = sub_7b28(arg1) - 1;
    
    return 0xe10 * arg1[3] + 0x3c * arg1[4] + arg1[5] + &data_15180 * r0_3;
}

int32_t sub_7204()
{
    return sub_95c4(*0x104dc4);
}

int32_t sub_7214()
{
    uint32_t r0_2 = *0x20201028 << 0x1a >> 0x1a;  /* "6_240523" */
    *0x2020102c |= r0_2;
    int32_t r0_3 = sub_d798(r0_2);
    int32_t result = *0x105ab4;
    
    if (result)
    {
        for (uint32_t i = 0; i < 0x20; i = i + 1)  /* "23" */
        {
            result = 1 << i;
            
            if (result & r0_3)
            {
                result = sub_eb30(i, 2);
                
                if (result)
                    result = (*0x105ab4)(0x20148000, i, result);
            }
        }
    }
    
    return result;
}

int32_t sub_7268()
{
    int32_t r5 = *0x20148040;
    *0x2014804c |= r5;
    int32_t result = *0x105ab4;
    
    if (result)
    {
        for (uint32_t i = 0; i < 0x20; i = i + 1)  /* "23" */
        {
            result = 1 << i;
            
            if (result & r5)
            {
                result = sub_eb30(i, 1);
                
                if (result)
                    result = (*0x105ab4)(0x20148000, i, result);
            }
        }
    }
    
    return result;
}

uint32_t sub_72b0()
{
    if (*0x108fb0 == 0x23)
    {
        sub_188d0(0x11, 0x80);  /* "02_3.00.06_240523" */
        sub_188d0(0x10, 0xa);  /* "R02_3.00.06_240523" */
        sub_188d0(0x11, 0x7d);  /* "02_3.00.06_240523" */
        sub_188d0(0x3e, 0xc0);
    }
    
    return sub_ef54();
}

int32_t sub_72e4()
{
    *0x108fb4 = 1;
    return 1;
}

uint32_t sub_72f0()
{
    if (*0x108fb0 == 0x23)
    {
        sub_188d0(0x11, 0x80);  /* "02_3.00.06_240523" */
        sub_188d0(0x10, 0xf);  /* "R02_3.00.06_240523" */
        sub_188d0(0x11, 0x7e);  /* "02_3.00.06_240523" */
        sub_188d0(0x3e, 0xc0);
    }
    
    return sub_ef54();
}

int32_t sub_7324()
{
    sub_6034();
    sub_a58c();
    sub_a16c();
    sub_18f00();
    return sub_10a14(0x7d0);
}

void* sub_7340(void* arg1)
{
    void* result = arg1;
    
    if (*0x105fb5 < 0x3c)
    {
        *0x105faf = 0;
        uint32_t r0_2;
        
        if (*0x105fb3 == 3)
            r0_2 = 0x20;  /* "23" */
        else
            r0_2 = 1;
        
        sub_f710(r0_2);
        sub_15bb4(0x105fb8);
        
        if (*0x105fb5 < 0x32)  /* "2_V3.0" */
        {
            uint32_t r0_5;
            
            if (*0x105fb3 == 3)
                r0_5 = 0x20;  /* "23" */
            else
                r0_5 = 1;
            
            sub_f710(r0_5);
            return result;
        }
    }
    
    result = &data_0;
    int32_t __saved_r1 = 0;
    int32_t __saved_r2 = 0;
    int32_t __saved_r3 = 0;
    uint32_t r0_7 = *(arg1 + 1);
    *0x105fb3 = r0_7;
    *0x105fbe = *(arg1 + 3) << 8 | *(arg1 + 2);
    uint32_t r0_8;
    
    r0_8 = r0_7 == 3 ? 0x20 : 1;  /* "23" */
    
    sub_f710(r0_8);
    result = 0x6a;
    *result[1] = *(arg1 + 1);
    *__saved_r3[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

int32_t sub_73c8(void* arg1)
{
    int32_t var_38 = 0;
    int32_t var_34 = 0;
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    char r0_1 = 1;
    int32_t* r0_10;
    
    if (!sub_a144())
    {
        *0x105faf = 0;
        uint32_t r2_1 = *(arg1 + 1);
        *0x105fb3 = r2_1;
        uint32_t r1_3 = *(arg1 + 2);
        *0x105fb4 = r1_3;
        
        if (r2_1 == 6)
        {
            if (r1_3 == 1)
            {
                *0x105fb5 = 0;
                sub_f660(1);
                sub_15bb4(0x105fb8);
                sub_15b94(0x105fb8, 0x808f51, 0x1f4);
            }
            else if (r1_3 == 2)
                sub_15bb4(0x105fb8);
            else if (r1_3 == 3)
            {
                sub_15bb4(0x105fb8);
                sub_15b94(0x105fb8, 0x808f51, 0x1f4);
                sub_f660(1);
            }
            else if (r1_3 == 4)
            {
                sub_f710(1);
                *0x105fb5 = 0;
                sub_15bb4(0x105fb8);
            }
            
        label_74e6:
            var_38 = 0x69;
            *var_38[1] = *0x105fb3;
            *var_38[2] = 0;
            *var_2c[3] = sub_c410(&var_38, 0xf);
            r0_10 = &var_38;
        }
        else
        {
            if (*0x10428c && *0x104291)
            {
                *0x105fb5 = 0;
                *0x105fb0 = 0;
                sub_15bb4(0x105fb8);
                sub_15b94(0x105fb8, 0x808f51, 0x1f4);
                int32_t r0_4;
                
                if (*0x105fb3 == 3)
                    r0_4 = 0x20;  /* "23" */
                else
                    r0_4 = 1;
                
                sub_f660(r0_4);
                
                if (*0x105fb3 == 1)
                    sub_1b9f4(1);
                
                goto label_74e6;
            }
            
            int32_t var_28 = 0;
            int32_t var_24_1 = 0;
            int32_t var_20_1 = 0;
            int32_t var_1c_1 = 0;
            var_28 = 0xa1;
            *var_28[1] = 1;
            *var_28[2] = 1;
            *var_28[3] = 0;
            sub_9af8(&var_28);
            var_28 = 0x69;
            *var_28[1] = *0x105fb3;
            *var_28[2] = 1;
            *var_28[3] = 0;
            *var_1c_1[3] = sub_c410(&var_28, 0xf);
            r0_10 = &var_28;
        }
    }
    else
    {
        var_38 = 0x69;
        *var_38[1] = *(arg1 + 1);
        
        if (*(arg1 + 1) == 6)
            r0_1 = 2;
        
        *var_38[2] = r0_1;
        *var_2c[3] = sub_c410(&var_38, 0xf);
        r0_10 = &var_38;
    }
    
    return sub_a800(r0_10);
}

int32_t sub_751c()
{
    return sub_b600(0x20145000);
}

int32_t sub_752c()
{
    return sub_b600(0x20146000);
}

void* sub_753c(void* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    void* result = arg1;
    result = &data_0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    uint32_t r2_1 = *(arg1 + 1);
    
    if (r2_1 == 1)
    {
        result = 5;
        *result[1] = 1;
        *result[2] = 0;
        *result[3] = 0;
        *var_c[3] = sub_c410(&result, 0xf);
        sub_a800(&result);
    }
    else if (r2_1 == 2)
    {
        result = 5;
        *result[1] = *(arg1 + 1);
        *result[2] = *(arg1 + 2);
        *result[3] = *(arg1 + 3);
        *var_c[3] = sub_c410(&result, 0xf);
        sub_a800(&result);
    }
    
    return result;
}

int32_t sub_7588(int32_t arg1)
{
    int32_t result = 1 << arg1 << 0x1b >> 0x1b;  /* "_240523" */
    *0xe000e280 = result;
    return result;
}

int32_t sub_759c(int32_t arg1)
{
    int32_t result = 1 << arg1 << 0x1b >> 0x1b;  /* "_240523" */
    *0xe000e100 = result;
    return result;
}

int32_t* sub_75b0(int32_t arg1, int32_t arg2)
{
    uint32_t r3 = arg1 << 0x1e >> 0x1b;  /* "_240523" */  /* "0523" */
    int32_t r2 = 0xff << r3;
    int32_t r1_2 = arg2 << 0x1e >> 0x18 << r3;  /* ".06_240523" */  /* "0523" */
    
    if (arg1 >= 0)
    {
        *((arg1 >> 2 << 2) - 0x1fff1c00) = (*((arg1 >> 2 << 2) - 0x1fff1c00) & ~r2) | r1_2;
        return (arg1 >> 2 << 2) - 0x1fff1c00;
    }
    
    *((((arg1 << 0x1c >> 0x1c) - 8) >> 2 << 2) - 0x1fff12e4) =
        (*((((arg1 << 0x1c >> 0x1c) - 8) >> 2 << 2) - 0x1fff12e4) & ~r2) | r1_2;  /* "240523" */
    return (((arg1 << 0x1c >> 0x1c) - 8) >> 2 << 2) - 0x1fff1300;  /* "240523" */
}

int32_t sub_75f4() __pure
{
    return;
}

int32_t sub_75f8()
{
    if (*0x10bfa0 != 0xa1b2c3e5)
    {
        0xff7fec0a(0x10bfa0, 0xa8);
        *0x10bfa0 = 0xa1b2c3e5;
    }
    
    sub_db58();
    
    if (!*0x104220)
        sub_155dc(2);
    
    if (sub_18dfc() != 1)
        sub_18ce8();
    
    if (*0x10bfac - 0x64 >= 0x65)
    {
        uint32_t r0_5 = *0x1042f4;
        
        if (r0_5 - 0x64 <= 0x64)
        {
            *0x10bfac = r0_5;
            *0x1042f4 = 0;
        }
    }
    
    int32_t r0_6 = *0x10bfa4;
    
    if (r0_6)
        *0x104310 = r0_6;
    
    *0x104294 = 2;
    return 1;
}

void sub_766c(char* arg1, int32_t arg2, int32_t arg3)
{
    void* r6;
    void* r7;
    
    if (arg2 == 0x10)  /* "R02_3.00.06_240523" */
        sub_155f4(arg1, arg2, arg3, r6, r7);
}

int32_t sub_7678(int32_t arg1)
{
    return sub_a800(arg1);
}

int32_t sub_7680()
{
    int32_t entry_r1;
    int32_t entry_r2;
    return sub_7a5c(0x109ab0, entry_r1, entry_r2);
}

int32_t sub_7690()
{
    int32_t r0 = *0x104310;
    int32_t entry_r2;
    int32_t entry_r3;
    
    if (r0 == 0xffffffff)
    {
        *0x109ab0 = 0x78;
        *0x109ab2 = 0;
        *0x109ab3 = 1;
        *0x109ab4 = 0;
        *0x109ab5 = 0;
        *0x109ab6 = 0;
    }
    else
        sub_7876(r0, 0x109ab0, entry_r2, entry_r3);
    sub_b23c(*0x20200000 >> 0xf);
    int32_t r1_1;
    int32_t r2;
    int32_t r3;
    r1_1 = sub_18960();
    int32_t var_40;
    int32_t r1_2;
    int32_t r2_1;
    r1_2 = sub_af80(&var_40, r1_1, r2, r3);
    int16_t var_2c;
    *0x109ab0 = var_2c + 0x76c;
    char var_30;
    *0x109ab2 = var_30 + 1;
    char var_34;
    *0x109ab3 = var_34;
    char var_38;
    *0x109ab4 = var_38;
    char var_3c;
    *0x109ab5 = var_3c;
    *0x109ab6 = var_40;
    int32_t r0_12 = sub_7a5c(0x109ab0, r1_2, r2_1);
    sub_15b94(0x109aae, 0x819341, 0x3e8 * (0x3c - 0xff7feb2c(r0_12, 0x3c)));
    *0x10bfa4 = r0_12;
    *0x104310 = r0_12;
    *0x1041e5 = 1;
    return 0x1041e0;
}

int32_t sub_773c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t result;
    int32_t r2;
    int32_t r3;
    result = sub_7a5c(0x109ab0, arg2, arg3);
    
    if (result == arg1)
        return result;
    
    sub_7876(arg1, 0x109ab0, r2, r3);
    sub_18960();
    sub_9d24();
    *0x10bfa4 = arg1;
    *0x104310 = arg1;
    return sub_15b94(0x109aae, 0x819341, 0x3e8 * (0x3c - 0xff7feb00(arg1, 0x3c)));
}

int32_t sub_7790()
{
    if (*0x104220 == 2)
        return 0x88;
    
    return 0x77;
}

int32_t sub_77a4()
{
    if (*0x104220 == 1)
        return 0x88;
    
    return 0x77;
}

uint32_t sub_77b8()
{
    sub_188d0(0x11, 0x74);  /* "02_3.00.06_240523" */
    sub_188d0(0x10, 0xf);  /* "R02_3.00.06_240523" */
    return sub_188d0(0x3e, 0xc8);
}

int32_t sub_77d4(char arg1, char arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14_1 = arg4;
    int32_t var_18 = arg3;
    int32_t var_14 = 0;
    var_18 = 0x4b;
    *var_18[2] = arg1;
    *var_18[3] = arg2;
    return 0xff9002e6(&var_18, 5, arg4, arg3, var_18, var_14);
}

int32_t sub_7800(char* arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_4 = r3;
    int32_t r2;
    int32_t var_8 = r2;
    int32_t var_c = arg2;
    return sub_7d34(arg1, &var_c, 0x1041d0, 0x811151);
}

int32_t sub_7820(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_4 = r3;
    int32_t var_8 = arg3;
    int32_t var_10 = arg1;
    int32_t result = sub_7d34(arg2, &var_8, &var_10, 0x80b171);
    sub_8270(0, &var_10);
    return result;
}

int32_t sub_7848(uint32_t arg1) __pure
{
    int32_t r1 = 0x20;  /* "23" */
    uint32_t r2 = arg1 >> 0x10;  /* "R02_3.00.06_240523" */
    
    if (r2)
    {
        r1 = 0x10;  /* "R02_3.00.06_240523" */
        arg1 = r2;
    }
    
    uint32_t r2_1 = arg1 >> 8;
    
    if (r2_1)
    {
        arg1 = r2_1;
        r1 -= 8;
    }
    
    uint32_t r2_2 = arg1 >> 4;
    
    if (r2_2)
    {
        arg1 = r2_2;
        r1 -= 4;
    }
    
    uint32_t r2_3 = arg1 >> 2;
    
    if (r2_3)
    {
        arg1 = r2_3;
        r1 -= 2;
    }
    
    if (!(arg1 >> 1))
        return r1 - arg1;
    
    return r1 - 2;
}

int32_t sub_7876(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg3;
    sub_7130(&var_10, arg1);
    arg2[3] = *arg4[1];
    *(arg2 + 5) = arg4;
    arg2[2] = *var_10[3];
    *(arg2 + 3) = *var_10[2];
    arg2[1] = *var_10[1] - 1;
    *arg2 = var_10 + 0x64;
    return 0;
}

int32_t sub_78ae(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r7 = arg2 - 1;
    int32_t* r1 = arg1 + (arg2 << 3) - 8;
    int32_t result = *r1;
    int32_t r1_1 = r1[1];
    
    while (r7 & 0xfffffff9)
    {
        int32_t r0_2;
        int32_t r1_2;
        r0_2 = sub_5574(result, r1_1, arg3, arg4);
        void* r3_1 = arg1 + (r7 << 3) - 8;
        r7 -= 1;
        result = sub_540c(r0_2, r1_2, *r3_1, *(r3_1 + 4));
    }
    
    if (r7 != 2)
    {
        if (r7 != 4)
        {
            if (r7 != 6)
                return result;
            
            int32_t r0_3;
            int32_t r1_3;
            r0_3 = sub_5574(result, r1_1, arg3, arg4);
            int32_t r0_4;
            int32_t r1_4;
            r0_4 = sub_540c(r0_3, r1_3, arg1[0xa], arg1[0xb]);
            int32_t r0_5;
            int32_t r1_5;
            r0_5 = sub_5574(r0_4, r1_4, arg3, arg4);
            result = sub_540c(r0_5, r1_5, arg1[8], arg1[9]);
        }
        
        int32_t r0_6;
        int32_t r1_6;
        r0_6 = sub_5574(result, r1_1, arg3, arg4);
        int32_t r0_7;
        int32_t r1_7;
        r0_7 = sub_540c(r0_6, r1_6, arg1[6], arg1[7]);
        int32_t r0_8;
        int32_t r1_8;
        r0_8 = sub_5574(r0_7, r1_7, arg3, arg4);
        result = sub_540c(r0_8, r1_8, arg1[4], arg1[5]);
    }
    
    int32_t r0_9;
    int32_t r1_9;
    r0_9 = sub_5574(result, r1_1, arg3, arg4);
    int32_t r0_10;
    int32_t r1_10;
    r0_10 = sub_540c(r0_9, r1_9, arg1[2], arg1[3]);
    int32_t r0_11;
    int32_t r1_11;
    r0_11 = sub_5574(r0_10, r1_10, arg3, arg4);
    return sub_540c(r0_11, r1_11, *arg1, arg1[1]);
}

int32_t sub_795a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    
    if (!arg1)
        return arg1 - 1;
    
    int32_t r0_23;
    
    r0_23 = (arg2 == 0xffffffff || arg2 == 2) && (arg3 == 0xffffffff || arg3 == 4)
        && (arg4 == 0xffffffff || arg4 == 4) && (arg5 == 0xffffffff || arg5 == 4)
        && (arg6 == 0xffffffff || arg6 == 4) && (arg7 == 0xffffffff || arg7 == 4)
        && (arg8 == 0xffffffff || arg8 == 4) && (arg9 == 0xffffffff || arg9 == 4)
        && (arg10 == 0xffffffff || arg10 == 0x18) ? 1 : 0;  /* ".06_240523" */
    
    if (!r0_23)
        return r0_23 - 1;
    
    return sub_7ba4(r0_23);
}

int32_t sub_7a04()
{
    return sub_5644(0, 0x3ff00000, 0, 0);
}

int32_t sub_7a18(int32_t arg1, int32_t arg2)
{
    return sub_5734(arg1, arg2, 1);
}

int32_t sub_7a22()
{
    return sub_5644(0, 0, 0, 0);
}

void sub_7a32(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    while (arg3)
    {
        int32_t r3_1 = *arg1;
        arg1 = &arg1[1];
        arg3 -= 4;
        *arg2 = r3_1;
        arg2 = &arg2[1];
    }
}

int32_t sub_7a40() __pure
{
    return;
}

int32_t sub_7a42(int32_t arg1, int32_t* arg2, int32_t arg3)
{
    for (; arg3; arg3 -= 4)
    {
        *arg2 = 0;
        arg2 = &arg2[1];
    }
    
    return 0;
}

void sub_7a50(int32_t arg1)
{
    *0x1041dc = arg1;
}

int32_t sub_7a5c(char* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t var_10 = arg3;
    *var_c[1] = arg1[6];
    var_c = arg1[5];
    *var_10[3] = arg1[4];
    *var_10[2] = arg1[3];
    *var_10[1] = arg1[2];
    var_10 = *arg1 + 0x30;  /* "R02_V3.0" */
    return sub_71c8(&var_10);
}

uint32_t sub_7a86()
{
    void var_50;
    void var_1c;
    uint32_t result = sub_a95c(&var_1c, &var_50);
    uint32_t result_1 = result;
    
    if (result != 0xff)
    {
        result = sub_9066(0xd, &var_1c, 0xe);
        
        if (result_1)
            return sub_9066(0xd, &var_50, result_1);
    }
    
    return result;
}

uint32_t sub_7ab4()
{
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    void var_50;
    0xff7fec0a(&var_50, 0x38);
    uint32_t result = sub_15194(&var_18, &var_50);
    uint32_t result_1 = result;
    
    if (result != 0xff)
    {
        result = sub_9066(0x37, &var_18, 0xe);  /* "0" */
        
        if (result_1)
            return sub_9066(0x37, &var_50, result_1);  /* "0" */
    }
    
    return result;
}

int32_t sub_7af4()
{
    int32_t r0 = sub_140ec();
    
    if (r0 > 0xea6)
        return 0x7d;
    
    if (r0 >= 0x9f6)
        return 0xff7feb2c(0x64 * r0, 0xbb8);
    
    return 0x55;
}

uint32_t sub_7b28(char* arg1)
{
    uint32_t i = 0;
    uint32_t r0 = *arg1;
    uint32_t i_1 = 1;
    int16_t r5 = 0;
    
    if (r0 > 0x63)
        r0 = 0x63;
    
    *arg1 = r0;
    uint32_t r1 = arg1[1];
    
    if (r1 > 0xc)
        r1 = 0xc;
    
    arg1[1] = r1;
    int32_t r0_1 = sub_70fc(r0, r1);
    uint32_t r0_2 = arg1[2];
    
    if (r0_1 < r0_2)
        r0_2 = sub_70fc(*arg1, arg1[1]);
    
    arg1[2] = r0_2;
    
    for (; *arg1 > i; i = i + 1)
    {
        int16_t r0_6;
        
        if (!sub_70d4(i + 0x7d0))
            r0_6 = 0x16d;
        else
            r0_6 = 0x16e;
        
        r5 += r0_6;
    }
    
    for (; arg1[1] > i_1; i_1 = i_1 + 1)
        r5 += sub_70fc(*arg1, i_1);
    
    return arg1[2] + r5;
}

int32_t sub_7ba4(int32_t arg1)
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    int32_t r1;
    int32_t var_1c_4 = r1;
    int32_t var_20 = arg1;
    int32_t var_1c = 0;
    var_20 = 0;
    int32_t r0_3;
    
    if (*sub_191ec(&var_20, 0))
        r0_3 = 0;
    else
        r0_3 = 1;
    
    int32_t var_1c_1 = 0;
    var_20 = 0;
    var_20 = 0x80;
    int32_t r0_7;
    
    if (*sub_191ec(&var_20, 0) != 0x80)
        r0_7 = 0;
    else
        r0_7 = 1;
    
    int32_t var_1c_2 = 0;
    var_20 = 0;
    var_20 = 1;
    *var_20[3] = 2;
    char* r0_9 = sub_191ec(&var_20, 1);
    int32_t r0_12;
    
    if (sub_10388(r0_9))
        r0_12 = 0;
    else
        r0_12 = 1;
    
    int32_t r0_15;
    
    if (sub_10350(r0_9))
        r0_15 = 0;
    else
        r0_15 = 1;
    
    *var_20[1] = 0x80;
    int32_t r0_18;
    
    if (sub_10350(r0_9) != 0x80)
        r0_18 = 0;
    else
        r0_18 = 1;
    
    *var_20[2] = 0x81;
    int32_t r0_21;
    
    if (sub_10350(r0_9) != 0x8180)
        r0_21 = 0;
    else
        r0_21 = 1;
    
    int32_t r0_24;
    
    if (sub_10388(r0_9) != 0x8180)
        r0_24 = 0;
    else
        r0_24 = 1;
    
    int32_t var_1c_3 = 0;
    var_20 = 0;
    var_20 = 3;
    *var_1c_3[1] = 4;
    char* r0_26 = sub_191ec(&var_20, 1);
    int32_t r0_29;
    
    if (sub_103a0(r0_26))
        r0_29 = 0;
    else
        r0_29 = 1;
    
    int32_t r0_32;
    
    if (sub_10368(r0_26))
        r0_32 = 0;
    else
        r0_32 = 1;
    
    *var_20[1] = 0x80;
    int32_t r0_35;
    
    if (sub_10368(r0_26) != 0x80)
        r0_35 = 0;
    else
        r0_35 = 1;
    
    *var_20[2] = 0x81;
    *var_20[3] = 0x82;
    var_1c_3 = 0x83;
    int32_t r0_38;
    
    if (sub_10368(r0_26) != 0x83828180)
        r0_38 = 0;
    else
        r0_38 = 1;
    
    int32_t r0_41;
    
    if (sub_103a0(r0_26) != 0x83828180)
        r0_41 = 0;
    else
        r0_41 = 1;
    
    if ((1 & r0_3 & r0_7 & r0_12 & r0_15 & r0_18 & r0_21 & r0_24 & r0_29 & r0_32 & r0_35 & r0_38
            & r0_41) != 1)
        return 0xffffffff;
    
    return 0;
}

int32_t sub_7d10(int32_t arg1, int32_t arg2)
{
    int32_t r0_1;
    
    if (!sub_70d4(arg1))
        r0_1 = 0x81f500;
    else
        r0_1 = 0x81f530;
    
    return *((arg2 << 2) + r0_1 - 4);
}

int32_t sub_7d34(char* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t* var_20 = arg2;
    char* var_24 = arg1;
    int32_t* r7 = arg2;
    char* r5 = arg1;
    int32_t result = 0;
    
    while (true)
    {
        uint32_t r0 = *r5;
        
        if (!r0)
            break;
        
        if (r0 == 0x25)
        {
            int32_t r4_1 = 0;
            int32_t var_68_1 = 0;
            int32_t var_60_1 = 0;
            
            while (true)
            {
                r5 = &r5[1];
                int32_t r0_2 = 1 << (*r5 - 0x20);  /* "23" */
                
                if (!(r0_2 & 0x12809))
                    break;
                
                r4_1 |= r0_2;
            }
            
            if (*r5 == 0x2a)
            {
                int32_t r0_6 = *r7;
                r7 = &r7[1];
                var_68_1 = r0_6;
                
                if (r0_6 < 0)
                {
                    r4_1 |= 0x2000;
                    var_68_1 = 0 - var_68_1;
                }
                
                r4_1 |= 2;
                r5 = &r5[1];
            }
            else
            {
                while (true)
                {
                    uint32_t r0_4 = *r5;
                    
                    if (r0_4 - 0x30 > 9)  /* "R02_V3.0" */
                        break;
                    
                    r4_1 |= 2;
                    r5 = &r5[1];
                    var_68_1 = r0_4 + 0xa * var_68_1 - 0x30;  /* "R02_V3.0" */
                }
            }
            
            if (*r5 == 0x2e)
            {
                r4_1 |= 4;
                uint32_t r0_10 = r5[1];
                r5 = &r5[1];
                
                if (r0_10 != 0x2a)
                {
                    while (true)
                    {
                        uint32_t r0_13 = *r5;
                        
                        if (r0_13 - 0x30 > 9)  /* "R02_V3.0" */
                            break;
                        
                        r5 = &r5[1];
                        var_60_1 = r0_13 + 0xa * var_60_1 - 0x30;  /* "R02_V3.0" */
                    }
                }
                else
                {
                    int32_t r0_11 = *r7;
                    r7 = &r7[1];
                    r5 = &r5[1];
                    var_60_1 = r0_11;
                }
            }
            
            uint32_t r0_14 = *r5;
            int32_t r1_11;
            
            if (r0_14 == 0x6c)
            {
                r1_11 = 0x100000;
            label_7e18:
                r4_1 |= r1_11;
                
                if (r5[1] == r0_14)
                {
                    r4_1 += 0x100000;
                    r5 = &r5[1];
                }
                
                r5 = &r5[1];
            }
            else if (r0_14 > 0x6c)
            {
                if (r0_14 == 0x74 || r0_14 == 0x7a)
                    r5 = &r5[1];
            }
            else if (r0_14 == 0x4c)
                r5 = &r5[1];
            else
            {
                if (r0_14 == 0x68)
                {
                    r1_11 = 0x300000;
                    goto label_7e18;
                }
                
                if (r0_14 == 0x6a)
                {
                    r4_1 |= 0x200000;
                    r5 = &r5[1];
                }
            }
            uint32_t r0_15 = *r5;
            
            if (r0_15 == 0x6e)
            {
                uint32_t r0_17 = r4_1 << 9 >> 0x1d;  /* "40523" */
                
                if (r0_17 == 2)
                {
                    int32_t* r0_19 = *r7;
                    *r0_19 = result;
                    r0_19[1] = result >> 0x1f;  /* "523" */
                }
                else if (r0_17 == 3)
                    **r7 = result;
                else
                {
                    int32_t* r0_18 = *r7;
                    
                    if (r0_17 == 4)
                        *r0_18 = result;
                    else
                        *r0_18 = result;
                }
                
                r7 = &r7[1];
            }
            else
            {
                int32_t var_64_2;
                char* var_5c_1;
                char var_58;
                int32_t var_54_1;
                char var_50;
                int32_t r0_22;
                uint32_t r0_36;
                int32_t r0_37;
                int32_t r12_1;
                
                if (r0_15 <= 0x6e)
                {
                    if (r0_15 == 0x63)
                    {
                        var_58 = *r7;
                        char var_57_1 = 0;
                        var_5c_1 = &var_58;
                        r0_22 = 1;
                        goto label_7eb4;
                    }
                    
                    if (r0_15 > 0x63)
                    {
                        if (r0_15 == 0x64 || r0_15 == 0x69)
                        {
                            var_58 = 0xa;
                            var_54_1 = 0;
                            uint32_t r1_31 = r4_1 << 9 >> 0x1d;  /* "40523" */
                            
                            if (r1_31 == 2)
                            {
                                uint32_t r7_3 = (r7 + 7) >> 3 << 3;
                                r0_36 = *r7_3;
                                r7 = r7_3 + 8;
                                r12_1 = *(r7_3 + 4);
                            }
                            else
                            {
                                r0_36 = *r7;
                                r7 = &r7[1];
                                r12_1 = r0_36 >> 0x1f;  /* "523" */
                                
                                if (r1_31 == 3)
                                {
                                    r0_36 = r0_36;
                                    r12_1 = r0_36 >> 0x1f;  /* "523" */
                                }
                                
                                if (r1_31 == 4)
                                {
                                    r0_36 = r0_36;
                                    r12_1 = r0_36 >> 0x1f;  /* "523" */
                                }
                            }
                            
                            int32_t r1_37;
                            
                            if (r12_1 < 0)
                            {
                                uint32_t temp2_1 = r0_36;
                                r0_36 = 0 - r0_36;
                                r12_1 = 0 - r12_1;
                                var_50 = 0x2d;
                                r1_37 = 1;
                            }
                            else if (r4_1 << 0x14 >= 0)  /* "3.00.06_240523" */
                            {
                                r1_37 = r4_1 << 0x1f;  /* "523" */
                                
                                if (r1_37)
                                {
                                    var_50 = 0x20;  /* "23" */
                                    r1_37 = 1;
                                }
                            }
                            else
                            {
                                var_50 = 0x2b;
                                r1_37 = 1;
                            }
                            
                            var_64_2 = r1_37;
                            goto label_8054;
                        }
                        
                        arg4(r0_15, arg3);
                        result += 1;
                    }
                    else
                    {
                        if (!r0_15)
                            break;
                        
                        if (r0_15 == 0x58)
                        {
                            r0_37 = 0x10;  /* "R02_3.00.06_240523" */
                            goto label_7fc2;
                        }
                        
                        arg4(r0_15, arg3);
                        result += 1;
                    }
                }
                else if (r0_15 == 0x73)
                {
                    var_5c_1 = *r7;
                    r0_22 = 0xffffffff;
                label_7eb4:
                    r7 = &r7[1];
                    int32_t var_64_1;
                    
                    if (r4_1 << 0x1d >= 0)  /* "40523" */
                    {
                        int32_t r1_20 = 0;
                        
                        while (true)
                        {
                            var_64_1 = r1_20;
                            
                            if (r1_20 >= r0_22 && !var_5c_1[var_64_1])
                                break;
                            
                            r1_20 = var_64_1 + 1;
                        }
                    }
                    else
                    {
                        int32_t r1_16 = 0;
                        
                        while (true)
                        {
                            var_64_1 = r1_16;
                            
                            if (r1_16 >= var_60_1)
                                break;
                            
                            if (r1_16 >= r0_22 && !var_5c_1[var_64_1])
                                break;
                            
                            r1_16 = var_64_1 + 1;
                        }
                    }
                    
                    int32_t r0_25 = var_68_1 - var_64_1;
                    result = sub_817c(r0_25, r4_1, arg3, arg4) + result + var_64_1;
                    
                    while (true)
                    {
                        int32_t r0_31 = var_64_1 - 1;
                        var_64_1 = r0_31;
                        
                        if (r0_31 == 0xffffffff)
                            break;
                        
                        uint32_t r0_29 = *var_5c_1;
                        var_5c_1 = &var_5c_1[1];
                        arg4(r0_29, arg3);
                    }
                    
                    result += sub_815c(r0_25, r4_1, arg3, arg4);
                }
                else if (r0_15 <= 0x73)
                {
                    if (r0_15 == 0x6f)
                    {
                        r0_37 = 8;
                        goto label_7fc2;
                    }
                    
                    if (r0_15 == 0x70)
                    {
                        var_58 = 0x10;  /* "R02_3.00.06_240523" */
                        r4_1 |= 4;
                        var_54_1 = 0;
                        var_60_1 = 8;
                        goto label_7fc8;
                    }
                    
                    arg4(r0_15, arg3);
                    result += 1;
                }
                else if (r0_15 == 0x75)
                {
                    r0_37 = 0xa;
                label_7fc2:
                    var_54_1 = 0;
                    var_58 = r0_37;
                label_7fc8:
                    uint32_t r1_38 = r4_1 << 9 >> 0x1d;  /* "40523" */
                    
                    if (r1_38 == 2)
                    {
                        uint32_t r7_6 = (r7 + 7) >> 3 << 3;
                        r0_36 = *r7_6;
                        r7 = r7_6 + 8;
                        r12_1 = *(r7_6 + 4);
                    }
                    else
                    {
                        r0_36 = *r7;
                        r7 = &r7[1];
                        r12_1 = 0;
                        
                        if (r1_38 == 3)
                            r0_36 = r0_36;
                        
                        if (r1_38 == 4)
                            r0_36 = r0_36;
                    }
                    
                    var_64_2 = 0;
                    
                    if (r4_1 << 0x1c < 0)  /* "240523" */
                    {
                        uint32_t r1_41 = *r5;
                        
                        if (r1_41 == 0x70)
                        {
                            var_50 = 0x40;
                            var_64_2 = 1;
                        }
                        else if (!((var_58 ^ 0x10) | var_54_1) && r12_1 | r0_36)  /* "
                            R02_3.00.06_240523" */
                        {
                            var_50 = 0x30;  /* "R02_V3.0" */
                            char var_4f_1 = r1_41;
                            var_64_2 = 2;
                        }
                        
                        if (!((var_58 ^ 8) | var_54_1) && (r12_1 | r0_36 || r4_1 << 0x1d < 0))  /* "
                            40523" */
                        {
                            var_50 = 0x30;  /* "R02_V3.0" */
                            var_64_2 = 1;
                            var_60_1 -= 1;
                        }
                    }
                    
                label_8054:
                    void* const r1_52;
                    
                    if (*r5 == 0x58)
                        r1_52 = "0123456789ABCDEF";
                    else
                        r1_52 = "0123456789abcdef";
                    
                    int32_t* var_2c = &var_2c;
                    
                    while (r12_1 | r0_36)
                    {
                        int32_t r1_53;
                        int32_t r2_17;
                        r0_36 = 0xff7feb54();
                        r12_1 = r1_53;
                        char r3_7 = *(r1_52 + r2_17);
                        void* r2_19 = var_2c - 1;
                        var_2c = r2_19;
                        *r2_19 = r3_7;
                    }
                    
                    void var_4c;
                    int32_t var_5c_4 = &var_4c - var_2c + 0x20;  /* "23" */
                    int32_t r0_43;
                    
                    if (r4_1 << 0x1d >= 0)  /* "40523" */
                    {
                        r0_43 = 1;
                        int32_t var_60_2 = 1;
                    }
                    else
                    {
                        r4_1 &= 0xfffeffff;
                        r0_43 = var_60_1;
                    }
                    
                    int32_t r0_44;
                    
                    r0_44 = r0_43 <= var_5c_4 ? 0 : r0_43 - var_5c_4;
                    
                    int32_t var_60_3 = r0_44;
                    int32_t var_68_2 = var_68_1 - (r0_44 + var_5c_4 + var_64_2);
                    
                    if (r4_1 << 0xf >= 0)
                        result += sub_817c(var_68_2, r4_1, arg3, arg4);
                    
                    int32_t r0_53 = 0;
                    var_58 = 0;
                    
                    while (r0_53 < var_64_2)
                    {
                        arg4((&var_50)[r0_53], arg3);
                        r0_53 = var_58 + 1;
                        result += 1;
                        var_58 = r0_53;
                    }
                    
                    if (r4_1 << 0xf < 0)
                        result += sub_817c(var_68_2, r4_1, arg3, arg4);
                    
                    while (true)
                    {
                        int32_t r1_64 = var_60_3;
                        var_60_3 = r1_64 - 1;
                        
                        if (r1_64 <= 0)
                            break;
                        
                        arg4(0x30, arg3);  /* "R02_V3.0" */
                        result += 1;
                    }
                    
                    while (true)
                    {
                        int32_t r1_68 = var_5c_4;
                        var_5c_4 = r1_68 - 1;
                        
                        if (r1_68 <= 0)
                            break;
                        
                        uint32_t r0_59 = *var_2c;
                        var_2c += 1;
                        arg4(r0_59, arg3);
                        result += 1;
                    }
                    
                    result += sub_815c(var_68_2, r4_1, arg3, arg4);
                }
                else
                {
                    if (r0_15 == 0x78)
                    {
                        r0_37 = 0x10;  /* "R02_3.00.06_240523" */
                        goto label_7fc2;
                    }
                    
                    arg4(r0_15, arg3);
                    result += 1;
                }
            }
            
            r5 = &r5[1];
        }
        else
        {
            arg4(r0, arg3);
            r5 = &r5[1];
            result += 1;
        }
    }
    
    return result;
}

int32_t sub_815c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r4 = arg1;
    int32_t result = 0;
    
    if (arg2 << 0x12 < 0)  /* "2_3.00.06_240523" */
    {
        while (true)
        {
            int32_t temp0_1 = r4;
            r4 -= 1;
            
            if (temp0_1 - 1 < 0)
                break;
            
            arg4(0x20, arg3);  /* "23" */
            result += 1;
        }
    }
    
    return result;
}

int32_t sub_817c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_20 = arg2;
    int32_t var_24 = arg1;
    int32_t r4 = arg1;
    int32_t result = 0;
    int32_t r7;
    
    r7 = arg2 << 0xf >= 0 ? 0x20 : 0x30;  /* "23" */  /* "R02_V3.0" */
    
    if (arg2 << 0x12 >= 0)  /* "2_3.00.06_240523" */
    {
        while (true)
        {
            int32_t temp0_1 = r4;
            r4 -= 1;
            
            if (temp0_1 - 1 < 0)
                break;
            
            arg4(r7, arg3);
            result += 1;
        }
    }
    
    return result;
}

int32_t sub_81a8()
{
    int32_t var_68;
    sub_16d0c(&var_68);
    return sub_192dc(0x81f4f4, 0x10996c, var_68, 0, &var_68, 0x64);
}

uint32_t sub_81d4()
{
    uint32_t result = *0x109908;
    
    if (result == 1)
    {
        result = *0x1098d4;
        
        if (result < 2)
        {
            result = sub_f8f8(sub_eaec());
            
            if (!result)
            {
                result = 2;
                *0x109908 = 2;
            }
        }
    }
    
    return result;
}

int32_t sub_8200()
{
    int32_t r5 = *0x109974;
    *0x109978 = r5;
    *0x1099ac = *0x1099a8;
    *0x109988 = 0xa * 0xff7feb00(*0x109984, 0xa);
    *0x109990 = 0x64 * 0xff7feb00(*0x10998c, 0x64);
    int32_t result = *0x1099a0;
    *0x10997c = r5;
    *0x1099a4 = result;
    return result;
}

int32_t sub_8234(int16_t* arg1)
{
    *0x109974 += *arg1;
    *0x1099a8 += arg1[1];
    *0x1099a0 += arg1[4];
    *0x10998c += 0x64 * arg1[2];
    int32_t result = *0x109984 + 0xa * arg1[3];
    *0x109984 = result;
    return result;
}

void sub_8270(char arg1, int32_t* arg2)
{
    char* r2 = *arg2;
    *arg2 = &r2[1];
    *r2 = arg1;
}

int32_t sub_827c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0 = *0x103d69;
    int32_t r4_1 = 0xff7fec8e(r0, arg2, arg3, r0, arg4) << 0x10;  /* "R02_3.00.06_240523" */
    int32_t r0_3 = sub_140ec();
    int32_t r7;
    
    if (r0_3 > 0x1a5e)
        r7 = 0x87;
    else if (r0_3 >= 0xfa0)
        r7 = 0xff7feb2c(0x64 * r0_3, 0x1388);
    else
        r7 = 0x50;
    
    *(r4_1 + 6) = 0xff7feb2c(0x28 * r7 * *0x103d66, 0x2710);
    char result = 0xff7feb2c(0x37 * r7 * *0x103d70, 0x2710);  /* "0" */
    *(r4_1 + 5) = result;
    return result;
}

int32_t sub_832c(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    uint32_t r4_1 = arg2 << 0x14 >> 0x14;  /* "3.00.06_240523" */
    int32_t r6 = arg2 - r4_1;
    sub_15b30(r6, 0x107fad, 0x1000);
    0xff7febfc(r4_1 + 0x107fad + arg3, *(arg1 + 0xa) - arg3, 0xff);
    sub_15b5e(r6);
    return sub_15b76(r6, 0x107fad, 0x1000);
}

int32_t sub_836c(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg3;
    int32_t* var_1c = arg2;
    int32_t* var_20 = arg1;
    int32_t r0_1 = *var_1c;
    
    if (r0_1)
    {
        int32_t* r0_2;
        r0_2 = sub_ea04(r0_1, arg2, arg3, arg4);
        arg2 = r0_2;
        
        if (arg2 == var_18)
            return *var_1c;
    }
    
    int32_t result = *arg1;
    int32_t result_1 = 0;
    int32_t r7_1 = 0;
    
    while (true)
    {
        if (arg1[1] <= r7_1)
        {
            if (!result_1)
            {
                sub_191f2(arg1);
                result_1 = *arg1;
            }
            
            uint32_t r0_15 = arg1[2];
            result = result_1;
            int32_t r1_1 = 0xff7feb00(result_1, r0_15);
            uint32_t r6_1 = *(arg1 + 0xa);
            int32_t r0_18 = 0xff7feb00(r1_1, r6_1);
            int32_t r0_20;
            int32_t r2;
            int32_t r3;
            r0_20 = 0xff7feb00(r0_15, r6_1);
            
            if (r0_18 == r0_20 - 1)
            {
                int32_t r0_22 = *arg1;
                int32_t r6_2 = r6_1 + result;
                int32_t r1_5 = r0_22 + arg1[1];
                
                if (r1_5 <= r6_2)
                    r6_2 = r0_22;
                
                if (sub_ea04(r6_2, r1_5, r2, r3) != 0xffffffff)
                {
                    if (arg1[2] != 0x1000)
                    {
                        uint32_t r6_4 = r6_2 << 0x14 >> 0x14;  /* "3.00.06_240523" */
                        int32_t r7_3 = r6_2 - r6_4;
                        sub_15b30(r7_3, 0x107fad, 0x1000);
                        0xff7febfc(r6_4 + 0x107fad, arg1[2], 0xff);
                        sub_15b5e(r7_3);
                        sub_15b76(r7_3, 0x107fad, 0x1000);
                    }
                    else
                        sub_15b5e(r6_2);
                }
            }
            
            break;
        }
        
        int32_t* r0_7;
        r0_7 = sub_ea04(result, arg2, arg3, arg4);
        arg2 = r0_7;
        
        if (arg2 == var_18)
            break;
        
        if (!result_1)
        {
            int32_t r0_10;
            r0_10 = sub_ea04(result, arg2, arg3, arg4);
            
            if (r0_10 == 0xffffffff)
                result_1 = result;
        }
        
        uint32_t r0_12 = *(arg1 + 0xa);
        result += r0_12;
        r7_1 += r0_12;
    }
    
    *var_1c = result;
    return result;
}

int32_t sub_8464(int32_t arg1)
{
    if (!sub_70d4(arg1))
        return 0x1e13380;
    
    return 0x1e28500;
}

uint32_t sub_8480()
{
    0xff900b4c(0x61a80);
    sub_14f14();
    uint32_t r0 = *0x108fb0;
    
    if (r0 == 0x11)  /* "02_3.00.06_240523" */
    {
        sub_f190(0x1f, 0x40);  /* "523" */
        uint32_t result = sub_f190(0x20, 0);  /* "23" */
        
        if (!result)
            return result;
    }
    else if (r0 != 0x23)
    {
        if (r0 != 0x13)  /* "_3.00.06_240523" */
            return 0;
        
        sub_10cd8();
    }
    
    return 1;
}

int32_t sub_84c8() __pure
{
    return;
}

int32_t sub_84ca() __pure
{
    return;
}

int32_t sub_84cc(int16_t* arg1, int16_t* arg2)
{
    if (*arg1 <= *arg2)
        return 0xffffffff;
    
    return 1;
}

int32_t sub_84de(int16_t* arg1, int16_t* arg2)
{
    if (*arg1 <= *arg2)
        return 0xffffffff;
    
    return 1;
}

int32_t sub_84f0() __pure
{
    return;
}

int32_t sub_84f2() __pure
{
    return;
}

int32_t sub_84f4() __pure
{
    return;
}

int32_t sub_84f6()
{
    sub_97c4();
    return sub_16338(sub_94bc());
}

int32_t sub_8508(int32_t arg1, int32_t arg2)
{
    if (!arg2)
    {
        sub_15ef0(0x104f14, 4, arg1);
        return 0x104f14;
    }
    
    if (arg2 == 1)
    {
        sub_15ef6(0x104f14, 4);
        return 0x104f14;
    }
    
    if (arg2 == 2)
        *0x104f30 = 1;
    else if (arg2 == 3)
        *0x104f30 = 0;
    
    return 0x104f2c;
}

int32_t sub_8544(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t var_1c = arg3;
    void* var_20 = arg2;
    int32_t var_24 = arg1;
    int32_t result = arg1;
    int32_t r5 = arg3;
    uint32_t i = 0;
    int32_t var_44;
    0xff7fec0a(&var_44, 0x14);  /* "3.00.06_240523" */
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    
    if (r5)
    {
        if (r5 >= 0x28)
            r5 = 0x28;
        
        uint32_t var_34_1 = *(arg2 + 6);
        
        for (; i < r5; i = i + 1)
        {
            void* r0_3 = (i << 1) + arg4;
            var_44 = *(r0_3 + 4) >> 5;
            int32_t var_40_1 = *(&*(data_53 + 1) + r0_3) >> 5;
            int32_t var_3c_1 = *(r0_3 + 0xa4) >> 5;
            int32_t var_38_1 = *((i << 2) + arg2 + 0x1c);  /* "240523" */
            int32_t var_48_1 = 1;
            sub_6164(&var_44, 0x28, arg5);
        }
        
        sub_6c30(&var_30);
        int32_t r0_10 = var_30;
        
        if (r0_10 == 0xffffffff)
        {
            sub_f7c0(1);
            sub_1ac18(2);
        }
        else
        {
            if (r0_10 > 0)
                result = r0_10;
            
            sub_f7c0(0);
        }
    }
    
    return result;
}

void sub_85d8(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t var_1c = arg3;
    uint32_t var_24 = arg1;
    uint32_t i = 0;
    
    if (!arg3)
        return;
    
    for (; i < arg3; i = i + 1)
    {
        void* r7_1 = (i << 3) + arg2;
        int32_t r0_2 = sub_5776(*(r7_1 + 0x1c));  /* "240523" */
        int32_t r0_4 = sub_5776(*(r7_1 + 0x20));  /* "23" */
        uint32_t r0_6 = sub_57c8(r0_2);
        sub_5760(sub_4394(sub_57c8(r0_4), r0_6, 1));
    }
}

int32_t sub_8634()
{
    void var_48;
    int32_t r2;
    int32_t r3;
    r2 = 0xff7febd8(&var_48, 0x81ecb0, 0x28);
    char var_42 = 1;
    int16_t var_44 = 8;
    char var_41 = 0;
    sub_876c(&var_48, &var_48, r2, r3);
    int16_t var_20[0x8];
    
    for (uint32_t i = 0; i < 6; i = i + 1)
    {
        uint32_t r0_3 = sub_86c8(&var_48);
        var_20[i] = r0_3;
        
        if (r0_3 == 0xffff)
            i = i - 1;
    }
    
    sub_8938(&var_48);
    sub_51ae(&var_20, 6, 2, 0x80b3cd);
    uint32_t r0_7 = sub_6c5e(&var_20);
    int32_t r1_2 = *0x105a9c;
    return *(0x103b98 + (r1_2 << 2)) - (r0_7 - 0xfa) * (*(0x103b18 + (r1_2 << 1)) + 0x29ab);
}

uint32_t sub_86c8(int32_t arg1)
{
    uint16_t var_8 = 0;
    void var_30;
    0xff7febd8(&var_30, arg1, 0x28);
    *0x2020108c = 0x22d80;
    sub_87cc(&var_30, 3, &var_8);
    return var_8;
}

uint32_t sub_86fc(int32_t arg1)
{
    int32_t r5 = 0;
    void var_50;
    int32_t r2;
    int32_t r3;
    r2 = 0xff7febd8(&var_50, 0x81ec88, 0x28);
    char var_4a = 1;
    int16_t var_4c = 8;
    char var_49 = 0;
    sub_876c(&var_50, &var_50, r2, r3);
    *0x2020108c = 0x3980;
    int16_t var_28[0x8];
    
    for (uint32_t i = 0; i < 8; i = i + 1)
    {
        if (!sub_87cc(&var_50, arg1, &var_28[i]))
            r5 += var_28[i];
        else
            i = i - 1;
    }
    sub_8938(&var_50);
    return ((r5 >> 0x1f >> 0x1d) + r5) << 0xd >> 0x10;
        /* "R02_3.00.06_240523" */  /* "40523" */  /* "523" */
}

int32_t sub_876c(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t* r4 = *(arg1 + 0x20);  /* "23" */
    (*0x81ec4c)();
    (*0x81ec58)(arg1, 0, 0, 1, arg4);
    (*0x81ec48)(arg1, 2);
    (*0x81ec50)(arg1, 0);
    (*0x81ec54)(arg1, 0);
    sub_1640c();
    sub_8830(r4, *(arg1 + 4));
    int32_t r0_6 = *r4;
    uint32_t r0_7;
    
    if (!*(arg1 + 6))
        r0_7 = r0_6 >> 1 << 1;
    else
        r0_7 = r0_6 | 1;
    
    *r4 = r0_7;
    (*0x81ec5c)(arg1, 0);
    return 0;
}

int32_t sub_87cc(void* arg1, int32_t arg2, uint16_t* arg3)
{
    uint16_t* var_18 = arg3;
    void* var_20 = arg1;
    void* r4 = *(arg1 + 0x20);  /* "23" */
    
    if (!0xff900560(arg1 + 0x1c))  /* "240523" */
        return 2;
    
    (*0x81ec5c)(arg1, 2);
    *(r4 + 0xc) = arg2 << 0x1d >> 0x11 | (*(r4 + 0xc) & 0xffff8fff);
        /* "02_3.00.06_240523" */  /* "40523" */
    *(r4 + 0xc) |= 2;
    
    while (*(r4 + 0xc) << 0x1e < 0)  /* "0523" */
        /* nop */
    
    (*0x81ec5c)(arg1, 3);
    0xff90057c(arg1 + 0x1c);  /* "240523" */
    *arg3 = *(r4 + 0xc) << 6 >> 0x16;  /* "00.06_240523" */
    return 0;
}

uint32_t sub_8830(void* arg1, int32_t arg2)
{
    uint32_t r0_2 = 0xff7feb2c(arg2 * 0xf42400, 0xf4240);
    
    if (r0_2 > 0x3ff)
        r0_2 = 0x3ff;
    else if (!r0_2)
        r0_2 = 1;
    
    *(arg1 + 8) = r0_2 << 0x16 >> 6 | (*(arg1 + 8) & 0xfc00ffff);  /* "00.06_240523" */
    uint32_t result = r0_2 << 0x16 >> 0x16 | *(arg1 + 8) >> 0xa << 0xa;  /* "00.06_240523" */
    *(arg1 + 8) = result;
    return result;
}

int32_t sub_8880()
{
    void var_78;
    int32_t r2;
    int32_t r3;
    r2 = 0xff7febd8(&var_78, 0x81ecd8, 0x28);
    char var_72 = 1;
    int16_t var_74 = 8;
    char var_71 = 0;
    sub_876c(&var_78, &var_78, r2, r3);
    int16_t var_24[0x8];
    
    for (uint32_t i = 0; i < 6; i = i + 1)
    {
        uint16_t var_50 = 0;
        void var_4c;
        0xff7febd8(&var_4c, &var_78, 0x28);
        *0x2020108c = 0x13d80;
        sub_87cc(&var_4c, 3, &var_50);
        uint32_t r0_4 = var_50;
        var_24[i] = r0_4;
        
        if (r0_4 == 0xffff)
            i = i - 1;
    }
    
    sub_8938(&var_78);
    sub_51ae(&var_24, 6, 2, 0x80b3cd);
    int32_t r2_4 = sub_6c5e(&var_24) * (*(0x103c98 + *0x105a9c) + 0x3ac);
    return 0xff7feb2c(r2_4 - 0x6d6e6, 0x2d0, r2_4);
}

int32_t sub_8938(void* arg1)
{
    int32_t* r5 = *(arg1 + 0x20);  /* "23" */
    (*0x81ec54)(arg1, 1);
    (*0x81ec48)(arg1, 1);
    *r5 = *r5 >> 1 << 1;
    sub_1640c();
    (*0x81ec5c)(arg1, 1);
    return 0;
}

int32_t sub_896c()
{
    char var_28;
    char var_24;
    uint8_t var_20;
    void var_1c;
    int32_t entry_r2;
    int32_t entry_r3;
    sub_e14c(&var_28, &var_24, &var_1c, sub_e180(&var_28, &var_20, entry_r2, entry_r3));
    uint32_t r0_2 = var_28;
    
    if (r0_2 == 0x5e)
    {
        if (var_24 == 0x32)  /* "2_V3.0" */
            sub_77d4(0, 0, 1, 0x105a9c);
        else
            sub_e1b0(1, 0, 1, 0x105a9c);
        
    label_8a12:
        
        if (!(~*0x105a9c << 0x18 >> 0x18))  /* ".06_240523" */
        {
            uint32_t r5_1 = 0;
            
            for (uint32_t i = 1; i < 6; )
            {
                int32_t r0_16;
                
                if (sub_86fc(i) >= 0x2a3)
                    r0_16 = 0;
                else
                    r0_16 = 1;
                
                char r0_18 = r0_16 << (i - 1) | r5_1;
                i = i + 1;
                r5_1 = r0_18;
            }
            
            *0x105a9c = *(0x103cd8 + r5_1);
        }
    }
    else
    {
        if (r0_2 != 0xef && r0_2 != 0x85 && r0_2 != 0x68 && r0_2 != 0xb)
        {
            if (r0_2 == 0x20)  /* "23" */
            {
                0xff9004f0();
                0xff9004ba(0xfff000, 1, 0x105a9c);
                
                if (0xff90050e())
                {
                    while (true)
                        /* nop */
                }
            }
            
            goto label_8a12;
        }
        
        sub_e1b0(1, 0, 1, 0x105a9c);
        
        if (!(~*0x105a9c << 0x18 >> 0x18))  /* ".06_240523" */
        {
            sub_db58();
            *0x105a98 = 1;
            uint32_t r0_8 = *0x104228;
            
            if (!r0_8 || r0_8 == 0xff)
                r0_8 = 0x24;
            
            *0x105a9c = r0_8;
            goto label_8a12;
        }
    }
    
    return sub_15efe(*0x105a9c);
}

int32_t sub_8a64()
{
    uint32_t r1 = *0x105f81;
    
    if (r1 == 3)
        return 0;
    
    (*(0x81efcc + (r1 << 2)))();
    *0x105f81 += 1;
    return 1;
}

int32_t sub_8ab4()
{
    char* r0 = 0xff80c348(0xf200, 0xc, 4, 1);
    *r0 = 0;
    return 0xff80c3b8(r0, 0);
}

int32_t sub_8ad0()
{
    int32_t i_1 = 0xf4240;
    int32_t i;
    
    do
    {
        i = i_1;
        i_1 -= 1;
    } while (i >= 1);
    /* jump -> *0x100090 */
}

int32_t sub_8ae4(int32_t arg1, int32_t arg2)
{
    /* tailcall */
    return sub_8aec();
}

int32_t sub_8aec() __pure
{
    return;
}

int32_t sub_8b08()
{
    /* tailcall */
    return sub_8b0c();
}

uint32_t sub_8b0c()
{
    uint32_t r0;
    int32_t r2;
    int32_t r3;
    r0 = sub_103c0(0x106a3c, *0x106a38);
    uint32_t result = *0x106a35;
    
    if (r0 != *0x106a3a)
        return sub_a7ac(result, 2, r2, r3);
    
    if (result == 0x31)  /* "02_V3.0" */
        sub_a3d4(1, 0);
    else
        switch (result)
        {
            case 1:
            case 2:
            {
                sub_a3d4(1, 0);
                break;
            }
            case 6:
            {
                return result;
                break;
            }
            case 0x10:  /* "R02_3.00.06_240523" */
            {
                return result;
                break;
            }
            case 0x21:  /* "3" */
            {
                sub_a3d4(1, 0);
                break;
            }
            case 0x35:  /* "3.0" */
            case 0x36:  /* ".0" */
            {
                sub_a3d4(1, 0);
                break;
            }
            case 0x46:
            {
                return result;
                break;
            }
            case 0x61:
            case 0x82:
            {
                sub_a3d4(1, 0);
                break;
            }
        }
    
    return sub_104c4(*0x106a35, 0x106a3c, *0x106a36);
}

int32_t sub_8b7c(void* arg1)
{
    char r6 = *(arg1 + 1);
    uint32_t r5 = *(arg1 + 2);
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    
    if (*(arg1 + 1) == 1)
    {
        var_28 = 0x16;  /* "00.06_240523" */
        *var_28[1] = r6;
        char r0_4;
        
        if (!sub_18b14())
            r0_4 = 2;
        else
            r0_4 = 1;
        
        *var_28[2] = r0_4;
        *var_28[3] = *0x10434b;
    }
    else
    {
        int32_t r0_1;
        
        r0_1 = r5 == 1 ? 1 : 0;
        
        sub_18b44(r0_1);
        uint32_t r0_2 = *(arg1 + 3);
        *0x10434b = r0_2;
        
        if (r0_2 == 0xff || !r0_2)
            *0x10434b = 0x1e;  /* "0523" */
        
        var_28 = 0x16;  /* "00.06_240523" */
        *var_28[1] = r6;
        *var_28[2] = r5;
    }
    
    *var_1c[3] = sub_c410(&var_28, 0xf);
    return sub_a800(&var_28);
}

int32_t sub_8bfc()
{
    if (sub_1b3d0())
        sub_15c10(0);
    
    return sub_9044(0x10, 0);  /* "R02_3.00.06_240523" */
}

uint32_t sub_8c16()
{
    sub_aa98();
    return sub_7a86();
}

char* sub_8c22(char* arg1)
{
    char* result = arg1;
    uint32_t r1 = arg1[1];
    
    if (r1 == 1)
    {
        sub_a920(&result);
        result = 1;
        sub_9066(*arg1, &result, 7);
        return result;
    }
    
    if (r1 == 2)
    {
        int32_t r0_1 = sub_ab20(&arg1[1]);
        sub_9044(*arg1, r0_1);
    }
    
    return result;
}

uint32_t sub_8c56(void* arg1)
{
    uint32_t result = *(arg1 + 1);
    
    if (result)
        return result;
    
    sub_ab64();
    return sub_7a86();
}

void* sub_8c68(void* arg1)
{
    int32_t r3;
    int32_t var_c = r3;
    void* result = arg1;
    0xff7febd8(&result, arg1, 0x10);  /* "R02_3.00.06_240523" */
    
    if (*(arg1 + 1) == 1)
    {
        int32_t r0_2 = sub_ec7c();
        
        if (!r0_2)
        {
            sub_16cc0(r0_2);
            sub_db84();
            sub_18f28();
        }
    }
    
    result = 0x31;  /* "02_V3.0" */
    *result[1] = 0;
    *var_c[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

uint32_t sub_8cae(char* arg1)
{
    uint32_t r2_6 = arg1[8] + (arg1[7] << 8);
    uint32_t r3_6 = (arg1[6] << 0x10) + (arg1[5] << 0x18);
        /* "R02_3.00.06_240523" */  /* ".06_240523" */
    uint32_t r2_7 = r2_6 + r3_6;
    
    if (r2_6 == -(r3_6))
        r2_7 = 0x10;  /* "R02_3.00.06_240523" */
    else if (r2_7 > 0x200)
        r2_7 = 0x200;
    
    return sub_9066(*arg1, arg1[4] + (arg1[3] << 8) + (arg1[2] << 0x10) + (arg1[1] << 0x18), r2_7);
        /* "R02_3.00.06_240523" */  /* ".06_240523" */
}

int32_t sub_8cf2(char* arg1)
{
    uint32_t r2_2 = arg1[5];
    
    if (r2_2 > 8)
        0xff7febd8(arg1[4] + (arg1[3] << 8) + (arg1[2] << 0x10) + (arg1[1] << 0x18), &arg1[6], 8);
            /* "R02_3.00.06_240523" */  /* ".06_240523" */
    else if (r2_2)
        0xff7febd8(arg1[4] + (arg1[3] << 8) + (arg1[2] << 0x10) + (arg1[1] << 0x18), &arg1[6], 
            r2_2);  /* "R02_3.00.06_240523" */  /* ".06_240523" */
    
    return sub_9044(*arg1, 0);
}

uint32_t sub_8d28(void* arg1)
{
    uint32_t result = *(arg1 + 1);
    
    if (result == 0x66)
    {
        result = *(arg1 + 2);
        
        if (result == 0x66)
        {
            sub_18f28();
            result = *(arg1 + 3);
            
            if (result == 0x66)
                return 0xff7fec0a(0x10bfa0, 0xa8);
        }
    }
    
    return result;
}

void* sub_8d50(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    char r5 = *(arg1 + 1);
    uint32_t r4 = *(arg1 + 2);
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    
    if (*(arg1 + 1) == 1)
    {
        result = 0x38;
        *result[1] = r5;
        *result[2] = sub_18b24();
    }
    else
    {
        int32_t r0_1;
        
        r0_1 = r4 == 1 ? 1 : 0;
        
        sub_18b68(r0_1);
        result = 0x38;
        *result[1] = r5;
        *result[2] = r4;
    }
    
    *var_14[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

int32_t sub_8da4(void* arg1)
{
    uint32_t r5_2 = *(arg1 + 3) << 0x10 | *(arg1 + 4) << 0x18 | *(arg1 + 2) << 8 | *(arg1 + 1);
        /* "R02_3.00.06_240523" */  /* ".06_240523" */
    uint32_t var_1c = r5_2;
    int32_t r6;
    
    if (!*(arg1 + 5))
        r6 = 1;
    else
        r6 = 0;
    
    int32_t result = 0xff7feb00(*(arg1 + 6), 0x33);  /* "_V3.0" */
    int32_t var_2c;
    
    if (!r5_2)
        var_2c = 0;
    else
        sub_1934c(r5_2, &var_2c);
    
    void var_24;
    sub_7130(&var_24, var_2c);
    int32_t r0_3 = var_2c;
    int32_t r0_4;
    
    if (!r6)
        r0_4 = sub_f2f4(r0_3, result, 0x105fc4);
    else
        r0_4 = sub_f33e(r0_3, result, 0x105fc4);
    
    int32_t var_40;
    
    if (r0_4)
    {
        for (int32_t i = 0; i < r0_4; i += 1)
        {
            var_40 = 0;
            int32_t var_3c_2 = 0;
            int32_t var_38_2 = 0;
            int32_t r3_1 = i << 3;
            int32_t var_34_2 = 0;
            int32_t var_28;
            sub_a130(*(0x105fc4 + r3_1), &var_28);
            var_40 = 0x14;  /* "3.00.06_240523" */
            int32_t r0_10 = var_28;
            *var_40[1] = r0_10;
            *var_40[2] = r0_10 >> 8;
            *var_40[3] = r0_10 >> 0x10;  /* "R02_3.00.06_240523" */
            var_3c_2 = r0_10 >> 0x18;  /* ".06_240523" */
            *var_3c_2[1] = *(r3_1 + 0x105fcb);
            *var_3c_2[2] = *(r3_1 + 0x105fca);
            *var_34_2[3] = sub_c410(&var_40, 0xf);
            sub_a800(&var_40);
        }
        
        if (result <= r0_4)
            return result;
    }
    
    var_40 = 0;
    int32_t var_3c_1 = 0;
    int32_t var_38_1 = 0;
    int32_t var_34_1 = 0;
    var_40 = 0x14;  /* "3.00.06_240523" */
    *var_40[1] = 0xff;
    *var_40[2] = 0xff;
    *var_40[3] = 0xff;
    var_3c_1 = 0xff;
    *var_34_1[3] = sub_c410(&var_40, 0xf);
    return sub_a800(&var_40);
}

int32_t sub_8e90(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char r0 = arg1 | 0x80;
    result = r0;
    *result[1] = 0xee;
    *var_c[3] = r0 - 0x12;  /* "2_3.00.06_240523" */
    sub_a800(&result);
    return result;
}

void* sub_8eb4(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    char r5 = *(arg1 + 1);
    uint32_t r4 = *(arg1 + 2);
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    
    if (*(arg1 + 1) == 1)
    {
        result = 0x36;  /* ".0" */
        *result[1] = r5;
        *result[2] = sub_18b34();
    }
    else
    {
        int32_t r0_1;
        
        r0_1 = r4 == 1 ? 1 : 0;
        
        sub_18b80(r0_1);
        result = 0x36;  /* ".0" */
        *result[1] = r5;
        *result[2] = r4;
    }
    
    *var_14[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

uint32_t sub_8f08(void* arg1)
{
    uint32_t r2 = *(arg1 + 1);
    uint32_t r1 = *0x1041e8;
    
    if (r2 != 1)
    {
        if (r2 == 2)
        {
            if (!r1)
                return 0x100;
            
            *0x1041e8 = 0;
            sub_f710(0x100);
            return sub_15bb4(0x105fb6);
        }
        
        if (r2 == 3 && r1)
            *0x1041e8 = 0x3c;
    }
    else if (!r1)
    {
        *0x1041e8 = 0x3c;
        sub_f660(0x100);
        return sub_15b94(0x105fb6, 0x812519, 0x3e8);
    }
    
    return 0x100;
}

int32_t sub_8f64(void* arg1)
{
    uint32_t r2_2 = *(arg1 + 3) << 0x10 | *(arg1 + 4) << 0x18 | *(arg1 + 2) << 8 | *(arg1 + 1);
        /* "R02_3.00.06_240523" */  /* ".06_240523" */
    int32_t var_140;
    
    if (!r2_2)
        var_140 = 0;
    else
        sub_1934c(r2_2, &var_140);
    
    int32_t var_150;
    uint32_t var_138;
    
    if (!sub_f360(var_140, &var_138))
    {
        var_150 = 0;
        int32_t var_14c_2 = 0;
        int32_t var_148_2 = 0;
        int32_t var_144_2 = 0;
        var_150 = 0x15;  /* ".00.06_240523" */
        *var_150[1] = 0xff;
        *var_144_2[3] = 0x14;  /* "3.00.06_240523" */
        return sub_a800(&var_150);
    }
    
    var_138 = r2_2;
    var_150 = 0;
    int32_t var_14c = 0;
    int32_t var_148 = 0;
    int32_t var_144 = 0;
    var_150 = 0x15;  /* ".00.06_240523" */
    *var_150[1] = 0;
    *var_150[2] = 0x18;  /* ".06_240523" */
    *var_150[3] = 5;
    char r5_1 = 1;
    *var_144[3] = sub_c410(&var_150, 0xf);
    sub_a800(&var_150);
    int32_t result;
    
    for (int32_t i = 0; i < 0x124; i += 0xd)
    {
        var_150 = 0;
        int32_t var_14c_1 = 0;
        int32_t var_148_1 = 0;
        int32_t var_144_1 = 0;
        var_150 = 0x15;  /* ".00.06_240523" */
        *var_150[1] = r5_1;
        int32_t r2_3 = 0x124 - i;
        r5_1 += 1;
        
        if (r2_3 >= 0xd)
            r2_3 = 0xd;
        
        0xff7febd8(&*var_150[2], &var_138 + i, r2_3);
        *var_144_1[3] = sub_c410(&var_150, 0xf);
        result = sub_a800(&var_150);
    }
    
    return result;
}

uint32_t sub_9036(void* arg1)
{
    sub_15260(*(arg1 + 1));
    return sub_7ab4();
}

int32_t sub_9044(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t var_14_1 = arg2;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    
    if (arg2)
        arg1 |= 0x80;
    
    result = arg1;
    *var_c[3] = arg1;
    sub_a800(&result);
    return result;
}

uint32_t sub_9066(char arg1, int32_t arg2, uint32_t arg3)
{
    uint32_t i = arg3;
    int32_t r5 = arg2;
    uint32_t result;
    
    do
    {
        int32_t var_28 = 0;
        int32_t var_24_1 = 0;
        int32_t var_20_1 = 0;
        int32_t var_1c_1 = 0;
        char r0;
        
        r0 = i <= 0xe ? i : 0xe;
        
        uint32_t r7_1 = r0;
        var_28 = arg1;
        0xff7febd8(&*var_28[1], r5, r7_1);
        *var_1c_1[3] = sub_c410(&var_28, 0xf);
        sub_a800(&var_28);
        r5 += r7_1;
        result = i - r7_1;
        i = result << 0x10 >> 0x10;  /* "R02_3.00.06_240523" */
    } while (i);
    
    return result;
}

int32_t sub_90b6(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t var_14_1 = arg2;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = arg1;
    *result[1] = arg2;
    *var_c[3] = arg1 + arg2;
    sub_a800(&result);
    return result;
}

void* sub_90d4(void* arg1)
{
    int32_t r3;
    int32_t var_c = r3;
    void* result = arg1;
    0xff7febd8(&result, arg1, 0x10);  /* "R02_3.00.06_240523" */
    result = 0x2c;
    *result[1] = *(arg1 + 1);
    uint32_t r0_2 = *(arg1 + 1);
    
    if (r0_2 == 1)
        *result[2] = sub_189d4();
    else if (r0_2 == 2)
    {
        sub_189e4(*(arg1 + 2));
        *result[2] = *(arg1 + 2);
    }
    
    *var_c[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

uint32_t sub_921c(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = *(arg3 + 1);
    uint32_t result = *(arg3 + 1);
    int32_t* r1_1;
    
    if (result == 1)
    {
        r1_1 = &var_8;
        *var_8[1] = 2;
    }
    else
    {
        if (result != 2)
            return result;
        
        r1_1 = &var_8;
    }
    
    return sub_9066(0x12, r1_1, 2);  /* "2_3.00.06_240523" */
}

int32_t sub_9358() __pure
{
    return;
}

int32_t sub_935a() __pure
{
    return;
}

void* sub_935c(void* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    void* result = arg1;
    
    if (*(arg1 + 1) == 0xaa)
    {
        uint32_t r0 = *(arg1 + 2);
        uint32_t r1_5 = *(arg1 + 5) << 0x10 | *(arg1 + 6) << 0x18 | *(arg1 + 4) << 8 | *(arg1 + 3);
            /* "R02_3.00.06_240523" */  /* ".06_240523" */
        
        if (r0 == 1)
            sub_18030(r1_5);
        else if (r0 == 2)
            sub_18020(r1_5);
        else if (r0 == 3)
            sub_18010(r1_5);
        else if (r0 == 4)
            sub_14b60(r1_5);
    }
    
    result = &data_0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0xb0;
    *var_c[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

int32_t sub_93fc(int32_t arg1, int32_t, int32_t, int32_t arg4, int32_t arg5 @ r7)
{
    /* tailcall */
    return sub_9404();
}

int32_t sub_9404() __pure
{
    return;
}

int32_t sub_9408(void* arg1)
{
    0xff900640(0x20);  /* "23" */
    0xff8fff46(0x40);
    *0xe000e280 = 0x40;
    *0x104d78 = arg1;
    *0xe000e100 = 0x40;
    void* r1 = *(arg1 + 0xc);
    *(r1 + 0x398) = 1;
    uint32_t r0_3 = ((1 << *(arg1 + 8)) - 1) << 0x1a >> 0x1a;  /* "6_240523" */
    uint32_t r0_4 = r0_3 | r0_3 << 8;
    *(r1 + 0x330) = r0_4;
    *(r1 + 0x310) = r0_4;
    0xff8ff28c(arg1, 0, 0x300);
    0xff8fff46(0x80);
    return 0;
}

int32_t sub_9468()
{
    return sub_9408(0x103a94);
}

int32_t sub_9478(void* arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    void* r0 = *(arg1 + 0xc);
    
    while (*(r0 + 0x2e8))
    {
        for (uint32_t i = 0; *(arg1 + 8) > i; i = i + 1)
        {
            int32_t r0_1 = 1 << i;
            
            if (*(r0 + 0x2e8) & r0_1)
            {
                *(r0 + 0x338) = r0_1;
                sub_d0ec(arg1, i);
            }
        }
    }
    
    return 0xff8ff2ee(arg1);
}

uint32_t sub_94bc()
{
    int32_t r1 = 0;
    int32_t i_1 = 0;
    int32_t i;
    
    do
    {
        r1 += *(0x105aa4 + (i_1 << 1));
        i = i_1;
        i_1 += 1;
    } while (i == 0xffffffff);
    return r1;
}

int32_t sub_94d4() __pure
{
    return 0;
}

int32_t sub_94d8(void* arg1)
{
    sub_a1c4(0x1000);
    *0xe000e280 = 0x8000;
    *0xe000e100 = 0x8000;
    
    for (void** i = *(arg1 + 4); i; i = *i)
        sub_158b0(arg1, i);
    
    sub_15934(arg1, 0);
    return 0;
}

int32_t sub_9518(void* arg1, int32_t* arg2, int32_t* arg3)
{
    if (!0xff900560(arg1 + 0x18))  /* ".06_240523" */
        return 2;
    
    int32_t r1 = arg3[1];
    int32_t r2 = arg3[2];
    int32_t r3 = arg3[3];
    *(arg1 + 8) = *arg3;
    *(arg1 + 0xc) = r1;
    *(arg1 + 0x10) = r2;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x14) = r3;  /* "3.00.06_240523" */
    sub_f7f2(arg1, arg2);
    return 0;
}

int32_t sub_9544(int32_t* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t* var_18 = arg1;
    int32_t var_14 = arg1[4];
    var_18 = arg1[3];
    int32_t var_10 = arg1[5];
    int32_t var_c = arg1[6];
    return sub_9518(0x103aa8, arg1, &var_18);
}

int32_t sub_9568(void* arg1)
{
    0xff900640(0x800000);
    0xff8fff46(0x40000);
    *0xe000e280 = 0x20;  /* "23" */
    *0x104dc4 = arg1;
    *0xe000e100 = 0x20;  /* "23" */
    void* r0 = *(arg1 + 4);
    *(r0 + 4) = 0;
    *(r0 + 0x10) = 1;  /* "R02_3.00.06_240523" */
    0xff8fff46(0x80000, 1, 0);
    sub_f898(arg1, 0);
    return 0;
}

int32_t sub_95b4()
{
    return sub_9568(0x103aa8);
}

int32_t sub_95c4(void* arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    *(*(arg1 + 4) + 0x1c) = 1;  /* "240523" */
    int32_t r7 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    int32_t r6 = *(arg1 + 0x14);  /* "3.00.06_240523" */
    0xff7febd8(*(arg1 + 8), *(arg1 + 4) + 0x380, 0x20);  /* "23" */
    0xff7febd8(*(arg1 + 0xc), *(arg1 + 4) + 0x3a0, 0x20);  /* "23" */
    0xff8fff46(0x80000);
    sub_f898(arg1, 3);
    0xff90057c(arg1 + 0x18);  /* ".06_240523" */
    return r7(r6);
}

void sub_9614(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    *(arg1 + 0x10) = arg2 << 0xa | arg3 << 9 | arg4 << 8 | arg5;  /* "R02_3.00.06_240523" */
}

int32_t sub_9628()
{
    *0x1041e0 = 3;
    sub_c9a0();
    sub_10b44();
    uint32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_10bbc();
    sub_ecc0(r0, r1, r2, r3);
    sub_afb0();
    sub_7690();
    sub_14e34();
    sub_14ea8();
    uint32_t r0_1;
    int32_t r1_1;
    int32_t r2_1;
    r0_1 = sub_10ac4();
    int32_t r0_2;
    int32_t r1_2;
    int32_t r2_2;
    int32_t r3_1;
    r0_2 = sub_19a34(r0_1, r1_1, r2_1);
    sub_c678(r0_2, r1_2, r2_2, r3_1);
    sub_aae4();
    sub_f3c4();
    sub_1529c();
    return sub_ad20(0x80f9d9, 0, 0x64, 0xffffffff);
}

int32_t sub_9684() __pure
{
    return;
}

int32_t sub_9688()
{
    char var_57 = 0;
    char var_50 = 7;
    int16_t var_52 = 0x258;
    int16_t var_54 = 0x258;
    char var_58 = 0xd;
    char var_4f = 1;
    char var_4d = *0x105f34;
    char var_30 = *0x105f35;
    void var_4c;
    0xff7febd8(&var_4c, 0x105f36, 0x1f);  /* "523" */
    char var_4e = 0;
    void var_2f;
    0xff7febd8(&var_2f, 0x105f55, 0x1f);  /* "523" */
    sub_a180(&var_58);
    return sub_ad20(0x80c661, 0, 0xea60, 1);
}

int32_t sub_96e8(int32_t arg1 @ r4, int32_t arg2 @ r5, int32_t* arg3 @ r6)
{
    int32_t r2 = *(arg3 + arg1);
    int32_t r0_1 = r2 | ~r2;
    *arg3 = r0_1;
    arg3[1] = arg2;
    arg3[2] = arg3;
    int32_t var_8 = arg1;
    return r0_1 << 2;
}

int32_t sub_9704()
{
    char var_57 = 0;
    char var_50 = 7;
    int16_t var_52 = 0x640;
    int16_t var_54 = 0x640;
    char var_58 = 0xd;
    char var_4f = 1;
    char r2 = *0x105f34;
    char var_4d = r2;
    char var_30 = *0x105f35;
    char var_4e = 0;
    void var_4c;
    0xff7febd8(&var_4c, 0x105f36, r2, &var_58, var_58, var_54, var_50);
    void var_2f;
    0xff7febd8(&var_2f, 0x105f55, 0x1f);  /* "523" */
    return sub_a180(&var_58);
}

int32_t sub_9754(int32_t arg1 @ r4, void* arg2 @ r6)
{
    *(arg2 + arg1);
    int32_t var_8 = arg1;
    return sub_9704();
}

uint32_t sub_9760()
{
    uint32_t result = sub_a6d0();
    
    if (result)
        return result;
    
    sub_a1a8();
    return sub_ad20(0x80c659, 0, 0x3e8, 1);
}

uint32_t sub_9784()
{
    if (*0x1099f0)
        return sub_17658();
    
    sub_17658();
    return sub_15bb4(0x105fba);
}

int32_t sub_97a8()
{
    sub_1871c(0x20);  /* "23" */
    0xff8fff14(4);
    sub_7588(3);
    return sub_759c(3);
}

int32_t sub_97c4()
{
    int16_t result = 0xff7feb00(sub_8634(), 0x3e8);
    *0x105aa4 = result;
    return result;
}

void sub_97dc(char* arg1)
{
    *arg1 = 3;
    arg1[1] = 0xa;
    arg1[0x1b] = 1;  /* "_240523" */
    *(arg1 + 0x22) = 0xfb;
    *(arg1 + 0x24) = 0x848;
    *(arg1 + 0x26) = 0xf4;
}

void* sub_97fc(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    void** r0_6;
    
    if (*(arg1 + 1) == 1)
    {
        result = 0xa;
        *result[1] = 1;
        *result[2] = 0;
        *result[3] = sub_18dc8();
        *var_14[3] = sub_c410(&result, 0xf);
        r0_6 = &result;
    }
    else
    {
        sub_18e20(*(arg1 + 3));
        sub_1804c();
        uint32_t r2_1 = *(arg1 + 6);
        
        if (r2_1)
            sub_18e98(*(arg1 + 4), *(arg1 + 5), r2_1, *(arg1 + 7));
        
        result = 0xa;
        *result[1] = 2;
        *result[2] = *(arg1 + 2);
        *result[3] = *(arg1 + 3);
        *var_14[3] = sub_c410(&result, 0xf);
        r0_6 = &result;
    }
    
    sub_a800(r0_6);
    return result;
}

int32_t sub_9872(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x91;
    *var_c[3] = sub_c410(&result, 0xf);
    sub_7678(&result);
    return result;
}

int32_t sub_989c(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x94;
    *var_c[3] = 0x94;
    sub_7678(&result);
    *0x107faa = 1;
    return result;
}

int32_t sub_98c4() __pure
{
    return;
}

int32_t sub_98c8(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x96;
    *var_c[3] = 0x96;
    sub_7678(&result);
    *0x107fab = 0;
    *0x107faa = 4;
    return result;
}

int32_t sub_98f4(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x95;
    *var_c[3] = 0x95;
    sub_7678(&result);
    *0x107fab = 0;
    *0x107faa = 3;
    return result;
}

int32_t sub_9920(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x9b;
    *result[1] = sub_7790();
    *var_c[3] = sub_c410(&result, 0xf);
    sub_7678(&result);
    return result;
}

int32_t sub_9950()
{
    return sub_10a6c(0x9a);
}

int32_t sub_995a(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x99;
    *result[1] = sub_77a4();
    *var_c[3] = sub_c410(&result, 0xf);
    sub_7678(&result);
    return result;
}

int32_t sub_998a()
{
    return sub_10a6c(0x98);
}

int32_t sub_9994(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x93;
    *var_c[3] = 0x93;
    sub_7678(&result);
    0xff7febd8(&*result[1], "3.00.06_240523", 0xe);
    *var_c[3] = sub_c410(&result, 0xf);
    sub_7678(&result);
    return result;
}

int32_t sub_99e4(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x9e;
    0xff7febd8(&*result[1], sub_9a18, 8);
    *var_c[3] = sub_c410(&result, 0xf);
    sub_7678(&result);
    return result;
}

int32_t sub_9a18(int32_t arg1, int32_t, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, void* arg6 @ r6)
{
    *(arg6 + arg5);
    /* tailcall */
    return sub_9a24();
}

int32_t sub_9a24() __pure
{
    return;
}

int32_t sub_9a26(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x92;
    *var_c[3] = 0x92;
    sub_7678(&result);
    return result;
}

int32_t sub_9a44(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x9c;
    *var_c[3] = 0x9c;
    sub_7678(&result);
    sub_f600();
    sub_18f60();
    return result;
}

int32_t sub_9a6c()
{
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    sub_b2dc(0x20136000, &var_10);
    int16_t r0_1;
    int32_t r2;
    r0_1 = 0xff7feb00(var_10, 0x3e8);
    uint32_t r4 = r0_1;
    var_20 = 0xa0;
    *var_20[1] = sub_e940();
    uint32_t r0_3 = sub_14f08();
    *var_20[2] = r0_3;
    int32_t r0_4 = sub_1b4d4(r0_3, &var_20, r2);
    
    if (r0_4)
        r0_4 = 0x21;  /* "3" */
    
    *var_20[3] = r0_4;
    var_1c = sub_ec90();
    *var_1c[1] = r4 >> 8;
    *var_1c[2] = r4;
    *var_1c[3] = *0x104291;
    uint32_t r0_7 = *0x10428c;
    var_18 = r0_7 >> 8;
    *var_18[1] = r0_7;
    *var_14[3] = sub_c410(&var_20, 0xf);
    return sub_7678(&var_20);
}

uint32_t sub_9af8(void* arg1)
{
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    uint32_t r0 = *(arg1 + 1);
    char r0_6;
    
    if (r0 == 1)
    {
        sub_18cdc();
        sub_f3fc();
        sub_17bc8();
        int32_t r0_5;
        int32_t r1_2;
        int32_t r2_1;
        int32_t r3_1;
        r0_5 = sub_18084();
        sub_10a9c(r0_5, r1_2, r2_1, r3_1);
        *0x10428e = 0;
        *0x10428f = 0;
        *0x104291 = 0;
        *0x104288 = 0;
        *0x10428a = 0;
        *0x10428c = 0;
        sub_f660(0x40);
        sub_1b4b8();
        r0_6 = *(arg1 + 2);
    label_9b88:
        *0x107fa4 = r0_6;
        sub_15b94(0x107fa8, 0x80cabd, 0x3e8);
        return sub_9bbc();
    }
    
    if (r0 != 2)
    {
        if (r0 == 3)
            return sub_9bbc();
        
        if (r0 == 4)
        {
            sub_f660(0x40);
            sub_1b4b8();
            r0_6 = 4;
            goto label_9b88;
        }
        
        if (r0 != 5)
        {
            *0x107fa4 = 0;
            var_28 = 0xa1;
            *var_28[1] = 0xff;
            *var_1c[3] = sub_c410(&var_28, 0xf);
            return sub_7678(&var_28);
        }
    }
    
    sub_f710(0x40);
    *0x107fa4 = 0;
    return sub_15bb4(0x107fa8);
}

uint32_t sub_9bbc()
{
    int16_t var_38 = 0;
    int32_t var_34 = 0;
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    var_34 = 0xa1;
    sub_f540(&var_38);
    uint32_t r1 = *0x10428f;
    uint32_t r2 = *0x10428e;
    uint32_t r0_1 = *0x104291;
    *var_34[1] = 1;
    uint32_t r3 = var_38;
    *var_34[2] = r3 >> 8;
    *var_34[3] = r3;
    var_30 = r1 >> 8;
    *var_30[1] = r1;
    *var_30[2] = r2 >> 8;
    *var_30[3] = r2;
    var_2c = r0_1 >> 8;
    *var_2c[1] = r0_1;
    
    if (r0_1)
        r0_1 = 1;
    
    *var_2c[2] = r0_1;
    *var_28[3] = sub_c410(&var_34, 0xf);
    sub_7678(&var_34);
    sub_f4fc(&var_38);
    uint32_t r1_4 = *0x104288;
    uint32_t r2_1 = *0x10428a;
    uint32_t r0_6 = *0x10428c;
    *var_34[1] = 2;
    uint32_t r3_2 = var_38;
    *var_34[2] = r3_2 >> 8;
    *var_34[3] = r3_2;
    var_30 = r1_4 >> 8;
    *var_30[1] = r1_4;
    *var_30[2] = r2_1 >> 8;
    *var_30[3] = r2_1;
    var_2c = r0_6 >> 8;
    *var_2c[1] = r0_6;
    
    if (r0_6)
        r0_6 = 1;
    
    *var_2c[2] = r0_6;
    *var_28[3] = sub_c410(&var_34, 0xf);
    sub_7678(&var_34);
    uint16_t var_20 = 0;
    uint16_t var_1c = 0;
    uint16_t var_24 = 0;
    sub_14d78(&var_20, &var_1c, &var_24, 1);
    *var_34[1] = 3;
    uint32_t r0_11 = var_20;
    *var_34[2] = r0_11 >> 8;
    *var_34[3] = r0_11;
    uint32_t r0_12 = var_1c;
    var_30 = r0_12 >> 8;
    *var_30[1] = r0_12;
    uint32_t r0_13 = var_24;
    *var_30[2] = r0_13 >> 8;
    *var_30[3] = r0_13;
    var_2c = 0;
    *var_2c[1] = 0;
    *var_2c[2] = 0;
    *var_28[3] = sub_c410(&var_34, 0xf);
    sub_7678(&var_34);
    uint32_t result = *0x107fa4;
    
    if (result != 4)
    {
        if (!*0x10428c || !*0x104291)
        {
            result = *0x107fa6 + 1;
            *0x107fa6 = result;
            *0x107fa5 = 0;
            
            if (result >= 0x78)
            {
                *0x107fa6 = 0;
            label_9ce8:
                sub_f710(0x40);
                *0x107fa4 = 0;
                return sub_15bb4(0x107fa8);
            }
        }
        else
        {
            result = *0x107fa5 + 1;
            *0x107fa5 = result;
            *0x107fa6 = 0;
            
            if (result > 3)
            {
                *0x107fa5 = 0;
                goto label_9ce8;
            }
        }
    }
    
    return result;
}

int32_t sub_9d04(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x90;
    *var_c[3] = 0x90;
    sub_7678(&result);
    return result;
}

uint32_t sub_9d24()
{
    uint32_t result_1;
    void var_8;
    sub_b20c(&var_8, &result_1);
    uint32_t result = result_1;
    
    if (result)
    {
        int32_t r1_1;
        int32_t r2_1;
        int32_t r3_1;
        r1_1 = sub_b2a8(result, 0xffff);
        int32_t var_38;
        sub_af80(&var_38, r1_1, r2_1, r3_1);
        result = 0x109ab0;
        int16_t var_24;
        *0x109ab0 = var_24 + 0x76c;
        char var_28;
        *0x109ab2 = var_28 + 1;
        *0x109ab6 = var_38;
        int32_t var_34;
        
        if (*0x109ab5 != var_34)
            *0x109ab5 = var_34;
        
        int32_t var_30;
        
        if (*0x109ab4 != var_30)
            *0x109ab4 = var_30;
        
        int32_t var_2c;
        
        if (*0x109ab3 != var_2c)
            *0x109ab3 = var_2c;
    }
    
    return result;
}

int32_t sub_9d84()
{
    char* r0 = 0xff80c348(0xd1b, 8, 4, 0xa);
    *r0 = 0x1b;  /* "_240523" */
    r0[1] = 0;
    *(r0 + 2) = 0xfd;
    *(r0 + 4) = 4;
    *(r0 + 6) = 0;
    *(r0 + 8) = 2;
    return 0xff80c3b8(r0, 0, 2);
}

int32_t sub_9de4() __pure
{
    return;
}

uint32_t sub_9de8(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    
    for (uint32_t i = arg1[1]; i; i = i - 1)
    {
        int16_t* r5_1 = *arg1 + (i << 3) - 8;
        uint32_t r4_2 = *r5_1;
        
        if (r4_2 == arg2 || r4_2 == 0xffff)
            return (*(r5_1 + 4))(arg2, arg3, 4);
    }
    
    return 0;
}

int32_t sub_9e24(int32_t* arg1)
{
    uint32_t r1 = 0;
    
    while (true)
    {
        if (*(arg1 + 0xa) <= r1)
            return 0;
        
        if (!*(arg1[1] + r1))
            break;
        
        r1 = r1 + 1;
    }
    
    return sub_9e46(arg1, r1);
}

int32_t sub_9e46(int32_t* arg1, int32_t arg2)
{
    char* r2_3 = arg1[1];
    r2_3[arg2] += 1;
    arg1[3] -= 1;
    return *arg1 + arg2 * arg1[2];
}

int32_t sub_9e5e(int32_t* arg1, int32_t arg2)
{
    if (!*(arg1[1] + arg2))
        return 0;
    
    return *arg1 + arg2 * arg1[2];
}

int32_t sub_9e74(int32_t* arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t r6 = *arg1;
    uint32_t r7 = arg1[2];
    int16_t r0_1;
    int32_t r1_1;
    r0_1 = 0xff7feb2c(arg2 - r6, r7);
    int32_t r1_5;
    
    if (!r1_1 && r6 <= arg2 && r7 * *(arg1 + 0xa) + r6 > arg2)
        r1_5 = 1;
    else
        r1_5 = 0;
    
    if (r1_5 && *(arg1[1] + r0_1))
        return 1;
    
    return 0;
}

uint32_t sub_9eb8(int32_t* arg1, int32_t arg2)
{
    return 0xff7feb2c(arg2 - *arg1, arg1[2], arg2);
}

int32_t sub_9eca(int32_t* arg1, int32_t arg2)
{
    int16_t r0_2 = 0xff7feb2c(arg2 - *arg1, arg1[2], arg2);
    int32_t r1_1 = arg1[1];
    uint32_t r0_3 = r0_2;
    uint32_t r2_4 = (*(r1_1 + r0_3) - 1) << 0x18 >> 0x18;  /* ".06_240523" */
    *(r1_1 + r0_3) = r2_4;
    
    if (r2_4)
        return 0;
    
    arg1[3] += 1;
    return 1;
}

int32_t sub_9ef8(int16_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5, int16_t arg6, int32_t arg7, int32_t arg8)
{
    int32_t var_1c = arg3;
    uint32_t r4 = 0;
    
    for (uint32_t i = 1; i < arg4; i = i + 1)
    {
        if (!arg3 || *(arg3 + (i >> 3)) >> i << 0x1d >> 0x1d << 0x1f)  /* "40523" */  /* "523" */
            r4 = r4 + 1;
    }
    
    int16_t* r0_4 = 0xff80c1f4(0x16 * r4 + 0x16, 3);  /* "00.06_240523" */
    *r0_4 = *arg1;
    *(r0_4 + 5) = r4;
    r0_4[1] = arg6;
    int32_t r0_6 = arg8 << 0x19;  /* "06_240523" */
    r0_4[2] = arg8;
    int32_t r2_2;
    
    if (!(r0_6 >> 0x1e))  /* "0523" */
        r2_2 = 2;
    else if (r0_6 >> 0x1e == 1)  /* "0523" */
        r2_2 = 4;
    else
        r2_2 = 0x10;  /* "R02_3.00.06_240523" */
    
    0xff7febd8(&r0_4[3], arg2, r2_2);
    uint32_t r7_1 = 0;
    
    for (uint32_t i_1 = 1; i_1 < arg4; i_1 = i_1 + 1)
    {
        if (!arg3 || *(arg3 + (i_1 >> 3)) >> i_1 << 0x1d >> 0x1d << 0x1f)  /* "40523" */  /* "523"
            */
        {
            void* r1_12 = i_1 * 0x16 + arg7;  /* "00.06_240523" */
            void* r0_15 = r7_1 * 0x16 + r0_4;  /* "00.06_240523" */
            *(r0_15 + 0x28) = *(r1_12 + 0x14);  /* "3.00.06_240523" */
            *(r0_15 + 0x2a) = *(r1_12 + 0x12);  /* "2_3.00.06_240523" */
            *(r0_15 + 0x26) = *(r1_12 + 0x10);  /* "R02_3.00.06_240523" */
            *(r1_12 + 0x12);  /* "2_3.00.06_240523" */
            0xff7febd8(r0_15 + 0x16);  /* "00.06_240523" */
            r7_1 = r7_1 + 1;
        }
    }
    
    int32_t result = 0xff7ffdac(r0_4);
    
    if (!result)
    {
        *arg1 = *r0_4;
        char r1_14 = 0;
        
        for (uint32_t i_2 = 0; i_2 < arg4; i_2 = i_2 + 1)
        {
            if (!arg5)
                break;
            
            if (!arg3 || *(arg3 + (i_2 >> 3)) >> i_2 << 0x1d >> 0x1d << 0x1f)  /* "40523" */  /* "
                523" */
            {
                arg5[i_2] = *arg1 + r1_14;
                r1_14 += 1;
            }
        }
    }
    
    0xff80c010(r0_4);
    return result;
}

int32_t sub_a014(int16_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, char* arg5, int16_t arg6, int32_t arg7, int32_t arg8)
{
    int32_t var_1c = arg3;
    uint32_t r4 = 0;
    
    for (uint32_t i = 1; i < arg4; i = i + 1)
    {
        if (!arg3 || *(arg3 + (i >> 3)) >> i << 0x1d >> 0x1d << 0x1f)  /* "40523" */  /* "523" */
            r4 = r4 + 1;
    }
    
    int16_t* r0_4 = 0xff80c1f4(0x16 * r4 + 0x16, 3);  /* "00.06_240523" */
    *r0_4 = *arg1;
    *(r0_4 + 5) = r4;
    r0_4[1] = arg6;
    int32_t r0_6 = arg8 << 0x19;  /* "06_240523" */
    r0_4[2] = arg8;
    int32_t r2_2;
    
    if (!(r0_6 >> 0x1e))  /* "0523" */
        r2_2 = 2;
    else if (r0_6 >> 0x1e == 1)  /* "0523" */
        r2_2 = 4;
    else
        r2_2 = 0x10;  /* "R02_3.00.06_240523" */
    
    0xff7febd8(&r0_4[3], arg2, r2_2);
    uint32_t r7_1 = 0;
    
    for (uint32_t i_1 = 1; i_1 < arg4; i_1 = i_1 + 1)
    {
        if (!arg3 || *(arg3 + (i_1 >> 3)) >> i_1 << 0x1d >> 0x1d << 0x1f)  /* "40523" */  /* "523"
            */
        {
            void* r1_12 = i_1 * 0x16 + arg7;  /* "00.06_240523" */
            void* r0_15 = r7_1 * 0x16 + r0_4;  /* "00.06_240523" */
            *(r0_15 + 0x28) = *(r1_12 + 0x14);  /* "3.00.06_240523" */
            *(r0_15 + 0x2a) = *(r1_12 + 0x12);  /* "2_3.00.06_240523" */
            *(r0_15 + 0x26) = *(r1_12 + 0x10);  /* "R02_3.00.06_240523" */
            *(r1_12 + 0x12);  /* "2_3.00.06_240523" */
            0xff7febd8(r0_15 + 0x16);  /* "00.06_240523" */
            r7_1 = r7_1 + 1;
        }
    }
    
    int32_t result = 0xff7ffdac(r0_4);
    
    if (!result)
    {
        *arg1 = *r0_4;
        char r1_14 = 0;
        
        for (uint32_t i_2 = 0; i_2 < arg4; i_2 = i_2 + 1)
        {
            if (!arg5)
                break;
            
            if (!arg3 || *(arg3 + (i_2 >> 3)) >> i_2 << 0x1d >> 0x1d << 0x1f)  /* "40523" */  /* "
                523" */
            {
                arg5[i_2] = *arg1 + r1_14;
                r1_14 += 1;
            }
        }
    }
    
    0xff80c010(r0_4);
    return result;
}

void sub_a130(int32_t arg1, int32_t* arg2)
{
    if (arg1 && arg1 != 0xffffffff)
        *arg2 = arg1 + 0x386d4380;
}

uint32_t sub_a144()
{
    uint32_t result = sub_e94c();
    
    if (!result)
        return result;
    
    return 1;
}

uint32_t sub_a152()
{
    uint32_t r0 = sub_ec90();
    
    if (r0 >= 5)
        return 0xff7feb2c(r0 - 5, 0xa);
    
    return 0;
}

int32_t sub_a16c()
{
    sub_a1a8();
    *0x106a1c = 0;
    *0x106a1d = 0;
    return 0x106a1c;
}

int32_t sub_a180(int32_t arg1)
{
    int32_t r0 = 0xff80c348(0xd0d, 8, 4, 0x50);
    0xff7febd8(r0, arg1, 0x50);
    return 0xff80c3b8(r0);
}

int32_t sub_a1a8()
{
    char* r0 = 0xff80c348(0xd03, 8, 4, 1);
    *r0 = 2;
    return 0xff80c3b8(r0, 2);
}

void sub_a1c4(int32_t arg1)
{
    uint32_t r4 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    *0x20149014 = arg1;
    
    if (arg1 & 0xaaaaaaaa)
    {
        while (*0x20149014 & arg1)
            /* nop */
    }
    else if (arg1 & 0x55555555)
    {
        while (arg1 & ~*0x20149014)
            /* nop */
    }
    
    if (!r4)
        /* unimplemented  {cpsie I} */
}

uint32_t sub_a200()
{
    uint32_t i;
    
    do
    {
        i = *0x10615c;
        
        if (i == *0x10615e)
            break;
        
        uint32_t r1_1 = *((i << 4) + 0x106160);
        
        if (r1_1 != 0x75)
        {
            if (r1_1 > 0x75)
            {
                if (r1_1 == 0x81)
                    sub_acf8((i << 4) + 0x106161);
                else if (r1_1 > 0x81)
                {
                    if (r1_1 == 0xc6)
                    {
                        if (*((i << 4) + 0x106161) == 0x6c)
                        {
                            sub_18f28();
                            sub_db4c();
                            sub_10a14(0x7d0);
                        }
                        else
                            sub_9044(0xc6, 1);
                    }
                    else if (r1_1 != 0xc7 && r1_1 == 0xff)
                        sub_8d28((i << 4) + 0x106160);
                }
                else if (r1_1 != 0x76 && r1_1 == 0x77)
                    sub_17294((i << 4) + 0x106160);
            }
            else if (r1_1 == 0x44)
                sub_17452();
            else if (r1_1 > 0x44)
            {
                if (r1_1 != 0x58 && r1_1 == 0x68)
                {
                    sub_dbc0();
                    sub_19384();
                    sub_18f28();
                    sub_10a14(0x7d0);
                }
            }
            else if (r1_1 == 1)
                sub_6e98((i << 4) + 0x106160);
            else if (r1_1 == 8)
            {
                uint32_t r1_2 = *((i << 4) + 0x106161);
                
                if (!r1_2)
                    sub_7324();
                else if (r1_2 == 1)
                    sub_18f60();
            }
            else if (r1_1 == 0x1e)  /* "0523" */
                sub_8f08((i << 4) + 0x106160);
        }
        
        uint32_t r0_6 = *0x10615c;
        int16_t i_1;
        
        i_1 = r0_6 < 9 ? r0_6 + 1 : 0;
        
        i = i_1;
        *0x10615c = i;
    } while (i != *0x10615e);
    
    return i;
}

int32_t sub_a2e4(char* arg1)
{
    return sub_8e90(*arg1);
}

int32_t sub_a2f0(int32_t arg1)
{
    0xff7febd8((*0x10615e << 4) + 0x106160, arg1, 0x10);  /* "R02_3.00.06_240523" */
    uint32_t r0_4 = *0x10615e;
    int16_t result;
    
    result = r0_4 < 9 ? r0_4 + 1 : 0;
    
    *0x10615e = result;
    return result;
}

int32_t sub_a318()
{
    char* r0 = 0xff80c348(0xe04, 9, 4, 2);
    *r0 = 1;
    r0[1] = 0x13;  /* "_3.00.06_240523" */
    return 0xff80c3b8(r0, 0x13);  /* "_3.00.06_240523" */
}

uint32_t sub_a338()
{
    *0x106a26 = 0;
    sub_a538();
    return sub_15bb4(0x106a22);
}

uint32_t sub_a354()
{
    return sub_a3d4(0, 0x2710);
}

uint32_t sub_a364()
{
    *0x106a24 = 2;
    sub_16aa4(0);
    sub_a568();
    uint32_t result = *0x106a27;
    
    if (result)
    {
        sub_15bb4(0x106a20);
        result = 0;
        *0x106a27 = 0;
    }
    
    return result;
}

uint32_t sub_a38c()
{
    *0x106a24 = 0;
    *0x106a28 = 0;
    *0x106a24 = 2;
    uint32_t result = *0x10bfb0;
    
    if (result == sub_a6c4)
        return result;
    
    0xff7fec0a(0x10bfb0, 0x14);  /* "3.00.06_240523" */
    *0x10bfb0 = 0xa6c5;
    return 0xff7febd8(0x10bfc0, 0x81f114, 4);
}

uint32_t sub_a3d4(int32_t arg1, int32_t arg2)
{
    int32_t r5 = arg2;
    
    if (*0x106a27)
    {
        sub_15bb4(0x106a20);
        *0x106a27 = 0;
    }
    
    uint32_t result = *0x106a24;
    
    if (arg1 == 4)
    {
        if (result != 4)
        {
            *0x106a24 = 4;
            return sub_c75c(0x81f110);
        }
    }
    else if (result != 4)
    {
        if (*0x106a25 << 0x18 >= 0)  /* ".06_240523" */
        {
            if (result != arg1)
            {
                if (!arg1)
                    result = sub_c75c(0x81f124);
                else if (arg1 == 1)
                    result = sub_c75c(0x10bfc0);
                else if (arg1 == 2)
                {
                    int32_t r0_4;
                    
                    if (!sub_ea18())
                        r0_4 = 0x81f128;
                    else if (sub_ea18() > 7)
                    {
                        if (sub_ea18() > 0x17)  /* "0.06_240523" */
                            r0_4 = 0x81f128;
                        else
                            r0_4 = 0x81f130;
                    }
                    else
                        r0_4 = 0x81f12c;
                    
                    result = sub_c75c(r0_4);
                    r5 = 0;
                }
                else if (arg1 == 3)
                    r5 = 0;
                
                *0x106a24 = arg1;
                
                if (r5)
                {
                    *0x106a27 = 1;
                    return sub_15b94(0x106a20, 0x80d45d, r5);
                }
            }
            
            return result;
        }
        
        result = 0x80;
        *0x106a25 = arg1 | 0x80;
    }
    
    return result;
}

uint32_t sub_a490()
{
    uint32_t result = *0x106a24;
    
    if (result)
        return result;
    
    return sub_a3d4(3, 0);
}

int32_t sub_a4a8(int32_t arg1, char* arg2)
{
    int32_t var_1c = arg1;
    int32_t result;
    
    if (!arg1)
    {
        char r0_3 = 1;
        *0x10bfb2 = 1;
        *0x10bfb3 = 5;
        
        if (*arg2 < 8)
            r0_3 = 0;
        
        *0x10bfc1 = r0_3;
        *0x10bfc2 = 0xf;
        result = 0x1e;  /* "0523" */
        *0x10bfc3 = 0x1e;  /* "0523" */
    }
    else
    {
        result = 0xff7fec20(0x10bfb4, arg2, 0xc);
        
        if (result)
        {
            0xff7febd8(0x10bfb4, arg2, 0xc);
            *0x10bfb2 = 2;
            int32_t r4 = 0;
            int32_t r1_3;
            
            while (true)
            {
                if (!0xff7fec20((r4 << 4) + 0x81f134, arg2, 0xc))
                {
                    *0x10bfb3 = 5;
                    r1_3 = (r4 << 4) + 0x81f140;
                    break;
                }
                
                r4 += 1;
                
                if (r4 >= 5)
                {
                    *0x10bfb3 = 1;
                    r1_3 = 0x81f114;
                    break;
                }
            }
            
            return 0xff7febd8(0x10bfc0, r1_3, 4);
        }
    }
    
    return result;
}

int32_t sub_a538()
{
    uint32_t r0 = *0x106a25;
    
    if (r0 << 0x18 >= 0)  /* ".06_240523" */
        return 0;
    
    *0x106a25 = 0;
    sub_a3d4(r0 << 0x1c >> 0x1c, 0);  /* "240523" */
    return 1;
}

uint32_t sub_a55c()
{
    return sub_a3d4(2, 0);
}

uint32_t sub_a568()
{
    uint32_t result = sub_a538();
    
    if (!result)
    {
        result = *0x106a26;
        
        if (result)
        {
            sub_15bb4(0x106a22);
            result = 0;
            *0x106a26 = 0;
        }
    }
    
    return result;
}

int32_t sub_a58c()
{
    return sub_a318();
}

int32_t sub_a594(int32_t arg1, void* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_20 = arg1;
    char var_30 = 0xbc;
    char var_2f = arg1;
    int16_t var_2e = arg3;
    int16_t var_2c = sub_103c0(arg2, arg3);
    uint32_t r0_2 = sub_a6c4();
    uint32_t r4 = r0_2;
    
    if (r0_2 > 0xb6)
        r4 = 0xb6;
    
    if (*0x106a0e <= *0x106a0c)
    {
        *0x106a0e = 0;
        *0x106a0c = 0;
    }
    
    int32_t r0_4 = r4 - 6;
    
    if (arg3 <= r0_4)
        r0_4 = arg3;
    
    uint32_t r7 = r0_4;
    *(*0x106a18 + *0x106a0e) = r7 + 6;
    0xff7febd8(*0x106a18 + *0x106a0e + 1, &var_30, 6);
    0xff7febd8(*0x106a18 + *0x106a0e + 7, arg2, r7);
    *0x106a0e += r7 + 7;
    uint32_t i = arg3 - r7;
    void* r7_1 = arg2 + r7;
    
    while (i)
    {
        if (i <= r4)
        {
            (*0x106a18)[*0x106a0e] = i;
            0xff7febd8(*0x106a18 + *0x106a0e + 1, r7_1, i);
            *0x106a0e += i + 1;
            break;
        }
        
        (*0x106a18)[*0x106a0e] = r4;
        0xff7febd8(*0x106a18 + *0x106a0e + 1, r7_1, r4);
        *0x106a0e += r4 + 1;
        i = i - r4;
        r7_1 += r4;
    }
    
    sub_1686c();
    return 0x106200;
}

int32_t sub_a674()
{
    char* r0 = 0xff80c348(0xc01, 7, 4, 4);
    *r0 = 1;
    int16_t r1 = *0x105f7a;
    *(r0 + 2) = r1;
    *0x105f7a = r1 + 1;
    0xff80c3b8(r0, r1 + 1, 0x105f74);
    return 0;
}

int32_t sub_a6a0()
{
    int32_t r1 = *0x107b7c;
    
    if (r1 && *0x107b64 == 1)
        return 0xff7feb00(0x64 * *0x107b78, r1, 0x64);
    
    return 0;
}

uint32_t sub_a6c4()
{
    return *0x10bfc4;
}

uint32_t sub_a6d0()
{
    return *0x105f74;
}

void sub_a6dc() __noreturn
{
    sub_1774c();
    /* no return */
}

uint32_t sub_a6fc(int32_t arg1)
{
    uint32_t result = arg1 << 0x1f >> 0x1f;  /* "523" */
    *0x20110040 = *0x20110040 >> 1 << 1 | result;
    return result;
}

uint32_t sub_a714(int32_t arg1)
{
    uint32_t result = arg1 << 0x14 >> 0x14;  /* "3.00.06_240523" */
    *0x20110044 = *0x20110044 >> 0xc << 0xc | result;
    return result;
}

uint32_t sub_a72c(int32_t arg1)
{
    uint32_t result = arg1 << 0x14 >> 0x14;  /* "3.00.06_240523" */
    *0x20110048 = *0x20110048 >> 0xc << 0xc | result;
    return result;
}

uint32_t sub_a744(int32_t arg1)
{
    uint32_t result = arg1 << 0x14 >> 0x14;  /* "3.00.06_240523" */
    *0x2011004c = *0x2011004c >> 0xc << 0xc | result;
    return result;
}

uint32_t sub_a75c(int32_t arg1)
{
    uint32_t result = arg1 << 0x14 >> 0x14;  /* "3.00.06_240523" */
    *0x20110050 = *0x20110050 >> 0xc << 0xc | result;
    return result;
}

int32_t sub_a774(int32_t arg1, char arg2)
{
    int32_t entry_r3;
    sub_a7bc(arg1, arg2, *0x105f76, entry_r3);
    return 0;
}

int32_t sub_a788(int32_t arg1)
{
    int32_t result = arg1 << 0x10;  /* "R02_3.00.06_240523" */
    *0x20100080 = (*0x20100080 & 0xff00ffff) | result;
    return result;
}

uint32_t sub_a7a0()
{
    return *0x2010001c >> 0x1f;  /* "523" */
}

int32_t sub_a7ac(int32_t arg1, char arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = arg2;
    return sub_a594(arg1, &var_8, 1);
}

int32_t sub_a7bc(int32_t arg1, int32_t arg2, int16_t arg3, int32_t arg4)
{
    char* r0 = 0xff80c348(0xc10, 7, 4, arg2 + 8, arg4);
    *r0 = 0x12;  /* "2_3.00.06_240523" */
    int16_t r0_1 = *0x105f7c;
    *(r0 + 2) = r0_1;
    *0x105f7c = r0_1 + 1;
    *(r0 + 6) = arg2;
    *(r0 + 4) = arg3;
    0xff7febd8(&r0[8], arg1, arg2);
    return 0xff80c3b8(r0);
}

int32_t sub_a800(int32_t arg1)
{
    0xff7febd8((*0x10620a << 4) + 0x10620c, arg1, 0x10);  /* "R02_3.00.06_240523" */
    uint32_t r0_4 = *0x10620a;
    int16_t r0_5;
    
    r0_5 = r0_4 < 0x7f ? r0_4 + 1 : 0;
    
    *0x10620a = r0_5;
    sub_1686c();
    return 0x106200;
}

uint32_t sub_a82c()
{
    *0x106200 = 0;
    uint32_t i;
    
    do
    {
        uint32_t r0_5 = *0x106208;
        
        if (r0_5 == *0x10620a)
            break;
        
        sub_a774((r0_5 << 4) + 0x10620c, 0x10);  /* "R02_3.00.06_240523" */
        uint32_t r0_4 = *0x106208;
        int16_t i_2;
        
        i_2 = r0_4 < 0x7f ? r0_4 + 1 : 0;
        
        i = i_2;
        *0x106208 = i;
    } while (i != *0x10620a);
    uint32_t i_1;
    
    do
    {
        i_1 = *0x106a0c;
        
        if (i_1 == *0x106a0e)
            break;
        
        int32_t r2_1 = *0x106a18;
        uint32_t r5_1 = *(r2_1 + i_1);
        sub_15af0(r2_1 + i_1 + 1, r5_1);
        i_1 = *0x106a0c + r5_1 + 1;
        *0x106a0c = i_1;
    } while (i_1 < *0x106a0e);
    
    return i_1;
}

void sub_a8c8(int32_t arg1)
{
    *0x20100080 = *0x20100080 >> 8 << 8 | arg1;
}

void sub_a8dc(uint32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14 = arg3;
    int32_t* var_18 = arg2;
    
    if (!arg1)
        return;
    
    var_10 = 0;
    var_10 = arg1;
    int32_t r4_2 = (0xff7feb00(sub_eb04(), 0x3c) << 2) + 4;
    var_14 = 4;
    sub_192dc(0x81f414, 0x109484, sub_eb1c(), r4_2, &var_10, 4);
    sub_6ce2(2);
}

int32_t sub_a920(void* arg1)
{
    *(arg1 + 1) = *0x104354;
    *(arg1 + 6) = *0x104355;
    *(arg1 + 2) = 0xff7feb00(*0x104356, 0x3c);
    *(arg1 + 3) = 0xff7feb00(*0x104356, 0x3c);
    *(arg1 + 4) = 0xff7feb00(*0x104358, 0x3c);
    int32_t result;
    char r1_1;
    result = 0xff7feb00(*0x104358, 0x3c);
    *(arg1 + 5) = r1_1;
    return result;
}

uint32_t sub_a95c(char* arg1, char* arg2)
{
    char* var_1c = arg1;
    uint32_t result = 0;
    int32_t r2 = *((*0x10948a << 2) + 0x10948c);
    
    if (r2)
    {
        int32_t entry_r3;
        int32_t r0_3 = sub_1927e(0x81f414, *0x109484, r2, entry_r3);
        char var_30;
        sub_7130(&var_30, &data_15180 * *((*0x10948a << 2) + 0x10948c));
        char r1_3 = var_30;
        char var_28_1 = r1_3;
        char var_2f;
        char var_27_1 = var_2f;
        char var_2e;
        char var_26_1 = var_2e;
        *arg1 = 0;
        arg1[1] = r1_3;
        arg1[2] = var_2f;
        arg1[3] = var_2e;
        arg1[4] = *0x104355;
        int32_t var_2c_1 = 5;
        int32_t r0_11 = 0xff7feb00(*0x104355, 0x1e, var_2e, 0);  /* "0523" */
        int32_t r7_1 = 0;
        uint32_t i = 0;
        var_30 = 0;
        int32_t r0_12 = 0xff7feb00(0x30, r0_11, 0x30);  /* "R02_V3.0" */
        int32_t var_20_1 = r0_12;
        
        for (; r0_12 > i; i = i + 1)
        {
            void* r0_14 = (i << 2) + r0_3;
            var_28_1 = r0_14;
            
            if (*(r0_14 + 4) - 0x28 <= 0xb4)
            {
                if (!0xff7feb00(result, 0xe))
                {
                    arg2[result] = 1;
                    result = result + 1;
                }
                
                arg2[result] = *(var_28_1 + 4);
                result = result + 1;
                int32_t r0_20;
                int32_t r1_10;
                r0_20 = 0xff7fec4c(1, 0, i);
                r7_1 |= r0_20;
                var_30 |= r1_10;
            }
            
            r0_12 = var_20_1;
        }
        
        if (var_30 | r7_1)
        {
            arg1[var_2c_1] = r7_1;
            int32_t r2_4 = var_30;
            arg1[var_2c_1 + 1] = r7_1 >> 8 | r2_4 << 0x18;  /* ".06_240523" */
            arg1[var_2c_1 + 2] = r7_1 >> 0x10 | var_30 << 0x10;  /* "R02_3.00.06_240523" */
            arg1[var_2c_1 + 3] = r7_1 >> 0x18 | var_30 << 8;  /* ".06_240523" */
            arg1[var_2c_1 + 4] = var_30;
            arg1[var_2c_1 + 5] = r2_4 >> 8;
            0xff7fec0a(&arg1[(var_2c_1 + 5) + 1], 3);
            return result;
        }
    }
    
    0xff7fec0a(arg1, 0xe);
    *arg1 = 0xff;
    sub_191f2(0x81f414);
    return 0;
}

void* sub_aa98()
{
    int32_t r3;
    int32_t var_18 = r3;
    0xff7fec0a(0x10948c, 0x1c);  /* "240523" */
    *0x10948a = 0;
    int16_t r0;
    int32_t r3_1;
    r0 = sub_eb1c();
    int32_t r6 = 0;
    uint32_t r4 = r0 - 6;
    void* result;
    
    for (int32_t i = 0; i < 7; )
    {
        result = sub_1927e(0x81f414, *0x109484, r4, r3_1);
        
        if (result)
        {
            result = (r6 << 2) + 0x109488;
            r6 += 1;
            *(result + 4) = r4;
        }
        
        i += 1;
        r4 = r4 + 1;
    }
    
    return result;
}

int32_t sub_aae4()
{
    int32_t r2;
    int32_t r3;
    r2 = 0xff7fec0a(0x109488, 0x20);  /* "23" */
    
    if (*0x104354 == 0xff)
    {
        *0x104354 = 0;
        *0x104356 = 0;
        *0x104358 = 0x564;
        *0x104355 = 0x3c;
    }
    
    return sub_19240(0x81f414, 0x109484, r2, r3);
}

int32_t sub_ab20(void* arg1)
{
    uint32_t r0 = *(arg1 + 6);
    
    if (r0 && !0xff7feb00(r0, 0x1e))  /* "0523" */
    {
        *0x104354 = *(arg1 + 1);
        *0x104355 = *(arg1 + 6);
        *0x104356 = 0x3c * *(arg1 + 2) + *(arg1 + 3);
        *0x104358 = 0x3c * *(arg1 + 4) + *(arg1 + 5);
        return 0;
    }
    
    return 1;
}

int32_t sub_ab64()
{
    *((*0x10948a << 2) + 0x10948c) = 0;
    *0x10948a += 1;
    return 0x109488;
}

uint32_t sub_ab7c()
{
    uint32_t result = *0x104354;
    
    if (result)
    {
        result = *0x1041e2;
        
        if (result)
        {
            result = sub_17a74();
            
            if (result != 1)
            {
                result = sub_a144();
                
                if (!result)
                {
                    result = sub_eb1c();
                    
                    if (result)
                    {
                        int32_t r0 = sub_eb04();
                        int32_t r1_2;
                        result = 0xff7feb00(r0, *0x104355);
                        
                        if (!r1_2)
                        {
                            result = *0x104356;
                            uint32_t r1_3 = *0x104358;
                            
                            if (result <= r1_3)
                            {
                                if (r1_3 >= r0 && result <= r0)
                                    goto label_abce;
                            }
                            else if (r1_3 >= r0 || result <= r0)
                            {
                            label_abce:
                                sub_f660(4);
                                *0x109489 = 0;
                                return sub_15b94(0x109480, 0x80daf9, 0x3e8);
                            }
                        }
                    }
                }
            }
        }
    }
    
    return result;
}

uint32_t sub_abf8()
{
    uint32_t result = *0x109489 + 1;
    *0x109489 = result;
    
    if (result > 3)
    {
        if (result > 0xe)
        {
            uint32_t r0_2;
            int32_t* r1_1;
            
            if (result > 0x14)  /* "3.00.06_240523" */
            {
                void* r1_2;
                int32_t entry_r2;
                int32_t entry_r3;
                r1_2 = 0xff7feb2c(0xff7febb4(), 5);
                r1_1 = r1_2 + 0x46;
                r0_2 = r1_1;
            label_ac34:
                sub_a8dc(r0_2, r1_1, entry_r2, entry_r3);
                sub_15bb4(0x109480);
                return sub_f710(4);
            }
            
            result = sub_f51c();
            
            if (result)
            {
                r0_2 = sub_f51c();
                goto label_ac34;
            }
        }
        else
        {
            result = sub_f57c();
            
            if (!result)
            {
                sub_15bb4(0x109480);
                return sub_f710(4);
            }
        }
    }
    
    return result;
}

int32_t sub_ac50()
{
    return sub_191f2(0x81f414);
}

int32_t sub_ac60()
{
    if (!*0x104232)
    {
        uint32_t r1_1 = *0x104237;
        
        if (!*0x104233 && *0x104234 == 0x10 && *0x104235 == 0x20 && *0x104236 == 0x10
            && r1_1 == 0xb5)  /* "R02_3.00.06_240523" */  /* "23" */
        {
            sub_15c74(0x104232);
            sub_db84();
        }
        else if (!r1_1)
        {
            0xff9004ba(0x2000, 6, 0x104232);
            uint32_t r1_2 = *0x104232;
            
            if (!r1_2)
            {
                if (!*0x104233 && *0x104234 == 0x10 && *0x104235 == 0x20 && *0x104236 == 0x10
                    && *0x104237 == 0xb5)  /* "R02_3.00.06_240523" */  /* "23" */
                {
                    sub_15c74(0x104232);
                    sub_db84();
                }
            }
            else if (r1_2 == 0xff && *0x104237 == 0xff)
            {
                sub_15c74(0x104232);
                sub_e048(0x2000, 6, 0x104232);
            }
        }
    }
    
    return 0x104232;
}

int32_t sub_acf8(int32_t arg1)
{
    int32_t result = 0xff7fec20(0x104232, arg1, 6);
    
    if (!result)
        return result;
    
    0xff7febd8(0x104232, arg1, 6);
    return sub_db84();
}

int32_t sub_ad20(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0 = sub_ea24(arg1);
    
    if (r0)
        sub_b16c(r0);
    
    uint32_t r0_2 = sub_b09c(arg3, arg4);
    
    if (!r0_2)
        return 0xffffffff;
    
    void* r0_7 = (sub_b134(r0_2) << 0x10 >> 0xb) + 0x100b18;  /* "R02_3.00.06_240523" */
    *0x10435c += 1;
    /* unimplemented  {cpsid I} */
    *r0_7 = 0xffffffff;
    *(r0_7 + 8) = 0;
    *(r0_7 + 0xc) = 0;
    *(r0_7 + 0x14) = arg1;  /* "3.00.06_240523" */
    *(r0_7 + 0x18) = arg2;  /* ".06_240523" */
    *(r0_7 + 4) = 0xffffffff;
    *(r0_7 + 0x10) = 0;  /* "R02_3.00.06_240523" */
    *(r0_7 + 0x1c) = r0_2;  /* "240523" */
    *(r0_7 + 0x1e) = 1;  /* "0523" */
    
    if (*0x10435c)
        *0x10435c -= 1;
    
    if (!*0x10435c)
        /* unimplemented  {cpsie I} */
    
    return 0;
}

uint32_t sub_ada4(int32_t arg1)
{
    uint32_t result = sub_ea24(arg1);
    
    if (result)
    {
        sub_b16c(result);
        void* r1_1 = (sub_b134(result) << 0x10 >> 0xb) + 0x100b18;  /* "R02_3.00.06_240523" */
        *0x10435c += 1;
        /* unimplemented  {cpsid I} */
        *(r1_1 + 0x1e) = 0;  /* "0523" */
        
        if (*0x10435c)
            *0x10435c -= 1;
        
        result = *0x10435c;
        
        if (!result)
            /* unimplemented  {cpsie I} */
    }
    
    return result;
}

void sub_adf4(int32_t arg1, int32_t arg2)
{
    if (arg2 == 0x11)  /* "02_3.00.06_240523" */
    {
        sub_f5e8();
        return;
    }
    
    if (arg2 == 0x16)  /* "00.06_240523" */
    {
        sub_c594();
        return;
    }
    
    if (arg2 != 0x17)  /* "0.06_240523" */
        return;
    
    sub_b3c0(arg1, arg2);
    sub_e2b8();
    sub_b3f4(0x20148000, 0x17);  /* "0.06_240523" */
}

int32_t sub_ae30(int32_t* arg1)
{
    if (arg1 && arg1[3])
    {
        int32_t r2_1 = *arg1;
        
        if (r2_1)
        {
            int32_t r1_2 = arg1[2];
            int32_t r0 = arg1[1];
            
            if (r1_2 != r0)
            {
                r2_1 = r0 <= r1_2 ? r2_1 - (r1_2 - r0) : r0 - r1_2;
            }
            
            return r2_1 - 1;
        }
    }
    
    return 0;
}

int32_t sub_ae5c(int32_t* arg1)
{
    if (arg1 && arg1[3])
    {
        int32_t r2_1 = *arg1;
        
        if (r2_1)
        {
            int32_t r1_2 = arg1[2];
            int32_t r0 = arg1[1];
            
            if (r1_2 != r0)
            {
                if (r1_2 <= r0)
                    return r2_1 - (r0 - r1_2);
                
                return r1_2 - r0;
            }
        }
    }
    
    return 0;
}

void sub_ae86(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    *arg1 = arg3;
    arg1[3] = arg2;
    arg1[1] = 0;
    arg1[2] = 0;
}

int32_t sub_ae92(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    
    if (arg1 && arg1[3] && *arg1 && arg2 && arg3 && sub_ae5c(arg1) >= arg3)
    {
        int32_t r0_5 = arg1[1];
        int32_t r6 = *arg1 - r0_5;
        
        if (r6 >= arg3)
            r6 = arg3;
        
        0xff7febd8(arg2, arg1[3] + r0_5, r6);
        arg1[1] += r6;
        int32_t r5_1 = arg3 - r6;
        
        if (arg3 != r6)
        {
            0xff7febd8(arg2 + r6, arg1[3], r5_1);
            arg1[1] = r5_1;
        }
        
        if (arg1[1] >= *arg1)
            arg1[1] = 0;
        
        return 1;
    }
    
    return 0;
}

int32_t sub_aefc(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    int32_t r0 = sub_ae5c(arg1);
    *arg3 = r0;
    return sub_ae92(arg1, arg2, r0);
}

int32_t sub_af16(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    
    if (arg1 && arg1[3] && *arg1 && arg2 && arg3 && sub_ae30(arg1) >= arg3)
    {
        int32_t r0_5 = arg1[2];
        int32_t r6 = *arg1 - r0_5;
        
        if (r6 >= arg3)
            r6 = arg3;
        
        0xff7febd8(arg1[3] + r0_5, arg2, r6);
        arg1[2] += r6;
        int32_t r5_1 = arg3 - r6;
        
        if (arg3 != r6)
        {
            0xff7febd8(arg1[3], arg2 + r6, r5_1);
            arg1[2] = r5_1;
        }
        
        if (arg1[2] >= *arg1)
            arg1[2] = 0;
        
        return 1;
    }
    
    return 0;
}

int32_t sub_af80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = *0x105b18 + *0x105b20 + 0xe10 * *0x105b24;
    return 0xff7febd8(arg1, sub_5980(&var_10), 0x2c);
}

int32_t sub_afb0()
{
    return sub_b488(0x20148000, 0x80dcf5);
}

uint32_t sub_afc4()
{
    return *0x100104;
}

int32_t sub_afd0()
{
    0xff7fec0a(0x100100, 0x1da4);
    *0x100100 = 0x12345678;
    *0x101ea0 = 0x9abcedf0;
    return sub_b144();
}

int32_t sub_b000(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    
    while (*0x100100 == 0x12345678)
    {
        if (*0x101ea0 != 0x9abcedf0)
            break;
        
        int32_t r1_1 = *0x100b14;
        int32_t* r4_2;
        
        if (!r1_1)
            r4_2 = &data_0;
        else
        {
            int32_t r0_1 = *0x100b10;
            *0x100b10 = (r0_1 + 1) << 0x19 >> 0x19;  /* "06_240523" */
            *0x100b14 = r1_1 - 1;
            r4_2 = 0x14 * r0_1 + 0x100110;  /* "3.00.06_240523" */
        }
        
        *0x2013100c = (*0x2013100c >> 8 << 8) + 0x76;
        
        if (!r4_2)
        {
            *0x100104 = 0;
            return 0;
        }
        
        int32_t r0_3 = r4_2[1];
        int32_t r7_1 = *((r0_3 << 4) + 0x101b20);
        *0x10010c = r0_3;
        *0x100108 = *r4_2;
        
        if (r7_1)
        {
            int32_t r0_7 = r7_1(r4_2[1], r4_2[2], r4_2[3], r4_2[4], var_18);
            
            if (r0_7 && r0_7 == 5)
            {
                var_18 = r4_2[4];
                sub_14fd4(*r4_2, r4_2[1], r4_2[2], r4_2[3], var_18);
            }
        }
    }
    
    while (true)
        /* nop */
}

uint32_t sub_b09c(int32_t arg1, int32_t arg2)
{
    if (arg2 != 0xffffffff)
    {
        if (arg2 <= 0)
            return 0;
        
        arg2 -= 1;
    }
    
    *0x10435c += 1;
    /* unimplemented  {cpsid I} */
    uint32_t result = 0;
    
    for (int32_t i = 0; i < 0x80; i += 1)
    {
        if (!*(0x104360 + i * 0xc))
        {
            result = i - 0x4fe;
            void* r0_12 = 0xc * i;
            *(0x104360 + r0_12) = result;
            *(r0_12 + 0x104364) = arg2;
            *(r0_12 + 0x104368) = 0xff7feb00(arg1, 0xa);
            *((i << 3) + 0x104968) = result;
            *((i << 3) + 0x10496c) = 0x818859;
            0xff80c3e0(0xfb01, 0x44, 0x44);
            break;
        }
    }
    
    if (*0x10435c)
        *0x10435c -= 1;
    
    if (!*0x10435c)
        /* unimplemented  {cpsie I} */
    
    return result;
}

int32_t sub_b134(int32_t arg1) __pure
{
    if (arg1 - 0xfb02 < 0x80)
        return arg1 - 0xfb02;
    
    while (true)
        /* nop */
}

int32_t sub_b144()
{
    0xff80c59c(0x44, 0x103a84);
    *0x104960 = 0xfb01;
    *0x104964 = 0x818779;
    return 0x104960;
}

int32_t sub_b16c(int32_t arg1)
{
    *(0x104360 + 0xc * sub_b134(arg1)) = 0;
    return 0xff80c7cc(arg1, 0x44, arg1, 0x104360);
}

uint32_t sub_b18c(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_10_1 = r3;
    int32_t* r2 = (sub_b134(arg1) << 0x10 >> 0xb) + 0x100b18;  /* "R02_3.00.06_240523" */
    uint32_t result = *(r2 + 0x1e);  /* "0523" */
    
    if (result)
    {
        if (arg2)
            *(r2 + 0x1e) = 0;  /* "0523" */
        
        int32_t r1 = r2[5];
        
        if (!r1)
        {
            int32_t r1_1 = r2[1];
            result = r1_1 + 1;
            
            if (r1_1 != 0xffffffff)
            {
                result = *r2;
                
                if (result != 0xffffffff)
                    return sub_14fd4(result, r1_1, r2[2], r2[3], r2[4]);
            }
        }
        else
        {
            int32_t r0_4 = r2[1];
            result = r0_4 + 1;
            
            if (r0_4 == 0xffffffff)
            {
                int32_t r0_5 = *r2;
                result = r0_5 + 1;
                
                if (r0_5 == 0xffffffff)
                    return r1(r2[6]);
            }
        }
    }
    
    return result;
}

int32_t sub_b1e8(int32_t arg1)
{
    if (!(*0x105aac & arg1))
        return 0;
    
    return 1;
}

void sub_b1fc(int32_t arg1)
{
    *0x105aac &= ~arg1;
}

uint32_t sub_b20c(int32_t* arg1, uint32_t* arg2)
{
    *0x2010001c = 0x80000000;
    
    while (*0x2010001c >> 0x1f)  /* "523" */
        /* nop */
    
    int32_t r6 = *0x2010001c;
    *arg1 = 0xff7feb00(r6 << 5 >> 5, 0x640);
    uint32_t result = r6 << 5 >> 9;
    *arg2 = result;
    return result;
}

int32_t sub_b23c(int32_t arg1)
{
    0xff7fec0a(0x105b10, 0x18);  /* ".06_240523" */
    *0x105b10 = arg1;
    return 0x105b10;
}

int32_t sub_b254(int32_t* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    return sub_b274(sub_5250(arg1, arg2, arg3, arg4) - 0xe10 * *0x105b24);
}

int32_t sub_b274(int32_t arg1)
{
    int32_t r2 = *0x105b20;
    int32_t r0 = arg1 - *0x105b18;
    *0x105b20 = r0;
    return r0 - r2;
}

int32_t sub_b288(int32_t arg1, int32_t arg2)
{
    int32_t r2 = *0x105b10;
    
    if (r2 == arg1)
        return 0;
    
    *0x105b10 = arg1;
    int32_t result = (arg1 - r2) & arg2;
    *0x105b18 += result;
    return result;
}

int32_t sub_b2a8(int32_t arg1, int32_t arg2)
{
    int32_t r2 = *0x105b14;
    
    if (r2 == arg1)
        return 0;
    
    *0x105b14 = arg1;
    int32_t result = (arg1 - r2) & arg2;
    int32_t r0_1 = *0x105b1c + result;
    *0x105b1c = r0_1;
    sub_b288(0xff7feb00(r0_1, 0x64, r2, 0x105b10), 0xffff);
    return result;
}

int32_t sub_b2dc(int32_t arg1, int32_t* arg2)
{
    int32_t* var_20 = arg2;
    
    if (arg1 != 0x20136000)
        return 6;
    
    if (!arg2)
        return 0xe;
    
    *0x20136000 |= 1;
    *0x20136008 = (*0x20136008 >> 0xa << 0xa) + 8;
    *0x20136008 = (*0x20136008 & 0xfc00ffff) + 0x80000;
    *0x20136000 &= 0xffffffdf;
    sub_163fc();
    
    for (uint32_t i = 0; i < 6; )
    {
        *0x2013600c = (*0x2013600c & 0xffff8fff) + 0x3000;
        *0x2013600c |= 2;
        
        while (*0x2013600c << 0x1e < 0)  /* "0523" */
            /* nop */
        
        int32_t r3_1 = i << 1;
        i = i + 1;
        *(&var_20 + r3_1) = *0x2013600c << 6 >> 0x16;  /* "00.06_240523" */
    }
    
    *0x20136000 = *0x20136000 >> 1 << 1;
    sub_1640c();
    sub_51ae(&var_20, 6, 2, 0x80b3df);
    uint32_t r0_18 = sub_6c5e(&var_20);
    int32_t r1_11 = *0x105a9c;
    *arg2 = *(0x103b98 + (r1_11 << 2)) - (r0_18 - 0xfa) * (*(0x103b18 + (r1_11 << 1)) + 0x29ab);
    return 0;
}

int32_t sub_b3ac(int32_t arg1) __pure
{
    if (arg1 == 0x20136000)
        return 0;
    
    return 6;
}

int32_t sub_b3c0(int32_t arg1, int32_t arg2)
{
    if (arg1 != 0x20148000)
        return 6;
    
    int32_t r0_2 = sub_d76a(arg2);
    
    if (r0_2 == 0xff)
        return 1;
    
    *0x20201024 &= ~(1 << r0_2);
    return 0;
}

int32_t sub_b3f4(int32_t arg1, int32_t arg2)
{
    if (arg1 != 0x20148000)
        return 6;
    
    int32_t r0_2 = sub_d76a(arg2);
    
    if (r0_2 == 0xff)
        return 1;
    
    int32_t r1 = 1 << r0_2;
    *0x2020102c |= r1;
    *0x20201024 |= r1;
    return 0;
}

int32_t sub_b42c(int32_t arg1)
{
    if (arg1 != 0x20148000)
        return 6;
    
    if (!*0x105ab0)
    {
        *0x20149014 |= 0x1000;
        sub_fbc0();
        *0x105ab0 = 1;
    }
    
    return 0;
}

int32_t sub_b464(int32_t arg1, int32_t* arg2)
{
    if (arg1 != 0x20148000)
        return 6;
    
    if (!arg2)
        return 0xe;
    
    *arg2 = *0x20148050;
    return 0;
}

int32_t sub_b488(int32_t arg1, int32_t arg2)
{
    if (arg1 != 0x20148000)
        return 6;
    
    *0x105ab4 = arg2;
    return 0;
}

int32_t sub_b4a4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 != 0x20148000 || arg2 > 0x1f || arg3 >= 0xe)  /* "523" */
        return 6;
    
    int32_t r4 = 1 << arg2;
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = 0xff7fec8e(arg1, arg2, arg3, arg3);
    *0x20148004 &= ~r4;
    *0x20201058 |= r4;
    *0x20201054 |= r4;
    return 0;
}

int32_t sub_b4ee(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    return sub_ee94(arg1, arg2, arg3);
}

int32_t sub_b4f4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    return sub_edcc(arg1, arg2, arg3);
}

int32_t sub_b508(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 == 0x20148000 && arg2 <= 0x1f && arg3 < 3)  /* "523" */
    {
        int32_t r0 = 1 << arg2;
        
        if (!arg3)
        {
            *0x2020105c |= r0;
            *0x20201060 |= r0;
            return 0;
        }
        
        if (arg3 == 1)
        {
            *0x2020105c |= r0;
            *0x20201060 &= ~r0;
            return 0;
        }
        
        if (arg3 == 2)
        {
            *0x2020105c &= ~r0;
            return 0;
        }
    }
    
    return 6;
}

int32_t sub_b558(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 != 0x20148000 || arg2 > 0x1f)  /* "523" */
        return 6;
    
    int32_t r0_1 = 1 << arg2;
    int32_t r1 = *0x20148000;
    int32_t r1_1;
    
    r1_1 = !arg3 ? r1 & ~r0_1 : r1 | r0_1;
    
    *0x20148000 = r1_1;
    return 0;
}

void sub_b580(void* arg1)
{
    void* r3;
    void* var_8 = r3;
    int32_t r2;
    int32_t var_c_1 = r2;
    int32_t r1 = *(arg1 + 0x2c);
    
    if (r1 << 0x1f)  /* "523" */
        var_8 = *(arg1 + 0x44);
    
    if (r1 << 0x1e < 0)  /* "0523" */
        var_8 = *(arg1 + 0x48);
    
    if (r1 << 0x1c < 0)  /* "240523" */
        var_8 = *(arg1 + 0x4c);
    
    if (r1 << 0x1a < 0)  /* "6_240523" */
        var_8 = *(arg1 + 0x50);
    
    if (r1 << 0x19 < 0)  /* "06_240523" */
        var_8 = *(arg1 + 0x54);
    
    if (r1 << 0x18 < 0)  /* ".06_240523" */
        var_8 = *(arg1 + 0x58);
    
    if (r1 << 0x17 < 0)  /* "0.06_240523" */
        var_8 = *(arg1 + 0x5c);
    
    if (r1 << 0x16 < 0)  /* "00.06_240523" */
        var_8 = *(arg1 + 0x60);
    
    if (r1 << 0x15 < 0)  /* ".00.06_240523" */
        var_8 = *(arg1 + 0x64);
    
    if (r1 << 0x14 < 0)  /* "3.00.06_240523" */
        var_8 = *(arg1 + 0x68);
}

int32_t sub_b5ec(int32_t arg1) __pure
{
    if (arg1 != 0x20145000)
        return 1;
    
    return 0;
}

int32_t sub_b600(void* arg1)
{
    int32_t r4 = *(arg1 + 0x2c);
    
    if (r4 << 0x19 < 0)  /* "06_240523" */
    {
        *(0x1c * sub_b5ec(arg1) + 0x105ae9) = 0xd;  /* "240523" */
        *(arg1 + 0x30) &= 0xffffffef;  /* "R02_V3.0" */
        r4 &= 0xffffffaf;
    }
    
    if (r4 << 0x1d < 0)  /* "40523" */
    {
        sub_b7b4(arg1);
        r4 &= 0xfffffffb;
    }
    
    if (r4 << 0x1b < 0)  /* "_240523" */
    {
        sub_ba68(arg1);
        r4 &= 0xffffffef;
    }
    
    if (r4 << 0x1a < 0)  /* "6_240523" */
    {
        *(arg1 + 0x30) |= 0x10;  /* "R02_3.00.06_240523" */  /* "R02_V3.0" */
        r4 &= 0xffffffdf;
    }
    
    if (r4 << 0x18 < 0)  /* ".06_240523" */
        r4 &= 0xffffff7f;
    
    if (r4 << 0x16 < 0)  /* "00.06_240523" */
        sub_b9c8(arg1);
    
    return sub_b580(arg1);
}

int32_t sub_b674(void* arg1)
{
    if (arg1 != 0x20145000 && arg1 != 0x20146000)
        return 6;
    
    if (arg1 != 0x20145000)
    {
        if (arg1 != 0x20146000)
            return 6;
        
        *0x20149000 &= 0xffffffcf;
        *0x20149010 |= 0x10;  /* "R02_3.00.06_240523" */
        *0x20149010 |= 0x40;
        *0x20149018 |= 8;
        *0x20149018 |= 4;
    }
    else
    {
        *0x20149000 = *0x20149000 >> 2 << 2;
        *0x20149010 |= 1;
        *0x20149010 |= 4;
        *0x20149018 |= 2;
        *0x20149018 |= 1;
    }
    
    *(arg1 + 0x6c) = *(arg1 + 0x6c) >> 1 << 1;
    *(arg1 + 0x3c) = (*(arg1 + 0x3c) >> 8 << 8) + 1;
    return 0;
}

int32_t sub_b700(void* arg1, int32_t arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    char* var_18 = arg4;
    int32_t var_20 = arg2;
    void* var_24 = arg1;
    int32_t i = arg5;
    int32_t r5 = arg6;
    char* r7 = arg4;
    
    if (arg1 != 0x20145000 && arg1 != 0x20146000)
        return 6;
    
    if (!r7)
        return 0xe;
    
    *(arg1 + 0x6c) = *(arg1 + 0x6c) >> 1 << 1;
    *(arg1 + 4) = arg2 >> 1 | *(arg1 + 4) >> 0xa << 0xa;
    *(arg1 + 0x6c) |= 1;
    int32_t var_28_1 = 1;
    int32_t var_2c_1 = 0;
    
    do
    {
        if (i == 1)
            var_2c_1 = 1;
        
        if (var_28_1 == 1)
            sub_9614(arg1, 0, 0, 0, arg3);
        
        sub_9614(arg1, var_28_1, var_2c_1, 1, 0);
        var_28_1 = 0;
        
        while (*(arg1 + 0x70) << 0x1c >= 0)  /* "240523" */
        {
            int32_t r0_14 = r5;
            r5 -= 1;
            
            if (r0_14 <= 0)
                break;
            
            0xff900b4c(0x320);
        }
        
        if (r5 <= 0)
            return 0xd;
        
        *r7 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
        i -= 1;
        r7 = &r7[1];
    } while (i);
    
    return 0;
}

uint32_t sub_b7b4(void* arg1)
{
    void* r1 = 0x1c * sub_b5ec(arg1) + 0x105ad8;  /* "240523" */
    uint32_t result;
    uint32_t i;
    
    do
    {
        if (!(*(arg1 + 0x78) << 0x1b))  /* "_240523" */
        {
            int32_t r0_7 = *(r1 + 0xc);
            char result_1;
            
            result_1 = r0_7 <= 0x10 ? r0_7 - 1 : 8;  /* "R02_3.00.06_240523" */
            
            result = result_1;
            *(arg1 + 0x38) = *(arg1 + 0x38) >> 8 << 8 | result;
            break;
        }
        
        **(r1 + 8) = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
        *(r1 + 8) += 1;
        result = *(r1 + 0xc);
        
        if (!result)
            break;
        
        i = result;
        result -= 1;
        *(r1 + 0xc) = result;
    } while (i != 1);
    return result;
}

int32_t sub_b804(int32_t* arg1, int32_t arg2)
{
    if ((arg1 == 0x20145000 || arg1 == 0x20146000) && arg2 < 3)
    {
        if (!arg2)
        {
            *arg1 &= 0xffffffef;
            *arg1 &= 0xfffffff7;
            return 0;
        }
        
        if (arg2 == 1)
        {
            *arg1 |= 0x10;  /* "R02_3.00.06_240523" */
            *arg1 |= 8;
            return 0;
        }
    }
    
    return 6;
}

int32_t sub_b848(int32_t* arg1, int32_t arg2)
{
    if ((arg1 == 0x20145000 || arg1 == 0x20146000) && arg2 < 2)
    {
        if (!arg2)
        {
            *arg1 |= 1;
            *arg1 |= 0x40;
            return 0;
        }
        
        if (arg2 == 1)
        {
            *arg1 = *arg1 >> 1 << 1;
            *arg1 &= 0xffffffbf;
            return 0;
        }
    }
    
    return 6;
}

int32_t sub_b890(int32_t arg1, int32_t arg2)
{
    if ((arg1 == 0x20145000 || arg1 == 0x20146000) && arg2 - 2 < 0x16)  /* "00.06_240523" */
    {
        int32_t r0_1 = 1 << arg2;
        *0x20201058 |= r0_1;
        *0x20201054 |= r0_1;
        *0x20201060 |= r0_1;
        *0x2020105c |= r0_1;
        int32_t r2_2 = *0x20132024 | r0_1 >> 2;
        *0x20132024 = r2_2;
        
        if (arg1 == 0x20145000)
        {
            sub_bd90(arg2, 7, r2_2);
            return 0;
        }
        
        if (arg1 == 0x20146000)
        {
            sub_bd90(arg2, 9, r2_2);
            return 0;
        }
    }
    
    return 6;
}

int32_t sub_b8fc(int32_t arg1, int32_t arg2)
{
    if ((arg1 == 0x20145000 || arg1 == 0x20146000) && arg2 - 2 < 0x16)  /* "00.06_240523" */
    {
        int32_t r0_1 = 1 << arg2;
        *0x20201058 |= r0_1;
        *0x20201054 |= r0_1;
        *0x20201060 |= r0_1;
        *0x2020105c |= r0_1;
        
        if (arg1 == 0x20145000)
        {
            sub_bd90(arg2, 8, 0x20201040);
            return 0;
        }
        
        if (arg1 == 0x20146000)
        {
            sub_bd90(arg2, 0xa, 0x20201040);
            return 0;
        }
    }
    
    return 6;
}

int32_t sub_b95c(int32_t* arg1, int32_t arg2)
{
    if ((arg1 != 0x20145000 && arg1 != 0x20146000) || arg2 >= 3)
        return 6;
    
    uint32_t r1_1 = arg2 + 1;
    *arg1 = r1_1 << 0x1e >> 0x1d | (*arg1 & 0xfffffff9);  /* "40523" */  /* "0523" */
    uint32_t r1_2 = r1_1 << 4;
    arg1[5] = *(r1_2 + 0x103d14) | arg1[5] >> 0x10 << 0x10;  /* "R02_3.00.06_240523" */
    arg1[6] = *(0x103d10 + r1_2) | arg1[6] >> 0x10 << 0x10;  /* "R02_3.00.06_240523" */
    arg1[0x1f] = arg1[0x1f];  /* "523" */
    arg1[0x1f] = *(r1_2 + 0x103d1c) | arg1[0x1f] >> 0x10 << 0x10;
        /* "R02_3.00.06_240523" */  /* "523" */
    return 0;
}

int32_t sub_b9c8(void* arg1)
{
    int32_t r0 = sub_b5ec(arg1);
    int32_t r1 = 0;
    
    if (*(arg1 + 0x70) << 0x1d >= 0)  /* "40523" */
    {
        if (*(r0 * 0x1c + 0x105ae9) == 0xd)  /* "240523" */
            r1 = 1;
    }
    else if (*(r0 * 0x1c + 0x105adc) <= 1 || *(r0 * 0x1c + 0x105ae9) == 0xd)  /* "240523" */
        r1 = 1;
    
    *(arg1 + 0x30) &= 0xffffffef;  /* "R02_V3.0" */
    *(arg1 + 0x30) &= 0xffffffbf;  /* "R02_V3.0" */
    *(arg1 + 0x30) &= 0xfffffdff;  /* "R02_V3.0" */
    *(arg1 + 0x30) &= 0xfffffffb;  /* "R02_V3.0" */
    int32_t result = *(0x1c * r0 + 0x105ae4);  /* "240523" */
    
    if (result)
    {
        while (true)
        {
            result = *(arg1 + 0x78) << 0x1b;  /* "_240523" */
            
            if (!result)
                break;
            
            **(0x1c * r0 + 0x105ae0) = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */  /* "240523" */
            *(0x1c * r0 + 0x105ae0) += 1;  /* "240523" */
            result = *(0x1c * r0 + 0x105ae4);  /* "240523" */
            
            if (!result)
                return result;
            
            int32_t result_1 = result;
            result -= 1;
            *(0x1c * r0 + 0x105ae4) = result;  /* "240523" */
            
            if (result_1 == 1)
                return result;
        }
    }
    
    if (r1)
    {
        *(arg1 + 0x30) = 0;  /* "R02_V3.0" */
        int32_t r1_1;
        
        if (*(0x1c * r0 + 0x105ae8) == 2)  /* "240523" */
            r1_1 = *(0x1c * r0 + 0x105aec);  /* "240523" */
        else
            r1_1 = *(0x1c * r0 + 0x105af0);  /* "240523" */
        
        if (r1_1)
            r1_1(0x1c * r0 + 0x105ae9);  /* "240523" */
        
        result = 1;
        *(0x1c * r0 + 0x105ae8) = 1;  /* "240523" */
    }
    
    return result;
}

int32_t sub_ba68(void* arg1)
{
    uint32_t r3;
    uint32_t var_18 = r3;
    void* r5_1 = 0x1c * sub_b5ec(arg1);  /* "240523" */
    
    if (!*(r5_1 + 0x105adc))
    {
        int32_t r0_3 = *(arg1 + 0x30) & 0xffffffef;  /* "R02_V3.0" */
        *(arg1 + 0x30) = r0_3;  /* "R02_V3.0" */
        return r0_3;
    }
    
    int32_t i;
    
    do
    {
        int32_t r0_13 = *(arg1 + 0x70) << 0x1e;  /* "0523" */
        
        if (r0_13 >= 0)
            return r0_13;
        
        int32_t r3_2;
        
        if (*(r5_1 + 0x105ae8) == 3)
            r3_2 = 1;
        else
            r3_2 = 0;
        
        int32_t r2_1;
        
        if (*(r5_1 + 0x105adc) == 1)
            r2_1 = 1;
        else
            r2_1 = 0;
        
        sub_9614(arg1, 0, r2_1, r3_2, **(0x105ad8 + r5_1));
        *(0x105ad8 + r5_1) += 1;
        i = *(r5_1 + 0x105adc);
        *(r5_1 + 0x105adc) = i - 1;
    } while (i != 1);
    uint32_t r0_16 = *(arg1 + 0x3c) >> 8 << 8;
    *(arg1 + 0x3c) = r0_16;
    return r0_16;
}

int32_t sub_bad4(void* arg1, int32_t arg2, uint32_t arg3, char* arg4, int32_t arg5)
{
    char* var_18_1 = arg4;
    uint32_t var_1c_2 = arg3;
    int32_t i = arg5;
    char* r6 = arg4;
    uint32_t r7 = arg3;
    
    if (arg1 != 0x20145000 && arg1 != 0x20146000)
        return 6;
    
    if (!r6)
        return 0xe;
    
    *(arg1 + 0x6c) = *(arg1 + 0x6c) >> 1 << 1;
    *(arg1 + 4) = arg2 >> 1 | *(arg1 + 4) >> 0xa << 0xa;
    *(arg1 + 0x6c) |= 1;
    int32_t var_18 = 0;
    
    do
    {
        if (i == 1)
            var_18 = 1;
        
        uint32_t var_1c = r7;
        r7 = r7 + 1;
        sub_9614(arg1, 1, 0, 0, var_1c);
        sub_9614(arg1, 0, var_18, 0, *r6);
        
        while (*(arg1 + 0x70) << 0x1d >= 0)  /* "40523" */
            /* nop */
        
        i -= 1;
        r6 = &r6[1];
    } while (i);
    
    return 0;
}

int32_t sub_bb60(void* arg1, int32_t arg2, uint32_t arg3, char* arg4, int32_t arg5, int32_t arg6)
{
    char* var_18 = arg4;
    uint32_t var_1c = arg3;
    int32_t var_20 = arg2;
    void* var_24 = arg1;
    int32_t i = arg5;
    int32_t r4 = arg6;
    char* r7 = arg4;
    
    if (arg1 != 0x20145000 && arg1 != 0x20146000)
        return 6;
    
    if (!r7)
        return 0xe;
    
    *(arg1 + 0x6c) = *(arg1 + 0x6c) >> 1 << 1;
    *(arg1 + 4) = arg2 >> 1 | *(arg1 + 4) >> 0xa << 0xa;
    *(arg1 + 0x6c) |= 1;
    int32_t var_2c_1 = 0;
    
    do
    {
        if (i == 1)
            var_2c_1 = 1;
        
        uint32_t r0_8 = var_1c;
        var_1c = r0_8 + 1;
        sub_9614(arg1, 1, 0, 0, r0_8);
        sub_9614(arg1, 0, var_2c_1, 0, *r7);
        
        while (*(arg1 + 0x70) << 0x1d >= 0)  /* "40523" */
        {
            int32_t r0_14 = r4;
            r4 -= 1;
            
            if (r0_14 <= 0)
                break;
            
            0xff900b4c(0x320);
        }
        
        if (r4 <= 0)
            return 0xd;
        
        i -= 1;
        r7 = &r7[1];
    } while (i);
    
    return 0;
}

int32_t sub_bc0c(int32_t arg1, int32_t arg2 @ r5)
{
    void* r1;
    int32_t r2;
    int32_t lr;
    r1 = 0xff7fec8e(arg1, 0x20132000, 1, arg1, lr);
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *(r2 - 0x37 + arg2) = r1;  /* "0" */
    *("_240523" + r1);
    /* tailcall */
    return sub_bc54(*(r1 + 0x20) >> 1 << 1, r1);  /* "23" */
}

int32_t sub_bc54(int32_t arg1, void* arg2)
{
    *(arg2 + 0x20) = arg1;  /* "23" */
    /* tailcall */
    return sub_bcc4();
}

int32_t sub_bc58(int32_t arg1, void* arg2)
{
    /* tailcall */
    return sub_bc54(*(arg2 + 0x20) & 0xfffffffb, arg2);  /* "23" */
}

int32_t sub_bca4(int32_t arg1, void* arg2)
{
    /* tailcall */
    return sub_bc54(*(arg2 + 0x20) & 0xffffdfff, arg2);  /* "23" */
}

int32_t sub_bcae(int32_t arg1, void* arg2, int32_t arg3)
{
    *(arg2 + 0x20) &= ~(arg3 << (arg1 + 3));  /* "23" */
    /* tailcall */
    return sub_bcc4();
}

int32_t sub_bcba(int32_t arg1, void* arg2, int32_t arg3)
{
    *(arg2 + 0x24) &= ~(arg3 << (arg1 - 0x15));  /* ".00.06_240523" */
    /* tailcall */
    return sub_bcc4();
}

int32_t sub_bcc4() __pure
{
    return 0;
}

int32_t sub_bcc8() __pure
{
    return 6;
}

int32_t sub_bcd0(int32_t arg1, int32_t arg2 @ r5, char arg3 @ r7)
{
    int32_t r2;
    void* r3_1;
    int32_t lr;
    r2 = 0xff7fec8e(arg1, 0x20132000, 1, arg1, lr);
    *(0xd3f542b0 + arg2) = 0x21 & arg3;  /* "3" */
    *(r3_1 + 0x20) |= r2 + 0x2f;  /* "23" */
    return 0;
}

int32_t sub_bd86() __pure
{
    return 6;
}

int32_t sub_bd90(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r1;
    int32_t r2;
    int32_t lr;
    r1 = 0xff7fec8e(arg1, arg2, arg3, arg2, lr);
    void* r5;
    int32_t r7;
    return sub_16994(r2 >> 4, r1, r2, r1 >> 0x1c, r5, r7);  /* "240523" */
}

int32_t sub_bdb0(int32_t arg1, int32_t arg2)
{
    return sub_16948(arg1, arg2);
}

int32_t sub_bdb6() __pure
{
    return 6;
}

int32_t sub_bdba(void* arg1, int32_t arg2)
{
    int32_t r0;
    int32_t r2;
    int32_t r3;
    r0 = sub_f8d4(arg1);
    
    if (!r0)
        return 5;
    
    return sub_d142(arg1, arg2, r2, r3);
}

void sub_bdd8(int32_t arg1) __noreturn
{
    *0x104f5c = arg1;
    int16_t* r0 = sub_134a0();
    *0x104f58 = r0;
    r0[2] = 0xffff;
    r0[3] = 0xffff;
    r0[4] = 0xffff;
    r0[5] = 0xffff;
    r0[6] = 0;
    *r0 = 0xffff;
    r0[1] = 0;
    r0[7] = 0;
    
    for (uint32_t i = 0; i < 4; )
    {
        *(i * 6 + 0x104f70) = 0xffff;
        *(i * 6 + 0x104f72) = 0xffff;
        i = i + 1;
        *0x104f74 = 0;
    }
    
    int32_t var_14 = 0;
    void var_24;
    sub_167b0(&var_24, &var_14, 0x104f70, 0xffff);
    /* no return */
}

int32_t sub_be44(int32_t arg1, int32_t arg2, int32_t arg3)
{
    /* unimplemented  {ldc2 p0, c15, [r7], {0}} */
    /* unimplemented  {cdp2 p0, #0xf, c11, c3, c6, #0} */
}

uint32_t sub_be4e(uint32_t arg1, void* arg2, int32_t arg3, int16_t arg4 @ r4, void* arg5 @ r5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    while (true)
    {
        arg1 = arg1 + 1;
        
        if (arg1 >= arg3)
            break;
        
        if (*(arg2 + arg1))
        {
            void arg_4;
            sub_dc3c(&arg_4, arg2, 0x104f66, 0x104f68, 0x104f6a);
            void arg_14;
            sub_13774(&arg_4, &arg_14);
            return sub_cc30();
        }
    }
    
    *(arg5 + 0xa) = arg4;
    *(arg5 + 0xc) = 3;
    *(arg5 + 8) = 0x1000;
    *(arg5 + 0xe) = arg4;
    *(arg5 + 0x10) = arg4;  /* "R02_3.00.06_240523" */
    *(arg5 + 4) = 0x3fe8;
    return 0x3fe8;
}

int32_t sub_be78(int16_t* arg1, void* arg2)
{
    uint32_t r3;
    uint32_t var_18 = r3;
    int16_t r0_2 = -1;
    
    if (sub_13624(*arg1) != arg2)
    {
        uint32_t r5_1 = *arg1;
        void* r0_6;
        
        do
        {
            if (r5_1 == 0xffff)
                return 0;
            
            var_18 = r5_1;
            r5_1 = *(sub_13624(r5_1) + 6);
            r0_6 = sub_13624(r5_1);
        } while (r0_6 != arg2);
        
        void* r0_8 = sub_13624(var_18);
        *(r0_8 + 6) = *(r0_6 + 6);
        
        if (arg1[1] == r5_1)
            arg1[1] = var_18;
    }
    else
    {
        if (*arg1 != arg1[1])
            r0_2 = *(arg2 + 6);
        else
            arg1[1] = 0xffff;
        
        *arg1 = r0_2;
    }
    
    int16_t r0_12 = sub_13690(arg2);
    arg1[2] -= r0_12;
    return 1;
}

int32_t sub_beec(int16_t* arg1, void* arg2)
{
    int16_t r0_1 = sub_135d8(arg2);
    
    if (*arg1 == 0xffff)
        *arg1 = r0_1;
    
    *(arg2 + 6) = 0xffff;
    uint32_t r0_3 = arg1[1];
    
    if (r0_3 != 0xffff)
        *(sub_13624(r0_3) + 6) = r0_1;
    
    arg1[1] = r0_1;
    int16_t result = sub_13690(arg2) + arg1[2];
    arg1[2] = result;
    return result;
}

int32_t sub_bf28(int16_t** arg1, void* arg2, int32_t arg3)
{
    void* var_1c = arg2;
    int16_t** var_20 = arg1;
    
    if (!sub_f8d4(arg2))
        return 5;
    
    int16_t* r0_3 = sub_e9dc(arg2, arg3);
    
    if (r0_3)
    {
        *arg1 = r0_3;
        return 8;
    }
    
    if (*0x104f6c == 0xffff)
        return 4;
    
    void* r0_5 = sub_134a0();
    
    if (!r0_5)
        return 2;
    
    int16_t r0_7 = *0x104f6c + 1;
    *0x104f6c = r0_7;
    *(r0_5 + 0xe) = r0_7;
    *(r0_5 + 0xc) = arg3;
    *(r0_5 + 0xa) = *(arg2 + 4);
    *(arg2 + 4) = sub_135d8(r0_5);
    *(r0_5 + 4) = 0xffff;
    *(r0_5 + 8) = sub_135d8(arg2);
    int32_t r3 = sub_e5c4(9);
    sub_cb9c(arg3, *(r0_5 + 0xe), *(arg2 + 0xe), r3);
    /* no return */
}

uint32_t sub_bfcc(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    int32_t var_20 = arg1;
    int32_t r6 = arg1;
    uint32_t result = 0x105996;
    int32_t i = arg2;
    
    while (i)
    {
        *0x105990 = r6 >> 8 << 8;
        uint32_t r0_2 = *0x105994;
        uint32_t r5_1 = 0x100 - r0_2;
        int16_t r0_5;
        
        if (i > r5_1)
        {
            0xff7febd8(r0_2 + 0x105996, var_18, r5_1);
            i -= r5_1;
            var_18 += r5_1;
            r6 += r5_1;
            r0_5 = *0x105994 + r5_1;
            *0x105994 = r0_5;
        }
        else
        {
            0xff7febd8(r0_2 + 0x105996, var_18, i);
            r0_5 = *0x105994 + i;
            *0x105994 = r0_5;
            i = 0;
        }
        
        result = r0_5 - 0x100;
        
        if (r0_5 == 0x100)
            result = sub_c088();
    }
    
    return result;
}

void sub_c038(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r3 = 0x105990;
    int32_t r4 = arg2;
    int32_t r7 = arg3;
    int32_t r1 = *0x105990;
    int32_t r6 = 0x105996;
    int32_t r2 = arg1 + r4;
    
    if (r2 > r1)
        r3 = r1 + *0x105994;
    
    int32_t r5_1;
    
    if (r2 <= r1 || r3 < r2)
    {
        r5_1 = r4;
    label_c064:
        
        if (r5_1)
        {
            0xff9004ba(arg1, r5_1, r7, r3, arg4);
            r7 += r5_1;
            r4 -= r5_1;
        }
    }
    else
    {
        if (r1 > arg1)
        {
            r5_1 = r4 - r2;
            goto label_c064;
        }
        
        r6 = arg1 + 0x105996;
    }
    
    if (r4)
        0xff7febd8(r7, r6, r4);
}

uint32_t sub_c088()
{
    uint32_t result = *0x105994;
    
    if (result)
    {
        if (result <= 0xff)
            0xff7febfc(result + 0x105996, 0x100 - result, 0xff);
        
        sub_e036(*0x105990, 0x100, 0x105996);
        result = 0;
        *0x105994 = 0;
    }
    
    return result;
}

int32_t sub_c0bc(void* arg1, int32_t arg2, int32_t arg3, int16_t* arg4)
{
    int16_t* var_18 = arg4;
    
    if (!sub_f8d4(arg1))
        return 5;
    
    return sub_d160(arg1, arg2, arg3, arg4);
}

int32_t sub_c0e0(int32_t arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    uint32_t result_1 = 0;
    int16_t result;
    
    for (uint32_t i = 0; !i; i = (i + 1) << 0x18 >> 0x18)  /* ".06_240523" */
    {
        (*0x81ec34)(*0x104f5c + (arg1 << 0xc) + result_1, 1);
        result = result_1 + 0x1000;
        result_1 = result;
    }
    
    return result;
}

int32_t sub_c114(void* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    void* var_18 = arg4;
    
    if (!sub_f8d4(arg1))
        return 5;
    
    return sub_d1e0(arg1, arg2, arg3, arg4);
}

uint32_t sub_c138(void* arg1, int32_t arg2)
{
    uint32_t result = 0xff80c474(*(arg1 + 0x14));  /* "3.00.06_240523" */
    
    if (result == 2)
    {
        result = *(*(arg1 + 0x10) + 0x17);  /* "R02_3.00.06_240523" */  /* "0.06_240523" */
        
        if (result == arg2)
            return 0xff80c4d0(*(arg1 + 0x14), 0);  /* "3.00.06_240523" */
    }
    
    return result;
}

int32_t sub_c15a() __pure
{
    return;
}

int32_t sub_c16c(int32_t arg1, int32_t arg2)
{
    int32_t r5 = arg1;
    int32_t r0 = arg2 << 0x14;  /* "3.00.06_240523" */
    
    if (r0)
        r0 = 1;
    
    char result = (arg2 >> 0xc) + r0;
    uint32_t i = 0;
    
    for (uint32_t result_1 = result; i < result_1; i = i + 1)
    {
        result = sub_dcd0(r5, 1);
        r5 += 0x1000;
    }
    
    return result;
}

int32_t sub_c1b8(void* arg1)
{
    sub_ae86(0x105f1c, 0x105c1c, 0x200);
    *0x105c18 = 0;
    return sub_c16c(*0x12dac4, *(arg1 + 8) + 0x100);
}

void* sub_c1ec(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18_1 = arg3;
    int32_t var_1c_1 = arg2;
    void* result = arg1;
    result = 0x12345678;
    int32_t var_1c = *(arg1 + 0xc);
    int32_t var_18 = *(arg1 + 4);
    sub_aefc(0x105f1c, 0x105e1c, &var_14);
    int32_t r1_1 = var_14;
    
    if (r1_1)
    {
        sub_e048(*0x12dac4 + 0x100 + *0x105c18, r1_1, 0x105e1c);
        *0x105c18 += var_14;
    }
    
    sub_e048(*0x12dac4, 0xc, &result);
    return result;
}

int32_t sub_c2a4() __pure
{
    return 0x81ee08;
}

int32_t sub_c2ac(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_af16(0x105f1c, arg3, arg4);
    int32_t result = sub_ae92(0x105f1c, 0x105e1c, 0x100);
    
    if (result)
    {
        sub_e048(*0x12dac4 + 0x100 + *0x105c18, 0x100, 0x105e1c);
        result = *0x105c18 + 0x100;
        *0x105c18 = result;
    }
    
    return result;
}

int32_t sub_c3a4(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    int32_t r1_3 = (arg2 - arg1 - 4) << 7;
    int32_t r3_6 = ~(((arg2 - arg1 - 4) << 9 ^ r1_3) >> 0x1f) << 0x1f >> 4
        | (((arg3 & 0xf800ffff) | (arg2 - arg1 - 4) << 0x14 >> 0x15 << 0x10) & 0xf7ffffff);
        /* "R02_3.00.06_240523" */  /* "3.00.06_240523" */  /* ".00.06_240523" */  /* "523" */
    uint32_t r2_13 = (~(((arg2 - arg1 - 4) << 8 ^ r1_3) >> 0x1f) << 0x1f >> 2
        | ((r3_6 | 0x10000000) & 0xdfffffff) | 0xc0000000) >> 0xa << 0xa
        | (arg2 - arg1 - 4) << 0xa >> 0x16;  /* "00.06_240523" */  /* "523" */
    return (((r2_13 & 0xfffffbff) | r1_3 >> 0x1f << 0xa) & 0xffff07ff) + 0xf000;  /* "523" */
}

uint32_t sub_c410(char* arg1, int32_t arg2)
{
    int16_t r3 = 0;
    
    for (int32_t i = 0; i < arg2; i += 1)
    {
        uint16_t r4_1 = *arg1;
        arg1 = &arg1[1];
        r3 += r4_1;
    }
    
    return r3;
}

int32_t sub_c42c(int32_t arg1)
{
    if (!arg1)
        return 0;
    
    int32_t r0_2 = arg1 - *0x103d64;
    
    if (r0_2 <= 0)
        return 5;
    
    int32_t r0_3;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    
    if (!*0x103d68)
    {
        r0_3 = sub_5784(r0_2);
        r2_1 = 0xcccccccd;
        r3_1 = 0x3ff4cccc;
    }
    else
    {
        r0_3 = sub_5784(r0_2);
        r2_1 = 0x9999999a;
        r3_1 = 0x3ff19999;
    }
    
    int32_t r0_4;
    int32_t r1_2;
    r0_4 = sub_5574(r0_3, r1_1, r2_1, r3_1);
    return sub_5824(r0_4, r1_2);
}

int32_t sub_c47c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    
    for (uint32_t i = 0; i < 3; i = i + 1)
    {
        if (!sub_d5e4(8, &var_10) && var_10 << 0x1e < 0)  /* "0523" */
            return 0;
    }
    
    return 1;
}

int32_t sub_c4ac()
{
    *0x109b10 = 0;
    sub_b4a4(0x20148000, 0x16, 0);  /* "00.06_240523" */
    sub_b508(0x20148000, 0x16, 1);  /* "00.06_240523" */
    sub_b4a4(0x20148000, 0x16, 0xc);  /* "00.06_240523" */
    sub_b3c0(0x20148000, 0x16);  /* "00.06_240523" */
    0xff900b4c(0x190);
    sub_b508(0x20148000, 0x16, 0);  /* "00.06_240523" */
    return 0;
}

uint32_t sub_c4fc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    uint32_t result = *0x109b15;
    
    if (result)
    {
        *0x109b15 = 0;
        var_10 = 0xff;
        int32_t r1_1;
        int32_t r2;
        int32_t r3;
        result = sub_d5e4(8, &var_10);
        
        if (!result)
        {
            uint32_t r0 = *0x109b12;
            
            if (!r0)
            {
                0xff900b4c(0xc3500);
                sub_d540();
                sub_d3d4(1);
                sub_f480();
                *0x109b12 = 1;
                r0 = sub_15b94(0x109b1a, 0x80f4a1, 0x3e8);
            }
            
            int32_t r0_1;
            int32_t r1_2;
            int32_t r2_1;
            int32_t r3_1;
            r0_1 = sub_c47c(r0, r1_1, r2, r3);
            
            if (!r0_1)
            {
                int32_t r0_2;
                int32_t r1_3;
                int32_t r2_3;
                int32_t r3_4;
                r0_2 = sub_d480(0, r1_2, r2_1, r3_1);
                
                if (r0_2 == 2)
                    r0_2 = sub_168d4(1);
                
                return sub_e958(r0_2, r1_3, r2_3, r3_4);
            }
            
            sub_d540();
            sub_d40e(1);
            sub_d63e(1);
            int32_t r2_2;
            int32_t r3_2;
            r2_2 = sub_168d4(0);
            *0x109b12 = 0;
            return sub_1a404(2, 1, r2_2, r3_2);
        }
    }
    
    return result;
}

int32_t sub_c594()
{
    *0x109b15 = 1;
    return 1;
}

uint32_t sub_c5a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0_3;
    
    if (!sub_c47c(arg1, arg2, arg3, arg4))
    {
        r0_3 = sub_e8c4();
        
        if (r0_3)
        {
            r0_3 = *0x104228;
            
            if (!r0_3 || r0_3 == 0xff)
            {
                var_18 = 0;
                sub_b2dc(0x20136000, &var_18);
                uint32_t r0_7;
                
                if (0xff7feb00(var_18, 0x3e8) - 0x1130 < 0xc9)
                {
                    r0_7 = *0x109b17 + 1;
                    *0x109b17 = r0_7;
                    
                    if (r0_7 >= 3)
                    {
                        *0x104228 = *0x105a9c;
                        *0x109b17 = 0;
                        return sub_db84();
                    }
                }
                else
                {
                    *0x109b17 = 0;
                    r0_7 = *0x105a9c;
                    int32_t r0_8;
                    
                    if (r0_7 == 0x14)  /* "3.00.06_240523" */
                    {
                        r0_8 = 0x21;  /* "3" */
                        *0x105a9c = r0_8;
                        return r0_8;
                    }
                    
                    if (r0_7 != 0x21)  /* "3" */
                    {
                        if (r0_7 == 0x24)
                            r0_8 = 0x33;  /* "_V3.0" */
                        else
                        {
                            if (r0_7 != 0x33)  /* "_V3.0" */
                            {
                                *0x105a9c = 0x24;
                                return r0_7;
                            }
                            
                            r0_8 = 0x14;  /* "3.00.06_240523" */
                        }
                        
                        *0x105a9c = r0_8;
                        return r0_8;
                    }
                    
                    *0x105a9c = 0x24;
                    *0x104228 = 0x24;
                }
                
                return r0_7;
            }
        }
    }
    else
    {
        r0_3 = *0x109b18 + 1;
        *0x109b18 = r0_3;
        
        if (r0_3 >= 3)
        {
            *0x109b18 = 0;
            sub_d540();
            sub_d40e(1);
            sub_d63e(1);
            *0x109b12 = 0;
            int32_t r2;
            int32_t r3;
            r2 = sub_168d4(0);
            sub_1a404(2, 1, r2, r3);
            *0x109b12 = 0;
            *0x109b13 = 0;
            return sub_15bb4(0x109b1a);
        }
    }
    
    return r0_3;
}

int32_t sub_c678(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    uint32_t i = 0;
    var_10 = 0xff;
    
    do
    {
        if (!sub_d5e4(0xa, &var_10) && var_10 >> 4 == 0xe)
        {
            *0x109b16 = var_10 >> 4;
            sub_d600();
            return sub_ad20(0x80f5d1, 0, 0x12c, 1);
        }
        
        i = i + 1;
    } while (i < 5);
    
    return sub_15c10(0);
}

uint32_t sub_c6d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r0 = sub_c47c(arg1, arg2, arg3, arg4);
    sub_d540();
    
    if (r0)
    {
        sub_d40e(1);
        sub_d63e(1);
        sub_168d4(0);
        *0x109b12 = 0;
        sub_15c10(0);
    }
    else if (!*0x109b12)
    {
        sub_f480();
        int32_t r1;
        int32_t r2;
        int32_t r3;
        r1 = sub_d3d4(1);
        
        if (sub_d480(0, r1, r2, r3) == 2)
            sub_168d4(1);
        
        *0x109b12 = 1;
        sub_15b94(0x109b1a, 0x80f4a1, 0x3e8);
    }
    
    sub_b3f4(0x20148000, 0x16);  /* "00.06_240523" */
    return sub_19918();
}

void sub_c74c(char* arg1, int32_t arg2)
{
    *arg1 = arg2;
    arg1[1] = arg2 >> 8;
    arg1[2] = arg2 >> 0x10;  /* "R02_3.00.06_240523" */
    arg1[3] = arg2 >> 0x18;  /* ".06_240523" */
}

int32_t sub_c75c(int32_t arg1)
{
    *0x106a28 = arg1;
    return sub_c868();
}

int32_t sub_c76c()
{
    return sub_fc84(0x104f2c, 5) ^ 1;
}

int32_t sub_c780(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_20 = arg2;
    char* var_24 = arg1;
    int16_t* r0;
    int32_t r3;
    r0 = sub_15494(0xf2);
    uint32_t r0_1 = *arg1;
    int16_t* r0_17;
    int16_t r1_5;
    
    if (!r0_1)
    {
        if (arg3)
            return 0xfe;
        
        int32_t r2 = 0xff80c4d0(arg2, 1);
        *(r0 + 0x17) = arg4;  /* "0.06_240523" */
        uint32_t r1 = arg1[1];
        r0[9] = arg1[2] << 8 | r1;
        int32_t r0_10;
        int32_t r1_1;
        int32_t r2_1;
        r0_10 = sub_52ea(&arg1[3], r1, r2);
        *(r0 + 0xc) = r0_10;
        int32_t r0_12 = sub_52ea(&arg1[7], r1_1, r2_1);
        *(r0 + 4) = r0_12;
        *(r0 + 8) = r0_12 + 0x100;
        r0_17 = 0xff80c348(0xf201, sub_15484(r0, *(r0 + 0x17)), arg2, 4);  /* "0.06_240523" */
        *r0_17 = *(r0 + 0x17);  /* "0.06_240523" */
        r1_5 = r0[9];
        r0_17[1] = r1_5;
        0xff80c3b8(r0_17, r1_5);
    }
    else if (r0_1 == 2)
    {
        r0[0xa] = arg1[2] << 8 | arg1[1];
        0xff7fec0a(r0 + 0x19, 0x15);  /* ".00.06_240523" */  /* "06_240523" */
        
        if (r0[0xc])
        {
            int16_t r5_1 = r0[0xa];
            r0_17 = 0xff80c348(0xf203, sub_15484(r0, *(r0 + 0x17)), arg2, 2);  /* "0.06_240523" */
            *r0_17 = r5_1;
            0xff80c3b8(r0_17, r1_5);
        }
    }
    else
    {
        if (r0_1 != 3)
            return 1;
        
        if (!sub_1603c(arg3, r0, arg4))
            return 0x80;
        
        sub_c1ec(r0, r0, arg4, r3);
        0xff80c3e0(0xf205, sub_15484(r0, *(r0 + 0x17)), arg2);  /* "0.06_240523" */
    }
    return 0;
}

int32_t sub_c868()
{
    char* r4 = *0x106a28;
    char* r0 = 0xff80c348(0xe0e, 9, 4, 0xe);
    *r0 = 9;
    *(r0 + 2) = r4[2];
    *(r0 + 4) = r4[3];
    *(r0 + 6) = *r4;
    *(r0 + 8) = 0x258;
    *(r0 + 0xa) = 0xffff;
    *(r0 + 0xc) = 0xffff;
    0xff80c3b8(r0, 0xffff);
    *0x106a26 = 1;
    return sub_15b94(0x106a22, 0x80d239, 0x1388);
}

int32_t sub_c8c0()
{
    int32_t result = 0;
    uint32_t r0 = *0x104f64;
    
    if (r0 << 0x18 >> 0x18)  /* ".06_240523" */
    {
        result = 0x100 - r0;
        *0x104f60 -= result;
        *0x104f64 = (r0 + 0x100) & 0xff00;
    }
    
    sub_c088();
    return result;
}

int32_t sub_c8f4(int32_t arg1, char* arg2)
{
    int32_t i = &data_15180 * arg1;
    uint32_t r5 = 0x7d0;
    
    while (sub_8464(r5) <= i)
    {
        i -= sub_8464(r5);
        r5 = r5 + 1;
    }
    
    uint32_t r6 = 1;
    
    while (sub_7d10(r5, r6) <= i)
    {
        i -= sub_7d10(r5, r6);
        r6 = r6 + 1;
    }
    
    char r0_9 = 0xff7feb00(i, &data_15180);
    *arg2 = r5 + 0x30;  /* "R02_V3.0" */
    arg2[1] = r6;
    arg2[2] = r0_9 + 1;
    return r0_9 + 1;
}

int32_t sub_c954(uint32_t arg1)
{
    return sub_16880(0x1094ae, arg1);
}

int32_t sub_c964() __pure
{
    return 1;
}

int32_t sub_c968(int32_t arg1, int32_t arg2, char arg3)
{
    int32_t r4 = arg2;
    
    if (r4)
    {
        if (r4 > 0x14)  /* "3.00.06_240523" */
            r4 = 0x14;  /* "3.00.06_240523" */
        
        0xff7fec0a(0x104258, 0x18);  /* ".06_240523" */
        *0x104258 = arg3;
        0xff7febd8(0x104259, arg1, r4);
    }
    
    sub_db84();
    return sub_c9a0();
}

int32_t sub_c9a0()
{
    char* r0 = sub_ac60();
    uint32_t r1 = r0[1];
    uint32_t r3 = r1 >> 4;
    uint8_t var_1c = r3;
    uint32_t r6_1 = r1 << 0x1c >> 0x1c;  /* "240523" */
    uint32_t var_18 = r3;
    uint8_t var_1b = r6_1;
    uint32_t r0_1 = *r0;
    uint32_t r5 = r0_1 >> 4;
    uint8_t var_1a = r5;
    uint32_t r4_1 = r0_1 << 0x1c >> 0x1c;  /* "240523" */
    uint8_t var_19 = r4_1;
    var_1c = 0x1041f0;
    uint32_t var_28;
    0xff7fec0a(0x1041f0, 0x1c, &var_28);  /* "240523" */
    uint32_t r0_2 = *0x104270;
    
    if (r0_2 == 0xff || !r0_2)
    {
        uint32_t r0_4 = *0x104258;
        
        if (!(0xa0 & ~r0_4) && *0x104259)
        {
            if (r0_4 == 0xa2)
                sub_7820(var_1c, &data_ca9c, 0x104259);
            else if (r0_4 == 0xa3)
            {
                var_28 = r6_1;
                uint32_t var_24_2 = r5;
                uint32_t var_20_2 = r4_1;
                sub_7820(var_1c, "%s_%01X%01X%01X%01X", 0x104259);
            }
            else if (r0_4 == 0xa4)
                sub_7820(var_1c, "O_%s", 0x104259);
            else
            {
                var_28 = r6_1;
                uint32_t var_24_1 = r5;
                uint32_t var_20_1 = r4_1;
                sub_7820(var_1c, "O_%s_%01X%01X%01X%01X", 0x104259);
            }
        }
    }
    else
    {
        0xff7febd8(var_1c, 0x104270, 0x18);  /* ".06_240523" */
        0xff7fec0a(0x104238, 0x18);  /* ".06_240523" */
        0xff7febd8(0x104238, var_1c, 0x18);  /* ".06_240523" */
    }
    
    if (!*0x1041f0)
    {
        var_28 = r6_1;
        uint32_t var_24_3 = r5;
        uint32_t var_20_3 = r4_1;
        sub_7820(var_1c, "%s%01X%01X%01X%01X", "R02_");
    }
    
    0xff7fec0a(0x104238, 0x18);  /* ".06_240523" */
    return 0xff7febd8(0x104238, var_1c, 0x18);  /* ".06_240523" */
}

int32_t sub_cb0a(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    int32_t r0_19 = arg1 << 2;
    void* var_18 = arg3;
    int32_t var_20 = r0_19;
    uint32_t r2 = *(arg3 + 5);
    int16_t* r4 = sub_13644(0x80fad9, *(arg3 + 6) << 8 | r2, r2, arg4);
    
    if (!r4)
    {
        r4 = sub_134a0();
        r4[7] = *(arg3 + 6) << 8 | *(arg3 + 5);
        r4[2] = 0xffff;
        r4[5] = 0xffff;
    }
    else
        sub_be78(6 * *r4 + 0x104f70, r4);
    
    *r4 = r0_19;
    r4[1] = arg2;
    r4[6] = *(arg3 + 2) << 8 | *(arg3 + 1);
    r4[4] = *(arg3 + 4) << 8 | *(arg3 + 3);
    uint32_t r0_16 = *(arg3 + 6) << 8 | *(arg3 + 5);
    
    if (*0x104f6c < r0_16)
        *0x104f6c = r0_16;
    
    sub_beec(6 * r0_19 + 0x104f70, r4);
    return 9;
}

void sub_cb9c(int32_t arg1, void* arg2, void* arg3, int32_t arg4) __noreturn
{
    void* var_14 = arg3;
    void* var_18 = arg2;
    var_18 = 1;
    *var_18[1] = arg1;
    *var_18[2] = arg1 >> 8;
    *var_14[1] = arg2;
    *var_14[2] = arg2 >> 8;
    *var_18[3] = arg3;
    var_14 = arg3 >> 8;
    sub_18c(&data_0, &var_18, &*(data_4 + 3), sub_18c, var_18, var_14, arg4);
    /* no return */
}

int32_t sub_cbf8(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    uint32_t r2 = *(arg3 + 1);
    int16_t* r0_1 = sub_13644(0x80fad9, *(arg3 + 2) << 8 | r2, r2, arg4);
    
    if (r0_1)
    {
        sub_be78(6 * *r0_1 + 0x104f70, r0_1);
        sub_135c8(r0_1);
    }
    
    return 5;
}

uint32_t sub_cc30()
{
    for (uint32_t i = 0; i < 4; i = i + 1)
    {
        for (uint32_t j = *(0x104f70 + i * 6); j != 0xffff; j = *(sub_177ac(j) + 6))
        {
        }
    }
    
    uint32_t r0_5 = sub_13624(*(*0x104f58 + 0xa));
    sub_cca4(*0x104f58, r0_5);
    uint32_t i_1 = sub_135d8(*0x104f58);
    
    while (i_1 != 0xffff)
    {
        void* r0_10 = sub_13624(i_1);
        i_1 = *(r0_10 + 0xa);
        void* r0_12 = sub_13624(i_1);
        
        if (r0_12 && *(r0_12 + 8) != *(r0_10 + 8))
            *(r0_10 + 0xa) = 0xffff;
    }
    
    return sub_135f4(*0x104f58);
}

uint32_t sub_cca4(void* arg1, uint32_t arg2)
{
    uint32_t i = arg2;
    uint32_t result = sub_135d8(arg1);
    
    for (; i; i = result)
    {
        result = *(i + 8);
        
        if (result == *(arg1 + 0xe))
            break;
        
        result = sub_13624(*(i + 0xa));
    }
    
    uint32_t r5 = i;
    
    if (i)
        result = *(i + 8);
    
    if (i && result == *(arg1 + 0xe))
    {
        result = sub_135d8(r5);
        *(arg1 + 4) = result;
        
        while (true)
        {
            if (!r5)
                return result;
            
            result = *(r5 + 8);
            
            if (result != *(arg1 + 0xe))
                break;
            
            result = sub_13624(*(r5 + 0xa));
            r5 = result;
        }
    }
    else if (!r5)
        return result;
    
    for (; i != r5; i = result)
    {
        if (*(i + 4))
            sub_cca4(i, r5);
        
        result = sub_13624(*(i + 0xa));
    }
    
    return result;
}

int32_t sub_cd12(int32_t arg1, int32_t arg2) __pure
{
    if (arg2 <= 0x80)
    {
        if (arg1 == 6)
        {
            if (arg2 == 8)
                return 0;
        }
        else if (arg1 != 7)
        {
            if (arg1 != 8)
                return 0;
            
            if (arg2 == 7)
                return 0;
        }
        else if (arg2 >= 6)
            return 0;
    }
    
    return 0x8d;
}

int32_t sub_cd3c() __pure
{
    return;
}

int32_t sub_cd3e(int32_t arg1) __pure
{
    int32_t result = 1;
    
    for (uint32_t i = 0; i < 9; i = i + 1)
    {
        if (arg1 >> i << 0x1f)  /* "523" */
            result |= 3 << ((i << 1) + 1);
    }
    
    return result;
}

int32_t sub_cd64() __pure
{
    return;
}

int32_t sub_cd66(void* arg1)
{
    void* r4 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    int32_t r1_1;
    
    while (true)
    {
        if (!*(r4 + 4))
            r1_1 = 1;
        else
            r1_1 = 0;
        
        if (r1_1)
            break;
        
        0xff802428(r4 + 4, r1_1);
        0xff80c010();
    }
    
    *(arg1 + 0x10) = 0;  /* "R02_3.00.06_240523" */
    return 0xff80c010(r4, r1_1);
}

uint32_t sub_cd94(void* arg1, int32_t arg2)
{
    uint32_t r3 = *(arg1 + 0xc) + 1;
    
    for (uint32_t i = 0; i < 9; i = i + 1)
    {
        if (*(arg1 + 0xe) >> i << 0x1f)  /* "523" */
        {
            if (r3 + 1 == arg2)
                return i;
            
            r3 = r3 + 2;
        }
    }
    
    return 9;
}

int32_t sub_ce54() __pure
{
    return 0x81ed98;
}

int32_t sub_ce5c(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    char* var_20 = arg2;
    int32_t var_24 = arg1;
    void* r0 = sub_15494(0x14);  /* "3.00.06_240523" */
    uint32_t r1 = *arg2;
    int32_t r6;
    
    if (r1 >= 9)
        r6 = 0x81;
    else if (!sub_d07c(r0, r1))
        r6 = 0x82;
    else
    {
        r6 = sub_cd12(*arg2, arg2[1]);
        
        if (!r6)
        {
            for (void** i = *(r0 + 4); i; i = *i)
            {
                if (i[1] == *arg2)
                {
                    0xff8021b8(r0 + 4, i, 0);
                    0xff80c010(i);
                    break;
                }
            }
            
            void* r0_9 = 0xff80c1f4(arg2[1] + 8, 1);
            *(r0_9 + 4) = *arg2;
            *(r0_9 + 5) = arg2[1];
            0xff7febd8(r0_9 + 6, &arg2[2], arg2[1]);
            0xff80243c(r0 + 4, r0_9);
        }
    }
    
    char* r0_14 = 0xff80c348(0x1401, arg4, arg3, 2);
    *r0_14 = *arg2;
    r0_14[1] = r6;
    0xff80c3b8();
    return 0;
}

int32_t sub_cef8(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    if (0xff80c474(arg3) == 1)
    {
        void* r0_2 = sub_15494(0x14);  /* "3.00.06_240523" */
        int16_t r0_3 = sub_d07c(r0_2, *(r0_2 + 0x10));  /* "R02_3.00.06_240523" */
        int16_t* r0_7;
        
        if (*(r0_2 + 0x10) != *arg2)  /* "R02_3.00.06_240523" */
        {
            r0_7 = 0xff80c348(0xc14, (*(r0_2 + 0x11) << 8) + 7, arg3, 6, arg4);
                /* "02_3.00.06_240523" */
            *r0_7 = r0_3;
            r0_7[2] = 0x80;
        }
        else
        {
            int16_t* r0_4 = 0xff80c348(0xc14, (*(r0_2 + 0x11) << 8) + 7, arg3, arg2[1] + 6, arg4);
                /* "02_3.00.06_240523" */
            *r0_4 = r0_3;
            r0_4[2] = 0;
            r0_4[1] = arg2[1];
            0xff7febd8(r0_4 + 5, &arg2[2], arg2[1]);
            r0_7 = r0_4;
        }
        
        0xff80c3b8(r0_7);
        0xff80c4d0(arg3, 0);
    }
    
    return 0;
}

int32_t sub_cf74(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    char* var_20 = arg2;
    int32_t var_24 = arg1;
    uint32_t r0 = *arg2;
    0xff7fec8e(r0, arg2, arg3, r0, 0, 0);
    char* r0_2 = 0xff80c348(0x1403, arg4, arg3, 7);
    *r0_2 = *arg2;
    r0_2[1] = 5;
    0xff7febd8(&r0_2[2], "Bluex", 5);
    0xff80c3b8(r0_2);
    return 0;
}

int32_t sub_cfe0(char* arg1 @ r6, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    char* r0 = 0xff80c348(0x1403, arg3, arg2, 8);
    *r0 = *arg1;
    r0[1] = 6;
    0xff7febd8(&r0[2], &data_d070, 6);
    0xff80c3b8(r0);
    return 0;
}

uint32_t sub_d07c(void* arg1, int32_t arg2)
{
    uint32_t result = *(arg1 + 0xc) + 1;
    int32_t i;
    
    for (i = 0; i < 9; i = i + 1)
    {
        if (*(arg1 + 0xe) >> i << 0x1f)  /* "523" */
        {
            if (arg2 == i)
            {
                result = result + 1;
                break;
            }
            
            result = result + 2;
        }
    }
    
    if (i == 9)
        return 0;
    
    return result;
}

int32_t sub_d0b4()
{
    uint32_t r0 = *0x1041e1;
    
    if (*0x10998c >= *0x109994)
        *0x1041e1 = r0 | 2;
    else if (r0 << 0x1e < 0)  /* "0523" */
    {
        *0x1041e1 = r0 & 0xfd;
        return 1;
    }
    
    return 0;
}

int32_t sub_d0e4() __pure
{
    return 0xfff;
}

void* sub_d0ec(void* arg1, int32_t arg2)
{
    int32_t r4_1 = 0xc * arg2;
    void* r6 = *(arg1 + 0xc);
    int32_t* r1 = *(arg1 + 4);
    int32_t r2 = r1[arg2 * 3];
    uint32_t r3_4 = *(arg2 * 0x58 + r6 + 0x1c) << 0x14 >> 0x14;
        /* "3.00.06_240523" */  /* "240523" */
    r1[arg2 * 3] = r2 - r3_4;
    int32_t* r1_1 = *(arg1 + 4);
    
    if (r2 == r3_4)
    {
        int32_t r6_1 = *(r1_1 + r4_1 + 4);
        int32_t r4_3 = *(r1_1 + r4_1 + 8);
        0xff8ff4ee(arg1, arg2);
        return r6_1(r4_3);
    }
    
    0xff8ff2c0(arg1, arg2);
    int32_t r0 = 1 << arg2;
    *(r6 + 0x3a0) = r0 << 0x1a >> 0x1a | r0 << 0x1a >> 0x12;
        /* "2_3.00.06_240523" */  /* "6_240523" */
    return r6 + 0x380;
}

int32_t sub_d142(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int16_t* r0 = sub_eb7c(arg1, arg2, &var_10);
    
    if (!r0)
        return 0xa;
    
    sub_1352c(arg1, r0);
    /* no return */
}

int32_t sub_d160(void* arg1, int32_t arg2, int32_t arg3, int16_t* arg4)
{
    int16_t* var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    int16_t* r0 = sub_eb7c(arg1, arg2, &data_0);
    
    if (!r0)
        return 0xa;
    
    if (r0[7] > *arg4)
        return 3;
    
    var_1c = *r0;
    var_20 = r0[1];
    uint32_t r7 = r0[7];
    sub_1683c(&var_1c, &var_20, 9);
    sub_139b8(var_1c, var_20, r7, arg3);
    sub_1683c(&var_1c, &var_20, r7);
    sub_139b8(var_1c, var_20, 2, &var_18);
    sub_18c(&data_0, arg3, r7, sub_18c, arg4, r7);
    /* no return */
}

int32_t sub_d1e0(void* arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    void* var_18 = arg4;
    int32_t var_20 = arg2;
    void* var_24 = arg1;
    int16_t* r4 = sub_eb7c(arg1, arg2, &data_0);
    
    if (!r4)
    {
        r4 = sub_134a0();
        
        if (!r4)
            return 2;
        
        r4[2] = 0;
        r4[4] = sub_135d8(arg1);
        r4[6] = arg2;
        r4[5] = *(arg1 + 4);
        *(arg1 + 4) = sub_135d8(r4);
    }
    else
        sub_be78(6 * *r4 + 0x104f70, r4);
    
    sub_15e84(r4, arg3, arg4, *(arg1 + 0xe));
    /* no return */
}

int32_t sub_d244() __pure
{
    return 1;
}

int32_t sub_d248() __pure
{
    return;
}

int32_t sub_d24a() __pure
{
    return;
}

int32_t sub_d24c() __pure
{
    return;
}

int32_t sub_d250(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_8_1 = r3;
    return sub_d31c(arg1, 0x81ea28, 0x81ea48, arg2, arg3);
}

void sub_d268(char* arg1, int32_t arg2)
{
    char* r4 = arg1;
    
    if (arg2)
        return;
    
    while (true)
    {
        sub_c74c(r4, 0xff7febb4());
        sub_c74c(&r4[4], 0xff7febb4(r4));
        sub_c74c(&r4[8], 0xff7febb4(&r4[4]));
        sub_c74c(&r4[0xc], 0xff7febb4(&r4[8]));
        sub_c74c(&r4[0x10], 0xff7febb4(&r4[0xc]));  /* "R02_3.00.06_240523" */
        sub_c74c(&r4[0x14], 0xff7febb4(&r4[0x10]));
            /* "R02_3.00.06_240523" */  /* "3.00.06_240523" */
        sub_c74c(&r4[0x18], 0xff7febb4(&r4[0x14]));  /* "3.00.06_240523" */  /* ".06_240523" */
        sub_c74c(&r4[0x1c], 0xff7febb4(&r4[0x18]));  /* ".06_240523" */  /* "240523" */
        int32_t r0_21 = 0x1f;  /* "523" */
        
        while (!r4[r0_21])
        {
            int32_t temp1_1 = r0_21;
            r0_21 -= 1;
            
            if (temp1_1 - 1 < 0)
                break;
        }
        
        if (r0_21 == 0xffffffff && !*r4)
            continue;
        
        arg1 = "523";
        
        while (true)
        {
            uint32_t r1_9 = *(r4 + arg1);
            uint32_t r2_1 = *(0x81ea68 + arg1);
            
            if (r1_9 > r2_1)
                break;
            
            if (r1_9 < r2_1)
                return;
            
            char* temp2_1 = arg1;
            arg1 -= 1;
            
            if (temp2_1 - 1 < 0)
                return;
        }
    }
}

int32_t sub_d31c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t r0_1 = 0xff80c348(arg4, arg5, 0xff, 0x40);
    int32_t var_30;
    0xff7febd8(&var_30, 0x81ebe8, 0x1c);  /* "240523" */
    int32_t var_20 = r0_1 + 0x20;  /* "23" */
    int32_t var_24 = r0_1;
    int32_t var_18 = r0_1;
    var_30 = arg1;
    int32_t var_2c = arg2;
    int32_t var_28 = arg3;
    int32_t i;
    
    do
        i = sub_9544(&var_30);
     while (i);
    
    return i;
}

int32_t sub_d368() __pure
{
    return;
}

uint32_t sub_d36c(int32_t arg1)
{
    int16_t* r4;
    
    r4 = !arg1 ? 0x104ed0 : 0x104ee0;
    
    sub_a714(*r4);
    sub_a72c(r4[2]);
    sub_a744(r4[4]);
    return sub_a75c(r4[6]);
}

uint32_t sub_d3a0(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0x960)
        r3 = 0;
    else if (arg1 < 0xbd6)
        r3 = 0xff7feb2c(arg1 - 0x960, 0x5a);
    else
        r3 = 7;
    
    return sub_d610(1, 7, 0, r3);
}

uint32_t sub_d3d4(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    return sub_d610(1, 1, 3, r3);
}

uint32_t sub_d3ec(int32_t arg1)
{
    int32_t r3;
    
    if (arg1 <= 3)
        r3 = 0;
    else if (arg1 - 6 > 2)
        r3 = 1;
    else
        r3 = 2;
    
    return sub_d610(5, 3, 1, r3);
}

uint32_t sub_d40e(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    return sub_d610(0xa, 1, 2, r3);
}

uint32_t sub_d426(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    return sub_d610(6, 1, 7, r3);
}

uint32_t sub_d43e(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    return sub_d610(7, 1, 7, r3);
}

uint32_t sub_d456()
{
    return sub_d610(5, 1, 4, 1);
}

uint32_t sub_d466(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    return sub_d610(5, 1, 7, r3);
}

int32_t sub_d480(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r4 = 0;
    var_18 = 0xff;
    
    while (sub_d5e4(8, &var_18))
    {
        0xff900b4c(0x13880);
        r4 = r4 + 1;
        
        if (r4 >= 5)
            return 0;
    }
    
    uint32_t r0_4 = (var_18 & 0x18) >> 3;  /* ".06_240523" */
    var_18 = r0_4;
    
    if (arg1 != r0_4)
        return 2;
    
    return 1;
}

uint32_t sub_d4cc(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 8)
        r3 = 0;
    else if (arg1 < 0x200)
        r3 = (((arg1 - 8) >> 0x1f >> 0x1d) + arg1 - 8) << 0x15 >> 0x18;
            /* ".00.06_240523" */  /* ".06_240523" */  /* "40523" */  /* "523" */
    else
        r3 = 0x3f;
    
    return sub_d610(2, 0x3f, 0, r3);
}

uint32_t sub_d4fa(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0xc8)
        r3 = 0;
    else if (arg1 < 0xc80)
        r3 = 0xff7feb2c(arg1 - 0xc8, 0xc8);
    else
        r3 = 0xf;
    
    return sub_d610(3, 0xf, 4, r3);
}

uint32_t sub_d526(int32_t arg1)
{
    return sub_d610(0, 0xf, 0, 0xff7feb2c(arg1 - 0x32, 0x1e));  /* "0523" */  /* "2_V3.0" */
}

uint32_t sub_d540()
{
    sub_d466(0);
    sub_d714(0);
    sub_d6a4(0x11f8);
    sub_d526(0x1f4);
    sub_d3a0(0xac8);
    sub_d4cc(0x18);  /* ".06_240523" */
    sub_d4fa(0x7d0);
    sub_d43e(0);
    sub_d5bc(0xa);
    sub_d670(0x1068);
    sub_d6c4(1);
    sub_d656(0);
    sub_d456();
    sub_d3ec(5);
    sub_d426(0);
    sub_d6dc(0x1194);
    return sub_d40e(1);
}

uint32_t sub_d5bc(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 1)
        r3 = 0;
    else if (arg1 < 0x1f)  /* "523" */
        r3 = (((arg1 - 1) >> 0x1f) + arg1 - 1) << 0x17 >> 0x18;
            /* "0.06_240523" */  /* ".06_240523" */  /* "523" */
    else
        r3 = 0xf;
    
    return sub_d610(3, 0xf, 0, r3);
}

int32_t sub_d5e4(int32_t arg1, char* arg2)
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    return sub_b700(0x20145000, 0xe, arg1, arg2, 1, 0x64);
}

uint32_t sub_d600()
{
    return sub_d610(2, 1, 7, 1);
}

uint32_t sub_d610(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    sub_d5e4(arg1, &var_18);
    uint32_t r1_1 = (var_18 & ~(arg2 << arg3)) | arg4 << arg3;
    var_18 = r1_1;
    sub_d740(arg1, r1_1);
    return var_18;
}

uint32_t sub_d63e(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    return sub_d610(0xa, 1, 3, r3);
}

uint32_t sub_d656(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    return sub_d610(4, 1, 1, r3);
}

uint32_t sub_d670(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0xe10)
        r3 = 0;
    else if (arg1 < 0x11c1)
        r3 = 0xff7feb2c(arg1 - 0xe10, 0xf);
    else
        r3 = 0x3f;
    
    return sub_d610(4, 0x3f, 2, r3);
}

uint32_t sub_d6a4(int32_t arg1)
{
    return sub_d610(0, 0xf, 4, 0xff7feb2c(arg1 - 0xf28, 0x50, 0xfffff0d8));
}

uint32_t sub_d6c4(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    return sub_d610(4, 1, 0, r3);
}

uint32_t sub_d6dc(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0x1068)
        r3 = 0;
    else if (arg1 < 0x1356)
        r3 = 0xff7feb2c(arg1 - 0x1068, 0x32, 0xffffef98);  /* "2_V3.0" */
    else
        r3 = 0xf;
    
    return sub_d610(7, 0xf, 0, r3);
}

uint32_t sub_d714(int32_t arg1)
{
    int32_t r3;
    
    if (!arg1)
        r3 = 0;
    else if (arg1 <= 0x28)
        r3 = 1;
    else if (arg1 - 0x29 > 0x27)
        r3 = 3;
    else
        r3 = 2;
    
    return sub_d610(5, 3, 5, r3);
}

int32_t sub_d740(uint32_t arg1, int32_t arg2)
{
    int32_t var_8 = arg2;
    uint32_t var_c = arg1;
    return sub_bad4(0x20145000, 0xe, arg1, &var_8, 1);
}

int32_t sub_d75c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    return sub_e048(arg1, arg3, arg2);
}

int32_t sub_d76a(int32_t arg1)
{
    int32_t entry_r2;
    int32_t lr;
    0xff7fec8e(0xff, arg1 - 0xf, entry_r2, arg1 - 0xf, lr);
    return 0;
}

int32_t sub_d788() __pure
{
    return 1;
}

int32_t sub_d78c() __pure
{
    return 2;
}

int32_t sub_d790() __pure
{
    return 3;
}

int32_t sub_d794() __pure
{
    return 4;
}

int32_t sub_d798(int32_t arg1)
{
    int32_t result = 0;
    int32_t r5 = 1;
    uint32_t r1 = 0;
    
    for (int32_t i = 0; i < 5; i += 1)
    {
        if (r5 << i & arg1)
        {
            int32_t r0;
            int32_t r1_1;
            r0 = 0xff7fec8e();
            r5 = r0 << 0x10;  /* "R02_3.00.06_240523" */
            result = i;
            r1 = r0 >> 0x20;  /* "23" */
        }
        
        result |= r1;
    }
    
    return result;
}

int32_t sub_d7d2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r4, int32_t arg5 @ r5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    uint32_t r1 = 0x800000;
    
    while (true)
    {
        arg1 |= r1;
        arg3 += 1;
        
        if (arg3 >= 5)
            break;
        
        if (arg5 << arg3 & arg4)
        {
            int32_t r0;
            int32_t r1_1;
            r0 = 0xff7fec8e();
            arg5 = r0 << 0x10;  /* "R02_3.00.06_240523" */
            arg1 = arg3;
            r1 = r0 >> 0x20;  /* "23" */
        }
    }
    
    return arg1;
}

uint32_t sub_d7e0(int32_t arg1, int32_t arg2)
{
    *0x103d74 = 1;
    *0x103d75 = 1;
    *0x103d78 = 0;
    *0x103d7c = 0;
    *0x103d80 = 0;
    *0x103d84 = arg1 << 4;
    *0x103d8c = 0;
    *0x103d88 = arg2 << 4;
    *0x103d76 = 0;
    *0x103d77 = 0;
    *0x103d90 = 0;
    *0x103d94 = 0;
    uint32_t i = 0;
    *0x103d98 = 0;
    
    do
    {
        int32_t r2_1 = i << 2;
        i = i + 1;
        *(0x109c90 + r2_1) = 0;
    } while (i <= 0xc);
    
    return i;
}

int32_t sub_d820(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r5 = arg2 << 4;
    int32_t result = 0;
    *0x103d8c += 1;
    int32_t r6 = arg3 << 4;
    
    if (*0x103d75 == 1)
    {
        *0x103d80 = r5;
        *0x103d75 = 0;
    }
    
    if (!r5)
        *0x103d77 = *0x103d77;
    else
    {
        if (r5 - *0x103d80 < 0 - *0x103d88)
            *0x103d77 = 1;
        
        *0x103d80 = r5;
    }
    
    int32_t r0 = sub_d950(arg1);
    
    if (r0)
        *0x103d76 = r0;
    
    uint32_t r0_1 = *0x103d76;
    
    if (r0_1 == 1)
    {
        if (*0x103d77 == 1)
        {
            result = 1;
            *0x103d77 = 0;
            *0x103d76 = 0;
        }
    }
    else if (r0_1 == 2 && r5 >= r6)
    {
        result = 2;
        *0x103d77 = 0;
        *0x103d76 = 0;
    }
    
    int32_t r0_3 = *0x103d90;
    
    if (r0_3 == 2)
    {
        if (r5 < r6)
            result = 1;
        
        goto label_d89c;
    }
    
    if (r0_3 == 1)
    {
        if (r5 >= r6)
        {
        label_d89c:
            *0x103d90 = 0;
        label_d89e:
            
            if (r5 < r6)
                *0x103d90 = 1;
        }
        else
            *0x103d90 = 2;
    }
    else if (!r0_3)
        goto label_d89e;
    
    return result;
}

int32_t sub_d8b8(int32_t* arg1, int32_t arg2)
{
    int32_t r1 = arg1[2] - arg2;
    int32_t r1_1 = r1 - 1;
    
    if (r1 - 1 < 0)
        r1_1 += arg1[1];
    
    return (*arg1)[r1_1];
}

int32_t sub_d8cc(int32_t* arg1)
{
    int32_t* r1 = *arg1;
    
    if (arg1[3] != arg1[1])
        return *r1;
    
    return r1[arg1[2]];
}

void* sub_d8e2(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    int32_t i = 0;
    arg1[2] = 0;
    arg1[3] = 0;
    *arg1 = arg2;
    arg1[1] = arg3;
    void* result = &arg1[2];
    
    for (; i < arg3; i += 1)
    {
        result = i << 2;
        *(arg2 + result) = 0;
    }
    
    return result;
}

int32_t sub_d8fc(int32_t* arg1, int32_t arg2)
{
    int32_t* r2 = *arg1;
    arg1[2];
    int32_t result = r2[arg1[2]];
    r2[arg1[2]] = arg2;
    int32_t r2_2 = arg1[2] + 1;
    arg1[2] = r2_2;
    int32_t r1 = arg1[1];
    
    if (r2_2 >= r1)
        arg1[2] = 0;
    
    int32_t r2_4 = arg1[3] + 1;
    arg1[3] = r2_4;
    
    if (r2_4 > r1)
        arg1[3] = r1;
    
    return result;
}

uint32_t sub_d928(int32_t arg1) __pure
{
    int32_t r2 = 0;
    int32_t r1 = 0;
    
    for (int32_t i = 0; i < 0x10; i += 1)  /* "R02_3.00.06_240523" */
    {
        r1 <<= 1;
        r2 = (r2 << 2) + (arg1 >> 0x1e);  /* "0523" */
        arg1 <<= 2;
        
        if ((r1 << 1) + 1 <= r2)
        {
            r2 -= (r1 << 1) + 1;
            r1 += 1;
        }
    }
    
    return r1;
}

int32_t sub_d950(int32_t arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r2;
    int32_t var_1c = r2;
    int32_t r1;
    int32_t var_20 = r1;
    int32_t r4 = 0;
    int32_t r0 = arg1 << 4;
    uint32_t r2_1 = *0x103d74;
    int32_t result = 0;
    int32_t i = 0;
    int32_t result_1 = 0;
    
    if (r2_1 == 1)
        *0x103d7c = r0;
    
    if (r0)
    {
        int32_t r1_2;
        
        if (r2_1 == 1)
        {
            *0x103d74 = 0;
            *0x103d7c = r0;
        label_d998:
            r1_2 = *0x103d94;
            
            if (r1_2)
            {
                int32_t r2_2;
                
                if (r1_2 <= 0xc)
                    r2_2 = *0x103d84;
                
                if (r1_2 <= 0xc && ((r2_2 >> 0x1f) + r2_2) >> 1 >= r4)  /* "523" */
                    goto label_d9ca;
                
                for (; i <= r1_2; i += 1)
                    *(0x109c90 + (i << 2)) = 0;
                
                *0x103d94 = 0;
                *0x103d98 = 0;
            }
        }
        else
        {
            int32_t r1_1 = *0x103d7c;
            *0x103d7c = r0;
            r4 = r0 - r1_1;
            
            if (r0 - r1_1 >= 0)
                goto label_d998;
            
            if (0 - 0xff7feb2c(*0x103d84, 6, 0x103d74) <= r4)
                goto label_d998;
            
            r1_2 = *0x103d94;
        label_d9ca:
            *(0x109c90 + (r1_2 << 2)) = r4;
            *0x103d94 = r1_2 + 1;
            *0x103d98 += r4;
            int32_t r7 = *0x103d94;
            
            if (r7)
            {
                int32_t r0_4 = *0x103d84;
                
                for (int32_t i_1 = 0; i_1 < r7; i_1 += 1)
                {
                    if (0 - 0xff7feb2c(r0_4, r7) <= *(0x109c90 + (i_1 << 2)))
                    {
                        result_1 = 0;
                        break;
                    }
                    
                    result_1 = 2;
                }
                
                if (*0x103d98 >= 0 - r0_4)
                {
                    result = result_1;
                    
                    if (result_1 == 2)
                        goto label_da1e;
                }
                else
                {
                    result = 2;
                label_da1e:
                    
                    for (int32_t i_2 = 0; i_2 <= r7; i_2 += 1)
                        *(0x109c90 + (i_2 << 2)) = 0;
                    
                    *0x103d94 = 0;
                    *0x103d98 = 0;
                }
            }
        }
        int32_t r0_11 = *0x103d84;
        
        if (r4 < 0 - r0_11)
            return 2;
        
        if (r4 > r0_11)
            return 1;
    }
    
    return result;
}

int32_t sub_da58(int32_t arg1)
{
    return sub_d8b8(0x10ab98, arg1);
}

int32_t sub_da68(int32_t arg1)
{
    int32_t r5 = 0;
    int32_t i = 0;
    
    if (*0x10aba4 == 0xa && arg1 == 0xa)
        return (0x199a * (*0x103f00 >> 4)) >> 0xc;
    
    if (!arg1)
        return 0;
    
    int32_t r3;
    
    for (; i < arg1; i = r3 + 1)
    {
        int32_t r0_7;
        r0_7 = sub_da58(i);
        r5 += r0_7;
    }
    
    return 0xff7feb2c(r5, arg1);
}

int32_t sub_dab8()
{
    return sub_d8cc(0x10ab98);
}

int32_t sub_dac8(int32_t arg1)
{
    int32_t result = 0;
    int32_t r5 = arg1;
    int32_t i = 0;
    
    if (!arg1)
        return 0;
    
    if (r5 > 0xa)
        r5 = 0xa;
    
    sub_da68(r5);
    
    for (; i < r5; i += 1)
    {
        int32_t r0_4;
        int32_t r3_1;
        r0_4 = sub_da58(i);
        int32_t r0_5 = r0_4 - r3_1;
        result += (r0_5 * r0_5) >> 8;
    }
    
    return result;
}

void* sub_db00()
{
    *0x103f00 = 0;
    return sub_d8e2(0x10ab98, 0x10ab70, 0xa);
}

int32_t sub_db20(int32_t arg1)
{
    int32_t r4 = arg1;
    
    if (r4 > 0xdc00)
        r4 = 0xdc00;
    
    *0x103f00 += r4 - sub_d8fc(0x10ab98, r4);
    return 0x103ebc;
}

int32_t sub_db4c()
{
    return sub_15b5e(0x7b000);
}

int32_t sub_db58()
{
    sub_15b30(0x7b000, 0x10420c, 0x88);
    
    if (*0x10420c == 2)
        return 1;
    
    0xff7fec0a(0x10420c, 0x88);
    return 0;
}

int32_t sub_db84()
{
    sub_15b5e(0x7b000);
    *0x10420c = 2;
    return sub_15b76(0x7b000, 0x10420c, 0x88);
}

void sub_dba8(int32_t arg1)
{
    if (!*0x104254)
    {
        *0x104254 = arg1;
        sub_db84();
    }
}

int32_t sub_dbc0()
{
    *0x104254 = 0;
    *0x104250 = 0;
    return sub_db84();
}

uint32_t sub_dbd4(char* arg1)
{
    uint32_t r1 = *arg1;
    *0x109375 = r1;
    uint32_t r2 = arg1[0x18];  /* ".06_240523" */
    *0x109373 = r2;
    uint32_t r5 = arg1[0x1a];  /* "6_240523" */
    *0x109374 = r5;
    *0x109378 = *(arg1 + 0x21e);
    char r0_4;
    
    r0_4 = r1 <= 0x64 || r2 > 0x20 ? 0 : 1;  /* "23" */
    
    *0x109376 = r0_4;
    
    if (!*0x10428e)
        sub_1b3e4(r5, 0x10931a, 0x109338, 0x32);  /* "2_V3.0" */
    
    uint32_t result = *0x10428a;
    
    if (result)
        return result;
    
    return sub_1b3e4(*0x109378, 0x10931c, 0x109352, 0x96);
}

int16_t* sub_dc3c(int32_t arg1, void* arg2, uint16_t* arg3, uint16_t* arg4, int16_t* arg5)
{
    uint16_t* var_18 = arg4;
    int32_t var_24 = arg1;
    uint32_t r1 = 0;
    uint32_t r6;
    
    while (true)
    {
        int32_t r0 = 0;
        
        while (!(1 << r0 & *(arg2 + r1)))
        {
            r0 += 1;
            
            if (r0 >= 0x20)  /* "23" */
                break;
        }
        
        if (r0 != 0x20)  /* "23" */
        {
            r6 = (r1 << 3) + r0;
            break;
        }
        
        r1 = (r1 + 1) << 0x10 >> 0x10;  /* "R02_3.00.06_240523" */
        
        if (r1)
        {
            r6 = 0;
            break;
        }
    }
    
    uint32_t r1_4 = r6;
    void* r0_2 = arg2;
    
    while (true)
    {
        r1_4 = sub_ea6a(r0_2, r1_4);
        
        if (*(arg1 + (r6 << 2)) + 1 != *(arg1 + (r1_4 << 2)))
            break;
        
        r6 = r1_4;
        r0_2 = arg2;
    }
    
    if (*(arg1 + (r6 << 2)) - *(arg1 + (r1_4 << 2)) <= 0)
    {
        *arg3 = r6;
        *arg4 = r1_4;
    }
    else
    {
        *arg3 = r1_4;
        *arg4 = r6;
    }
    
    *arg5 = *(arg1 + (*arg4 << 2));
    return arg5;
}

int32_t sub_dcba(int32_t arg1, int32_t arg2, int32_t arg3)
{
    return 0xff9004ba(arg1 + 0x6c000, arg3, arg2, 0x6c000);
}

int32_t sub_dcd0(int32_t arg1, int32_t arg2)
{
    if (arg1 << 0x14)  /* "3.00.06_240523" */
        return 1;
    
    if (arg1 > 0xfff000)
        return sub_dd20(arg1, arg2);
    
    return sub_dcf0(arg1, arg2, 0xfff000);
}

int32_t sub_dcf0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0;
    int32_t r1;
    r0 = 0xff7fec8e(arg1, arg2, arg3, arg2);
    return 0xff90029e(0x81, arg1, 0);
}

int32_t sub_dd20(int32_t arg1, int32_t arg2)
{
    int32_t r0_1;
    int32_t r2;
    
    if (arg2 == 1)
    {
        r0_1 = 0x21;  /* "3" */
        r2 = 0;
    }
    else if (arg2 == 2)
    {
        r0_1 = 0x5c;
        r2 = 0;
    }
    else if (arg2 == 3)
    {
        r0_1 = 0xdc;
        r2 = 0;
    }
    else
    {
        if (arg2 != 4)
            return 4;
        
        r0_1 = 0x60;
        r2 = 1;
    }
    
    return 0xff9002c2(r0_1, arg1, r2);
}

int32_t sub_dd54()
{
    int32_t result = 0;
    
    if (*0x107b64 != 1)
    {
        *0x107b64 = 2;
        result = 3;
        *0x107b81 = 0;
        *0x103d50 = 1;
    }
    else if (*0x107b78 != *0x107b7c)
    {
        result = 1;
        *0x107b81 = 0;
        *0x103d50 = 1;
    }
    else if (*0x107b81 == 4)
        *0x103d50 = 1;
    
    *0x107b64 = 2;
    sub_a7ac(*0x107b65, result, 0x107b64, 2);
    return result;
}

int32_t sub_dd9c()
{
    char* r1 = *0x107b68;
    uint32_t r3 = *r1;
    uint32_t r0 = *0x107b65;
    char r1_1;
    
    if (r3 == 1)
    {
        *0x107b78 = 0;
        *0x107b72 = 0;
        r3 = r1[3] << 0x10 | r1[4] << 0x18 | r1[2] << 8 | r1[1];
            /* "R02_3.00.06_240523" */  /* ".06_240523" */
        r1_1 = 0;
        *0x107b7c = r3;
    }
    else
        r1_1 = 2;
    
    return sub_a7ac(r0, r1_1, 0x107b64, r3);
}

int32_t sub_ddd8()
{
    char* r1 = *0x107b68;
    uint32_t r0 = *r1;
    int32_t entry_r2;
    int32_t entry_r3;
    
    if (r0 != 1 && r0 != 3 && r0 != 4 && r0 != 5 && r0 != 6)
        return sub_a7ac(0x31, 2, entry_r2, entry_r3);  /* "02_V3.0" */
    *0x107b64 = 0;
    *0x107b78 = 0;
    *0x107b72 = 0;
    *0x107b70 = 0;
    *0x107b7c = r1[3] << 0x10 | r1[4] << 0x18 | r1[2] << 8 | r1[1];
        /* "R02_3.00.06_240523" */  /* ".06_240523" */
    0xff7fec0a(0x107b82, 0x22);
    void* r1_3 = *0x107b68;
    uint32_t r2_3 = *(r1_3 + 9);
    
    if (r2_3 > 0x22)
        r2_3 = 0x22;
    
    int32_t r2_4;
    int32_t r3_1;
    r2_4 = 0xff7febd8(0x107b82, r1_3 + 0xa, r2_3);
    uint32_t r0_7 = **0x107b68;
    
    if (r0_7 != 3 && r0_7 != 4 && r0_7 != 5 && r0_7 != 6)
    {
        int32_t result = sub_a7ac(0x31, 2, r2_4, r3_1);  /* "02_V3.0" */
        *0x107b81 = 0;
        return result;
    }
    
    int32_t r2_5 = sub_7800("file_ctrl.file_type = %d\n", *0x107b81);
    *0x107b64 = 1;
    sub_a7ac(0x31, 0, r2_5, 0xde64);  /* "02_V3.0" */
    sub_109d8();
    return 0;
}

int32_t sub_df38(void* arg1 @ r4, int32_t arg2 @ r5)
{
    *(arg1 + 0xd);
    /* tailcall */
    return sub_df40();
}

int32_t sub_df40()
{
    void var_70;
    sub_17fc4(sub_eb1c(), &var_70);
    char var_470 = **0x107b68;
    void var_46f;
    0xff7febd8(&var_46f, &var_70, 0x64);
    return sub_a594(0x11, &var_470, 0x65);  /* "02_3.00.06_240523" */
}

int32_t sub_df84()
{
    int32_t r0_3 = sub_17be4(sub_eb1c() - **0x107b68);
    uint32_t var_130;
    int32_t r2;
    int32_t r3;
    
    if (!r0_3)
        r2 = 0xff7fec0a(&var_130, 0x124, 0x124);
    else
        r2 = 0xff7febd8(&var_130, r0_3, 0x124);
    
    if (!**0x107b68)
    {
        var_130 = sub_eb1c();
        r2 = sub_17af0(&(&var_130)[0xff7feb00(sub_eb04(), 0x3c) * 3 + 1]);
    }
    
    char* r0_15 = *0x107b68;
    
    if (!var_130)
        return sub_a7ac(0x12, *r0_15, r2, r3);  /* "2_3.00.06_240523" */
    
    char var_530 = *r0_15;
    void var_52f;
    void var_12c;
    0xff7febd8(&var_52f, &var_12c, 0x120);
    return sub_a594(0x12, &var_530, 0x121);  /* "2_3.00.06_240523" */
}

int32_t sub_e036(int32_t arg1, int32_t arg2, int32_t arg3)
{
    return 0xff9001b4(2, arg1, arg2, arg3);
}

int32_t sub_e048(int32_t arg1, int32_t arg2, int32_t arg3)
{
    uint32_t r3 = arg1 + arg2;
    
    if (r3 > 0xffffff)
        return sub_e0d8(arg1, arg2, arg3, r3);
    
    return sub_e064(arg1, arg2, arg3, r3);
}

void sub_e064(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
{
    int32_t r5 = arg2;
    int32_t r4 = arg1;
    uint32_t r1_1 = arg1 >> 8 << 8;
    int32_t r6 = arg3;
    
    if (r1_1 == r4)
        goto label_e09c;
    
    int32_t r7_3 = r1_1 - r4 + 0x100;
    
    if (r5 < r7_3)
        r7_3 = r5;
    
    if (0xff9001b4(2, arg1, r7_3, arg3, arg4))
        return;
    
    r6 += r7_3;
    r4 += r7_3;
    r5 -= r7_3;
label_e09c:
    uint32_t r5_1 = 0;
    uint32_t var_18 = r5;
    
    while (true)
    {
        if (r5_1 >= r5 << 8 >> 0x10)  /* "R02_3.00.06_240523" */
        {
            if (var_18)
                0xff9001b4(2, r4, var_18, r6, var_18);
            
            break;
        }
        
        if (0xff9001b4(2, r4, 0x100, r6, var_18))
            break;
        
        r4 += 0x100;
        r5_1 = r5_1 + 1;
        r6 += 0x100;
    }
}

void sub_e0d8(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
{
    int32_t r5 = arg2;
    int32_t r4 = arg1;
    uint32_t r1_1 = arg1 >> 8 << 8;
    int32_t r6 = arg3;
    
    if (r1_1 == r4)
        goto label_e110;
    
    int32_t r7_3 = r1_1 - r4 + 0x100;
    
    if (r5 < r7_3)
        r7_3 = r5;
    
    if (0xff90022a(0x12, arg1, r7_3, arg3, arg4))  /* "2_3.00.06_240523" */
        return;
    
    r6 += r7_3;
    r4 += r7_3;
    r5 -= r7_3;
label_e110:
    uint32_t r5_1 = 0;
    uint32_t var_18 = r5;
    
    while (true)
    {
        if (r5_1 >= r5 << 8 >> 0x10)  /* "R02_3.00.06_240523" */
        {
            if (var_18)
                0xff90022a(0x12, r4, var_18, r6, var_18);  /* "2_3.00.06_240523" */
            
            break;
        }
        
        if (0xff90022a(0x12, r4, 0x100, r6, var_18))  /* "2_3.00.06_240523" */
            break;
        
        r4 += 0x100;
        r5_1 = r5_1 + 1;
        r6 += 0x100;
    }
}

int32_t sub_e14c(char* arg1, char* arg2, char* arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    char* var_18 = arg3;
    var_14 = 0x9f;
    int32_t result = 0xff9002e6(&var_14, 1, &var_18, 3, var_18, var_14);
    
    if (!result)
    {
        *arg1 = var_18;
        *arg2 = *var_18[1];
        *arg3 = *var_18[2];
    }
    
    return result;
}

int32_t sub_e180(char* arg1, uint8_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18 = arg3;
    var_14 = 0x90;
    int32_t result = 0xff9002e6(&var_14, 4, &var_18, 2, var_18, var_14);
    
    if (!result)
    {
        *arg1 = var_18;
        *arg2 = var_18 >> 8;
    }
    
    return result;
}

int32_t sub_e1b0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14_1 = arg4;
    int32_t var_18 = arg3;
    var_18 = 0x48;
    *var_18[2] = arg1 << 4 | arg2 << 0x17 >> 0x1f;  /* "0.06_240523" */  /* "523" */
    *var_18[3] = arg2;
    return 0xff9002e6(&var_18, 5, arg4, arg3, var_18, 0);
}

int32_t sub_e1d8(int32_t arg1, int32_t arg2)
{
    /* tailcall */
    return sub_e1e0();
}

uint32_t sub_e1e0()
{
    uint32_t r0 = *0x1092e4;
    uint32_t r0_1;
    
    if (r0 > 5)
    {
        if (!*0x1092e5)
        {
            if (*0x1092e6 == 0x21 && *0x1092e7 << 0x1a)  /* "6_240523" */  /* "3" */
            {
                int32_t r0_6 = *0x1092ec;
                
                if (r0_6 >= 0x3e80 && r0_6 <= 0x5dc0)
                {
                    int32_t r0_7 = *0x1092ea;
                    
                    if (r0_7 >= 0x64 && r0_7 <= 0x12c)
                    {
                        *0x1092e5 = 1;
                        return r0_7;
                    }
                }
            }
            
            *0x1092e5 = 2;
            return 2;
        }
        
        r0_1 = *0x1092f0;
        
        if (!r0_1)
        {
            r0_1 = *0x1092f2;
            
            if (r0_1 >= 0x190)
            {
                r0_1 = *0x1092f1;
                
                if (r0_1 >= 0xc8)
                    *0x1092f0 = 1;
            }
        }
    }
    else
    {
        r0_1 = r0 + 1;
        *0x1092e4 = r0_1;
    }
    
    return r0_1;
}

void sub_e250(char arg1) __noreturn
{
    int32_t r3;
    int32_t var_10 = r3;
    var_10 = arg1;
    breakpoint();
}

void sub_e264(int32_t* arg1)
{
    if (!arg1)
        return;
    
    int32_t* i_1 = &data_0;
    arg1 -= 4;
    int32_t* i;
    
    for (i = *0x1041d4; i; i = i[1])
    {
        if (i > arg1)
            break;
        
        i_1 = i;
    }
    
    if (!i_1)
        *0x1041d4 = arg1;
    else
    {
        int32_t r3_1 = *i_1;
        
        if (arg1 - i_1 != r3_1)
            i_1[1] = arg1;
        else
        {
            *i_1 = r3_1 + *arg1;
            arg1 = i_1;
        }
    }
    
    if (i)
    {
        int32_t r2_1 = *arg1;
        
        if (i - arg1 == r2_1)
        {
            *arg1 = r2_1 + *i;
            i = i[1];
        }
    }
    
    arg1[1] = i;
}

int32_t sub_e2b8()
{
    *0x108fb3 = 1;
    return 1;
}

uint32_t sub_e2c4()
{
    uint32_t result = *0x108fb0;
    
    if (result != 0x11)  /* "02_3.00.06_240523" */
    {
        if (result != 0x23)
            return result;
        
        sub_ef38();
        return sub_18830();
    }
    
    sub_f190(0x20, 0x37);  /* "23" */  /* "0" */
    sub_f190(0x21, 4);  /* "3" */
    sub_f190(0x3a, 5);
    sub_f190(0x3b, 0x7f);
    sub_f190(0x3c, 2);
    sub_f190(0x38, 0x15);  /* ".00.06_240523" */
    sub_f190(0x22, 0);
    return sub_f190(0x22, 0x80);
}

int32_t sub_e324(int32_t arg1, char* arg2)
{
    if (*arg2 == 9 && arg2[1] == 0xba)
        sub_ad20(0x818b09, 0, 0x32, 1);  /* "2_V3.0" */
    
    return 0;
}

int32_t sub_e348(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0 = arg4 >> 8;
    *0x105f80 = r0;
    
    if (r0 == 0xff)
        *0x105f74 = 0;
    else
    {
        *0x105f7e = *arg2;
        *0x105f74 = 1;
        int32_t r0_1 = 0xff80c348(0xe02, (r0 << 8) + 9, 4, 0x2c);
        *(&data_28 + r0_1) = 0;
        0xff80c3b8(r0_1, 0x28);
        sub_ad20(0x80d255, 0, 0x1388, 1);
        sub_a674();
    }
    
    return 0;
}

int32_t sub_e3a4()
{
    *0x105f74 = 0;
    
    if (*0x1041e0 != 1)
        sub_9688();
    
    sub_a364();
    return 0;
}

int32_t sub_e3c8(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r1 = *arg2;
    
    if (!r1)
    {
        char* r0 = 0xff80c348(0xe0b, arg4, arg3, 0x1c);  /* "240523" */
        *r0 = *arg2;
        *(r0 + 2) = 0;
        0xff80c3b8(r0);
    }
    else
    {
        char* r0_3;
        
        if (r1 == 1)
        {
            r0_3 = 0xff80c348(0xe0b, arg4, arg3, 0xa);
            *r0_3 = *arg2;
            *(r0_3 + 2) = 0;
            0xff80c3b8(r0_3);
        }
        else if (r1 == 2)
        {
            r0_3 = 0xff80c348(0xe0b, arg4, arg3, 0xa);
            *r0_3 = *arg2;
            *(r0_3 + 2) = 8;
            *(r0_3 + 4) = 0xa;
            *(r0_3 + 6) = 0;
            *(r0_3 + 8) = 0xc8;
            0xff80c3b8(r0_3);
        }
    }
    
    return 0;
}

int32_t sub_e434(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    char* r0_1 = 0xff80c348(0xe0d, arg4, arg3, 2);
    r0_1[1] = 0x48;
    *r0_1 = *arg2;
    0xff80c3b8();
    return 0;
}

int32_t sub_e458(int32_t arg1, char* arg2)
{
    uint32_t r2 = *arg2;
    
    if (r2 != 0xf)
    {
        if (r2 > 0xf)
        {
            if (r2 != 0x10)  /* "R02_3.00.06_240523" */
            {
                char* r0_3;
                
                if (r2 == 0x1a)  /* "6_240523" */
                {
                    if (*0x105fa7 == 1)
                    {
                        *0x105fa7 = 2;
                        r0_3 = 0xff80c348(0xd19, 8, 4, 1);
                        *r0_3 = 0x1a;  /* "6_240523" */
                    }
                    else
                    {
                        char* r0_4 = 0xff80c348(0xd23, 8, 4, 0x11);  /* "02_3.00.06_240523" */
                        *0x105fa7 = 0;
                        *r0_4 = 0x28;
                        0xff7febd8(&r0_4[1], 0x105f96, 0x10);  /* "R02_3.00.06_240523" */
                        r0_3 = r0_4;
                    }
                    
                    0xff80c3b8(r0_3);
                }
                else if (r2 == 0x1b)  /* "_240523" */
                {
                    r0_3 = 0xff80c348(0xd19, 8, 4, 1);
                    *r0_3 = 0x1a;  /* "6_240523" */
                    *0x105fa7 = 1;
                    0xff80c3b8(r0_3);
                }
                else if (r2 == 0x28)
                {
                    *0x105fa7 = 0;
                    
                    if (!sub_8a64())
                    {
                        0xff80c4d0(4, 2);
                        sub_9704();
                    }
                }
            }
        }
        else if (r2 == 1)
        {
            if (!arg2[1])
            {
                char* r0_1 = 0xff80c348(0xd04, 8, 4, 0x30);  /* "R02_V3.0" */
                sub_97dc(r0_1);
                0xff80c3b8(r0_1);
                0xff80c3e0(0xfb01, 0x44, 0x44);
            }
        }
        else if (r2 == 3)
        {
            0xff80c4d0(4, 1);
            sub_8a64();
        }
    }
    
    return 0;
}

int32_t sub_e540()
{
    char* r0 = 0xff80c348(0xd02, 8, 4, 1);
    *r0 = 1;
    0xff80c3b8(r0, 1);
    return 0;
}

int32_t sub_e560()
{
    uint32_t r2 = *0x105fa7;
    
    if (r2 == 1)
        0xff7febd8(0x105f96);
    else if (r2 == 2)
        0xff7febd8(0x105f9e);
    
    return 0;
}

uint32_t sub_e5c4(int32_t arg1)
{
    int32_t r5 = 0;
    uint32_t r0_1 = *0x104f66;
    
    for (uint32_t i = 0; i < 4; i = i + 1)
    {
        r5 += 0xffa - *(r0_1 * 6 + 0x104f74);
        
        if (r5 > arg1)
        {
            void var_20;
            var_20 = i + 1;
            break;
        }
        
        r0_1 = sub_ea5c(r0_1);
    }
    
    uint32_t r0_5;
    
    while (true)
    {
        uint32_t result = *0x104f66;
        
        if (*0x104f60 > *(6 * result + 0x104f74) + arg1 + 0xffa || result == *0x104f68)
            return result;
        
        r0_5 = *(6 * result + 0x104f70);
        
        if (r0_5 != 0xffff)
            break;
        
        sub_c8c0();
        sub_c0e0(result);
        *0x104f60 += 0xffa;
        *0x104f66 = sub_ea5c(*0x104f66);
    }
    
    sub_134b0(sub_13624(r0_5));
    /* no return */
}

int32_t sub_e66c() __pure
{
    return 0;
}

int32_t sub_e670(int32_t arg1, int16_t* arg2)
{
    *0x10bfc4 = *arg2 - 3;
    return 0;
}

int32_t sub_e680(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t r0_1 = 0xff80c474(arg3);
    
    if (!r0_1)
    {
        int16_t* r0_2 = sub_15494(0x14);  /* "3.00.06_240523" */
        uint32_t r0_3 = sub_cd94(r0_2, *arg2);
        
        if (r0_3 >= 9)
        {
            int16_t* r0_8 = 0xff80c348(0xc14, arg4, arg3, 6, 0, arg1, arg2, arg3, arg4);
            *r0_8 = *arg2;
            r0_8[2] = 0x80;
            0xff80c3b8(r0_8);
        }
        else
        {
            void** r4_1 = *(r0_2 + 4);
            
            while (true)
            {
                if (!r4_1)
                    goto label_e6f2;
                
                if (r4_1[1] == r0_3)
                    break;
                
                r4_1 = *r4_1;
            }
            
            if (!r4_1)
            {
            label_e6f2:
                r0_2[8] = r0_3;
                uint32_t r1_4 = arg4 >> 8;
                *(r0_2 + 0x11) = r1_4;  /* "02_3.00.06_240523" */
                *0xff80c348(0x1402, sub_15484(r0_2, r1_4), arg3, 1, 0, arg1, arg2, arg3, arg4) =
                    r0_3;
                0xff80c3b8();
                0xff80c4d0(arg3, 1);
            }
            else
            {
                int16_t* r0_4 =
                    0xff80c348(0xc14, arg4, arg3, *(r4_1 + 5) + 6, 0, arg1, arg2, arg3, arg4);
                *r0_4 = *arg2;
                r0_4[2] = 0;
                r0_4[1] = *(r4_1 + 5);
                0xff7febd8(r0_4 + 5, r4_1 + 6, *(r4_1 + 5));
                0xff80c3b8(r0_4);
            }
        }
    }
    else if (r0_1 == 1)
        return 2;
    
    return 0;
}

int32_t sub_e744(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    char* var_20 = arg2;
    int32_t var_24 = arg1;
    void* r0 = sub_15494(0xf2);
    uint32_t r0_3 = *arg2 - *(r0 + 0x10);  /* "R02_3.00.06_240523" */
    
    if (r0_3 == 3)
        goto label_e796;
    
    if (r0_3 == 5)
    {
        int16_t* r0_4 = 0xff80c348(0xc14, arg4, arg3, 0x1b);  /* "_240523" */
        *r0_4 = *arg2;
        r0_4[1] = 0x15;  /* ".00.06_240523" */
        r0_4[2] = 0;
        0xff7febd8(r0_4 + 5, r0 + 0x19, 0x15);  /* ".00.06_240523" */  /* "06_240523" */
        0xff80c3b8(r0_4);
    label_e796:
        int16_t* r0_8 = 0xff80c348(0xc14, arg4, arg3, 0x1b);  /* "_240523" */
        *r0_8 = *arg2;
        r0_8[2] = 0;
        0xff80c3b8();
    }
    
    return 0;
}

int32_t sub_e8a0()
{
    return sub_f7cc(0x104f54, 4);
}

uint32_t sub_e8b0()
{
    sub_15cc8();
    sub_15ca0(1);
    return 0xff9005b4();
}

uint32_t sub_e8c4()
{
    return *0x105a98;
}

uint32_t sub_e8d0(int32_t arg1)
{
    char r4 = 0x28;
    
    if (arg1 < 0x46)
        r4 = 0x1e;  /* "0523" */
    else if (arg1 >= 0x5a && arg1 < 0x78)
        r4 = 0x32;  /* "2_V3.0" */
    
    return 0xff7feb2c(0xff7febb4(), 0xa) + r4;
}

uint32_t sub_e8f8()
{
    uint32_t result = *0x109370;
    
    if (!result)
    {
        int32_t r4_1 = 0x62;
        uint32_t r0 = sub_f51c();
        
        if (r0 >= 0x46)
        {
            if (r0 < 0x5a)
                r4_1 = 0x61;
            else if (r0 < 0x78)
                r4_1 = 0x60;
            else if (r0 >= 0x96)
                r4_1 = 0x5e;
            else
                r4_1 = 0x5f;
        }
        
        int32_t r0_1 = 0xff7febb4();
        result = r0_1 - (((r0_1 >> 0x1f) + r0_1) >> 1 << 1) + r4_1;  /* "523" */
        *0x10936f = result;
        *0x109370 = result;
    }
    
    return result;
}

uint32_t sub_e940()
{
    return *0x109b16;
}

uint32_t sub_e94c()
{
    return *0x109b10;
}

uint32_t sub_e958(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    uint32_t i = 0;
    var_10 = 0xff;
    uint32_t result;
    
    do
    {
        int32_t r0;
        int32_t r2;
        int32_t r3;
        r0 = sub_d5e4(8, &var_10);
        
        if (!r0)
        {
            result = (var_10 & 0x18) >> 3;  /* ".06_240523" */
            var_10 = result;
            
            if (result)
            {
                if (result == 1 || result == 2)
                {
                    if (sub_ec90() == 0x64 && !*0x109b13)
                        sub_16cd4(0x63);
                    
                    return sub_1a404(1, 1, r2, r3);
                }
                
                if (result == 3)
                {
                    sub_16cd4(0x64);
                    sub_1a404(0, 1, r2, r3);
                    *0x109b13 = 1;
                    return 1;
                }
            }
            
            break;
        }
        
        result = 0xff900b4c(0x13880);
        i = i + 1;
    } while (i < 5);
    
    return result;
}

int16_t* const sub_e9dc(void* arg1, int32_t arg2)
{
    int16_t* const result;
    
    for (uint32_t i = *(arg1 + 4); i != 0xffff; i = result[5])
    {
        result = sub_13624(i);
        
        if (result[2] && result[6] == arg2)
            return result;
    }
    
    return &data_0;
}

int32_t sub_ea04(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t result = arg4;
    result = 0;
    sub_15b30(arg1, &result, 4);
    return result;
}

uint32_t sub_ea18()
{
    return *0x105fb1;
}

uint32_t sub_ea24(int32_t arg1)
{
    for (int32_t i = 0; i < 0x80; i += 1)
    {
        if (*((i << 5) + 0x100b2c) == arg1)
            return *((i << 5) + 0x100b34);
    }
    
    return 0;
}

uint32_t sub_ea50()
{
    return *0x109abb;
}

uint32_t sub_ea5c(int32_t arg1) __pure
{
    int16_t r0;
    
    r0 = arg1 == 3 ? 0 : arg1 + 1;
    
    return r0;
}

uint32_t sub_ea6a(int32_t arg1, uint32_t arg2)
{
    uint32_t r0_1;
    
    do
    {
        r0_1 = sub_ea5c(arg2);
        arg2 = r0_1;
    } while (!(*(arg1 + (r0_1 >> 3)) & 1 << arg2 << 0x1d >> 0x1d));  /* "40523" */
    return arg2;
}

int32_t sub_ea8c(int32_t arg1)
{
    uint32_t r0_1;
    int32_t r1;
    r0_1 = sub_58a8(sub_5378(arg1, 0x41200000));
    int32_t r0_2;
    int32_t r1_1;
    r0_2 = sub_fdfc(r0_1, r1);
    int32_t r0_3;
    int32_t r1_2;
    r0_3 = sub_5644(r0_2, r1_1, 0, 0x40aa6800);
    int32_t r0_4;
    int32_t r1_3;
    r0_4 = sub_540c(r0_3, r1_2, 0xe0000000, 0x3f6b79e1);
    int32_t r0_5;
    int32_t r1_4;
    r0_5 = sub_5644(0, 0x3ff00000, r0_4, r1_3);
    int32_t r0_6;
    int32_t r1_5;
    r0_6 = sub_5556(r0_5, r1_4, 0x60000000, 0x40711266);
    return sub_57c8(sub_52fe(sub_58f8(r0_6, r1_5), 0x41200000));
}

int32_t sub_eaec()
{
    return 0xff7feb00(0xff7feb00(sub_16da0(), 0x3c), 0x5a0);
}

int32_t sub_eb04()
{
    return 0xff7feb00(0xff7feb00(sub_7680(), 0x3c), 0x5a0);
}

uint32_t sub_eb1c()
{
    return 0xff7feb00(sub_7680(), &data_15180);
}

int32_t sub_eb30(int32_t arg1, int32_t arg2)
{
    if (arg2 == 1)
    {
        uint32_t r0 = *(0x105ab8 + arg1);
        
        if (r0 == 3)
            return 1;
        
        if (r0 == 4)
            return 2;
        
        if (r0 == 5)
            return 3;
        
        if (r0 == 6)
            return 4;
    }
    else if (arg2 == 2)
    {
        uint32_t r0_1 = *(0x105ab8 + arg1);
        
        if (r0_1 == 9)
            return 1;
        
        if (r0_1 == 0xa)
            return 2;
        
        if (r0_1 == 0xb)
            return 3;
        
        if (r0_1 == 0xc)
            return 4;
    }
    
    return 0;
}

int16_t* const sub_eb7c(void* arg1, int32_t arg2, int32_t* arg3)
{
    uint32_t i = *(arg1 + 4);
    
    if (arg3)
        *arg3 = 0;
    
    int16_t* const result;
    
    for (; i != 0xffff; i = result[5])
    {
        result = sub_13624(i);
        
        if (!result[2] && result[6] == arg2)
            return result;
        
        if (arg3)
            *arg3 = result;
    }
    
    return &data_0;
}

int32_t sub_ebb4(int32_t arg1)
{
    int32_t r6 = arg1;
    
    if (arg1 > 6)
        r6 = 6;
    
    uint32_t r0_2 = sub_eb1c() - r6;
    int16_t var_18 = r0_2;
    
    if (r0_2 < 7)
        var_18 = 7;
    
    int32_t r4 = 1;
    int32_t i = 0;
    char var_1c = 0;
    char var_480[0x74];
    
    for (; i <= r6; i += 1)
    {
        char var_80[0xe];
        sub_17fc4(var_18 + i, &var_80);
        char var_6d;
        uint32_t r2_1 = var_6d;
        
        if (r2_1)
        {
            var_480[r4] = r6 - i;
            var_480[r4 + 1] = (r2_1 << 1) + 4;
            int16_t var_72;
            uint32_t r0_9 = var_72;
            var_480[r4 + 2] = r0_9;
            var_480[r4 + 3] = r0_9 >> 8;
            int16_t var_70;
            uint32_t r0_11 = var_70;
            var_480[r4 + 4] = r0_11;
            int32_t r4_5 = r4 + 5;
            var_480[r4_5] = r0_11 >> 8;
            int32_t r0_13 = 0;
            
            while (true)
            {
                r4 = r4_5 + 1;
                
                if (r2_1 <= r0_13)
                    break;
                
                void* r1_2 = &var_80[r0_13];
                var_480[r4] = *(r1_2 + 0x14);  /* "3.00.06_240523" */
                r4_5 = r4 + 1;
                var_480[r4_5] = *(&data_3c + r1_2);
                r0_13 += 1;
            }
            
            var_1c += 1;
        }
    }
    
    var_480[0] = var_1c;
    return sub_a594(0x27, &var_480, r4);
}

void* sub_ec6c(int32_t* arg1)
{
    int32_t r2 = *0x1099ec;
    *arg1 = *0x1099e8;
    arg1[1] = r2;
    return &arg1[2];
}

int32_t sub_ec7c()
{
    if (*0x104225 == 0xac)
        return 0;
    
    return 1;
}

uint32_t sub_ec90()
{
    uint32_t result = *0x103d62;
    
    if (result <= 0x64)
        return result;
    
    return 0x64;
}

int32_t sub_eca0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0;
    sub_b2dc(0x20136000, &var_8);
    return 0xff7feb00(var_8, 0x3e8);
}

int32_t sub_ecc0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    sub_b42c(0x20148000);
    sub_c4ac();
    sub_b4a4(0x20148000, 0x11, 0);  /* "02_3.00.06_240523" */
    sub_b508(0x20148000, 0x11, 0);  /* "02_3.00.06_240523" */
    sub_b4a4(0x20148000, 0x11, 0xc);  /* "02_3.00.06_240523" */
    sub_b3f4(0x20148000, 0x11);  /* "02_3.00.06_240523" */
    sub_b4a4(0x20148000, 0x17, 0);  /* "0.06_240523" */
    sub_b508(0x20148000, 0x17, 1);  /* "0.06_240523" */
    sub_b4a4(0x20148000, 0x17, 0xb);  /* "0.06_240523" */
    sub_b3f4(0x20148000, 0x17);  /* "0.06_240523" */
    sub_b4a4(0x20148000, 2, 0);
    sub_b508(0x20148000, 2, 1);
    sub_b4a4(0x20148000, 0xf, 0);
    sub_b508(0x20148000, 0xf, 1);
    var_18 = 0;
    sub_b464(0x20148000, &var_18);
    int32_t r1_1 = var_18;
    
    if (r1_1 >> 2 << 0x1f && !(r1_1 >> 0xf << 0x1f))  /* "523" */
    {
        sub_b4a4(0x20148000, 2, 1);
        
        for (int32_t i = 0; i < 9; i += 1)
        {
            sub_b558(0x20148000, 2, 0);
            0xff900b4c(0x1f40);
            sub_b558(0x20148000, 2, 1);
            0xff900b4c(0x1f40);
        }
    }
    
    sub_b674(0x20145000);
    sub_b890(0x20145000, 2);
    sub_b8fc(0x20145000, 0xf);
    sub_b804(0x20145000, 0);
    sub_b95c(0x20145000, 1);
    return sub_b848(0x20145000, 0);
}

int32_t sub_edcc(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_20 = arg1;
    
    if (sub_d76a(arg2) != 0xff)
    {
        int32_t r0_2 = 1 << arg2;
        int32_t var_28_1 = r0_2;
        0xff9009c2(r0_2, 7);
        int32_t r0_5;
        int32_t r1_1;
        int32_t r2;
        r0_5 = 0xff7fec8e(arg3 - 8);
    }
    
    return 1;
}

int32_t sub_ee0a(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ r4, char arg5 @ r6, int32_t arg6 @ r7, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    *0x20201054 |= arg7;
    *0x20201058 |= arg7;
    int32_t r0_2 = arg6 << arg4;
    *(arg3 + 0x24) &= ~r0_2;
    *(arg3 + 0x24) |= arg6 << (arg4 + 0x14);  /* "3.00.06_240523" */
    *(arg3 + 0x24) = 1 << ((arg4 << 1) + 8) | (*(arg3 + 0x24) & ~(3 << ((arg4 << 1) + 8)));
    *(arg3 + 0x2c) |= r0_2;
    *(arg3 + 0x24) |= r0_2;
    *(0x105ab8 + arg8) = arg5;
    return 0;
}

int32_t sub_ee94(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0 = 1 << arg2;
    
    if (arg2 >= 2)
    {
        *0x20201054 |= r0;
        *0x20201058 |= r0;
    }
    
    int32_t r0_1;
    int32_t r1;
    int32_t r2;
    r0_1 = 0xff7fec8e(r0, arg2, arg3, arg3 - 2);
    data_53 = 0;
    /* tailcall */
    return sub_eece(r0_1, r1, r2, 0, "_240523", 0x20148040);
}

int32_t sub_eec8(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ r4)
{
    *(arg4 + 0x38) &= ~arg1;
    int32_t r5;
    /* tailcall */
    return sub_eece(arg1, arg2, arg3, *(arg4 + 0x3c) | arg1, arg4, r5);
}

int32_t sub_eece(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5 @ r4, void* arg6 @ r5)
{
    *(arg5 + 0x3c) = arg4;
    *(arg6 + 0x28) &= ~arg1;
    /* tailcall */
    return sub_ef0a(arg1, arg2, arg3, arg5);
}

int32_t sub_eed8(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ r4)
{
    *(arg4 + 0x38) |= arg1;
    int32_t r5;
    /* tailcall */
    return sub_eece(arg1, arg2, arg3, *(arg4 + 0x3c) | arg1, arg4, r5);
}

int32_t sub_eee4(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ r4)
{
    *(arg4 + 0x38) |= arg1;
    int32_t r5;
    /* tailcall */
    return sub_eece(arg1, arg2, arg3, *(arg4 + 0x3c) & ~arg1, arg4, r5);
}

int32_t sub_ef02(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    return 6;
}

int32_t sub_ef06(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5 @ r4, int32_t arg6, int32_t arg7, int32_t arg8)
{
    if (arg3 != 2)
        /* tailcall */
        return sub_ef0a(arg1, arg2, arg3, arg5, arg4, arg6, arg7);
    
    *(arg5 + 0x30) &= ~arg1;  /* "R02_V3.0" */
    *(arg5 + 0x34) |= arg1;  /* "V3.0" */
    *(0x105ab8 + arg2) = arg3;
    return 0;
}

int32_t sub_ef0a(int32_t arg1, int32_t arg2, char arg3, void* arg4 @ r4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    *(arg4 + 0x30) |= arg1;  /* "R02_V3.0" */
    *(arg4 + 0x34) &= ~arg1;  /* "V3.0" */
    *(0x105ab8 + arg2) = arg3;
    return 0;
}

uint32_t sub_ef38()
{
    uint32_t result = *0x108fb0;
    
    if (result != 0x23)
        return result;
    
    int32_t entry_r1;
    int32_t entry_r2;
    int32_t entry_r3;
    return sub_187c8(result, entry_r1, entry_r2, entry_r3);
}

int32_t sub_ef4c()
{
    return sub_14a8c();
}

uint32_t sub_ef54()
{
    uint32_t result = *0x108fb0;
    int32_t var_1d0;
    int32_t var_1cc;
    void var_10c;
    char r0_8;
    
    if (result == 0x11)  /* "02_3.00.06_240523" */
    {
        char var_1c8[0xbc];
        var_1c8[0] = 0;
        var_1d0 = 0;
        var_1cc = 0;
        sub_f0f4(0x2f, &var_1c8, 1);
        result = var_1c8[0] << 0x1b >> 0x1b;  /* "_240523" */
        var_1c8[0] = result;
        
        if (result)
        {
            for (int32_t i = 0; i < var_1c8[0]; i += 1)
            {
                var_1d0 = 0;
                var_1cc = 0;
                sub_f0f4(0xa7, &var_1d0, 7);
                0xff7febd8(i * 6 + &var_10c + 1, &*var_1d0[1], 6);
            }
            
            r0_8 = var_1c8[0];
            goto label_f04e;
        }
    }
    else if (result == 0x13)  /* "_3.00.06_240523" */
    {
        var_1d0 = 0;
        0xff7fec0a(&var_1cc, 0xc0, &var_1d0);
        sub_10d30(8, &var_1d0, 1);
        uint32_t r0_13 = var_1d0 << 0x1a >> 0x1a;  /* "6_240523" */
        var_1d0 = r0_13;
        
        if (r0_13 > 0x20)  /* "23" */
            var_1d0 = 0x20;  /* "23" */
        
        sub_10d30(2, &var_1cc, 6 * var_1d0);
        result = var_1d0;
        
        if (result)
        {
            for (int32_t i_1 = 0; i_1 < var_1d0; i_1 += 1)
            {
                int32_t r0_17 = 6 * i_1;
                0xff7febd8(r0_17 + &var_10c + 1, r0_17 + &var_1cc, 6);
            }
            
        label_f0e4:
            r0_8 = var_1d0;
        label_f04e:
            uint32_t r4_1 = 6 * r0_8;
            uint32_t r0_22 = *0x108fce;
            int32_t r0_25;
            void* r1_10;
            uint32_t r2_5;
            void var_10b;
            
            if (r0_22 + r4_1 < 0x1ec)
            {
                r0_25 = r0_22 + 0x108fd2;
                r2_5 = r4_1;
                r1_10 = &var_10b;
            }
            else
            {
                0xff7febd8(r0_22 + 0x108fd2, &var_10b, 0x1ec - r0_22);
                uint32_t r0_24 = *0x108fce;
                r4_1 -= 0x1ec;
                r2_5 = r0_24 + r4_1;
                r0_25 = 0x108fd2;
                r1_10 = &var_10c - r0_24 + 0x1ed;
            }
            0xff7febd8(r0_25, r1_10, r2_5);
            result = *0x108fce + r4_1;
            *0x108fce = result;
        }
    }
    else if (result == 0x23)
    {
        if (*0x108fcc << 0x1e >= 0)  /* "0523" */
            return sub_188d0(0x3d, 0x20);  /* "23" */
        
        var_1d0 = 0x20;  /* "23" */
        sub_18898(0xc, &var_1d0, 1);
        uint32_t r0_28 = var_1d0 << 0x19 >> 0x19;  /* "06_240523" */
        var_1d0 = r0_28;
        
        if (r0_28 > 0x20)  /* "23" */
            var_1d0 = 0x20;  /* "23" */
        
        sub_18898(0x3f, &var_1cc, 6 * var_1d0);
        result = var_1d0;
        
        if (result)
        {
            for (int32_t i_2 = 0; i_2 < var_1d0; i_2 += 1)
            {
                int32_t r0_30 = 6 * i_2;
                *(&var_1cc + r0_30) u>>= 4;
                void* r1_15 = r0_30 + &var_1cc;
                *(r1_15 + 2) u>>= 4;
                *(r1_15 + 4) u>>= 4;
                0xff7febd8(r0_30 + &var_10c + 1, r1_15, 6);
            }
            
            goto label_f0e4;
        }
    }
    return result;
}

uint32_t sub_f0f4(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_10_1 = arg3;
    
    if (!arg3)
        return 0xa;
    
    return sub_b700(0x20145000, 0x33, arg1, arg2, arg3, 0xc8);  /* "_V3.0" */
}

uint32_t sub_f118()
{
    uint32_t result = *0x108fb0;
    
    if (result != 0x11)  /* "02_3.00.06_240523" */
    {
        if (result != 0x23)
            return result;
        
        sub_188ec();
        return sub_ef38();
    }
    
    sub_f190(0x2e, 0);
    sub_f190(0x2e, 0x80);
    sub_f190(0x2f, 0x40);
    sub_f190(0x22, 0);
    sub_f190(0x22, 2);
    sub_f190(0x38, 0);
    sub_f190(0x20, 0x37);  /* "23" */  /* "0" */
    sub_f190(0x23, 0x90);
    sub_f190(0x24, 0x40);
    sub_f190(0x2e, 0);
    return sub_f190(0x2e, 0x80);
}

uint32_t sub_f190(uint32_t arg1, int32_t arg2)
{
    int32_t var_8 = arg2;
    uint32_t var_c = arg1;
    return sub_bad4(0x20145000, 0x32, arg1, &var_8, 1);  /* "2_V3.0" */
}

uint32_t sub_f1ac(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r0 = sub_c3a4(arg1, arg2 - 1, arg3);
    sub_13aec(&var_18);
    sub_13b14(var_18, arg1 - 2, r0 << 0x10 | *(arg1 - 2));  /* "R02_3.00.06_240523" */
    *0x20133080 |= 1 << var_18;
    sub_13aec(&*var_18[1]);
    sub_13b14(*var_18[1], arg1 + 2, r0 >> 0x10 | *(arg1 + 2) >> 0x10 << 0x10);
        /* "R02_3.00.06_240523" */
    uint32_t result = *var_18[1];
    *0x20133080 |= 1 << result;
    return result;
}

int32_t sub_f214()
{
    int32_t r0 = sub_8880();
    *0x103cfa = r0;
    int32_t result = sub_1770c(r0);
    *0x103cf8 = result;
    
    if (result == *0x103cf9)
        return result;
    
    *0x103cf9 = result;
    return sub_16320();
}

int32_t sub_f238(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14 = arg3;
    int32_t* var_18 = arg2;
    
    if (arg2 - 0x28 <= 0xb4)
    {
        int16_t r0;
        int32_t r1_1;
        r0 = 0xff7feb00(arg1, &data_15180);
        int32_t r3 = 0xff7feb00(r1_1, 0x12c) + 4;
        var_10 = arg2;
        var_14 = 1;
        sub_192dc(0x81f3fc, 0x109390, r0, r3, &var_10, 1);
        sub_6ce2(1);
    }
    
    return 0;
}

int32_t sub_f284()
{
    *0x10938c = 1;
    return 1;
}

int32_t sub_f290()
{
    *0x10938c = 0;
    return 0;
}

int32_t sub_f29c()
{
    return sub_178e0();
}

uint32_t sub_f2a4()
{
    sub_eb1c();
    uint32_t r0 = sub_eb1c();
    int32_t r0_2;
    int32_t r3;
    r0_2 = 0xff7feb00(sub_eb04(), 0x3c);
    uint32_t result = sub_1927e(0x81f408, *0x109394, r0, r3);
    
    if (result)
    {
        result += r0_2 << 1;
        uint32_t r1_2 = *(result + 4);
        
        if (r1_2 && r1_2 <= 0x64)
        {
            *0x109398 = r0;
            *0x10939a = r0_2;
            *0x10939c = *(result + 4);
            result = *(result + 5);
            *0x10939d = result;
        }
    }
    
    return result;
}

int32_t sub_f2f4(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t* var_18 = arg3;
    int32_t var_20 = arg1;
    int32_t r6 = arg1;
    
    if (!r6)
        r6 = arg1 - 1;
    
    int32_t i = 0;
    int32_t r0_1 = arg2 - 1;
    int32_t var_28 = r0_1;
    
    for (; i < r0_1; i += 1)
    {
        int32_t r0_2 = r6 - i;
        arg3[i * 2] = r0_2;
        int32_t r0_4;
        char r1;
        r0_4 = 0xff7feb2c(0xff7febb4(r0_2), 0x14);  /* "3.00.06_240523" */
        void* r5_2 = &arg3[i * 2];
        *(r5_2 + 6) = r1 + 0x6e;
        *(r5_2 + 7) = 0xff7feb2c(0xff7febb4(r0_4, r1 + 0x6e), 0x14) + 0x46;  /* "3.00.06_240523" */
        r0_1 = var_28;
    }
    
    return arg2 - 1;
}

int32_t sub_f33e(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    for (int32_t i = 0; i < arg2 - 1; i += 1)
    {
        arg3[i * 2] = arg1 + i;
        void* r4_2 = &arg3[i * 2];
        *(r4_2 + 6) = 0x78;
        *(r4_2 + 7) = 0x46;
    }
    
    return arg2 - 1;
}

int32_t sub_f360(int32_t arg1, void* arg2)
{
    int16_t r0;
    int32_t r3;
    r0 = 0xff7feb00(arg1, &data_15180);
    void* r0_1 = sub_1927e(0x81f3fc, *0x109390, r0, r3);
    
    if (!r0_1)
    {
        0xff7fec0a(arg2, 0x124);
        return 0;
    }
    
    for (int32_t i = 0; i < 0x120; )
    {
        void* r5_1 = arg2 + i;
        char r3_2 = *(r0_1 + i + 4);
        i += 1;
        *(r5_1 + 4) = r3_2;
    }
    
    for (int32_t i_1 = 0; i_1 < 0x120; i_1 += 1)
    {
        void* r3_3 = arg2 + i_1;
        
        if (*(r3_3 + 4) - 0x28 >= 0xb5)
            *(r3_3 + 4) = 0;
    }
    
    return 1;
}

uint32_t sub_f3c4()
{
    int32_t entry_r2;
    int32_t r2;
    int32_t entry_r3;
    int32_t r3;
    r2 = sub_19240(0x81f3fc, 0x109390, entry_r2, entry_r3);
    sub_19240(0x81f408, 0x109394, r2, r3);
    sub_f7a0();
    uint32_t result = *0x10434b;
    
    if (result == 0xff || !result)
    {
        result = 0x1e;  /* "0523" */
        *0x10434b = 0x1e;  /* "0523" */
    }
    
    return result;
}

int32_t sub_f3fc()
{
    sub_191f2(0x81f3fc);
    sub_191f2(0x81f408);
    sub_ac50();
    return sub_15184();
}

int32_t sub_f41c() __pure
{
    return;
}

uint32_t sub_f420()
{
    if (!sub_18b14())
    {
        sub_f290();
        return 0;
    }
    
    sub_f284();
    uint32_t result = *0x1041e2;
    
    if (result == 1)
    {
        result = sub_17a74();
        
        if (result != 1)
        {
            result = sub_a144();
            
            if (!result)
            {
                sub_16050();
                *0x109478 = sub_7680();
                sub_f660(0x10);  /* "R02_3.00.06_240523" */
                sub_f5f4(1);
                return sub_15b94(0x109474, 0x81bf61, 0x3e8);
            }
        }
    }
    
    return result;
}

uint32_t sub_f480()
{
    sub_16050();
    sub_f710(0xffff);
    return sub_15bb4(0x109474);
}

uint32_t sub_f49c(char* arg1)
{
    uint32_t r0_1 = *0x109380 << 0x1f;  /* "523" */
    
    if (r0_1)
    {
        *0x109388 = arg1;
        return r0_1;
    }
    
    char r0_2 = 0;
    *0x109380 = 0;
    *0x109384 = 0;
    *0x109388 = 0;
    
    if (*0x1041e0 == 1)
    {
        *0x109371 = 1;
        
        if (arg1)
        {
            *arg1 = 0;
            return 0;
        }
    }
    else
    {
        sub_f660(2);
        sub_15b94(0x109318, 0x81e905, 0x9c4);
        r0_2 = *0x109380 | 1;
        *0x109380 = r0_2;
        *0x109384 = arg1;
    }
    
    return r0_2;
}

uint32_t sub_f4fc(int16_t* arg1)
{
    *arg1 = *0x109378;
    uint32_t result = *0x109376;
    
    if (result == 1)
        return result;
    
    return 0;
}

uint32_t sub_f510()
{
    return *0x109372;
}

uint32_t sub_f51c()
{
    if (*0x109372 == 2)
        return *0x10936e;
    
    return *0x109310;
}

uint32_t sub_f534()
{
    return *0x109312;
}

uint32_t sub_f540(uint16_t* arg1)
{
    *arg1 = *0x109374;
    uint32_t result = *0x109376;
    
    if (result == 1)
        return result;
    
    return 0;
}

uint32_t sub_f554()
{
    sub_eb04();
    *0x109370;
    sub_e8f8();
    return *0x109370;
}

int32_t sub_f570()
{
    *0x109312 = 0;
    return 0;
}

int32_t sub_f57c()
{
    if (!*0x109371)
        return 1;
    
    return 0;
}

uint32_t sub_f590(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    sub_b464(0x20148000, &var_10);
    
    if (*0x109314 || !(var_10 >> 0x11 << 0x1f))  /* "02_3.00.06_240523" */  /* "523" */
    {
        *0x109314 = 0;
        
        if (!*0x109316)
        {
            int32_t r0_1;
            
            if (*0x1099f0)
                r0_1 = 1;
            else if (*0x109315 == 1)
                r0_1 = 0x1a;  /* "6_240523" */
            else
                r0_1 = 0;
            
            return sub_1b734(r0_1);
        }
    }
    
    return 0x109310;
}

int32_t sub_f5e8()
{
    *0x109314 = 1;
    return 1;
}

void sub_f5f4(char arg1)
{
    *0x109315 = arg1;
}

int32_t sub_f600()
{
    0xff7fec0a(0x10936c, 0x12);  /* "2_3.00.06_240523" */
    *0x109310 = 0;
    return 0;
}

uint32_t sub_f618()
{
    uint32_t result = *0x1041e8;
    
    if (!result)
        return result;
    
    uint32_t r0_2 = (result - 1) << 0x18 >> 0x18;  /* ".06_240523" */
    *0x1041e8 = r0_2;
    
    if (!r0_2)
    {
        sub_15bb4(0x105fb6);
        return sub_f710(0x100);
    }
    
    uint32_t r1_1;
    
    if (sub_f510() == 2)
        r1_1 = sub_f51c();
    else
        r1_1 = 0;
    
    return sub_90b6(0x1e, r1_1);  /* "0523" */
}

uint32_t sub_f660(int32_t arg1)
{
    sub_159a8();
    uint32_t result;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    result = sub_a144();
    
    if (result)
        return result;
    
    if (*0x109316)
        r1 = sub_1a404(2, 0, r2, r3);
    
    return sub_f68c(arg1, r1, r2);
}

uint32_t sub_f68c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    uint32_t result = *0x10936c;
    
    if (!result)
    {
        if (!sub_1b4d4(result, arg2, arg3))
        {
            *0x109371 = 1;
            *0x109372 = 3;
            return 3;
        }
        
        if (arg1 == 0x20 || arg1 == 0x80)  /* "23" */
        {
            *0x103d56 = 0x3e8;
            *0x103d58 = 2;
        }
        else if (arg1 == 0x40)
        {
            *0x103d56 = 0xc8;
            *0x103d58 = 6;
        }
        else
            *0x103d58 = 1;
        
        sub_1b70c(0x103d56);
        *0x109372 = 1;
        result = *0x10936c | arg1;
        *0x10936c = result;
    }
    else if (result << 0x19 >= 0)  /* "06_240523" */
    {
        if (arg1 & 0xa0 && !(result & 0xa0))
        {
            *0x103d58 = 2;
            *0x103d56 = 0x3e8;
            sub_1b70c(0x103d56);
            *0x109370 = 0;
            *0x109372 = 1;
            *0x109377 = 0;
        }
        
        result = *0x10936c | arg1;
        *0x10936c = result;
    }
    
    return result;
}

uint32_t sub_f710(uint32_t arg1)
{
    uint32_t result;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    result = sub_a144();
    
    if (result)
        return result;
    
    if (*0x109316)
        r1 = sub_1a404(2, 0, r2, r3);
    
    return sub_f738(arg1, r1, r2, r3);
}

void sub_f738(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    
    if (*0x109311)
        return;
    
    *0x10936c &= ~arg1;
    int32_t r1_3 = 0xa0;
    int32_t r0 = arg1 & 0xa0;
    
    if (r0)
    {
        uint32_t r0_1 = *0x109370;
        
        if (r0_1)
            r1_3 = sub_1789c(r0_1);
    }
    
    arg1 = *0x10936c;
    
    if (!arg1)
    {
        sub_1ae68(arg1, r1_3, arg3, arg4);
        *0x109314 = 0;
        *0x109372 = 0;
    }
    else if (r0 && !(arg1 & 0xa0))
    {
        sub_1ae68(arg1, 0xa0, arg3, arg4);
        *0x109314 = 0;
        
        if (*0x109372 == 2)
            *0x109372 = 1;
        
        *0x103d58 = 1;
        sub_1b70c(0x103d56);
    }
}

uint32_t sub_f7a0()
{
    uint32_t i;
    
    for (i = 0; i < 3; i = i + 1)
    {
        if (!*((i << 2) + 0x1093a2))
        {
            *0x10939f = i;
            return i;
        }
    }
    
    return i;
}

void sub_f7c0(char arg1)
{
    *0x1091c2 = arg1;
}

void sub_f7cc(uint32_t arg1, int32_t arg2)
{
    for (uint32_t i = 0; i < arg2; i = i + 1)
    {
        uint32_t r7_1 = sub_e8b0() << 4;
        arg1[i] = sub_e8b0() << 0x1c >> 0x1c | r7_1;  /* "240523" */
    }
}

int32_t sub_f7f2(void* arg1, int32_t* arg2)
{
    sub_f898(arg1, 2);
    0xff8fff46(0x40000);
    sub_10cb0(*(arg1 + 4) + 0x3e0, *arg2, 0x20);  /* "23" */
    sub_10cb0(*(arg1 + 4) + 0x2a0, arg2[1], 0x20);  /* "23" */
    sub_10cb0(*(arg1 + 4) + 0x2c0, arg2[2], 0x20);  /* "23" */
    sub_15fb0(*(arg1 + 4) + 0x240, 0, 8);
    sub_15fb0(*(arg1 + 4) + 0x260, 0, 8);
    sub_15fb0(*(arg1 + 4) + 0x280, 0, 8);
    sub_15fb0(*(arg1 + 4) + 0x2e0, 0, 8);
    sub_15fb0(*(arg1 + 4) + 0x260, 1, 1);
    sub_15fb0(*(arg1 + 4) + 0x2e0, 1, 1);
    *(*(arg1 + 4) + 8) = 1;
    return 1;
}

int32_t sub_f898(int32_t arg1, int32_t arg2)
{
    if (!arg2)
    {
        sub_15ef0(0x104f14, 3, arg1);
        return 0x104f14;
    }
    
    if (arg2 == 1)
    {
        sub_15ef6(0x104f14, 3);
        return 0x104f14;
    }
    
    if (arg2 == 2)
        *0x104f2f = 1;
    else if (arg2 == 3)
        *0x104f2f = 0;
    
    return 0x104f2c;
}

int32_t sub_f8d4(void* arg1)
{
    if (sub_9e74(0x103b08, arg1) && *(arg1 + 4))
        return 1;
    
    return 0;
}

int32_t sub_f8f8(int32_t arg1) __pure
{
    if (arg1 - 0x3c > 0x12c)
        return 0;
    
    return 1;
}

int32_t sub_f90c()
{
    *0x1099f0 = 2;
    *0x1099f8 = sub_17aac();
    int32_t result = sub_17aa0();
    *0x109a0c = result;
    return result;
}

uint32_t sub_f928(int32_t arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    *0x103d61 = 0;
    sub_16c9c(0, 0);
    0xff7fec0a(0x1099f0, 0xbc);
    *0x1099f0 = 2;
    *0x109a32 = arg1;
    
    if (arg1 == 4 || arg1 == 7 || arg1 == 8)
        *0x109a20 = 1;
    
    *0x109a2c = sub_16430() + 3;
    *0x109a30 = 0x1951;
    *0x109a38 = 1;
    *0x1099f8 = sub_17aac();
    *0x109a0c = sub_17aa0();
    *0x109a3e = 0;
    sub_15b94(0x1099e6, 0x81b5cd, 0x3e8);
    char r0_4;
    
    if (arg1 == 8)
        r0_4 = 1;
    else if (arg1 > 8)
    {
        if (arg1 == 9)
            r0_4 = 5;
        else if (arg1 == 0x16)  /* "00.06_240523" */
            r0_4 = 6;
        else if (arg1 == 0x18)  /* ".06_240523" */
            r0_4 = 7;
        else
            r0_4 = 0xa;
    }
    else if (arg1 == 3)
        r0_4 = 2;
    else if (arg1 == 4)
        r0_4 = 4;
    else if (arg1 != 7)
        r0_4 = 0xa;
    else
        r0_4 = 3;
    
    int32_t r1_1;
    
    if (!*0x1042b4)
        r1_1 = 0x46;
    else
        r1_1 = 0x4b;
    
    sub_14378(r0_4, r1_1);
    sub_6070();
    return sub_f660(1);
}

int32_t sub_f9fc()
{
    sub_15bb4(0x1099e6);
    sub_f710(1);
    sub_18150();
    sub_16c9c(0, 0);
    sub_14378(0, 0);
    *0x1099f0 = 0;
    return 0;
}

int32_t sub_fa30()
{
    int32_t result;
    
    if (*0x1099f0 == 1)
    {
        result = *0x109a3a + 1;
        *0x109a3a = result;
    }
    else
    {
        result = *0x109a3e + 1;
        *0x109a3e = result;
        
        if (result > 0)
        {
            uint32_t r0_3 = sub_140dc();
            uint32_t r0_4 = sub_140cc();
            sub_18020(r0_4);
            sub_18010(r0_3);
            
            if (*0x109a20)
            {
                int32_t r5_1 = sub_17aac() - *0x1099f8;
                *0x1099f8 = sub_17aac();
                
                if (r5_1 < 0)
                    r5_1 = 0;
                
                *0x109a58 += r5_1;
                int32_t r5_2 = *0x1099fc + r5_1;
                *0x1099fc = r5_2;
                int32_t r0_13 = *0x109a00 + r0_4;
                *0x109a00 = r0_13;
                
                if (!0xff7feb2c(*0x109a3e, 0xa))
                {
                    if (!r5_2)
                    {
                        *0x109a10 = 0;
                        *0x109a14 = 0;
                    }
                    else
                    {
                        if (!*0x109a10 && r5_2 > 0xf)
                            *0x1099fc = r5_2 - 0xa;
                        
                        int32_t r0_19 = 0xff7feb00(0x3c * *0x1099fc, 0xa);
                        *0x1099fc = 0;
                        *0x109a10 = r0_19;
                        uint32_t r0_22 = 0xff7feb00(r0_13, 0xa);
                        *0x109a14 = r0_22;
                        
                        if (r0_22 > *0x109a44)
                            *0x109a44 = r0_22;
                        
                        *0x109a00 = 0;
                    }
                    
                    sub_17658();
                }
                
                uint32_t r0_25 = *0x109a28 + r0_4;
                *0x109a28 = r0_25;
                
                if (r0_25 >= 0x64)
                {
                    int16_t r0_26;
                    int16_t r1_4;
                    r0_26 = 0xff7feb00(r0_25, 0x64);
                    *0x109a40 += r0_26;
                    *0x109a28 = r1_4;
                }
            }
            
            sub_17aa0();
            *0x109a0c = sub_17aa0();
            *0x109a48 += r0_3;
            sub_1808c();
            
            if (*0x109a3e >= 0x4d58 || *0x109a04 >= 0x78)
                sub_f9fc();
            
            char var_28;
            sub_ec6c(&var_28);
            result = &var_28;
            uint32_t r1_6 = var_28;
            
            if (r1_6)
            {
                result = *0x103d61;
                
                if (!result)
                {
                    if (r1_6 == 1)
                        result = 0xff7feb2c(*0x109a3e, 0x3c);
                    else if (r1_6 == 2)
                    {
                        bool cond:0_1 = !sub_18dc8();
                        uint32_t r0_36 = *0x109a40;
                        
                        if (cond:0_1)
                            result = 0xff7feb00(r0_36, 0x3e8);
                        else
                        {
                            int32_t r0_37;
                            int32_t r1_7;
                            r0_37 = sub_57ac(r0_36);
                            int32_t r0_38;
                            int32_t r1_8;
                            r0_38 = sub_5574(r0_37, r1_7, 0xdad5a40c, 0x3fe3e245);
                            int32_t r0_39;
                            int32_t r1_9;
                            r0_39 = sub_5644(r0_38, r1_8, 0, 0x408f4000);
                            result = sub_5824(r0_39, r1_9);
                        }
                    }
                    else if (r1_6 == 3)
                        result = 0xff7feb00(*0x109a48, 0x3e8);
                    
                    int32_t var_24;
                    
                    if (var_24 <= result)
                    {
                        result = 1;
                        *0x103d61 = 1;
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_fbc0()
{
    sub_94d8(0x103adc);
    *0xe000e280 = 0x10;  /* "R02_3.00.06_240523" */
    *0xe000e100 = 0x10;  /* "R02_3.00.06_240523" */
    return 0x10;  /* "R02_3.00.06_240523" */
}

int32_t* sub_fbe0()
{
    sub_75b0(0xfffffffb, 1);
    sub_75b0(0, 2);
    sub_75b0(1, 0);
    sub_75b0(2, 0);
    sub_75b0(3, 0);
    sub_75b0(4, 2);
    sub_75b0(5, 2);
    sub_75b0(6, 2);
    sub_75b0(7, 2);
    sub_75b0(8, 2);
    sub_75b0(9, 2);
    sub_75b0(0xa, 2);
    sub_75b0(0xb, 2);
    sub_75b0(0xc, 2);
    sub_75b0(0xd, 2);
    sub_75b0(0xe, 2);
    sub_75b0(0xf, 2);
    sub_75b0(0x10, 2);  /* "R02_3.00.06_240523" */
    sub_75b0(0x11, 2);  /* "02_3.00.06_240523" */
    return sub_75b0(0x12, 2);  /* "2_3.00.06_240523" */
}

int32_t sub_fc84(void* arg1, int32_t arg2)
{
    do
    {
        int32_t temp0_1 = arg2;
        arg2 -= 1;
        
        if (temp0_1 < 1)
            return 1;
    } while (!*(arg1 + arg2));
    
    return 0;
}

void* sub_fc98(int32_t arg1, int32_t arg2, char arg3)
{
    int32_t var_20 = arg1;
    int32_t r0 = 0xff80c1f4(0x1a, 2);  /* "6_240523" */
    void* result = 0xff80c1f4(0x10, 0);  /* "R02_3.00.06_240523" */
    
    if (!r0 || !result)
        return result;
    
    int32_t r0_1 = arg1 << 2;
    int32_t r7_2 = *(*(0x12f840 + r0_1) + 0x14) + 0x40;  /* "3.00.06_240523" */
    0xff7febd8(r0, arg2, 0x1a);  /* "6_240523" */
    *(result + 8) = r0;
    *(result + 4) = arg1;
    *(result + 0xc) = arg3;
    uint32_t r5_1 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    0xff80243c(r7_2, result);
    
    if (!r5_1)
        /* unimplemented  {cpsie I} */
    
    return 0xff814444(*(*(0x12f840 + r0_1) + 0x14), 0x12f840);  /* "3.00.06_240523" */
}

int32_t sub_fd00(int32_t arg1, int32_t arg2, int32_t arg3)
{
    *(arg1 + (arg3 << 1)) = arg1;
    /* tailcall */
    return sub_fd04(arg1, arg2, arg3);
}

void* sub_fd04(char arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t var_10 = arg3;
    var_10 = 0xc;
    *var_10[1] = 9;
    *var_10[2] = 0x60;
    var_c = 0x40b;
    return sub_fc98(arg1, &var_10, 0xc);
}

int32_t sub_fd28(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t r0_1 = sub_c3a4(&data_12f24, 0x807214, sub_13aec(&var_10));
    sub_13b14(var_10, &data_12f24, r0_1);
    *0x20133080 |= 1 << var_10;
    return 0x20133080;
}

uint32_t sub_fd68(int32_t arg1, uint32_t arg2)
{
    uint32_t r5 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    int32_t r0 = 0xff80301c();
    
    if (!r5)
        /* unimplemented  {cpsie I} */
    
    if (!r0)
        return arg2;
    
    return arg2 + 1;
}

uint32_t sub_fd88()
{
    return sub_fd90();
}

uint32_t sub_fd90()
{
    uint32_t result = *0x12f7ba;
    
    if (result != 3)
    {
        result = *0x12f7b9;
        
        if (result == 1)
        {
            char* r0 = 0xff80c348(0x801, 0, 0x201f, 4);
            *0x12f7b9 = 0;
            *0x20100000 &= 0xfffbffff;
            int16_t r2_4;
            
            if (!*0x12f7ba)
                r2_4 = *0x20100104;
            else
                r2_4 = *0x128466;
            
            *(r0 + 2) = r2_4;
            *0x12f7ba = 3;
            *r0 = 0;
            0xff80b74c(r0, 0, 3);
            return 0xff80c3e0(1, 0, 0);
        }
    }
    
    return result;
}

int32_t sub_fdfc(int32_t arg1, int32_t arg2)
{
    int32_t r4 = 0;
    
    if (arg2 < 0x7ff00000)
    {
        uint32_t r3_2 = arg2 << 1 >> 1;
        
        if (r3_2 <= 0x7ff00000 && (arg2 << 1 != 0xffe00000 || !arg1))
        {
            if (arg2 < 0x100000)
            {
                if (!(r3_2 | arg1))
                {
                    sub_7a50(2);
                    int32_t result;
                    int32_t r1;
                    result = sub_7a04();
                    return result;
                }
                
                if (arg2 < 0)
                {
                    sub_7a50(1);
                    return sub_7a22();
                }
                
                r4 = 0xffffffca;
                arg1 = sub_5734(arg1, arg2, 0x36);  /* ".0" */
            }
            
            uint32_t r2_5 = arg2 << 0xc >> 0xc;
            int32_t r6_1 = (r2_5 + 0x95f64) & 0x100000;
            int32_t r2_7 = (r6_1 >> 0x14) + (arg2 >> 0x14) + r4 - 0x3ff;  /* "3.00.06_240523" */
            int32_t r0_2;
            int32_t r1_5;
            r0_2 = sub_5556(arg1, (r6_1 ^ 0x3ff00000) | r2_5, 0, 0x3ff00000);
            uint32_t r0_4 = (r2_5 + 2) << 0xc >> 0xc;
            int32_t r0_27;
            int32_t r1_23;
            int32_t r2_16;
            int32_t r3_10;
            
            if (r0_4 >= 3)
            {
                int32_t r0_29;
                int32_t r1_24;
                r0_29 = sub_540c(r0_2, r1_5, 0, 0x40000000);
                int32_t r0_31;
                int32_t r1_26;
                r0_31 = sub_5644(r0_2, r1_5, r0_29, r1_24);
                int32_t r0_33;
                int32_t r1_27;
                r0_33 = sub_5784(r2_7);
                int32_t r0_35;
                int32_t r1_29;
                r0_35 = sub_5574(r0_31, r1_26, r0_31, r1_26);
                int32_t r0_38;
                int32_t r1_31;
                r0_38 = sub_5574(r0_35, r1_29, r0_35, r1_29);
                int32_t r0_40;
                int32_t r1_32;
                r0_40 = sub_78ae(0x1c980, 3, r0_38, r1_31);
                int32_t r0_41;
                int32_t r1_33;
                r0_41 = sub_5574(r0_40, r1_32, r0_38, r1_31);
                int32_t r0_42;
                int32_t r1_34;
                r0_42 = sub_78ae(0x1c998, 4, r0_38, r1_31);
                int32_t r0_43;
                int32_t r1_35;
                r0_43 = sub_5574(r0_42, r1_34, r0_35, r1_29);
                int32_t r0_44;
                int32_t r1_36;
                r0_44 = sub_540c(r0_43, r1_35, r0_41, r1_33);
                
                if (((r2_5 - 0x6147a) | (0x6b851 - r2_5)) > 0)
                {
                    int32_t r0_46;
                    int32_t r1_38;
                    r0_46 = sub_5734(r0_2, r1_5, 0xffffffff);
                    int32_t r0_47;
                    int32_t r1_39;
                    r0_47 = sub_5574(r0_46, r1_38, r0_2, r1_5);
                    
                    if (!r2_7)
                    {
                        int32_t r0_61;
                        int32_t r1_50;
                        r0_61 = sub_540c(r0_47, r1_39, r0_44, r1_36);
                        int32_t r0_62;
                        int32_t r1_51;
                        r0_62 = sub_5574(r0_61, r1_50, r0_31, r1_26);
                        int32_t r0_63;
                        int32_t r1_52;
                        r0_63 = sub_5562(r0_62, r1_51, r0_47, r1_39);
                        return sub_5562(r0_63, r1_52, r0_2, r1_5);
                    }
                    
                    int32_t r0_50;
                    int32_t r1_41;
                    r0_50 = sub_5574(r0_33, r1_27, 0x35793c76, 0x3dea39ef);
                    int32_t r0_52;
                    int32_t r1_43;
                    r0_52 = sub_540c(r0_47, r1_39, r0_44, r1_36);
                    int32_t r0_53;
                    int32_t r1_44;
                    r0_53 = sub_5574(r0_52, r1_43, r0_31, r1_26);
                    int32_t r0_54;
                    int32_t r1_45;
                    r0_54 = sub_540c(r0_53, r1_44, r0_50, r1_41);
                    int32_t r0_55;
                    int32_t r1_46;
                    r0_55 = sub_5562(r0_54, r1_45, r0_47, r1_39);
                    int32_t r0_56;
                    int32_t r1_47;
                    r0_56 = sub_5556(r0_55, r1_46, r0_2, r1_5);
                    int32_t r0_58;
                    int32_t r1_49;
                    r0_58 = sub_5574(r0_33, r1_27, 0xfee00000, 0x3fe62e42);
                    return sub_5556(r0_58, r1_49, r0_56, r1_47);
                }
                
                if (!r2_7)
                {
                    int32_t r0_76;
                    int32_t r1_62;
                    r0_76 = sub_5556(r0_2, r1_5, r0_44, r1_36);
                    int32_t r0_77;
                    int32_t r1_63;
                    r0_77 = sub_5574(r0_76, r1_62, r0_31, r1_26);
                    return sub_5562(r0_77, r1_63, r0_2, r1_5);
                }
                
                int32_t r0_67;
                int32_t r1_54;
                r0_67 = sub_5574(r0_33, r1_27, 0x35793c76, 0x3dea39ef);
                int32_t r0_69;
                int32_t r1_56;
                r0_69 = sub_5556(r0_2, r1_5, r0_44, r1_36);
                int32_t r0_70;
                int32_t r1_57;
                r0_70 = sub_5574(r0_69, r1_56, r0_31, r1_26);
                int32_t r0_71;
                int32_t r1_58;
                r0_71 = sub_5556(r0_70, r1_57, r0_67, r1_54);
                int32_t r0_72;
                int32_t r1_59;
                r0_72 = sub_5556(r0_71, r1_58, r0_2, r1_5);
                r0_27 = sub_5574(r0_33, r1_27, 0xfee00000, 0x3fe62e42);
                r2_16 = r0_72;
                r3_10 = r1_59;
            }
            else
            {
                if (r0_4 == 3)
                {
                    if (!r2_7)
                        return 0;
                    
                    int32_t r0_7;
                    int32_t r1_6;
                    r0_7 = sub_5784(r2_7);
                    int32_t r0_8;
                    int32_t r1_7;
                    r0_8 = sub_5574(r0_7, r1_6, 0x35793c76, 0x3dea39ef);
                    int32_t r0_10;
                    int32_t r1_9;
                    r0_10 = sub_5574(r0_7, r1_6, 0xfee00000, 0x3fe62e42);
                    return sub_540c(r0_10, r1_9, r0_8, r1_7);
                }
                
                int32_t r0_14;
                int32_t r1_12;
                r0_14 = sub_5574(r0_2, r1_5, 0x55555555, 0x3fd55555);
                int32_t r0_15;
                int32_t r1_13;
                r0_15 = sub_5562(r0_14, r1_12, 0, 0x3fe00000);
                int32_t r0_17;
                int32_t r1_15;
                r0_17 = sub_5574(r0_2, r1_5, r0_2, r1_5);
                int32_t r0_18;
                int32_t r1_16;
                r0_18 = sub_5574(r0_17, r1_15, r0_15, r1_13);
                
                if (r2_7)
                {
                    int32_t r0_20;
                    int32_t r1_17;
                    r0_20 = sub_5784(r2_7);
                    int32_t r0_21;
                    int32_t r1_18;
                    r0_21 = sub_5574(r0_20, r1_17, 0x35793c76, 0x3dea39ef);
                    int32_t r0_22;
                    int32_t r1_19;
                    r0_22 = sub_5562(r0_21, r1_18, r0_18, r1_16);
                    int32_t r0_23;
                    int32_t r1_20;
                    r0_23 = sub_5556(r0_22, r1_19, r0_2, r1_5);
                    int32_t r0_25;
                    int32_t r1_22;
                    r0_25 = sub_5574(r0_20, r1_17, 0xfee00000, 0x3fe62e42);
                    return sub_5556(r0_25, r1_22, r0_23, r1_20);
                }
                
                r3_10 = r1_16;
                r2_16 = r0_18;
                r0_27 = r0_2;
                r1_23 = r1_5;
            }
            
            return sub_5556(r0_27, r1_23, r2_16, r3_10);
        }
    }
    
    return sub_7a18(arg1, arg2);
}

int32_t sub_10150(char* arg1, int32_t arg2, char* arg3, int32_t* arg4)
{
    int32_t* var_18 = arg4;
    char* var_24 = arg1;
    void* r0_1 = &arg1[arg2];
    *arg4 = 0;
    char* r2 = arg3;
    char* r1 = arg1;
    uint32_t i_3;
    
    if (*r1 > 0x11)  /* "02_3.00.06_240523" */
    {
        uint32_t r0_3 = *r1;
        r1 = &r1[1];
        i_3 = r0_3 - 0x11;  /* "02_3.00.06_240523" */
        
        if (i_3 >= 4)
        {
            int32_t i;
            
            do
            {
                *r2 = *r1;
                r1 = &r1[1];
                r2 = &r2[1];
                i = i_3 - 1;
                i_3 = i;
            } while (i);
            goto label_101dc;
        }
        
        goto label_10300;
    }
    
    void* r1_1;
    uint32_t i_4;
    
    while (true)
    {
        i_4 = *r1;
        r1_1 = &r1[1];
        
        if (i_4 < 0x10)  /* "R02_3.00.06_240523" */
        {
            if (!i_4)
            {
                while (!*r1_1)
                {
                    i_4 += 0xff;
                    r1_1 += 1;
                }
                
                uint32_t r0_6 = *r1_1;
                r1_1 += 1;
                i_4 += r0_6 + 0xf;
            }
            
            *r2 = *r1_1;
            r2[1] = *(r1_1 + 1);
            r2[2] = *(r1_1 + 2);
            r1 = r1_1 + 3;
            r2 = &r2[3];
            int32_t i_1;
            
            do
            {
                *r2 = *r1;
                r1 = &r1[1];
                r2 = &r2[1];
                i_1 = i_4 - 1;
                i_4 = i_1;
            } while (i_1);
        label_101dc:
            i_4 = *r1;
            r1_1 = &r1[1];
            
            if (i_4 < 0x10)  /* "R02_3.00.06_240523" */
                break;
        }
        
        while (true)
        {
            uint32_t i_5;
            void* r6_8;
            
            if (i_4 < 0x40)
            {
                if (i_4 >= 0x20)  /* "23" */
                {
                    i_5 = i_4 << 0x1b >> 0x1b;  /* "_240523" */
                    
                    if (!i_5)
                    {
                        while (!*r1_1)
                        {
                            i_5 += 0xff;
                            r1_1 += 1;
                        }
                        
                        uint32_t r0_24 = *r1_1;
                        r1_1 += 1;
                        i_5 += r0_24 + 0x1f;  /* "523" */
                    }
                    
                    r6_8 = r2 - 1 - ((*r1_1 >> 2) + (*(r1_1 + 1) << 6));
                    r1 = r1_1 + 2;
                    goto label_102cc;
                }
                
                if (i_4 >= 0x10)  /* "R02_3.00.06_240523" */
                {
                    i_5 = i_4 << 0x1d >> 0x1d;  /* "40523" */
                    
                    if (!i_5)
                    {
                        while (!*r1_1)
                        {
                            i_5 += 0xff;
                            r1_1 += 1;
                        }
                        
                        uint32_t r0_32 = *r1_1;
                        r1_1 += 1;
                        i_5 += r0_32 + 7;
                    }
                    
                    void* r6_12 = r2 - ((8 & i_4) << 0xb) - ((*r1_1 >> 2) + (*(r1_1 + 1) << 6));
                    r1 = r1_1 + 2;
                    
                    if (r6_12 != r2)
                    {
                        r6_8 = r6_12 - 0x4000;
                        goto label_102cc;
                    }
                    
                    *arg4 = r2 - arg3;
                    
                    if (r1 == r0_1)
                        return 0;
                    
                    if (r1 >= r0_1)
                        return 0xfffffffc;
                    
                    return 0xfffffff8;
                }
                
                r1 = r1_1 + 1;
                void* r6_15 = r2 - 1 - (i_4 >> 2) - (*r1_1 << 2);
                *r2 = *r6_15;
                r2[1] = *(r6_15 + 1);
                r2 = &r2[2];
            }
            else
            {
                r1 = r1_1 + 1;
                r6_8 = r2 - 1 - (i_4 << 0x1b >> 0x1d) - (*r1_1 << 3);
                    /* "_240523" */  /* "40523" */
                i_5 = (i_4 >> 5) - 1;
            label_102cc:
                *r2 = *r6_8;
                r2[1] = *(r6_8 + 1);
                void* r6_18 = r6_8 + 2;
                r2 = &r2[2];
                int32_t i_2;
                
                do
                {
                    *r2 = *r6_18;
                    r6_18 += 1;
                    r2 = &r2[1];
                    i_2 = i_5 - 1;
                    i_5 = i_2;
                } while (i_2);
            }
        label_102f4:
            i_3 = *(r1 - 2) << 0x1e >> 0x1e;  /* "0523" */
            
            if (!i_3)
                break;
            
        label_10300:
            *r2 = *r1;
            void* r1_4 = &r1[1];
            r2 = &r2[1];
            
            if (i_3 > 1)
            {
                *r2 = *r1_4;
                r1_4 += 1;
                r2 = &r2[1];
                
                if (i_3 > 2)
                {
                    *r2 = *r1_4;
                    r1_4 += 1;
                    r2 = &r2[1];
                }
            }
            
            i_4 = *r1_4;
            r1_1 = r1_4 + 1;
        }
    }
    
    r1 = r1_1 + 1;
    void* r6_3 = r2 - 0x801 - (i_4 >> 2) - (*r1_1 << 2);
    *r2 = *r6_3;
    r2[1] = *(r6_3 + 1);
    r2[2] = *(r6_3 + 2);
    r2 = &r2[3];
    goto label_102f4;
}

uint32_t sub_10350(char* arg1)
{
    int32_t r3;
    int32_t var_8 = r3;
    var_8 = *arg1;
    *var_8[1] = arg1[1];
    return var_8;
}

int32_t sub_10368(char* arg1)
{
    int32_t result_1;
    int32_t result = result_1;
    result = *arg1;
    *result[1] = arg1[1];
    *result[2] = arg1[2];
    *result[3] = arg1[3];
    return result;
}

uint32_t sub_10388(char* arg1)
{
    int32_t r3;
    int32_t var_8 = r3;
    var_8 = *arg1;
    *var_8[1] = arg1[1];
    return var_8;
}

int32_t sub_103a0(char* arg1)
{
    int32_t result_1;
    int32_t result = result_1;
    result = *arg1;
    *result[1] = arg1[1];
    *result[2] = arg1[2];
    *result[3] = arg1[3];
    return result;
}

uint32_t sub_103c0(void* arg1, int32_t arg2)
{
    uint32_t result = 0xffff;
    
    for (int32_t i = 0; i < arg2; i += 1)
        result = result >> 8 ^ *(0x81f184 + ((result ^ *(arg1 + i)) << 1));
    
    return result;
}

int32_t sub_103ec(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_c = arg2;
    0xff7fec8e(0, arg2, arg3, arg1, 0, 0, arg1, var_c);
    sub_a594(arg1, &var_c, 1);
    return 0;
}

void sub_10424(uint32_t arg1, int32_t arg2)
{
    *0x106a2c = 1;
    uint32_t r1 = *0x106a34;
    uint32_t r1_10;
    
    if (r1)
    {
        if (r1 != 1)
        {
            0xff7fec0a(0x106a34, 0x50c);
            return;
        }
        
        int32_t r3_2 = *0x106a36 + 0x106a3c;
        0xff7febd8(r3_2, arg1, arg2, r3_2);
        arg1 = *0x106a36 + arg2;
        *0x106a36 = arg1;
        r1_10 = *0x106a38;
    label_1048c:
        
        if (arg1 >= r1_10)
        {
            sub_8b0c();
            0xff7fec0a(0x106a34, 0x50c);
        }
    }
    else if (*arg1 == 0xbc && arg2 >= 6)
    {
        *0x106a34 = 1;
        *0x106a35 = *(arg1 + 1);
        *0x106a3a = *(arg1 + 5) << 8 | *(arg1 + 4);
        *0x106a38 = *(arg1 + 3) << 8 | *(arg1 + 2);
        int32_t r3_1 = 0xff7febd8(0x106a3c, arg1 + 6, arg2 - 6);
        arg1 = arg2 - 6;
        *0x106a36 = arg1;
        r1_10 = *0x106a38;
        
        if (r1_10 <= 0x504)
            goto label_1048c;
        
        sub_a7ac(2, 2, 0x504, r3_1);
    }
}

int32_t sub_104c4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 - 0x25 > 6)
    {
        if (arg1 != 0xab && arg1 != 0x2f)
            goto label_104e2;
    }
    else if (arg1 == 0x29)
    {
    label_104e2:
        *0x107b65 = arg1;
        int32_t result = 0xff7febd8(*0x107b68, arg2, arg3);
        *0x107b74 = arg3;
        return result;
    }
    
    return sub_105c0(arg1, arg2, arg3);
}

int32_t sub_104fc()
{
    0xff7fec0a(0x107b64, 0x40);
    *0x107b68 = 0x107564;
    return sub_795a(0x2090, 2, 4, 4, 4, 4, 4, 4, 4, 0x18);  /* ".06_240523" */
}

uint32_t sub_1053c()
{
    uint32_t result;
    
    while (true)
    {
        uint32_t r1_5 = *0x107562;
        result = *0x107560;
        
        if (r1_5 == result)
            break;
        
        uint32_t r0_1 = *(0x107ba4 + r1_5);
        uint32_t r1_2 = r1_5 + 1;
        *0x107562 = r1_2;
        uint16_t r5_1 = *(0x107ba4 + r1_2);
        uint32_t r1_4 = r1_2 + 1;
        *0x107562 = r1_4;
        
        if (r0_1 != 0x2f)
        {
            if (r0_1 <= 0x2f)
            {
                r0_1 = 0xff7fec8e(r0_1 - 0x25);
                r1_4 = 0x19;  /* "06_240523" */
            }
            
            if (r0_1 == 0xef)
                sub_18f60();
            else if (r0_1 > 0xef)
            {
                if (r0_1 == 0xf0)
                    sub_18fec();
                else if (r0_1 != 0xf1)
                {
                label_10586:
                    *0x107560 = 0;
                    *0x107562 = 0;
                    return 0;
                }
            }
            else if (r0_1 != 0x47)
            {
                if (r0_1 != 0x49)
                    goto label_10586;
                
                sub_1784c(*(0x107ba4 + r1_4));
            }
        }
        
        *0x107562 += r5_1;
    }
    
    return result;
}

void sub_105c0(int16_t arg1, int32_t arg2, int32_t arg3)
{
    if (*0x107560 == *0x107562)
    {
        *0x107560 = 0;
        *0x107562 = 0;
    }
    
    uint32_t r2_1 = *0x107560;
    
    if (r2_1 + arg3 + 2 > 0x400)
        return;
    
    *(0x107ba4 + r2_1) = arg1;
    uint32_t r0_2 = *0x107560 + 1;
    *0x107560 = r0_2;
    *(0x107ba4 + r0_2) = arg3;
    uint32_t r0_5 = *0x107560 + 1;
    *0x107560 = r0_5;
    0xff7febd8(0x107ba4 + r0_5, arg2, arg3);
    *0x107560 += arg3;
}

uint32_t sub_10610()
{
    uint32_t result = *0x107b64;
    
    if (result == 1)
        return result;
    
    return 0;
}

int32_t sub_10620()
{
    (*0x106f58)(7, 0);
    return 0;
}

int32_t sub_10634()
{
    int32_t r2 = *0x106f58;
    
    if (*0x106f45 != 3)
    {
        r2(4, 3);
        return 3;
    }
    
    int32_t r1 = *0x106f4c;
    int32_t r0_2 = *0x106f50;
    
    if (r0_2 != r1 && r0_2 != r1 - 0x100)
    {
        r2(4, 1);
        return 1;
    }
    
    *0x106f45 = 4;
    r2(4, 0);
    return 0;
}

int32_t sub_10678()
{
    if (*0x106f45 != 4)
    {
        (*0x106f58)(4, 3);
        return 3;
    }
    
    *0x106f45 = 5;
    
    if (!*0x1041e2)
        sub_18eb8();
    else
        sub_18f00();
    
    sub_10a14(0x3e7);
    sub_a58c();
    sub_a16c();
    sub_6034();
    return 0;
}

int32_t sub_106c8(char* arg1, int32_t arg2)
{
    int32_t r2 = *0x106f58;
    int32_t r1;
    
    if (arg2 == 9)
    {
        uint32_t r1_1 = *arg1;
        
        if (r1_1 == 1 || r1_1 == 4)
        {
            uint32_t r1_5 = arg1[3] << 0x10 | arg1[4] << 0x18 | arg1[2] << 8 | arg1[1];
                /* "R02_3.00.06_240523" */  /* ".06_240523" */
            
            if (*0x12dac8 - *0x12dac4 >= r1_5 && r1_5 >= &data_2800)
            {
                *0x106f50 = 0;
                *0x106f4a = 0;
                *0x106f44 = *arg1;
                *0x106f4c = r1_5;
                *0x106f45 = 1;
                *0x106f46 = arg1[6] << 8 | arg1[5];
                *0x106f48 = arg1[8] << 8 | arg1[7];
                *0x106f45 = 2;
                r2(2, 0);
                *0x10755c = 0;
                return 0;
            }
        }
        
        r1 = 2;
    }
    else
        r1 = 1;
    
    r2(2, r1);
    return 1;
}

int32_t sub_10754(char* arg1, int32_t arg2)
{
    int32_t var_18 = arg2;
    char* var_1c_1 = arg1;
    sub_109ac();
    uint32_t r0 = *0x106f45;
    
    if (r0 != 3 && r0 != 2)
    {
        (*0x106f58)(3, 3);
        return 3;
    }
    
    uint32_t r0_4 = *0x106f4a;
    
    if (r0_4 + 1 != *arg1 + (arg1[1] << 8))
    {
        (*0x106f58)(3, 2);
        return 2;
    }
    
    uint32_t r4_2 = arg2 - 2;
    
    if (r4_2 > 0x600)
    {
        (*0x106f58)(3, 1);
        return 1;
    }
    
    if (!r0_4)
    {
        void var_120;
        0xff7febd8(&var_120, &arg1[2], 0x100);
        0xff7febd8(0x106f5c, &arg1[2], r4_2);
        sub_167a4(*0x12dac4);
        sub_d75c(*0x12dac4 + *0x106f50, 0x106f5c, r4_2);
        *0x106f50 += r4_2;
    }
    else
    {
        0xff7febd8(0x106f5c, &arg1[2], r4_2);
        int32_t r0_5 = *0x106f50;
        int32_t r1_5 = r0_5 + r4_2 - 1;
        
        if (r1_5 >> 0xc != (r0_5 - 1) >> 0xc)
            sub_167a4(*0x12dac4 + (r1_5 >> 0xc << 0xc));
        
        int32_t r0_10 = *0x106f50;
        
        if (r0_10 < *0x106f4c)
        {
            sub_d75c(*0x12dac4 + r0_10, 0x106f5c, r4_2);
            *0x106f50 += r4_2;
        }
    }
    
    *0x106f45 = 3;
    *0x106f4a += 1;
    (*0x106f58)(3, 0);
    return 0;
}

int32_t sub_10840()
{
    (*0x106f58)(1, 0);
    return 0;
}

uint32_t sub_10854(int32_t arg1 @ r6)
{
    int32_t var_8 = arg1;
    uint32_t result = *0x107b65;
    
    if (result)
    {
        char* r5_1 = *0x107b68;
        uint32_t r1_1 = *0x107b74;
        
        if (result == 0x34)  /* "V3.0" */
            sub_dd9c();
        else
        {
            if (result > 0x34)  /* "V3.0" */
                goto label_108b4;
            
            int32_t entry_r2;
            void* entry_r3;
            
            if (result == 0x24)
                sub_a7ac(result, 2, entry_r2, entry_r3);
            else if (result > 0x24)
            {
                int32_t r1_4;
                int32_t r3_2;
                result = 0xff7fec8e(result - 0x27, r1_1, entry_r2, result - 0x27);
                *(r3_2 + 7) = arg1;
                *(r3_2 + 7) = arg1;
                *0x107b78 = r1_4;
                *0x107b78 = r1_4;
                r1_1 = 0x20f6c8;
            label_108b4:
                
                if (result != 0x47)
                {
                    if (result <= 0x47)
                    {
                        int32_t r1_5;
                        int32_t* r2_2;
                        result = 0xff7fec8e(result, r1_1, result - 0x35, result - 0x35);
                            /* "3.0" */
                        r2_2[0x41ed9] = r2_2;
                        *(r2_2 + r5_1) = r1_5;
                        *(r2_2 + r5_1) = r1_5;
                        *(r2_2 + r5_1) = r1_5;
                        *(r2_2 + r5_1) = r1_5;
                        *(r2_2 + r5_1) = r1_5;
                        *(r2_2 + r5_1) = r1_5;
                        *0x20f6c8 = 0x51;
                    }
                    
                    if (result < 0x63 && result < 0x60 && result != 0x48 && result == 0x49)
                        sub_1784c(*r5_1);
                }
            }
            else if (result == 0x11)  /* "02_3.00.06_240523" */
                sub_df40();
            else
            {
                if (result <= 0x11)  /* "02_3.00.06_240523" */
                {
                    void* r1_2;
                    result = 0xff7fec8e(result, r1_1, entry_r2, result);
                    *(r1_2 + 0x14) = result;  /* "3.00.06_240523" */
                    *(entry_r3 + r5_1);
                    *0x107bc8 = entry_r2;
                    r5_1[0x15] = entry_r2;  /* ".00.06_240523" */
                    r5_1[0x15] = arg1;  /* ".00.06_240523" */
                }
                
                if (result == 0x21)  /* "3" */
                    sub_a7ac(result, 2, entry_r2, entry_r3);
                else
                {
                    if (result == 0x22 || result == 0x23)
                        sub_a7ac(result, 2, entry_r2, entry_r3);
                    
                    if (result == 0x12)  /* "2_3.00.06_240523" */
                        sub_df84();
                }
            }
        }
        
        result = 0;
        *0x107b65 = 0;
    }
    
    return result;
}

int32_t sub_10970() __pure
{
    return 0x106f5c;
}

int32_t sub_10978(char* arg1)
{
    if (arg1)
    {
        *arg1 = *0x106f45;
        arg1[1] = *0x106f50;
        arg1[2] = *0x106f50 >> 8;
        arg1[3] = *0x106f50 >> 0x10;  /* "R02_3.00.06_240523" */
        arg1[4] = *0x106f50 >> 0x18;  /* ".06_240523" */
    }
    
    return 0;
}

void sub_109a0(int32_t arg1)
{
    *0x106f58 = arg1;
}

uint32_t sub_109ac()
{
    if (!*0x106f45)
        return 0xff;
    
    int32_t r1_1 = *0x106f4c;
    
    if (!r1_1)
        return 0;
    
    return 0xff7feb00(0x64 * *0x106f50, r1_1, 0x64);
}

int32_t sub_109d8()
{
    *0x106f45 = 0;
    return 0;
}

int32_t sub_109e4()
{
    *0x10bfa4 = sub_7680();
    sub_72b0();
    sub_72e4();
    sub_15bb4(0x106f40);
    return (*0x100090)(0);
}

int32_t sub_10a14(int32_t arg1)
{
    int32_t r1;
    
    r1 = arg1 != 0x3e7 ? 0x8138e5 : 0x81393d;
    
    return sub_15b94(0x106f40, r1, arg1);
}

int32_t sub_10a3c()
{
    *0x10bfa4 = sub_7680();
    sub_72b0();
    sub_72e4();
    sub_15bb4(0x106f40);
    return (*0x100090)(0);
}

int32_t sub_10a6c(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    
    if (arg1 == 0x98)
        sub_155dc(1);
    else if (arg1 == 0x9a)
        sub_155dc(2);
    
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = arg1;
    *var_c[3] = arg1;
    sub_7678(&result);
    return result;
}

int32_t sub_10a9c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    sub_7876(0, &var_10, arg3, arg4);
    sub_18960();
    sub_9d24();
    *0x10bfa4 = 0;
    *0x104310 = 0;
    return 0;
}

uint32_t sub_10ac4()
{
    int32_t r0 = *0x10bfa4;
    int32_t entry_r2;
    int32_t entry_r3;
    
    if (r0 <= 0x25980600)
        return sub_10a9c(r0, 0x25980600, entry_r2, entry_r3);
    *0x1041e2 = 1;
    return sub_18f1c();
}

void sub_10af0() __noreturn
{
    sub_a6dc();
    /* no return */
}

uint32_t sub_10b44()
{
    uint32_t r2 = sub_52dc(0x1041f0);
    
    if (r2 > 0x1d)  /* "40523" */
        r2 = 0x1d;  /* "40523" */
    
    if (r2 + 2 <= 0x1f)  /* "523" */
    {
        *0x105f36 = r2 + 1;
        *0x105f37 = 9;
        0xff7febd8(0x105f38, 0x1041f0);
    }
    
    uint32_t result = r2 + 2;
    
    if (result <= 0x1f)  /* "523" */
    {
        *0x105f34 = result;
        return result;
    }
    
    sub_15a48("***user_scan_rsp_data overflow!!!!!!\n");
    /* no return */
}

uint32_t sub_10bbc()
{
    char* r0 = sub_ac60();
    *0x105f55 = 9;
    *0x105f56 = 0x16;  /* "00.06_240523" */
    *0x105f57 = 2;
    *0x105f58 = 0x38;
    uint32_t r1 = 4;
    
    for (uint32_t i = 0; i < 6; )
    {
        *(0x105f55 + r1) = r0[5 - i];
        i = i + 1;
        r1 = r1 + 1;
    }
    
    *(0x105f55 + r1) = 3;
    uint32_t r0_1 = r1 + 1;
    *(0x105f55 + r0_1) = 0xff;
    uint32_t r0_3 = r0_1 + 1;
    *(0x105f55 + r0_3) = 0x34;  /* "V3.0" */
    uint32_t r0_5 = r0_3 + 1;
    *(0x105f55 + r0_5) = 0x12;  /* "2_3.00.06_240523" */
    uint32_t result = r0_5 + 1;
    
    if (result <= 0x1f)  /* "523" */
    {
        *0x105f35 = result;
        return result;
    }
    
    sub_15a48("***rsp_data overflow!!!!!!\n");
    /* no return */
}

void* sub_10c44(int32_t arg1)
{
    uint32_t r1_1 = (arg1 + 0xb) >> 3 << 3;
    
    while (true)
    {
        uint32_t** r2_1 = 0x1041d4;
        void* result;
        
        while (true)
        {
            uint32_t* r0_1 = *r2_1;
            
            if (!r0_1)
            {
                result = &data_0;
                break;
            }
            
            uint32_t r3_1 = *r0_1;
            
            if (r3_1 >= r1_1)
            {
                uint32_t* r3_4;
                
                if (r3_1 <= r1_1)
                    r3_4 = r0_1[1];
                else
                {
                    void* r3_2 = &r0_1[((arg1 + 0xb) >> 3) * 2];
                    int32_t r5_1 = r0_1[1];
                    *r3_2 = r3_1 - r1_1;
                    *(r3_2 + 4) = r5_1;
                    r3_4 = r3_2;
                }
                
                *r2_1 = r3_4;
                *r0_1 = r1_1;
                result = &r0_1[1];
                break;
            }
            
            r2_1 = &r0_1[1];
        }
        
        if (result)
            return result;
        
        if (*0x1041d8)
            break;
        
        *0x1041d4 = 0x10aea4;
        *0x10aea4 = 0xf8;
        *0x10aea8 = 0;
        *0x1041d8 = 1;
    }
    
    return &data_0;
}

void sub_10cb0(uint32_t* arg1, void* arg2, int32_t arg3)
{
    for (int32_t i = 0; arg3 >> 2 > i; i += 1)
    {
        *arg1 = *arg2 | *(arg2 + 3) << 0x18 | *(arg2 + 2) << 0x10 | *(arg2 + 1) << 8;
            /* "R02_3.00.06_240523" */  /* ".06_240523" */
        arg1 = &arg1[1];
        arg2 += 4;
    }
}

uint32_t sub_10cd8()
{
    sub_10d54(0xf, 0x61);
    sub_10d54(0x11, 0);  /* "02_3.00.06_240523" */
    sub_10d54(0x10, 0x23);  /* "R02_3.00.06_240523" */
    sub_10d54(0x7f, 0x83);
    sub_10d54(0x7f, 0x69);
    sub_10d54(0x7f, 0xbd);
    0xff900b4c(0x61a80);
    sub_10d54(0x14, 0x80);  /* "3.00.06_240523" */
    sub_10d54(0x15, 4);  /* ".00.06_240523" */
    return sub_10d54(0x1a, 4);  /* "6_240523" */
}

uint32_t sub_10d30(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_10_1 = arg3;
    
    if (!arg3)
        return 0xa;
    
    return sub_b700(0x20145000, 0x4f, arg1, arg2, arg3, 0xc8);
}

uint32_t sub_10d54(uint32_t arg1, int32_t arg2)
{
    int32_t var_8 = arg2;
    uint32_t var_c = arg1;
    return sub_bad4(0x20145000, 0x4e, arg1, &var_8, 1);
}

int32_t sub_10d70()
{
    sub_10e4c();
    *0x104ecc = 1;
    *0x20110054 = 0x477;
    return 0x477;
}

uint32_t sub_10d90()
{
    *0x20110014 = *0x20110014 >> 6 << 6 | 5;
    *0x20110014 = (*0x20110014 & 0xfffff0ff) | 0x400;
    *0x20110014 = (*0x20110014 & 0x80ffffff) | 0x24000000;
    *0x20110000 = (*0x20110000 & 0xfffff1ff) | 0x800;
    *0x20110000 = (*0x20110000 & 0xfffffff9) | 6;
    *0x20110000 = (*0x20110000 & 0xff7fffff) | 0x800000;
    *0x20110054 = 0x477;
    *0x20110054 = (*0x20110054 & 0xffffff0f) | 0x40;
    *0x20110000 = (*0x20110000 & 0xf7ffffff) | 0x8000000;
    *0x20110038 = (*0x20110038 & 0xffff8fff) | 0x7000;
    
    if (*0x104ecc)
    {
        sub_16914(2);
        *0x20110054 = 0x477;
    }
    
    *0x2011001c;
    *0x2011001c = 0;
    uint32_t result = *0x20110020 >> 8 << 8;
    *0x20110020 = result;
    return result;
}

uint32_t sub_10e4c()
{
    uint32_t var_30;
    0xff7fec0a(&var_30, 0x20);  /* "23" */
    int32_t var_2c;
    int32_t var_28;
    int32_t var_24;
    int32_t var_20;
    int32_t var_1c;
    int32_t var_18;
    int32_t var_14;
    
    for (uint32_t i = 0; i < 0x40; i = i + 1)
    {
        sub_a6fc(1);
        
        while (!(*0x20110040 << 0x1f >> 0x1f))  /* "523" */
            /* nop */
        
        0xff900b4c(8);
        uint32_t j;
        
        do
            j = *0x20110040 << 0x1e >> 0x1f;  /* "0523" */  /* "523" */
         while (j);
        
        sub_a6fc(j);
        var_30 += *0x20110044 << 0x14 >> 0x1a;  /* "3.00.06_240523" */  /* "6_240523" */
        var_2c += *0x20110048 << 0x14 >> 0x1a;  /* "3.00.06_240523" */  /* "6_240523" */
        var_28 += *0x2011004c << 0x14 >> 0x1a;  /* "3.00.06_240523" */  /* "6_240523" */
        var_24 += *0x20110050 << 0x14 >> 0x1a;  /* "3.00.06_240523" */  /* "6_240523" */
        var_20 += *0x20110044 << 0x1a >> 0x1a;  /* "6_240523" */
        var_1c += *0x20110048 << 0x1a >> 0x1a;  /* "6_240523" */
        var_18 += *0x2011004c << 0x1a >> 0x1a;  /* "6_240523" */
        var_14 += *0x20110050 << 0x1a >> 0x1a;  /* "6_240523" */
        sub_a714(0);
        sub_a72c(0);
        sub_a744(0);
        sub_a75c(0);
    }
    
    var_30 = (var_30 - 7) >> 6;
    uint32_t var_2c_1 = (var_2c - 7) >> 6;
    uint32_t var_28_1 = (var_28 - 7) >> 6;
    uint32_t var_24_1 = (var_24 - 7) >> 6;
    uint32_t r0_52 = (var_20 - 7) >> 6;
    uint32_t r0_55 = (var_1c - 7) >> 6;
    uint32_t r0_58 = (var_18 - 7) >> 6;
    uint32_t r0_61 = (var_14 - 7) >> 6;
    uint32_t r0_63 = r0_52 << 7;
    *0x104ed0 = r0_52 | r0_63;
    uint32_t r3 = r0_55 << 7;
    *0x104ed4 = r0_55 | r3;
    uint32_t r1_14 = r0_58 << 7;
    *0x104ed8 = r0_58 | r1_14;
    uint32_t r2_3 = r0_61 << 7;
    *0x104edc = r0_61 | r2_3;
    *0x104ee0 = (r0_63 + 0x100) | (r0_52 + 2);
    *0x104ee4 = (r3 + 0x100) | (r0_55 + 2);
    *0x104ee8 = (r1_14 + 0x100) | (r0_58 + 2);
    *0x104eec = (r2_3 + 0x100) | (r0_61 + 2);
    return sub_d36c(0);
}

int32_t sub_10fac(int32_t arg1)
{
    int32_t r1 = 0 - arg1;
    int32_t r3;
    
    r3 = arg1 < 0 ? r1 : arg1;
    
    int32_t r4 = *0x103eec;
    
    if (r3 > r4)
    {
        if (arg1 >= 0)
            r1 = arg1;
        
        *0x103eec = r1;
    }
    else
        r1 = r4;
    
    int32_t r1_2 = (0x3eb8 * r1) >> 0xe;
    *0x103eec = r1_2;
    
    if (r1_2 * 3 < 0x1e0)
        *0x103eec = 0xa0;
    
    return 0xff7feb2c(0x1e0 * arg1, *0x103eec, 0x103ebc, 0x1e0);
}

int32_t sub_10ffc(int32_t arg1)
{
    int32_t r1 = (arg1 * arg1) >> 8;
    int32_t r2 = *0x103f40;
    
    if (r1 < r2)
        *0x103f40 = ((r1 - r2) << 3 >> 0xa) + r2;
    else if (r1 < 0x190)
        *0x103f40 = r1;
    else
        *0x103f40 = 0x190;
    
    return *0x103f40;
}

int32_t sub_11028(int32_t arg1)
{
    int32_t r1 = arg1 << 2;
    int32_t r2;
    
    r2 = r1 < 0 ? 0 - r1 : r1;
    
    if (r2 > 0x320)
    {
        arg1 = r1 < 0 ? 0xfffffce0 : 0x320;
    }
    
    int32_t r2_1 = *0x103e5c;
    int32_t r0;
    
    if (arg1 <= r2_1)
    {
        r0 = ((0x105a * (arg1 - r2_1) + 0x80000) >> 0x14) + r2_1;  /* "3.00.06_240523" */
        *0x103e5c = r0;
        
        if (r0 <= 0)
            r0 = 0x40;
        
        *0x103e5c = r0;
    }
    else if (arg1 <= r2_1 + 0x320)
    {
        r0 = ((0x20a3 * (arg1 - r2_1) + 0x80000) >> 0x14) + r2_1;  /* "3.00.06_240523" */
        *0x103e5c = r0;
    }
    else
        r0 = *0x103e5c;
    
    return r0 >> 2;
}

int32_t sub_11094(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t* var_1c = arg3;
    int32_t r3;
    
    if (!arg5)
    {
        if (arg6 - 0x4b00 > &data_2800)
            r3 = 0x870;
        else
            r3 = 0x5a0;
    }
    else if (arg5 == 0xffffffff)
        r3 = 0x3c0;
    else
        r3 = 0x12c4;
    
    if (*0x103e48 >= 0x8000)
        *0x103e48 = 0;
    
    uint32_t r4_2 = *0x103e48 + 1;
    *0x103e48 = r4_2;
    
    for (int32_t i = 0; i < 0xc; )
    {
        if (*(arg2 + i) == 1)
        {
            void* r4_11 = i * 0x18;  /* ".06_240523" */
            int32_t r7_6 = *(r4_11 + 0x10a934) + ((r3 * arg1) >> 0x10);  /* "R02_3.00.06_240523" */
            int32_t r5_17 = *(r4_11 + 0x10a938);
            int32_t r6_12 = i << 2;
            int32_t r7_7 = *(0x81f5b0 + r6_12);
            int32_t r6_13 = *(0x81f580 + r6_12);
            int32_t r5_20 = (r7_7 * r5_17 + r7_6 * r6_13 + 0x800) >> 0xc;
            *(r4_11 + 0x10a934) = r5_20;
            int32_t r6_19 = (r5_17 * r6_13 - r7_6 * r7_7 + 0x800) >> 0xc;
            *(r4_11 + 0x10a938) = r6_19;
            int32_t r7_9 = *(r4_11 + 0x10a93c);
            *(r4_11 + 0x10a93c) = ((0x44 * (((r5_20 * r5_20 + r6_19 * r6_19 + 0x100) >> 9) - r7_9)
                + 0x800) >> 0xc) + r7_9;
            uint32_t r4_14 = *(0x10a930 + r4_11);
            
            if (!r4_14)
            {
                if (r5_20 > 0)
                {
                    *(0x10a930 + r4_11) = 1;
                    int32_t r5_37 = *(r4_11 + 0x10a940);
                    int32_t r4_18 = r4_2 - r5_37;
                    
                    if (r4_2 - r5_37 < 0)
                        r4_18 += 0x8000;
                    
                    if (r4_18 > 0x7f)
                        r4_18 = 0x7f;
                    
                    if (*(0x81f610 + r6_12) > r4_18 && *(0x81f5e0 + r6_12) < r4_18)
                        *(r4_11 + 0x10a944) = (*(0x81f670 + r6_12)
                            * (*(r4_11 + 0x10a944) + ((r4_18 * *(0x81f640 + r6_12) + 0x80) >> 8))
                            + 0x8000) >> 0x10;  /* "R02_3.00.06_240523" */
                    
                    *(r4_11 + 0x10a940) = r4_2;
                }
            }
            else if (r4_14 == 1 && r5_20 < 0)
                *(0x10a930 + r4_11) = 0;
        }
        else
        {
            void* r4_5 = i * 0x18;  /* ".06_240523" */
            int32_t r7_1 = *(r4_5 + 0x10a934);
            int32_t r5_1 = *(r4_5 + 0x10a938);
            int32_t r7_2 = i << 2;
            int32_t r6_1 = *(0x81f5b0 + r7_2);
            int32_t r6_2 = *(0x81f580 + r7_2);
            *(r4_5 + 0x10a934) = (r6_1 * r5_1 + r7_1 * r6_2 + 0x800) >> 0xc;
            *(r4_5 + 0x10a938) = (r6_2 * r5_1 - r7_1 * r6_1 + 0x800) >> 0xc;
            *(r4_5 + 0x10a93c) = 0;
            *(r4_5 + 0x10a944) = *(0x81f6a0 + r7_2);
            *(0x10a930 + r4_5) = 0;
        }
        
        arg3[i * 2] = *(i * 0x18 + 0x10a93c);  /* ".06_240523" */
        int32_t r4_10 = *(i * 0x18 + 0x10a944);  /* ".06_240523" */
        i += 1;
        arg3[i * 2 + 1] = r4_10;
    }
    
    int32_t i_1 = arg4;
    
    if (i_1 == 1)
    {
        for (i_1 = 0; i_1 < 0xc; )
        {
            void* r1_9 = i_1 * 0x18;  /* ".06_240523" */
            *(r1_9 + 0x10aa54) = *(r1_9 + 0x10a934);
            *(r1_9 + 0x10aa58) = *(r1_9 + 0x10a938);
            *(r1_9 + 0x10aa5c) = *(r1_9 + 0x10a93c);
            *(0x10aa50 + r1_9) = *(0x10a930 + r1_9);
            *(r1_9 + 0x10aa60) = *(r1_9 + 0x10a940);
            i_1 += 1;
            *(r1_9 + 0x10aa64) = *(r1_9 + 0x10a944);
        }
    }
    else if (i_1 == 0x19 && arg5 != 3 && arg5 != 1)  /* "06_240523" */
    {
        for (int32_t i_2 = 0; i_2 < 0xc; i_2 += 1)
        {
            void* r5_12 = 0x18 * i_2;  /* ".06_240523" */
            int32_t r0_3 = 0xff7feb2c(0x5dc0000, *(r5_12 + 0x10aa64));
            
            if (r0_3 - 0xff7feb2c(0x5dc0000, *(r5_12 + 0x10a944)) > 0x200)
            {
                *(r5_12 + 0x10a944) = 0xff7feb2c(0x5dc0000, r0_3 - 0x200);
                *(r5_12 + 0x10a93c) s>>= 1;
            }
            
            i_1 = 0xff7feb2c(0x5dc0000, *(r5_12 + 0x10a944)) - r0_3;
            
            if (i_1 > 0x200)
            {
                *(r5_12 + 0x10a944) = 0xff7feb2c(0x5dc0000, r0_3 + 0x200);
                i_1 = *(r5_12 + 0x10a93c) >> 1;
                *(r5_12 + 0x10a93c) = i_1;
            }
        }
    }
    
    return i_1;
}

int32_t sub_11340()
{
    for (int32_t i = 0; i < 0xc; )
    {
        void* r4_2 = 0x18 * i;  /* ".06_240523" */
        *(r4_2 + 0x10a934) = 0;
        *(r4_2 + 0x10a938) = 0;
        *(r4_2 + 0x10a93c) = 0;
        *(0x10a930 + r4_2) = 0;
        *(r4_2 + 0x10a940) = 1;
        int32_t r4_4 = *(0x81f6a0 + (i << 2));
        i += 1;
        *(r4_2 + 0x10a944) = r4_4;
    }
    
    for (int32_t i_1 = 0; i_1 < 0xc; )
    {
        void* r4_6 = 0x18 * i_1;  /* ".06_240523" */
        *(r4_6 + 0x10aa54) = 0;
        *(r4_6 + 0x10aa58) = 0;
        *(r4_6 + 0x10aa5c) = 0;
        *(0x10aa50 + r4_6) = 0;
        *(r4_6 + 0x10aa60) = 1;
        i_1 += 1;
        *(r4_6 + 0x10aa64) = *(r4_6 + 0x10a944);
    }
    
    *0x103e48 = 0;
    *0x10a96c = 0x6400;
    return 0x6400;
}

int32_t sub_113a8(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    int32_t* var_24 = arg1;
    int32_t i = 0;
    int32_t var_54 = 0x80000000;
    int32_t r6 = 0;
    int32_t var_40 = 1;
    char var_60[0xc];
    char var_3c[0xc];
    
    do
    {
        var_3c[i] = 0;
        var_60[i] = 0;
        i += 1;
    } while (i < 0xc);
    
    while (true)
    {
        int32_t i_9 = 0xffffffff;
        int32_t r3 = 0x80000000;
        
        for (int32_t i_1 = 0; i_1 < 0xc; i_1 += 1)
        {
            if (!var_60[i_1] && !var_3c[i_1])
            {
                int32_t r2_3 = arg1[i_1 * 2];
                
                if (r2_3 > r3)
                {
                    r3 = r2_3;
                    i_9 = i_1;
                }
            }
        }
        
        if (i_9 == 0xffffffff)
            break;
        
        if (var_40 == 1)
        {
            int32_t r1_2 = *0x103ef4;
            
            if (!r1_2)
            {
                int32_t r3_1 = *0x103ef0;
                int32_t r1_5 = r3_1 - i_9;
                
                if (r3_1 - i_9 < 0)
                    r1_5 = 0 - r1_5;
                
                if (r1_5 <= 2)
                {
                    *0x103ef8 = i_9;
                    *0x103ef0 = i_9;
                }
                else
                {
                    *0x103ef8 = r3_1;
                    *0x103ef4 = 0xa;
                }
            }
            else
                *0x103ef4 = r1_2 - 1;
            
            int32_t r1_4 = *0x103ef8;
            int32_t r0_6 = r1_4 - 2;
            int32_t i_10 = r1_4 + 2;
            
            if (r0_6 < 0)
                r0_6 = 0;
            
            if (i_10 > 0xb)
                i_10 = 0xb;
            
            for (int32_t i_2 = 0; i_2 <= r0_6; i_2 += 1)
            {
            }
            
            for (int32_t i_3 = i_10; i_3 <= 0xb; i_3 += 1)
            {
            }
            
            int32_t i_4 = r0_6 + 1;
            *0x103efc;
            
            for (; i_4 <= i_10 - 1; i_4 += 1)
            {
            }
            
            var_40 = 0;
        }
        else
        {
            var_60[i_9] = 1;
            void* r0_1 = &arg1[i_9 * 2];
            int32_t r0_2 = *(r0_1 + 4);
            
            for (int32_t i_5 = 0; i_5 < 0xc; i_5 += 1)
            {
                if (!var_3c[i_5] && !var_60[i_5])
                {
                    int32_t r0_10 = arg1[i_5 * 2 + 1];
                    int32_t r0_11 = r0_10 - r0_2;
                    
                    if (r0_10 - r0_2 < 0)
                        r0_11 = 0 - r0_11;
                    
                    if (r0_11 < (0x26 * r0_2) >> 8)
                    {
                        int32_t r0_13 = arg1[i_9 * 2];
                        int32_t r2_4 = arg1[i_5 * 2];
                        int32_t r1_10 = r0_13 + r2_4;
                        int32_t r0_14;
                        
                        r0_14 = r1_10 <= 0x7a120 ? 0 : 3;
                        
                        int32_t r1_11 = r1_10 >> r0_14;
                        
                        if (r1_11)
                            *(r0_1 + 4) = 0xff7feb2c(
                                (r0_13 >> r0_14) * *(r0_1 + 4) + (r2_4 >> r0_14) * r0_10, r1_11);
                        
                        arg1[i_9 * 2] += arg1[i_5 * 2];
                        var_3c[i_5] = 1;
                    }
                }
            }
        }
    }
    
    for (int32_t i_6 = 0; i_6 < 0xc; i_6 += 1)
    {
        if (var_60[i_6] == 1)
        {
            if (i_6 != r6)
            {
                arg1[r6 * 2 + 1] = arg1[i_6 * 2 + 1];
                arg1[r6 * 2] = arg1[i_6 * 2];
            }
            
            r6 += 1;
        }
    }
    
    *arg4 = r6;
    
    for (int32_t i_7 = 0; i_7 < r6; i_7 += 1)
    {
        int32_t r1_22 = arg1[i_7 * 2];
        
        if (r1_22 > var_54)
        {
            var_54 = r1_22;
            *arg2 = i_7;
        }
    }
    
    for (int32_t i_8 = 0; i_8 < r6; i_8 += 1)
    {
        int32_t r5_1 = arg1[i_8 * 2 + 1];
        int32_t r1_26 = *arg2;
        int32_t r3_9 = arg1[r1_26 * 2 + 1];
        int32_t r1_29 = r3_9 << 1;
        int32_t r1_30 = r5_1 - r1_29;
        
        if (r5_1 - r1_29 < 0)
            r1_30 = 0 - r1_30;
        
        int32_t r2_10 = arg1[i_8 * 2];
        
        if (r2_10 > (var_54 * 3) >> 2 && r3_9 >> 3 > r1_30 && r1_26 != i_8 && r2_10 > 0x3200)
        {
            var_54 = r2_10;
            *arg2 = i_8;
        }
    }
    
    int32_t r1_32 = arg1[*arg2 * 2 + 1];
    int32_t r0_26;
    
    if (!r1_32)
        r0_26 = 0;
    else
        r0_26 = 0xff7feb2c(0x5dc0000, r1_32);
    
    *arg3 = r0_26;
    int32_t r1_34 = *0x103efc;
    *0x103efc = ((0x48 * (arg1[*arg2 * 2 + 1] - r1_34)) >> 8) + r1_34;
    return 0x103ebc;
}

int32_t sub_115c8()
{
    *0x103ef0 = 3;
    *0x103ef8 = 3;
    *0x103ef4 = 0;
    *0x103efc = 0x12c0;
    return 0x103ebc;
}

void sub_115e0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    int32_t r6;
    
    r6 = arg3 || !arg7 ? 0 : 1;
    
    for (int32_t i = 0; i < 0xc; i += 1)
    {
        int32_t r2_1 = arg1[i * 2 + 1];
        
        if (r2_1 - 0x6d1 < 0x22db)
        {
            if (r6 && (r2_1 * arg7 < 0x5dc0000 || r2_1 * arg6 > 0x5dc0000))
                arg1[i * 2] = (0x333 * arg1[i * 2]) >> 0xc;
            
            if (arg2 && r2_1 * arg5 > 0x5dc0000 && arg4 * r2_1 < 0x5dc0000)
                arg1[i * 2] = (0x180 * arg1[i * 2]) >> 8;
        }
        else
            arg1[i * 2] = 0;
    }
}

int32_t sub_11668(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    int32_t r2 = 0x32;  /* "2_V3.0" */
    int32_t r4 = 0xfa0;
    
    if (!arg2)
    {
        r2 = 0xa;
        r4 = 0x64;
    }
    else if (arg2 == 0x1a)  /* "6_240523" */
        r4 = 0xc350;
    else if (arg2 != 1)
    {
        if (arg2 == 2)
            r4 = 0x3a98;
        else
        {
            if (arg2 == 3 || arg2 == 0x17)  /* "0.06_240523" */
                r2 = 1;
            
            if (arg2 == 4 || arg2 == 0x19)  /* "06_240523" */
                r2 = 0x32;  /* "2_V3.0" */
            
            if (arg2 == 8)
            {
                r2 = 0x12c;
                r4 = 0x3e8;
            }
            else if (arg2 == 9 || arg2 == 0x12)  /* "2_3.00.06_240523" */
            {
                r2 = 0x64;
                r4 = 0x12c;
            }
        }
    }
    
    for (int32_t i = 9; i > 0; )
    {
        *((i << 2) + 0x10a898) = *((i << 2) + 0x10a894);
        void* r1_2 = (i << 2) + 0x10a89c;
        *(r1_2 + 0x24) = *(r1_2 + 0x20);  /* "23" */
        i -= 1;
        *(r1_2 + 0x4c) = *(r1_2 + 0x48);
    }
    
    *0x10a898 = *arg1;
    *0x10a8c0 = arg1[1];
    *0x10a8e8 = arg1[2];
    *0x10a910 = arg1[4];
    int32_t r3_4 = *arg1;
    int32_t r5 = *0x103ed4;
    int32_t r7 = ((0x149 * (((r3_4 * r3_4) >> 8) - r5) + 0x800) >> 0xc) + r5;
    *0x103ed4 = r7;
    int32_t r5_1 = arg1[1];
    int32_t r5_3 = *0x103ed8;
    int32_t r5_4 = ((0x149 * (((r5_1 * r5_1) >> 8) - r5_3) + 0x800) >> 0xc) + r5_3;
    *0x103ed8 = r5_4;
    int32_t r6_14 = arg1[2];
    int32_t r7_1 = *0x103edc;
    int32_t r6_21 = ((0x149 * (((r6_14 * r6_14) >> 8) - r7_1) + 0x800) >> 0xc) + r7_1;
    *0x103edc = r6_21;
    int32_t r6_22 = r5_4 + r7 + r6_21;
    int32_t r3_6 = *0x103ee8;
    int32_t r7_2 = ((((*0x103ee4 - r3_6) << 3) + 0x200) >> 0xa) + r3_6;
    int32_t r5_13 = r7_2 - r3_6;
    
    if (r7_2 - r3_6 < 0)
        r5_13 = 0 - r5_13;
    
    *0x103ee8 = r7_2;
    *0x103ee4 = r6_22;
    *arg3 = r6_22;
    int32_t result;
    
    if (r6_22 < r2)
    {
        *0x103ee0 = 0;
        int32_t r4_5 = (*0x10a910 * *0x10a894 + 0x2000) >> 0xe;
        *0x10a914 = r4_5;
        result = arg1[3] - r4_5;
        
        for (int32_t i_1 = 0; i_1 < 0xa; )
        {
            int32_t r1_7 = i_1 << 2;
            *(0x10a81c + r1_7) = 0;
            *(r1_7 + 0x10a844) = 0;
            i_1 += 1;
            *(r1_7 + 0x10a86c) = 0;
        }
        
        *0x10a894 s>>= 2;
    }
    else
    {
        int32_t r2_2 = *0x103ee0 + 1;
        *0x103ee0 = r2_2;
        
        if (r2_2 == 0xfa)
        {
            int32_t i_2 = 0;
            *0x10a914 = 0;
            
            do
            {
                int32_t r7_3 = i_2 << 2;
                i_2 += 1;
                int32_t r7_6 = ((*(r7_3 + 0x10a898) * *(0x10a81c + r7_3) + 1) >> 2) + *0x10a914;
                *0x10a914 = r7_6;
                int32_t r6_31 = ((*(r7_3 + 0x10a8c0) * *(r7_3 + 0x10a844) + 1) >> 2) + r7_6;
                *0x10a914 = r6_31;
                *0x10a914 = ((*(r7_3 + 0x10a8e8) * *(r7_3 + 0x10a86c) + 1) >> 2) + r6_31;
            } while (i_2 < 0xa);
            
            int32_t r2_15 = (((*0x10a910 * *0x10a894 + 1) >> 2) + *0x10a914 + 0x800) >> 0xc;
            *0x10a914 = r2_15;
            int32_t result_1 = arg1[3] - r2_15;
            result = result_1;
            int32_t r0_2 = 0xc4a * result_1;
            int32_t r0_5 =
                0xff7feb2c(r0_2, r7 + r4, r2_15, 0x800, result, r7, r6_21, r5_4, arg1, arg2, arg3);
            int32_t r0_8 = 0xff7feb2c(r0_2, r5_4 + r4);
            int32_t r0_11 = 0xff7feb2c(r0_2, r6_21 + r4);
            
            for (int32_t i_3 = 0; i_3 < 0xa; )
            {
                int32_t r7_12 = i_3 << 2;
                *(0x10a81c + r7_12) += (r0_5 * *(r7_12 + 0x10a898) + 0x2000) >> 0xe;
                *(r7_12 + 0x10a844) += (r0_8 * *(r7_12 + 0x10a8c0) + 0x2000) >> 0xe;
                i_3 += 1;
                *(r7_12 + 0x10a86c) += (r0_11 * *(r7_12 + 0x10a8e8) + 0x2000) >> 0xe;
            }
            
            *0x103ee0 = 0xf9;
        }
        else
            result = 0;
        
        if (r5_13 > 0x898 && *0x103ee0 == 0xf9)
        {
            *0x103ee0 = 0;
            
            for (int32_t i_4 = 0; i_4 < 0xa; )
            {
                int32_t r3_10 = i_4 << 2;
                *(0x10a81c + r3_10) = 0;
                *(r3_10 + 0x10a844) = 0;
                i_4 += 1;
                *(r3_10 + 0x10a86c) = 0;
            }
            
            *0x10a894 s>>= 2;
        }
    }
    
    return result;
}

int32_t sub_118f4()
{
    for (int32_t i = 0; i < 0xa; )
    {
        int32_t r5_1 = i << 2;
        *(r5_1 + 0x10a898) = 0;
        *(r5_1 + 0x10a8c0) = 0;
        *(r5_1 + 0x10a8e8) = 0;
        *(0x10a81c + r5_1) = 0;
        *(r5_1 + 0x10a844) = 0;
        i += 1;
        *(r5_1 + 0x10a86c) = 0;
    }
    
    *0x10a914 = 0;
    *0x10a910 = 0;
    *0x10a894 = 0xffffcccd;
    __builtin_memset(0x103ed4, 0, 0x18);  /* ".06_240523" */
    return 0;
}

uint32_t sub_11940(int32_t* arg1)
{
    return sub_13a0c(arg1, 0x10a918);
}

int32_t sub_11950()
{
    int32_t i;
    
    for (i = 0; i < 3; )
    {
        int32_t r3_1 = i << 3;
        *(0x10a918 + r3_1) = 0;
        i += 1;
        *(r3_1 + 0x10a91c) = 0;
    }
    
    return i;
}

int32_t sub_1196c(int32_t arg1)
{
    int32_t r3 = arg1 << 0x14;  /* "3.00.06_240523" */
    
    if (r3 == 0xfff00000)
    {
        int32_t r4_1 = *0x103f70;
        
        if (r4_1 < 0x64)
            *0x103f70 = r4_1 + 1;
    }
    
    if (r3 != 0xfff00000)
    {
        *0x103f70 = 0;
        
        if (*0x103f6c == 0xffffffff)
            *0x103f6c = 0;
    }
    else if (*0x103f70 == 0x64)
        *0x103f6c = 0xffffffff;
    
    int32_t r4_3 = arg1 << 8;
    int32_t r6 = *0x103f54;
    
    if (!*0x103e45)
    {
        if (arg1 > 0xfff)
        {
            r4_3 -= 0x100000;
            *0x103e45 = 1;
        }
        
        int32_t r0 = *0x103f58;
        int32_t r7_1;
        
        r7_1 = r6 < r0 ? r0 - r6 : r6 - r0;
        
        int32_t r5_1;
        
        r5_1 = r4_3 < r6 ? r6 - r4_3 : r4_3 - r6;
        
        int32_t r0_1;
        
        r0_1 = r4_3 < r0 ? r0 - r4_3 : r4_3 - r0;
        
        if (r7_1 > 0x1400 || r5_1 > 0x1400)
        {
            if (*0x103e42)
                *0x103e42 -= 1;
            else if (0x64 - 0xff7feb2c(0x64 * r0_1, r5_1 + r7_1, 0x64) <= 0x42)
            {
                if (*0x103e43 == 2)
                {
                    *0x103e41 = 0;
                    
                    if (r7_1 > 0x9600 && r5_1 < 0x1400)
                        *0x103e43 = 1;
                }
                
                if (!*0x103e43)
                {
                    if (r7_1 >= 0x1400)
                    {
                        if (r5_1 > 0x6400)
                            goto label_11a7a;
                    }
                    else if (r5_1 > 0x1400 || r5_1 > 0x6400)
                    {
                    label_11a7a:
                        *0x103e41 = 3;
                        *0x103e43 = 2;
                    }
                }
            }
            else
            {
                *0x103e41 = 5;
                *0x103e43 = 1;
            }
        }
        else if (*0x103e42)
            *0x103e42 -= 1;
        
        int32_t r1_8 = *0x103e41;
        
        if (!r1_8)
        {
            if (*0x103e43 == 1)
            {
                *0x103e43 = 0;
                *0x103f44 = r4_3;
                *0x103f48 = r4_3;
            }
            
            if (*0x103e43 == 2)
                *0x103e43 = 0;
        }
        
        if (!*0x103e43)
        {
            int32_t r1_11 = *0x103f44;
            int32_t r2_8 = ((0x23d * (r4_3 - r1_11)) >> 0xc) + r1_11;
            *0x103f44 = r2_8;
            int32_t r1_12 = *0x103f48;
            *0x103f48 = ((0x329 * (r2_8 - r1_12)) >> 0xb) + r1_12;
        }
        else
            *0x103e41 = r1_8 - 1;
    }
    else
    {
        if (arg1 <= 0xfff)
            *0x103e45 = 0;
        else
        {
            r4_3 -= 0x100000;
            *0x103e45 = 1;
        }
        
        *0x103e43 = 0;
        *0x103e41 = 0;
        *0x103e42 = 5;
        *0x103f44 = r4_3;
        *0x103f48 = r4_3;
    }
    
    *0x103f58 = r6;
    *0x103f54 = r4_3;
    int32_t r4_4;
    
    if (!*0x103e44)
    {
        int32_t r1_14 = *0x103f64;
        int32_t r0_7 = *0x103f48;
        *0x103f64 = r0_7;
        r4_4 = r0_7 - r1_14;
        
        if (r0_7 == r1_14)
        {
            *0x103f4c = 0;
            *0x103f68 = 0;
        }
    }
    else
    {
        r4_4 = 0;
        *0x103e44 = 0;
        *0x103f64 = *0x103f48;
        *0x103f4c = 0;
        *0x103f68 = 0;
    }
    
    int32_t r1_15 = *0x103f5c;
    int32_t r0_8 = *0x103f60;
    int32_t r7_2;
    
    r7_2 = r1_15 < r0_8 ? r0_8 - r1_15 : r1_15 - r0_8;
    
    int32_t r6_1;
    
    r6_1 = r4_4 < r1_15 ? r1_15 - r4_4 : r4_4 - r1_15;
    
    int32_t r0_9;
    
    r0_9 = r4_4 < r0_8 ? r0_8 - r4_4 : r4_4 - r0_8;
    
    *0x103f5c = r4_4;
    *0x103f60 = r1_15;
    
    if (r7_2 > 0x140 || r6_1 > 0x140)
    {
        if (0x64 - 0xff7feb2c(0x64 * r0_9, r6_1 + r7_2, 0x64) <= 0x50)
        {
            if (r7_2 >= 0x140)
            {
                if (r6_1 <= 0x12c0)
                    goto label_11b6e;
            }
            else if (r6_1 <= 0x140 && r6_1 <= 0x12c0)
                goto label_11b6e;
            
            r4_4 = *0x103f68;
            goto label_11b72;
        }
        
        r4_4 = 0;
        *0x103f4c = 0;
        *0x103f68 = 0;
    }
    else
    {
    label_11b6e:
        *0x103f68 = r4_4;
    label_11b72:
        int32_t r0_13 = 0x10000;
        
        if (r4_4 <= 0x10000)
            r0_13 = 0xffff0000;
        
        if (r4_4 > 0x10000 || r4_4 < 0xffff0000)
            r4_4 = r0_13;
    }
    
    int32_t r1_17 = *0x103f4c;
    int32_t r0_14 = r4_4 << 6;
    int32_t r1_18 = ((0x148 * (r0_14 - r1_17)) >> 0xf) + r1_17;
    *0x103f4c = r1_18;
    int32_t r0_15 = r0_14 - r1_18;
    
    if (r0_14 - r1_18 < 0)
        r0_15 = 0 - r0_15;
    
    if (r0_15 > 0x10000)
        r0_15 = 0x10000;
    
    int32_t r0_16 = *0x103f50;
    int32_t r0_17 = ((0x105 * ((r0_15 << 6) - r0_16)) >> 0xf) + r0_16;
    *0x103f50 = r0_17;
    
    if (r0_17 <= 0x100000)
    {
        if (r0_17 <= 0x55000)
        {
            int32_t r1_23 = *0x103f6c;
            
            if (r1_23 < 0x190 && r1_23 >= 0)
                *0x103f6c = r1_23 + 1;
        }
        
        if (r0_17 > 0x55000)
            goto label_11be0;
        
        int32_t r0_19 = *0x103f6c;
        
        if (r0_19 >= 0)
        {
            if (r0_19 >= 0x190)
                return 0xffffffff;
            
            return 0x64;
        }
    }
    else
    {
        *0x103f50 = 0x100000;
    label_11be0:
        
        if (*0x103f6c >= 0)
        {
            *0x103f6c = 0;
            return 0x64;
        }
    }
    
    return 0x65;
}

int32_t sub_11c18()
{
    *0x103f44 = 0;
    *0x103f48 = 0;
    *0x103f4c = 0;
    __builtin_memset(0x103f54, 0, 0x20);  /* "23" */
    *0x103f50 = 0x55000;
    *0x103e41 = 0;
    *0x103e42 = 5;
    *0x103e43 = 0;
    *0x103e44 = 1;
    *0x103e45 = 1;
    return 1;
}

int32_t* sub_11c50(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t* var_1c = arg2;
    int32_t* var_20 = arg1;
    int32_t var_48 = arg1[3] << 4;
    int32_t var_44 = arg1[4] << 4;
    int32_t var_40 = *arg1 << 4;
    int32_t var_3c = arg1[1] << 4;
    int32_t r0_1 = arg1[2] << 4;
    int32_t r4 = 0;
    int32_t var_34;
    
    while (true)
    {
        void* r1_11 = 0x94 * r4;
        int32_t r1_14;
        
        if (*(r1_11 + 0x10a558) == 1)
        {
            int32_t r2_32 = (&var_48)[r4];
            
            if (r2_32 <= 0xfff0)
                *(r1_11 + 0x10a558) = 0;
            else
                (&var_48)[r4] = r2_32 & 0xfff0;
            
            *(0x10a538 + r1_11) = (&var_48)[r4] - *(r1_11 + 0x10a548);
            r1_14 = *(r1_11 + 0x10a548);
        }
        else
        {
            int32_t r2_1 = (&var_48)[r4];
            
            if (r2_1 > 0xfff0)
            {
                (&var_48)[r4] = r2_1 & 0xfff0;
                *(r1_11 + 0x10a558) = 1;
            }
            
            int32_t r3_1 = (&var_48)[r4];
            int32_t r2_3 = *(0x10a538 + r1_11);
            int32_t r2_4 = ((0x11eb * (r3_1 - r2_3)) >> 0xf) + r2_3;
            *(0x10a538 + r1_11) = r2_4;
            r1_14 = (0x9d70 * (r3_1 - r2_4)) >> 0xf;
            *(r1_11 + 0x10a548) = r1_14;
        }
        
        int32_t r2_5 = *(r1_11 + 0x10a53c);
        int32_t r2_6 = ((0x11eb * (r1_14 - r2_5)) >> 0xf) + r2_5;
        *(r1_11 + 0x10a53c) = r2_6;
        int32_t r1_17 = (0x9d70 * (r1_14 - r2_6)) >> 0xf;
        *(r1_11 + 0x10a54c) = r1_17;
        int32_t r2_7 = *(r1_11 + 0x10a540);
        int32_t r2_8 = ((0x11eb * (r1_17 - r2_7)) >> 0xf) + r2_7;
        *(r1_11 + 0x10a540) = r2_8;
        int32_t r1_20 = (0x9d70 * (r1_17 - r2_8)) >> 0xf;
        *(r1_11 + 0x10a550) = r1_20;
        int32_t r2_9 = *(r1_11 + 0x10a544);
        int32_t r2_10 = ((0x11eb * (r1_20 - r2_9)) >> 0xf) + r2_9;
        *(r1_11 + 0x10a544) = r2_10;
        *(r1_11 + 0x10a554) = (0x9d70 * (r1_20 - r2_10)) >> 0xf;
        
        for (int32_t i = 0; i < 0x1b; )  /* "_240523" */
        {
            void* r2_12 = r1_11 + 0x10a538 + (i << 2);
            i += 1;
            *(r2_12 + 0x24) = *(r2_12 + 0x28);
        }
        
        int32_t r2_13 = *(r1_11 + 0x10a554);
        *(r1_11 + 0x10a5c8) = r2_13;
        int32_t r2_25 = 0x5b4 * (r2_13 + *(r1_11 + 0x10a55c))
            + 0xfffff30f * (*(r1_11 + 0x10a5c4) + *(r1_11 + 0x10a560))
            + 0xfffff947 * (*(r1_11 + 0x10a5c0) + *(r1_11 + 0x10a564))
            + 0xffffff07 * (*(r1_11 + 0x10a5bc) + *(r1_11 + 0x10a568))
            + 0x53c * (*(r1_11 + 0x10a5b8) + *(r1_11 + 0x10a56c))
            + 0x868 * (*(r1_11 + 0x10a5b4) + *(r1_11 + 0x10a570))
            + 0x512 * (*(r1_11 + 0x10a5b0) + *(r1_11 + 0x10a574));
        int32_t r2_29 = r2_25 + 0xfffffbce * (*(r1_11 + 0x10a5ac) + *(r1_11 + 0x10a578))
            + 0xfffff286 * (*(r1_11 + 0x10a5a8) + *(r1_11 + 0x10a57c))
            + 0xfffff1ae * (*(r1_11 + 0x10a5a4) + *(r1_11 + 0x10a580))
            + 0xfffffeed * (*(r1_11 + 0x10a5a0) + *(r1_11 + 0x10a584));
        r4 += 1;
        (&var_34)[r4] = (r2_29 + 0x1887 * (*(r1_11 + 0x10a59c) + *(r1_11 + 0x10a588))
            + 0x34fd * (*(r1_11 + 0x10a598) + *(r1_11 + 0x10a58c))
            + 0x47ae * (*(r1_11 + 0x10a594) + *(r1_11 + 0x10a590))) >> 0x10;
            /* "R02_3.00.06_240523" */
        
        if (r4 >= 5)
            break;
        
        if (r4 == 2)
            var_40 = sub_d928(var_40 * var_40 + r0_1 * r0_1);
    }
    
    arg2[3] = var_34;
    int32_t var_30;
    arg2[4] = var_30;
    int32_t var_2c;
    *arg2 = var_2c;
    int32_t var_28;
    arg2[1] = var_28;
    int32_t var_24;
    arg2[2] = var_24;
    *arg3 = *0x10a53c;
    return arg3;
}

int32_t sub_11e6c()
{
    int32_t i;
    
    for (i = 0; i < 5; i += 1)
    {
        for (int32_t j = 0; j < 4; )
        {
            (i * 0x94 + 0x10a538)[j + 4] = 0;
            j += 1;
            (i * 0x94 + 0x10a538)[j] = 0;
        }
        
        *(i * 0x94 + 0x10a558) = 1;
        
        for (int32_t j_1 = 0; j_1 < 0x1c; )  /* "240523" */
        {
            void* r4_3 = &(i * 0x94 + 0x10a538)[j_1];
            j_1 += 1;
            *(r4_3 + 0x24) = 0;
        }
    }
    
    return i;
}

int32_t sub_11ea8(int32_t arg1)
{
    int32_t r2 = *0x103e60;
    
    if (arg1 > r2 + &data_2800)
    {
        r2 += 0x1a;  /* "6_240523" */
        *0x103e60 = r2;
    }
    else if (arg1 > r2)
    {
        r2 += (0x1b37 * (arg1 - r2) + 0x80000) >> 0x14;  /* "3.00.06_240523" */
        *0x103e60 = r2;
    }
    
    if (arg1 < r2 - &data_2800)
        *0x103e60 = r2 - 0x4c;
    else if (arg1 < r2)
        *0x103e60 = ((0x511b * (arg1 - r2) + 0x80000) >> 0x14) + r2;  /* "3.00.06_240523" */
    
    return *0x103e60 >> 4;
}

uint32_t sub_11f04(int32_t arg1, uint32_t arg2, int32_t arg3, char* arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    char* var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_24 = arg1;
    int32_t var_58[0xd];
    0xff7fec0a(&var_58, 0x30);  /* "R02_V3.0" */
    int32_t var_ac[0xd];
    0xff7febd8(&var_ac, 0x81f720, 0x30);  /* "R02_V3.0" */
    int32_t var_5c = 2;
    int32_t i = 0;
    uint32_t i_119 = arg6;
    int32_t r1 = 0;
    
    if (i_119 == 8)
        var_5c = 6;
    
    do
    {
        int32_t r0_3 = *(0x81f6d0 + (i << 2));
        int32_t r0_4 = arg1 - r0_3;
        
        if (arg1 - r0_3 < 0)
            r0_4 = 0 - r0_4;
        
        i += 1;
        var_58[i] = r0_4;
    } while (i < 0xc);
    
    int32_t r0_5 = 0;
    int32_t var_64 = 0xb;
    
    while (true)
    {
        int32_t r2_2 = var_58[r0_5];
        int32_t r3_1 = var_58[var_64];
        
        if (r2_2 > r3_1)
        {
            var_58[r0_5] = r3_1;
            var_58[var_64] = r2_2;
            r1 = var_ac[r0_5];
            var_ac[r0_5] = var_ac[var_64];
            var_ac[var_64] = r1;
        }
        
        int32_t r2 = var_64 - 1;
        var_64 = r2;
        
        while (r2 <= r0_5)
        {
            r0_5 += 1;
            
            if (r0_5 < 0xb)
            {
                r2 = 0xb;
                var_64 = 0xb;
            }
            else
            {
                uint32_t r2_4 = *0x103e40;
                
                if (!(arg2 & ~r2_4))
                {
                    if (!r2_4)
                    {
                        if (arg1 - 0x3c00 > &data_2800)
                        {
                            for (int32_t i_1 = 0; i_1 < 0xc; i_1 += 1)
                                arg4[i_1] = 1;
                        }
                        else
                        {
                            int32_t r0_15 = 3;
                        label_1202a:
                            arg4[var_ac[r0_15]] = 0;
                            
                            while (true)
                            {
                                r0_15 += 1;
                                
                                if (r0_15 >= 0xc)
                                {
                                    *0x103e40 = 1;
                                    break;
                                }
                                
                                if (r0_15 >= 3)
                                    goto label_1202a;
                                
                                arg4[var_ac[r0_15]] = 1;
                            }
                        }
                    }
                    else if (!arg2)
                    {
                        int32_t i_2 = 1;
                        arg4[var_ac[0]] = 1;
                        
                        do
                        {
                            int32_t r2_6 = var_ac[i_2];
                            i_2 += 1;
                            arg4[r2_6] = 0;
                        } while (i_2 < 0xc);
                        
                        char* r2_7 = var_ac[0];
                        int32_t r1_4 = *(0x81f6d0 + (r2_7 << 2)) - arg1;
                        
                        if (r1_4 > 0)
                        {
                            if (r2_7 > 0)
                                *(r2_7 + arg4 - 1) = 1;
                            
                            if (r1_4 < 0x500)
                            {
                                char* r1_5 = var_ac[0];
                                
                                if (r1_5 < 0xb)
                                    *(r1_5 + &arg4[1]) = 1;
                            }
                        }
                        else if (r1_4 < 0)
                        {
                            if (r2_7 < 0xb)
                                *(r2_7 + &arg4[1]) = 1;
                            
                            if (r1_4 > 0xfffffb00)
                            {
                                char* r1_6 = var_ac[0];
                                
                                if (r1_6 > 0)
                                    *(r1_6 + arg4 - 1) = 1;
                            }
                        }
                        
                        r1 = 0;
                        
                        for (int32_t i_3 = 0; i_3 < 0xc; i_3 += 1)
                        {
                            if (arg4[i_3] == 1)
                            {
                                int32_t r3_13 = var_ac[i_3];
                                
                                if (r3_13 > r1)
                                    r1 = r3_13;
                            }
                        }
                        
                        if (!i_119 || i_119 == 2)
                        {
                        label_1229c:
                            
                            if (arg3 < 0x20)  /* "23" */
                            {
                                if (arg1 < 0x5000)
                                {
                                    for (int32_t i_4 = 4; i_4 < 0xc; i_4 += 1)
                                        arg4[i_4] = 0;
                                    
                                    for (int32_t i_5 = 0; i_5 < 4; i_5 += 1)
                                        arg4[i_5] = 1;
                                }
                                
                                if (arg1 - 0x5000 < 0x1400)
                                {
                                    for (int32_t i_6 = 5; i_6 < 0xc; i_6 += 1)
                                        arg4[i_6] = 0;
                                    
                                    for (int32_t i_7 = 0; i_7 < 5; i_7 += 1)
                                        arg4[i_7] = 1;
                                }
                                
                                if (arg1 - 0x6400 < &data_2800)
                                {
                                    for (int32_t i_8 = 5; i_8 < 0xc; i_8 += 1)
                                        arg4[i_8] = 0;
                                    
                                    for (int32_t i_9 = 1; i_9 < 5; i_9 += 1)
                                        arg4[i_9] = 1;
                                }
                                
                                if (arg1 >= 0x8c00)
                                {
                                    for (int32_t i_10 = 0; i_10 < 0xc; i_10 += 1)
                                        arg4[i_10] = 1;
                                }
                            }
                            
                            if (arg3 - 0x20 < 0x80)  /* "23" */
                            {
                                if (arg1 < 0x5f00)
                                {
                                    for (int32_t i_11 = 5; i_11 < 0xc; i_11 += 1)
                                        arg4[i_11] = 0;
                                    
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    
                                    for (int32_t i_12 = 2; i_12 < 5; i_12 += 1)
                                        arg4[i_12] = 1;
                                }
                                
                                if (arg1 - 0x5f00 < 0x1400)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    
                                    for (int32_t i_13 = 6; i_13 < 0xc; i_13 += 1)
                                        arg4[i_13] = 0;
                                    
                                    for (int32_t i_14 = 3; i_14 < 6; i_14 += 1)
                                        arg4[i_14] = 1;
                                }
                                
                                if (arg1 - 0x7300 < 0x1900)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    
                                    for (int32_t i_15 = 6; i_15 < 0xc; i_15 += 1)
                                        arg4[i_15] = 0;
                                    
                                    for (int32_t i_16 = 2; i_16 < 6; i_16 += 1)
                                        arg4[i_16] = 1;
                                }
                                
                                if (arg1 >= 0x8c00)
                                {
                                    for (int32_t i_17 = 0; i_17 < 9; i_17 += 1)
                                        arg4[i_17] = 1;
                                    
                                    arg4[9] = 0;
                                    arg4[0xa] = 0;
                                    arg4[0xb] = 0;
                                }
                            }
                            
                            if (arg3 - 0xa0 < 0xf0)
                            {
                                if (arg1 < 0x5a00)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    
                                    for (int32_t i_18 = 7; i_18 < 0xc; i_18 += 1)
                                        arg4[i_18] = 0;
                                    
                                    for (int32_t i_19 = 2; i_19 < 7; i_19 += 1)
                                        arg4[i_19] = 1;
                                }
                                
                                if (arg1 - 0x5a00 < &data_2800)
                                {
                                    *arg4 = 0;
                                    
                                    for (int32_t i_20 = 6; i_20 < 0xc; i_20 += 1)
                                        arg4[i_20] = 0;
                                    
                                    for (int32_t i_21 = 1; i_21 < 6; i_21 += 1)
                                        arg4[i_21] = 1;
                                }
                                
                                if (arg1 - 0x8200 < 0x1400)
                                {
                                    for (int32_t i_22 = 0; i_22 < 4; i_22 += 1)
                                        arg4[i_22] = 0;
                                    
                                    for (int32_t i_23 = 8; i_23 < 0xc; i_23 += 1)
                                        arg4[i_23] = 0;
                                    
                                    for (int32_t i_24 = 4; i_24 < 8; i_24 += 1)
                                        arg4[i_24] = 1;
                                }
                                
                                if (arg1 - 0x9600 < 0xa00)
                                {
                                    for (int32_t i_25 = 0; i_25 < 4; i_25 += 1)
                                        arg4[i_25] = 0;
                                    
                                    for (int32_t i_26 = 4; i_26 < 0xc; i_26 += 1)
                                        arg4[i_26] = 1;
                                }
                                
                                if (arg1 >= 0xa000)
                                {
                                    for (int32_t i_27 = 0; i_27 < 5; i_27 += 1)
                                        arg4[i_27] = 0;
                                    
                                    for (int32_t i_28 = 5; i_28 < 0xc; i_28 += 1)
                                        arg4[i_28] = 1;
                                }
                            }
                            
                            if (arg3 >= 0x190)
                            {
                                if (arg1 < 0x4600)
                                {
                                    for (int32_t i_29 = 4; i_29 < 0xc; i_29 += 1)
                                        arg4[i_29] = 0;
                                    
                                    for (int32_t i_30 = 0; i_30 < 4; i_30 += 1)
                                        arg4[i_30] = 1;
                                }
                                
                                if (arg1 - 0x4600 < 0x1e00)
                                {
                                    for (int32_t i_31 = 5; i_31 < 0xc; i_31 += 1)
                                        arg4[i_31] = 0;
                                    
                                    for (int32_t i_32 = 0; i_32 < 5; i_32 += 1)
                                        arg4[i_32] = 1;
                                }
                                
                                if (arg1 - 0x6400 < &data_2800)
                                {
                                    for (int32_t i_33 = 7; i_33 < 0xc; i_33 += 1)
                                        arg4[i_33] = 0;
                                    
                                    for (int32_t i_34 = 0; i_34 < 8; i_34 += 1)
                                        arg4[i_34] = 1;
                                }
                                
                                if (arg1 >= 0x8c00)
                                {
                                    for (int32_t i_35 = 0; i_35 < 0xc; i_35 += 1)
                                        arg4[i_35] = 1;
                                }
                            }
                        }
                        else if (i_119 == 0x12)  /* "2_3.00.06_240523" */
                        {
                        label_12614:
                            
                            if (arg3 < 0x20)  /* "23" */
                            {
                                for (int32_t i_36 = 0; i_36 < 0xc; i_36 += 1)
                                    arg4[i_36] = 1;
                            }
                            
                            if (arg3 >= 0x20 || arg3 >= 0x20)  /* "23" */
                            {
                                if (arg1 < 0x4600)
                                {
                                    for (int32_t i_37 = 7; i_37 < 0xc; i_37 += 1)
                                        arg4[i_37] = 0;
                                    
                                    for (int32_t i_38 = 0; i_38 < 7; i_38 += 1)
                                        arg4[i_38] = 1;
                                }
                                
                                if (arg1 - 0x4600 < 0x1e00)
                                {
                                    *arg4 = 0;
                                    
                                    for (int32_t i_39 = 8; i_39 < 0xc; i_39 += 1)
                                        arg4[i_39] = 0;
                                    
                                    for (int32_t i_40 = 1; i_40 < 8; i_40 += 1)
                                        arg4[i_40] = 1;
                                }
                                
                                if (arg1 - 0x6400 < 0x1e00)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    
                                    for (int32_t i_41 = 9; i_41 < 0xc; i_41 += 1)
                                        arg4[i_41] = 0;
                                    
                                    for (int32_t i_42 = 2; i_42 < 8; i_42 += 1)
                                        arg4[i_42] = 1;
                                }
                                
                                if (arg1 >= 0x8200)
                                {
                                    for (int32_t i_43 = 0; i_43 < 5; i_43 += 1)
                                        arg4[i_43] = 0;
                                    
                                    for (int32_t i_44 = 5; i_44 < 0xc; i_44 += 1)
                                        arg4[i_44] = 1;
                                }
                            }
                        }
                        else if (i_119 == 3)
                        {
                        label_124e6:
                            
                            if (arg3 < 0x40)
                            {
                                for (int32_t i_45 = 0; i_45 < 0xc; i_45 += 1)
                                    arg4[i_45] = 1;
                            }
                            
                            if (arg3 - 0x40 <= 0x60)
                            {
                                if (arg1 < 0x4600)
                                {
                                    *arg4 = 0;
                                    
                                    for (int32_t i_46 = 7; i_46 < 0xc; i_46 += 1)
                                        arg4[i_46] = 0;
                                    
                                    for (int32_t i_47 = 1; i_47 < 7; i_47 += 1)
                                        arg4[i_47] = 1;
                                }
                                
                                if (arg1 - 0x4600 < 0x1400)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    
                                    for (int32_t i_48 = 9; i_48 < 0xc; i_48 += 1)
                                        arg4[i_48] = 0;
                                    
                                    for (int32_t i_49 = 2; i_49 < 8; i_49 += 1)
                                        arg4[i_49] = 1;
                                }
                                
                                if (arg1 - 0x5a00 < 0x3200)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    
                                    for (int32_t i_50 = 9; i_50 < 0xc; i_50 += 1)
                                        arg4[i_50] = 0;
                                    
                                    for (int32_t i_51 = 3; i_51 < 9; i_51 += 1)
                                        arg4[i_51] = 1;
                                }
                                
                                if (arg1 >= 0x8c00)
                                {
                                    for (int32_t i_52 = 0; i_52 < 4; i_52 += 1)
                                        arg4[i_52] = 0;
                                    
                                    for (int32_t i_53 = 4; i_53 < 0xc; i_53 += 1)
                                        arg4[i_53] = 1;
                                }
                            }
                            
                            if (arg3 >= 0xa0)
                            {
                                if (arg1 < 0x5000)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    
                                    for (int32_t i_54 = 9; i_54 < 0xc; i_54 += 1)
                                        arg4[i_54] = 0;
                                    
                                    for (int32_t i_55 = 3; i_55 < 9; i_55 += 1)
                                        arg4[i_55] = 1;
                                }
                                
                                if (arg1 - 0x5000 < 0x1400)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    
                                    for (int32_t i_56 = 0xa; i_56 < 0xc; i_56 += 1)
                                        arg4[i_56] = 0;
                                    
                                    for (int32_t i_57 = 4; i_57 < 0xa; i_57 += 1)
                                        arg4[i_57] = 1;
                                }
                                
                                if (arg1 - 0x6400 < &data_2800)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    arg4[3] = 0;
                                    arg4[0xb] = 0;
                                    
                                    for (int32_t i_58 = 4; i_58 < 0xb; i_58 += 1)
                                        arg4[i_58] = 1;
                                }
                            }
                            
                            if (arg3 >= 0xa0 && arg1 >= 0x8c00)
                            {
                                for (int32_t i_59 = 0; i_59 < 5; i_59 += 1)
                                    arg4[i_59] = 0;
                                
                                for (int32_t i_60 = 5; i_60 < 0xc; i_60 += 1)
                                    arg4[i_60] = 1;
                            }
                            else if (i_119 == 2)
                                goto label_1229c;
                        }
                        else
                        {
                            int32_t r7_7 = var_5c << 4;
                            
                            if (r7_7 > arg3)
                            {
                                if (i_119 == 8)
                                {
                                    for (int32_t i_61 = 0; i_61 < 0xc; i_61 += 1)
                                        arg4[i_61] = 1;
                                }
                                else
                                {
                                    if (arg1 < 0x5000)
                                    {
                                        for (int32_t i_62 = 0; i_62 < 0xc; i_62 += 1)
                                            arg4[i_62] = 1;
                                    }
                                    
                                    if (arg1 - 0x6400 < &data_2800)
                                    {
                                        *arg4 = 0;
                                        arg4[1] = 0;
                                        
                                        for (int32_t i_63 = 7; i_63 < 0xc; i_63 += 1)
                                            arg4[i_63] = 0;
                                        
                                        for (int32_t i_64 = 1; i_64 < 7; i_64 += 1)
                                            arg4[i_64] = 1;
                                    }
                                    
                                    if (arg1 >= 0x8c00)
                                    {
                                        *arg4 = 0;
                                        arg4[1] = 0;
                                        arg4[2] = 0;
                                        arg4[0xa] = 0;
                                        arg4[0xb] = 0;
                                        
                                        for (int32_t i_65 = r1 + 1; i_65 < 0xa; i_65 += 1)
                                            arg4[i_65] = 1;
                                    }
                                }
                            }
                            
                            if (r7_7 > arg3)
                            {
                            label_121ec:
                                
                                if (arg3 >= 0xa0)
                                    goto label_121f6;
                            }
                            else
                            {
                                if (arg3 < 0xa0)
                                {
                                    if (arg1 < 0x4600)
                                    {
                                        for (int32_t i_66 = 3; i_66 < 0xc; i_66 += 1)
                                            arg4[i_66] = 0;
                                        
                                        for (int32_t i_67 = r1 + 1; i_67 < 4; i_67 += 1)
                                            arg4[i_67] = 1;
                                    }
                                    
                                    if (arg1 - 0x4600 < 0x1400)
                                    {
                                        *arg4 = 0;
                                        arg4[1] = 0;
                                        arg4[2] = 0;
                                        
                                        for (int32_t i_68 = 8; i_68 < 0xc; i_68 += 1)
                                            arg4[i_68] = 0;
                                        
                                        for (int32_t i_69 = 3; i_69 < 8; i_69 += 1)
                                            arg4[i_69] = 1;
                                    }
                                    
                                    if (arg1 - 0x5a00 < 0x3200)
                                    {
                                        *arg4 = 0;
                                        arg4[1] = 0;
                                        arg4[2] = 0;
                                        
                                        for (int32_t i_70 = 8; i_70 < 0xc; i_70 += 1)
                                            arg4[i_70] = 0;
                                        
                                        for (int32_t i_71 = 3; i_71 < 8; i_71 += 1)
                                            arg4[i_71] = 1;
                                    }
                                    
                                    if (arg1 >= 0x8c00)
                                    {
                                        for (int32_t i_72 = 0; i_72 < 5; i_72 += 1)
                                            arg4[i_72] = 0;
                                        
                                        for (int32_t i_73 = 5; i_73 < 0xc; i_73 += 1)
                                            arg4[i_73] = 1;
                                    }
                                    
                                    goto label_121ec;
                                }
                                
                            label_121f6:
                                
                                if (arg1 < 0x4600)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    
                                    for (int32_t i_74 = 4; i_74 < 0xc; i_74 += 1)
                                        arg4[i_74] = 0;
                                    
                                    for (int32_t i_75 = r1 + 1; i_75 < 4; i_75 += 1)
                                        arg4[i_75] = 1;
                                }
                                
                                if (arg1 - 0x4600 < 0x1e00)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    
                                    for (int32_t i_76 = 6; i_76 < 0xc; i_76 += 1)
                                        arg4[i_76] = 0;
                                    
                                    for (int32_t i_77 = r1 + 1; i_77 < 6; i_77 += 1)
                                        arg4[i_77] = 1;
                                }
                                
                                if (arg1 - 0x6400 < &data_2800)
                                {
                                    *arg4 = 0;
                                    arg4[1] = 0;
                                    arg4[2] = 0;
                                    arg4[3] = 0;
                                    
                                    for (int32_t i_78 = 9; i_78 < 0xc; i_78 += 1)
                                        arg4[i_78] = 0;
                                    
                                    for (int32_t i_79 = 4; i_79 < 9; i_79 += 1)
                                        arg4[i_79] = 1;
                                }
                                
                                if (arg1 >= 0x8c00)
                                {
                                    for (int32_t i_80 = 0; i_80 < 5; i_80 += 1)
                                        arg4[i_80] = 0;
                                    
                                    for (int32_t i_81 = r1 + 1; i_81 < 0xc; i_81 += 1)
                                        arg4[i_81] = 1;
                                }
                            }
                            
                            if (i_119 == 3)
                                goto label_124e6;
                            
                            if (i_119 == 0x12)  /* "2_3.00.06_240523" */
                                goto label_12614;
                            
                            if (!i_119 || i_119 == 2)
                                goto label_1229c;
                        }
                    }
                    else
                    {
                        for (int32_t i_82 = 0; i_82 < 0xc; i_82 += 1)
                            arg4[i_82] = 1;
                    }
                    
                    if (arg6 == 2)
                    {
                        if (arg3 <= 0x20)  /* "23" */
                        {
                            for (int32_t i_83 = 0; i_83 < 0xc; i_83 += 1)
                                arg4[i_83] = 1;
                        }
                        else if (arg3 <= 0xf0)
                        {
                            if (arg1 < 0x5a00)
                            {
                                for (int32_t i_84 = 5; i_84 < 0xc; i_84 += 1)
                                    arg4[i_84] = 0;
                                
                                for (int32_t i_85 = 0; i_85 < 5; i_85 += 1)
                                    arg4[i_85] = 1;
                            }
                            
                            if (arg1 - 0x5a00 < 0x1400)
                            {
                                *arg4 = 0;
                                
                                for (int32_t i_86 = 5; i_86 < 0xc; i_86 += 1)
                                    arg4[i_86] = 0;
                                
                                for (int32_t i_87 = 1; i_87 < 5; i_87 += 1)
                                    arg4[i_87] = 1;
                            }
                            
                            if (arg1 - 0x6e00 < 0xf00)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                arg4[2] = 0;
                                
                                for (int32_t i_88 = 7; i_88 < 0xc; i_88 += 1)
                                    arg4[i_88] = 0;
                                
                                for (int32_t i_89 = 3; i_89 < 7; i_89 += 1)
                                    arg4[i_89] = 1;
                            }
                            
                            if (arg1 - 0x7d00 < 0xf00)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                arg4[2] = 0;
                                arg4[3] = 0;
                                
                                for (int32_t i_90 = 8; i_90 < 0xc; i_90 += 1)
                                    arg4[i_90] = 0;
                                
                                for (int32_t i_91 = 4; i_91 < 8; i_91 += 1)
                                    arg4[i_91] = 1;
                            }
                            
                            if (arg1 >= 0x8c00)
                            {
                                for (int32_t i_92 = 0; i_92 < 5; i_92 += 1)
                                    arg4[i_92] = 0;
                                
                                for (int32_t i_93 = 5; i_93 < 0xc; i_93 += 1)
                                    arg4[i_93] = 1;
                            }
                        }
                        else if (arg3 > 0x190)
                        {
                            if (arg1 < 0x4600)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                
                                for (int32_t i_94 = 4; i_94 < 0xc; i_94 += 1)
                                    arg4[i_94] = 0;
                                
                                for (int32_t i_95 = r1 + 1; i_95 < 4; i_95 += 1)
                                    arg4[i_95] = 1;
                            }
                            
                            if (arg1 - 0x4600 < 0x1e00)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                arg4[2] = 0;
                                
                                for (int32_t i_96 = 6; i_96 < 0xc; i_96 += 1)
                                    arg4[i_96] = 0;
                                
                                while (true)
                                {
                                    r1 += 1;
                                    
                                    if (r1 >= 6)
                                        break;
                                    
                                    arg4[r1] = 1;
                                }
                            }
                            
                            if (arg1 - 0x6400 < &data_2800)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                arg4[2] = 0;
                                arg4[3] = 0;
                                
                                for (int32_t i_97 = 9; i_97 < 0xc; i_97 += 1)
                                    arg4[i_97] = 0;
                                
                                for (int32_t i_98 = 4; i_98 < 9; i_98 += 1)
                                    arg4[i_98] = 1;
                            }
                            
                            if (arg1 - 0x8c00 < 0x1400)
                            {
                                arg4[0xa] = 0;
                                arg4[0xb] = 0;
                                
                                for (int32_t i_99 = 0; i_99 < 6; i_99 += 1)
                                    arg4[i_99] = 0;
                                
                                for (int32_t i_100 = 6; i_100 < 0xa; i_100 += 1)
                                    arg4[i_100] = 1;
                            }
                            
                            if (arg1 >= 0xa000)
                            {
                                arg4[0xb] = 0;
                                
                                for (int32_t i_101 = 0; i_101 < 6; i_101 += 1)
                                    arg4[i_101] = 0;
                                
                                for (int32_t i_102 = 6; i_102 < 0xb; i_102 += 1)
                                    arg4[i_102] = 1;
                            }
                        }
                        else
                        {
                            if (arg1 <= 0x6400)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                arg4[2] = 0;
                                arg4[3] = 0;
                                
                                for (int32_t i_103 = 8; i_103 < 0xc; i_103 += 1)
                                    arg4[i_103] = 0;
                                
                                for (int32_t i_104 = 4; i_104 < 8; i_104 += 1)
                                    arg4[i_104] = 1;
                            }
                            
                            if (arg1 - 0x6400 < 0x1400)
                            {
                                *arg4 = 0;
                                arg4[1] = 0;
                                arg4[2] = 0;
                                
                                for (int32_t i_105 = 6; i_105 < 0xc; i_105 += 1)
                                    arg4[i_105] = 0;
                                
                                for (int32_t i_106 = 3; i_106 < 6; i_106 += 1)
                                    arg4[i_106] = 1;
                            }
                            
                            if (arg1 - 0x7800 < 0xf00)
                            {
                                for (int32_t i_107 = 0; i_107 < 5; i_107 += 1)
                                    arg4[i_107] = 0;
                                
                                for (int32_t i_108 = 7; i_108 < 0xc; i_108 += 1)
                                    arg4[i_108] = 0;
                                
                                for (int32_t i_109 = 5; i_109 < 7; i_109 += 1)
                                    arg4[i_109] = 1;
                            }
                            
                            if (arg1 - 0x8700 < 0xf00)
                            {
                                for (int32_t i_110 = 0; i_110 < 6; i_110 += 1)
                                    arg4[i_110] = 0;
                                
                                for (int32_t i_111 = 8; i_111 < 0xc; i_111 += 1)
                                    arg4[i_111] = 0;
                                
                                for (int32_t i_112 = 6; i_112 < 8; i_112 += 1)
                                    arg4[i_112] = 1;
                            }
                            
                            if (arg1 - 0x9600 < 0xf00)
                            {
                                for (int32_t i_113 = 0; i_113 < 7; i_113 += 1)
                                    arg4[i_113] = 0;
                                
                                for (int32_t i_114 = 0xa; i_114 < 0xc; i_114 += 1)
                                    arg4[i_114] = 0;
                                
                                for (int32_t i_115 = 7; i_115 < 0xa; i_115 += 1)
                                    arg4[i_115] = 1;
                            }
                            
                            if (arg1 >= 0xa500)
                            {
                                for (int32_t i_116 = 0; i_116 < 7; i_116 += 1)
                                    arg4[i_116] = 0;
                                
                                arg4[0xb] = 0;
                                
                                for (int32_t i_117 = 7; i_117 < 0xb; i_117 += 1)
                                    arg4[i_117] = 1;
                            }
                        }
                    }
                }
                else
                {
                    *arg4 = 0;
                    int32_t r0_8 = 0;
                label_11fb6:
                    arg4[r0_8] = 1;
                    
                    while (true)
                    {
                        r0_8 += 1;
                        
                        if (r0_8 >= 0xc)
                            break;
                        
                        if (r0_8 < 6)
                            goto label_11fb6;
                        
                        arg4[r0_8] = 0;
                    }
                }
                
                if (arg5 != 1)
                {
                label_12958:
                    uint32_t i_118 = arg2;
                    
                    if (arg7 == 1)
                    {
                        if (i_118)
                        {
                        label_12960:
                            
                            for (i_118 = 0; i_118 < 0xc; i_118 += 1)
                                arg4[i_118] = 1;
                        }
                        else
                        {
                            i_118 = i_119;
                            
                            if (i_118 != 0x19)  /* "06_240523" */
                            {
                                i_118 = 0;
                                
                                while (true)
                                {
                                    arg4[var_ac[i_118]] = 1;
                                    
                                    while (true)
                                    {
                                        i_118 += 1;
                                        
                                        if (i_118 >= 0xc)
                                            return i_118;
                                        
                                        if (i_118 < 4)
                                            break;
                                        
                                        arg4[var_ac[i_118]] = 0;
                                    }
                                }
                            }
                        }
                    }
                    else if (i_118)
                        goto label_12960;
                    
                    return i_118;
                }
                
                int32_t r0_19 = 0;
                
                while (true)
                {
                    arg4[r0_19] = 1;
                    
                    while (true)
                    {
                        r0_19 += 1;
                        
                        if (r0_19 >= 0xc)
                            goto label_12958;
                        
                        if (r0_19 < 4)
                            break;
                        
                        arg4[r0_19] = 0;
                    }
                }
            }
        }
    }
}

int32_t sub_129a0(int32_t* arg1, char* arg2, char* arg3, int32_t* arg4, int32_t* arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t* arg13, int32_t arg14, int32_t arg15, int32_t arg16, int32_t arg17, int32_t arg18)
{
    int32_t* var_24 = arg1;
    int32_t var_4c[0x8];
    0xff7febd8(&var_4c, 0x81f700, 0x20);  /* "23" */
    int32_t i = 0;
    int32_t var_58 = 0;
    int32_t r4 = arg6;
    int32_t r1_2;
    
    if (arg8 >= 0x64 || r4 < 0x7800)
        r1_2 = 0;
    else
    {
        r1_2 = *0x103f28 + 1;
        *0x103f28 = r1_2;
        
        if (r1_2 > 0xb4)
            r1_2 = 0xb4;
    }
    
    *0x103f28 = r1_2;
    int32_t r1_3 = *0x103f14;
    
    if (arg8 >= 0x20)  /* "23" */
    {
        *0x103f24 = 0;
        
        if (r1_3 < 0x384)
            *0x103f14 = 0;
        
        int32_t r1_6 = *0x103f18 + 1;
        *0x103f18 = r1_6;
        
        if (r1_6 > 0xb4)
            r1_6 = 0xb4;
        
        *0x103f18 = r1_6;
        
        if (r1_6 == 0xb4)
            *0x103f14 = 0;
    }
    else
    {
        int32_t r3_2 = *0x103f24 + 1;
        *0x103f24 = r3_2;
        
        if (r3_2 > 0x96)
            r3_2 = 0x96;
        
        int32_t r1_4 = r1_3 + 1;
        *0x103f24 = r3_2;
        *0x103f14 = r1_4;
        
        if (r1_4 > 0x384)
            r1_4 = 0x384;
        
        *0x103f14 = r1_4;
        *0x103f18 = 0;
    }
    
    int32_t r1_9;
    
    if (*0x103f28 == 0xb4)
    {
        *0x103f14 = 0x384;
        r1_9 = 1;
    }
    else if (*0x103f14 != 0x384)
        r1_9 = 0;
    else
        r1_9 = 1;
    
    *arg13 = r1_9;
    
    if (arg14)
        *arg13 = 0;
    
    if (*arg2)
    {
        if (arg4[1] < r4 || *arg4 > r4)
        {
            int32_t r1_18 = *0x103f04 + 1;
            *0x103f04 = r1_18;
            
            if (r1_18 >= 3)
            {
                *arg2 = 0;
                *0x103f04 = 0;
            }
        }
        else
            *0x103f04 = 0;
    }
    
    if (*0x103f30)
    {
        *0x103f04 = 0;
        *arg2 = 0;
        *arg3 = 1;
        *arg1 = 0;
        *0x103f08 = 0;
        *0x103f34 = 0x10;  /* "R02_3.00.06_240523" */
    }
    
    sub_db20(r4);
    sub_d8fc(0x10ac0c, arg7);
    sub_d8fc(0x10ac1c, arg8);
    int32_t r1_21 = *0x103f34;
    
    if (r1_21 < 0xf)
        *0x103f34 = r1_21 + 1;
    
    int32_t r1_27;
    
    if (arg12 >= 8 || arg11 >= 0x18)  /* ".06_240523" */
    {
        *0x103f2c = 0;
        r1_27 = 0;
    }
    else
    {
        int32_t r1_25 = *0x103f2c;
        
        if (r1_25 < 0x14)  /* "3.00.06_240523" */
            *0x103f2c = r1_25 + 1;
        
        r1_27 = r1_25 < 0x14 && r1_25 + 1 < 0x14 ? 0 : 1;  /* "3.00.06_240523" */
    }
    
    *0x103f30 = r1_27;
    *0x103f30 = arg15;
    int32_t r0_3 = *0x10aba4;
    
    if (r0_3 >= 5)
    {
        int32_t var_54_1;
        int32_t var_28_1;
        int32_t r0_4;
        
        if (*arg3 || r0_3 != 0xa)
        {
            var_54_1 = 5;
            var_28_1 = 0xaa;
            r0_4 = 3;
        }
        else
        {
            var_54_1 = 0xa;
            var_28_1 = 0xc8;
            r0_4 = 5;
        }
        
        int32_t r3_4;
        
        if (sub_dac8(var_54_1) >= 0x2400 * (var_54_1 - 1))
            r3_4 = 0;
        else
            r3_4 = 1;
        
        for (; i < var_54_1; i += 1)
        {
            if (sub_d8b8(0x10ac0c, i) > var_28_1)
                var_58 += 1;
        }
        
        int32_t r1_36;
        
        r1_36 = var_58 <= r0_4 ? 0 : 1;
        
        uint32_t r2_4 = *arg3;
        int32_t r0_17 = *0x103f30;
        
        if (!(r2_4 | r0_17) || (r3_4 & r1_36 && !r0_17))
        {
        label_12b8e:
            *arg2 = 1;
            
            if (*arg3)
            {
                if (arg16 >= 0x32)  /* "2_V3.0" */
                {
                    if (r4 < 0x3c00)
                        r4 += 0x1400;
                    
                    if (r4 - 0x6401 < 0x13ff)
                        r4 -= 0xf00;
                    
                    if (r4 - 0x7801 < 0x13ff)
                        r4 -= 0x1400;
                    
                    if (r4 > 0x8c00)
                        r4 = (r4 >> 1) + 0xa00;
                }
                else if (arg18 >= 6 || *0x103f34 == 0xf)
                {
                    if (arg8 > 0x60)
                    {
                        int32_t r0_28;
                        int32_t r1_54;
                        
                        if (arg8 <= 0x90)
                        {
                            r0_28 = var_4c[r4 - (((r4 >> 0x1f >> 0x1d) + r4) >> 3 << 3)] << 8;
                                /* "40523" */  /* "523" */
                            r1_54 = 0xd00;
                        }
                        else if (arg8 > 0xf0)
                        {
                            r0_28 = var_4c[r4 - (((r4 >> 0x1f >> 0x1d) + r4) >> 3 << 3)] << 8;
                                /* "40523" */  /* "523" */
                            r1_54 = 0x2600;
                        }
                        else
                        {
                            r0_28 = var_4c[r4 - (((r4 >> 0x1f >> 0x1d) + r4) >> 3 << 3)] << 8;
                                /* "40523" */  /* "523" */
                            r1_54 = 0x1b00;
                        }
                        
                        r4 = r0_28 + r1_54;
                    }
                    else
                        r4 = (var_4c[r4 - (((r4 >> 0x1f >> 0x1d) + r4) >> 3 << 3)] + 3) << 8;
                            /* "40523" */  /* "523" */
                }
                
                *arg1 = r4;
                *0x103f34 = 0x10;  /* "R02_3.00.06_240523" */
                int32_t r0_34;
                
                if (arg16 >= 0x32)  /* "2_V3.0" */
                {
                    r0_34 = (0xff7feb2c(arg17, 0xf) << 8) + r4;
                    *arg1 = r0_34;
                }
                else
                    r0_34 = *arg1;
                
                *0x103f08 = r0_34;
                *0x103f38 = r0_34;
                *0x103f3c = r0_34;
                *arg3 = 0;
                *0x103f20 = r4;
            }
            
            int32_t i_2 = 0;
            int32_t var_50_2 = 0xc800;
            
            for (int32_t i_1 = 0; i_1 < var_54_1; i_1 += 1)
            {
                int32_t r0_37 = sub_da58(i_1);
                int32_t r0_39 = sub_da68(var_54_1);
                int32_t r0_40 = r0_37 - r0_39;
                
                if (r0_37 - r0_39 < 0)
                    r0_40 = 0 - r0_40;
                
                if (var_50_2 > r0_40)
                {
                    var_50_2 = r0_40;
                    i_2 = i_1;
                }
            }
            
            if (var_50_2 < 0x600)
            {
                int32_t r1_78 = sub_da58(i_2) - ((0x1333 * sub_d8b8(0x10ac1c, i_2 + 5)) >> 8);
                *0x103f0c = r1_78;
                
                if (*0x103f24 >= 6)
                    *0x103f20 = r1_78;
            }
        }
        else if (r2_4 && *0x103f34 == 0xf && !r0_17)
            goto label_12b8e;
    }
    
    int32_t r0_49 = sub_d8b8(0x10ac1c, 5);
    int32_t r1_79 = *0x103f20;
    
    if (!r1_79)
    {
        *arg5 = 0;
        arg5[1] = 0;
    }
    else
    {
        int32_t r0_52 = ((r0_49 * 0xb33) >> 8) + r1_79;
        int32_t r2_9;
        int32_t r3_6;
        
        if (r0_52 >= 0x4600)
        {
            *arg5 = r0_52 - 0x1400;
            r3_6 = ((r0_49 * 0x1800) >> 8) + r1_79;
            r2_9 = 0x1e00;
        }
        else
        {
            *arg5 = r0_52 - 0xa00;
            r3_6 = ((r0_49 * 0x1800) >> 8) + r1_79;
            r2_9 = 0x1400;
        }
        
        arg5[1] = r3_6 + r2_9;
        
        if (arg14 == 0x12 || arg14 == 8)  /* "2_3.00.06_240523" */
        {
            if (arg12 <= 0x30 || arg12 >= 0xa0)  /* "R02_V3.0" */
            {
                *arg5 = 0;
                arg5[1] = 0;
                *arg5 = &data_3700;
            }
            else
            {
                *arg5 = r0_52 - 0x1e00;
                arg5[1] = ((r0_49 * 0x1800) >> 8) + r1_79 + 0x3200;
                
                if (r0_52 - 0x1e00 < &data_3700)
                    *arg5 = &data_3700;
            }
            
            int32_t r3_8 = arg5[1];
            int32_t r2_20 = 0xbe00;
            
            if (r3_8 > 0xbe00)
                arg5[1] = 0xbe00;
            else
                r2_20 = r3_8;
            
            int32_t r3_9 = *arg1;
            void* r2_21;
            
            if (r2_20 - r3_9 >= &data_2800)
            {
                r2_21 = r3_9 + &data_2800;
                arg5[1] = r2_21;
            }
            else
                r2_21 = arg5[1];
            
            int32_t r3_11 = *arg1;
            
            if (r2_21 - r3_11 <= 0xf00)
                arg5[1] = 0xf00 + r3_11;
            
            int32_t r2_24 = *arg1;
            
            if (r2_24 - arg5[1] >= 0)
                arg5[1] = r2_24 + 0x1400;
            
            int32_t r3_15 = *arg1;
            
            if (r3_15 - *arg5 >= &data_2800)
                *arg5 = r3_15 - &data_2800;
            
            int32_t r2_28 = *arg1;
            
            if (r2_28 - *arg5 <= 0)
                *arg5 = r2_28 - 0x1400;
        }
        
        void* r0_62;
        int32_t r1_87;
        int32_t r2_31;
        
        if (arg14 == 2)
        {
            *arg5 = r0_52 - 0xf00;
            arg5[1] = ((r0_49 * 0x1800) >> 8) + r1_79 + 0x1e00;
            
            if (r0_52 - 0xf00 < &data_3700)
                *arg5 = &data_3700;
            
            if (((r0_49 * 0x1800) >> 8) + r1_79 + 0x1e00 > 0xbe00)
                arg5[1] = 0xbe00;
            
            int32_t r0_56 = *arg1;
            int32_t r0_57;
            
            if (arg5[1] - r0_56 >= 0x1900)
            {
                r0_57 = r0_56 + 0x1900;
                arg5[1] = r0_57;
            }
            else
                r0_57 = arg5[1];
            
            int32_t r1_84 = *arg1;
            
            if (r0_57 - r1_84 <= 0xa00)
                arg5[1] = r1_84 + 0xa00;
            
            int32_t r0_59 = *arg1;
            
            if (r0_59 - arg5[1] >= 0)
                arg5[1] = r0_59 + 0x1400;
            
            r1_87 = *arg1;
            r2_31 = r1_87 - *arg5;
        label_12f08:
            
            if (r2_31 < &data_2800)
                goto label_12f10;
            
            r0_62 = r1_87 - &data_2800;
        label_12fb4:
            *arg5 = r0_62;
        label_12f10:
            int32_t r0_63 = *arg1;
            
            if (r0_63 - *arg5 <= 0)
                *arg5 = r0_63 - 0x1400;
        }
        else
        {
            if (arg14 == 3)
            {
                *arg5 = r0_52 - 0x1400;
                arg5[1] = 0xdc00;
                
                if (r0_52 - 0x1400 < &data_3700)
                    *arg5 = &data_3700;
                
                int32_t r1_88 = *arg1;
                
                if (0xdc00 - r1_88 >= &data_2800)
                    arg5[1] = r1_88 + &data_2800;
                
                int32_t r1_90 = *arg1;
                
                if (arg5[1] - r1_90 <= 0xf00)
                    arg5[1] = r1_90 + 0xf00;
                
                int32_t r1_92 = *arg1;
                
                if (r1_92 - arg5[1] >= 0)
                    arg5[1] = r1_92 + 0x1e00;
                
                r1_87 = *arg1;
                r2_31 = r1_87 - *arg5;
                goto label_12f08;
            }
            
            if (arg14 == 9)
            {
                *arg5 = r0_52 - 0x2300;
                arg5[1] = ((r0_49 * 0x1800) >> 8) + r1_79 + 0x1e00;
                
                if (r0_52 - 0x2300 < 0x3c00)
                    *arg5 = 0x3c00;
                
                if (((r0_49 * 0x1800) >> 8) + r1_79 + 0x1e00 > 0xbe00)
                    arg5[1] = 0xbe00;
                
                int32_t r0_67 = *arg1;
                int32_t r0_68;
                
                if (arg5[1] - r0_67 >= 0x1900)
                {
                    r0_68 = r0_67 + 0x1900;
                    arg5[1] = r0_68;
                }
                else
                    r0_68 = arg5[1];
                
                int32_t r1_103 = *arg1;
                
                if (r0_68 - r1_103 <= 0xf00)
                    arg5[1] = r1_103 + 0xf00;
                
                int32_t r0_70 = *arg1;
                
                if (r0_70 - arg5[1] >= 0)
                    arg5[1] = r0_70 + 0x1400;
                
                int32_t r0_72 = *arg1;
                
                if (r0_72 - *arg5 < 0x3200)
                    goto label_12f10;
                
                r0_62 = r0_72 - 0x3200;
                goto label_12fb4;
            }
        }
        
        if (*arg5 < 0x1e00)
            *arg5 = 0x1e00;
        
        if (arg5[1] > 0xc800)
            arg5[1] = 0xc800;
        
        if (*arg13 == 1)
        {
            *arg5 = 0x1e00;
            arg5[1] = 0x6400;
        }
    }
    
    uint32_t r0_74 = *arg3;
    
    if (!r0_74)
    {
        if (arg7 >= 0x66)
            *0x103f10 = 1;
        else if (!*0x103f10)
            r4 = ((r0_49 * 0x1333) >> 8) + *0x103f1c;
        else
        {
            r4 = *arg1;
            *0x103f1c = r4 - ((r0_49 * 0x1333) >> 8);
            *0x103f10 = 0;
        }
        
        int32_t r2_41;
        
        if (arg7 <= 0xf3 || (!arg14 && arg12 > 0x50))
        {
            int32_t r0_80 = *0x103f08;
            r2_41 = 0x400;
            
            if (arg6 > r0_80)
            {
                int32_t r3_26;
                
                if (arg14 == 3)
                {
                    r3_26 = r4 - r0_80;
                    
                    if (r3_26 <= 0x400)
                        *0x103f08 = r4;
                    else
                        *0x103f08 = ((0x912 * r3_26 + 0x1000) >> 0xd) + r0_80;
                }
                else if (arg10 <= 0x30)  /* "R02_V3.0" */
                    *0x103f08 = ((0x443 * (r4 - r0_80) + 0x1000) >> 0xd) + r0_80;
                else
                {
                    r3_26 = r4 - r0_80;
                    
                    if (r3_26 > 0x400)
                        *0x103f08 = ((0x5cd * r3_26 + 0x1000) >> 0xd) + r0_80;
                    else if (r3_26 > 0x100)
                        *0x103f08 = r0_80 + 0x200;
                    else
                        *0x103f08 = r4;
                }
            }
            
            if (!*arg13)
            {
                if (r4 <= 0x4600 && arg12 > 0x50)
                    r4 += 0x800;
                
                if (r4 <= 0x5000 && arg12 > 0xa0)
                    r4 += 0xa00;
                
                if (r4 <= 0x6400 && arg12 > 0x140)
                    r4 += 0xf00;
            }
            
            int32_t r0_89 = *0x103f08;
            
            if (r4 <= r0_89)
            {
                if (arg14 == 3)
                {
                    int32_t r2_42;
                    int32_t r3_33;
                    
                    if (arg12 > 0xa0)
                    {
                    label_13176:
                        r2_42 = r4 - r0_89;
                        r3_33 = 0x5cd;
                    label_13118:
                        r2_41 = (r3_33 * r2_42 + 0x1000) >> 0xd;
                        *0x103f08 = r2_41 + r0_89;
                    }
                    else
                    {
                        if (r0_89 - r4 > 0x400)
                        {
                        label_13170:
                            r2_42 = r4 - r0_89;
                            r3_33 = 0x912;
                            goto label_13118;
                        }
                        
                        *0x103f08 = r4;
                    }
                }
                else if (arg10 <= 0x30)  /* "R02_V3.0" */
                {
                    r2_41 = arg7;
                    
                    if (r2_41 != 0x200)
                    {
                        if (r2_41 <= 0xcc)
                            goto label_13176;
                        
                        goto label_13170;
                    }
                }
                else
                {
                    int32_t r3_30 = r0_89 - r4;
                    
                    if (r3_30 > 0x400)
                        goto label_13176;
                    
                    if (r3_30 > 0x100)
                        *0x103f08 = r0_89 - 0x200;
                    else
                        *0x103f08 = r4;
                }
            }
        }
        else
        {
            r2_41 = *0x103f08;
            
            if (r2_41 - r4 >= 0xf00)
                *0x103f08 = r2_41 - 0xf00;
            else if (r4 - r2_41 < 0xf00)
                *0x103f08 = r4;
            else
                *0x103f08 = r2_41 + 0xf00;
        }
        
        r4 = *0x103f08;
        
        if (arg16 >= 0x32)  /* "2_V3.0" */
        {
            r4 += (0x5cd00 * 0xff7feb2c(((r4 >> 0x1f >> 0x18) + r4) >> 8, 0x14, r2_41)) >> 0xd;
                /* "3.00.06_240523" */  /* ".06_240523" */  /* "523" */
            int32_t r0_99 = 0x5f00;
            
            if (r4 < 0x5f00)
                r0_99 = &data_3700;
            
            if (r4 >= 0x5f00 || r4 <= &data_3700)
                r4 = r0_99;
        }
    }
    
    if (!(r0_74 | arg9))
        *arg1 = r4;
    
    if (*arg3)
        *arg1 = 0;
    
    if (!*arg3 || !*arg3)
    {
        int32_t r5_1 = (0x1333 * (r0_49 - sub_d8b8(0x10ac1c, *0x10aba4 + 4))) >> 8;
        int32_t r4_1 = (*0x103f04 << 8) + 0xa00;
        *arg4 = sub_dab8() + r5_1 - r4_1;
        arg4[1] = sub_dab8() + r5_1 + r4_1;
    }
    
    if (*0x103f30)
    {
        *arg2 = 0;
        *arg3 = 1;
        *arg1 = 0xfffffe80;
        *0x103f08 = 0;
        *0x103f34 = 0x10;  /* "R02_3.00.06_240523" */
    }
    
    return 0x103ebc;
}

void* sub_1320c()
{
    *0x103f04 = 0;
    *0x103f08 = 0;
    *0x103f0c = 0;
    __builtin_memset(0x103f14, 0, 0x24);
    *0x103f10 = 1;
    sub_d8e2(0x10ac0c, 0x10aba8, 0xa);
    sub_d8e2(0x10ac1c, 0x10abd0, 0xf);
    return sub_db00();
}

int32_t sub_13258(int32_t arg1)
{
    int32_t r2 = *0x103e58;
    
    if (arg1 > r2 + &data_2800)
    {
        r2 += 8;
        *0x103e58 = r2;
    }
    else if (arg1 > r2)
    {
        r2 += (0x83 * (arg1 - r2) + 0x8000) >> 0x10;  /* "R02_3.00.06_240523" */
        *0x103e58 = r2;
    }
    
    if (arg1 < r2 - &data_2800)
        *0x103e58 = r2 - 5;
    else if (arg1 < r2)
        *0x103e58 = ((0x57 * (arg1 - r2) + 0x8000) >> 0x10) + r2;  /* "R02_3.00.06_240523" */
    
    return *0x103e58 >> 4;
}

int32_t sub_132ac(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    int32_t r4 = 0;
    int32_t lr = 0x80000000;
    int32_t r1 = 0;
    int32_t r12 = 0;
    int32_t var_a0 = 0;
    int32_t i = 0;
    int32_t i_6 = 0;
    int32_t var_88[0xc];
    int32_t var_58[0xd];
    
    for (; i < arg2; i += 1)
    {
        var_58[i] = arg1[i * 2 + 1];
        int32_t r5_4 = arg1[i * 2];
        r4 += r5_4;
        var_88[i] = r5_4;
    }
    
    *arg5 = r4;
    
    if (r4 > 0x300)
    {
        for (int32_t i_1 = 0; i_1 < arg2; i_1 += 1)
        {
            int32_t r7_2 = var_58[arg3];
            int32_t r6_6 = var_58[i_1];
            int32_t r5_5 = r7_2 >> 1;
            int32_t r5_6 = r6_6 - r5_5;
            
            if (r6_6 - r5_5 < 0)
                r5_6 = 0 - r5_6;
            
            if ((0x26 * r7_2) >> 9 > r5_6 && arg3 != i_1)
            {
                var_88[arg3] += var_88[i_1];
                var_88[i_1] = 0;
                var_58[i_1] = 0;
            }
        }
        
        int32_t r5_9 = var_88[arg3];
        int32_t var_a8_1 = arg3;
        var_88[arg3] = 0;
        
        for (int32_t i_2 = 0; i_2 < arg2; i_2 += 1)
        {
            int32_t r0_1 = var_88[i_2];
            
            if (r0_1 > lr)
            {
                lr = r0_1;
                arg3 = i_2;
            }
        }
        
        for (int32_t i_3 = 0; i_3 < arg2; i_3 += 1)
        {
            int32_t r6_13 = var_58[i_3];
            int32_t r5_11 = var_58[arg3];
            int32_t r7_4 = r5_11 >> 1;
            int32_t r6_14 = r6_13 - r7_4;
            
            if (r6_13 - r7_4 < 0)
                r6_14 = 0 - r6_14;
            
            if ((0x26 * r5_11) >> 9 > r6_14 && arg3 != i_3)
            {
                var_88[arg3] += var_88[i_3];
                var_88[i_3] = 0;
                var_58[i_3] = 0;
            }
        }
        
        var_88[var_a8_1] = r5_9;
    }
    
    for (int32_t i_4 = 0; i_4 < arg2; i_4 += 1)
    {
        int32_t r0_4 = var_88[i_4];
        var_a0 += r0_4;
        
        if (r0_4 > r1)
        {
            r1 = r0_4;
            i_6 = i_4;
        }
    }
    
    for (int32_t i_5 = 0; i_5 < arg2; i_5 += 1)
    {
        int32_t r4_6 = var_88[i_5];
        
        if (r4_6 >= r12 && i_6 != i_5)
            r12 = r4_6;
    }
    
    int32_t result;
    
    if (!r1)
        result = 1;
    else
        result = 0xff7feb2c((r1 - r12) << 8);
    
    if (arg4 != 1 && var_a0 >= 0x900)
        return result;
    
    return 0;
}

int32_t sub_13414(int32_t* arg1)
{
    int32_t r1 = *0x103e3c;
    int32_t result;
    
    if (r1 <= 0)
        result = 0;
    else
    {
        *0x103e3c = r1 - 1;
        result = 1;
    }
    
    int32_t r1_2 = *arg1;
    
    if (r1_2 < 0)
        r1_2 = 0 - r1_2;
    
    if (r1_2 >= 0x7ff)
        *0x103e3c = 0x4b;
    else
    {
        int32_t r1_3 = arg1[1];
        
        if (r1_3 < 0)
            r1_3 = 0 - r1_3;
        
        if (r1_3 >= 0x7ff)
            *0x103e3c = 0x4b;
        else
        {
            int32_t r0 = arg1[2];
            
            if (r0 < 0)
                r0 = 0 - r0;
            
            if (r0 >= 0x7ff)
                *0x103e3c = 0x4b;
        }
    }
    
    return result;
}

uint32_t sub_13460(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = arg1 >> 8;
    int32_t* r0_1;
    
    if (r4 == 0x14)  /* "3.00.06_240523" */
        r0_1 = 0x81edd0;
    else if (r4 == 0xf2)
        r0_1 = 0x81ee5c;
    else if (r4 == 0xfc)
        r0_1 = 0x81ef10;
    else
    {
        if (r4 != 0xfd)
            return 0;
        
        r0_1 = 0x81efc4;
    }
    
    return sub_9de8(r0_1, arg1, arg2);
}

int32_t sub_134a0()
{
    return sub_9e24(0x103b08);
}

void sub_134b0(int16_t* arg1) __noreturn
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    sub_be78(6 * *arg1 + 0x104f70, arg1);
    uint32_t r0_4 = arg1[4];
    
    if (!arg1[2])
    {
        void* r0_7;
        int32_t r3_2;
        r0_7 = sub_13624(r0_4);
        sub_15d70(arg1[6], *(r0_7 + 0xe), arg1[7], r3_2);
        /* no return */
    }
    
    void* r0_5;
    int32_t r3_1;
    r0_5 = sub_13624(r0_4);
    sub_cb9c(arg1[6], arg1[7], *(r0_5 + 0xe), r3_1);
    /* no return */
}

void sub_1352c(void* arg1, void* arg2) __noreturn
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r2;
    int32_t var_1c = r2;
    void* var_20 = arg2;
    void* r7;
    
    if (*(arg2 + 4))
    {
        void* r3_1 = sub_e5c4(5);
        uint32_t r0_1 = *(arg2 + 0xe);
        var_20 = 3;
        *var_20[1] = r0_1;
        *var_20[2] = r0_1 >> 8;
        sub_18c(&data_0, &var_20, 3, r3_1, arg1, r7);
        /* no return */
    }
    
    sub_e5c4(7);
    uint32_t r0_3 = *(arg2 + 0xc);
    uint32_t r1_1 = *(arg1 + 0xe);
    var_20 = 2;
    *var_20[1] = r0_3;
    *var_20[2] = r0_3 >> 8;
    *var_20[3] = r1_1;
    var_1c = r1_1 >> 8;
    sub_18c(&data_0, &var_20, &*(data_4 + 1), 2, arg1, r7);
    /* no return */
}

int32_t sub_135c8(int32_t arg1)
{
    return sub_9eca(0x103b08, arg1);
}

uint32_t sub_135d8(int32_t arg1)
{
    if (!arg1)
        return 0xffff;
    
    return sub_9eb8(0x103b08, arg1);
}

uint32_t sub_135f4(void* arg1)
{
    uint32_t r0 = *(arg1 + 4);
    
    while (true)
    {
        uint32_t result = sub_13624(r0);
        uint32_t result_1 = result;
        uint32_t r1_1;
        
        if (result_1)
        {
            result = *(result_1 + 8);
            r1_1 = *(arg1 + 0xe);
        }
        
        if (!result_1 || result != r1_1)
            return result;
        
        if (*(result_1 + 4))
            sub_135f4(result_1, r1_1);
        
        *(result_1 + 8) = sub_135d8(arg1);
        r0 = *(result_1 + 0xa);
    }
}

int32_t sub_13624(int32_t arg1)
{
    if (arg1 != 0xffff)
        return sub_9e5e(0x103b08, arg1);
    
    return 0;
}

int16_t* const sub_13644(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    int32_t* var_4 = arg4;
    int32_t var_8 = arg3;
    int32_t var_c = arg2;
    int32_t* var_28 = arg4;
    int16_t* const result;
    
    for (uint32_t i = 0; i < 4; i = i + 1)
    {
        uint32_t r0_2 = *(i * 6 + 0x104f70);
        
        while (true)
        {
            if (r0_2 == 0xffff)
            {
                result = &data_0;
                break;
            }
            
            int16_t* result_1 = sub_13624(r0_2);
            result = result_1;
            var_28 = &var_c;
            
            if (arg1(result_1, &var_28))
                break;
            
            r0_2 = result[3];
        }
        
        if (result)
            break;
    }
    
    return result;
}

uint32_t sub_13690(void* arg1)
{
    int16_t r0;
    
    if (!*(arg1 + 4))
        r0 = *(arg1 + 0xe) + 0xb;
    else
        r0 = 9;
    
    return r0;
}

int32_t sub_136a4(int32_t arg1, uint32_t arg2, int32_t arg3, void* arg4)
{
    void* var_18 = arg4;
    uint32_t var_20 = arg2;
    int32_t var_24 = arg1;
    uint32_t r4 = arg2;
    *0x104f60 -= r4;
    uint32_t r0_2 = *0x104f64;
    
    if (r0_2 == 0x1000)
    {
        uint32_t r0_4 = sub_ea5c(*0x104f68);
        *0x104f68 = r0_4;
        int16_t r1_1 = *0x104f6a + 1;
        *0x104f6a = r1_1;
        sub_1680c(r0_4, r1_1, &*(data_4 + 2), arg4);
        /* no return */
    }
    
    uint16_t var_26 = r0_2;
    int16_t r0_5 = *0x104f68;
    
    while (true)
    {
        if (r4)
        {
            uint32_t r0_6 = *0x104f64;
            
            if (r0_6 == 0x1000)
                break;
            
            uint32_t r1_6 = r0_6;
            int32_t r0_16 = *0x104f5c;
            
            if (r1_6 + r4 <= 0x1000)
            {
                sub_bfcc(r0_16 + r1_6 + (*0x104f68 << 0xc), r4, var_24);
                *0x104f64 += r4;
            }
            else
            {
                arg4 = sub_bfcc(r0_16 + r1_6 + (*0x104f68 << 0xc), 0x1000 - r1_6, var_24);
                int32_t r0_20 = 0x1000 - *0x104f64;
                var_24 += r0_20;
                r4 = r4 - r0_20;
                *0x104f64 = 0x1000;
                continue;
            }
        }
        
        return r0_5;
    }
    
    uint32_t r5;
    
    if (!arg3)
    {
        int32_t var_1c = 1;
        r5 = r4 + var_18 + 6;
    }
    else
    {
        void* r0_10 = r4 + var_18 + 6;
        
        r5 = r0_10 < 0x1000 ? r0_10 : &data_0;
    }
    
    uint32_t r0_14 = sub_ea5c(*0x104f68);
    *0x104f68 = r0_14;
    int16_t r1_4 = *0x104f6a + 1;
    *0x104f6a = r1_4;
    sub_1680c(r0_14, r1_4, r5, arg4);
    /* no return */
}

int32_t sub_13774(int32_t arg1, int32_t arg2)
{
    uint32_t i = *0x104f68;
    uint32_t r4_1;
    
    do
    {
        uint32_t i_1 = sub_ea6a(arg2, i);
        i = i_1;
        r4_1 = *((i_1 << 2) + arg1 + 2);
        
        while (r4_1 - 6 < 0xffa)
        {
            char var_128[0xc];
            int32_t r3_2 = sub_139b8(i, r4_1, 9, &var_128);
            uint32_t r0_4 = var_128[0];
            char var_11c;
            
            if (r0_4 < 4)
            {
                uint32_t r2_1 = *(0x81ec30 + r0_4) - 2;
                void* r0_7 = &var_128[r2_1];
                var_11c = *r0_7;
                char var_11b = *(r0_7 + 1);
                void* r6;
                void* r7;
                sub_18c(&data_0, &var_128, r2_1, sub_18c, r6, r7);
                /* no return */
            }
            
            if (!(r4_1 << 0x18 >> 0x18))  /* ".06_240523" */
            {
                sub_c038(*0x104f5c + (i << 0xc) + r4_1, 0x100, &var_11c, r3_2);
                
                for (uint32_t j = 0; j < 0x40; j = j + 1)
                {
                    if (*(&var_11c + (j << 2)) != 0xffffffff)
                        goto label_1381c;
                }
                
                break;
            }
            
        label_1381c:
            r4_1 = (r4_1 + 0x100) & 0xff00;
        }
    } while (*0x104f68 != i);
    
    *0x104f64 = r4_1;
    *0x104f60 = 0x1000 - r4_1;
    uint32_t r1_6 = *0x104f68;
    uint32_t r0_18 = *0x104f66;
    int32_t r0_20;
    
    r0_20 = r1_6 < r0_18 ? 0xffa * (r0_18 - r1_6) - 0xffa : 0xffa * (3 - r1_6 + r0_18);
    
    int32_t result = r0_20 + 0x1000 - r4_1;
    *0x104f60 = result;
    return result;
}

int32_t sub_13874(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0;
    int32_t r1;
    r0 = 0xff7fec8e(arg1, arg2, arg3, arg1);
    return 5;
}

int32_t sub_138a8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    0xff7fec8e(2, arg1, 1, arg1, arg4);
    return 4;
}

int32_t sub_138e8(char* arg1 @ r4, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    if (*arg1 < 5)
        return 4;
    
    *arg1 = 4;
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = 0xff7febd8();
    /* tailcall */
    return sub_13954(r0, r1, r2, r3, arg2);
}

int32_t sub_1391c(int32_t arg1, int32_t, char arg3, char* arg4 @ r5)
{
    *arg4 = arg3;
    /* tailcall */
    return sub_13954();
}

int32_t sub_13934(char* arg1 @ r4, int32_t arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    uint16_t arg_0 = *arg1;
    int32_t r0_1;
    int32_t entry_r1;
    int32_t r1;
    int32_t r2_1;
    int32_t r3_1;
    r0_1 = sub_c0bc(*0x104d74, entry_r1, arg2, &arg_0);
    
    if (r0_1)
        return 1;
    
    uint32_t r0_3 = arg_0;
    *arg1 = r0_3;
    /* tailcall */
    return sub_13954(r0_3, r1, r2_1, r3_1, arg_0);
}

int32_t sub_13954(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) __pure
{
    return 0;
}

int32_t sub_13964()
{
    sub_bf28(0x104d74, *0x104f58, 0xfffe);
    return 0;
}

int32_t sub_13984(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0;
    int32_t r1;
    r0 = 0xff7fec8e(arg1, arg2, arg3, arg1);
    return 5;
}

int32_t sub_139b8(int32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4)
{
    uint32_t var_1c = arg3;
    int32_t var_20 = arg2;
    int32_t var_24 = arg1;
    uint32_t r3 = arg3;
    uint32_t r0_2 = *0x104f5c + (arg1 << 0xc) + arg2;
    uint32_t r1;
    int32_t r2_1;
    
    if (arg2 + r3 > 0x1000)
    {
        uint32_t r4_1 = 0 - arg2;
        uint32_t r6_1 = r3 - r4_1;
        r3 = sub_c038(r0_2, r4_1, arg4, r3);
        r0_2 = (sub_ea5c(arg1) << 0xc) + 6 + *0x104f5c;
        r2_1 = arg4 + r4_1;
        r1 = r6_1;
    }
    else
    {
        r1 = r3;
        r2_1 = arg4;
    }
    
    return sub_c038(r0_2, r1, r2_1, r3);
}

uint32_t sub_13a0c(int32_t* arg1, int32_t* arg2)
{
    int32_t r2_1 = *arg2;
    int32_t r2_2 = ((0x450 * ((*arg1 << 8) - r2_1)) >> 0xc) + r2_1;
    *arg2 = r2_2;
    int32_t r2_3 = arg2[1];
    int32_t r2_4 = ((0x2c0 * ((*arg1 << 8) - r2_2 - r2_3)) >> 0xc) + r2_3;
    arg2[1] = r2_4;
    int32_t r3_11 = arg2[2];
    int32_t r3_12 = ((0x450 * ((arg1[1] << 8) - r3_11)) >> 0xc) + r3_11;
    arg2[2] = r3_12;
    int32_t r3_13 = arg2[3];
    arg2[3] = ((0x2c0 * ((arg1[1] << 8) - r3_12 - r3_13)) >> 0xc) + r3_13;
    int32_t r3_16 = arg2[4];
    int32_t r3_17 = ((0x450 * ((arg1[2] << 8) - r3_16)) >> 0xc) + r3_16;
    arg2[4] = r3_17;
    int32_t r0_2 = arg2[5];
    arg2[5] = ((0x2c0 * ((arg1[2] << 8) - r3_17 - r0_2)) >> 0xc) + r0_2;
    return sub_d928(r2_4 * r2_4);
}

int32_t sub_13abc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    sub_13aec(&var_8);
    sub_13b14(var_8, 0x1542c, 0x578);
    *0x20133080 |= 1 << var_8;
    return 0x20133080;
}

int32_t sub_13aec(char* arg1)
{
    for (uint32_t i = 0; i < 0x10; i = i + 1)  /* "R02_3.00.06_240523" */
    {
        if (!(*0x20133080 & 1 << i))
        {
            *arg1 = i;
            return 1;
        }
    }
    
    return 0;
}

int32_t sub_13b14(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = arg1 << 2;
    *(0x20133000 + result) =
        (*(0x20133000 + result) & 0xfffe0003) | arg2 << 0xe >> 0x10 << 0x11 >> 0xf;
        /* "R02_3.00.06_240523" */  /* "02_3.00.06_240523" */
    *(0x20133040 + result) = arg3;
    return result;
}

int32_t sub_13b3c()
{
    *0x20133080 = 0;
    uint32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_16b94();
    int32_t r0_1;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    r0_1 = sub_13abc(r0, r1, r2, r3);
    int32_t r0_2;
    int32_t r1_2;
    int32_t r2_2;
    int32_t r3_2;
    r0_2 = sub_16aec(r0_1, r1_1, r2_1, r3_1);
    int32_t r0_3;
    int32_t r1_3;
    int32_t r2_3;
    int32_t r3_3;
    r0_3 = sub_16b2c(r0_2, r1_2, r2_2, r3_2);
    int32_t r0_4;
    int32_t r1_4;
    int32_t r2_4;
    int32_t r3_4;
    r0_4 = sub_16be8(r0_3, r1_3, r2_3, r3_3);
    int32_t r0_5;
    int32_t r1_5;
    int32_t r2_5;
    int32_t r3_5;
    r0_5 = sub_16c5c(r0_4, r1_4, r2_4, r3_4);
    int32_t r0_6;
    int32_t r1_6;
    int32_t r2_6;
    int32_t r3_6;
    r0_6 = sub_16bb4(r0_5, r1_5, r2_5, r3_5);
    int32_t r0_7;
    int32_t r1_7;
    int32_t r2_7;
    int32_t r3_7;
    r0_7 = sub_16ab0(r0_6, r1_6, r2_6, r3_6);
    int32_t r0_8;
    int32_t r1_8;
    int32_t r2_8;
    int32_t r3_8;
    r0_8 = sub_16c28(r0_7, r1_7, r2_7, r3_7);
    return sub_fd28(r0_8, r1_8, r2_8, r3_8);
}

void sub_13b74(uint32_t arg1)
{
    uint32_t r1 = *0x109b2b;
    
    if (r1)
    {
        uint32_t r1_3 = (r1 - 1) << 0x18 >> 0x18;  /* ".06_240523" */
        *0x109b2b = r1_3;
        
        if (r1_3)
            *0x109b2b = r1_3 - 1;
    }
    
    uint32_t r2 = *0x103d65;
    uint32_t r3 = *0x109b29;
    uint32_t r1_5 = *0x109b2a;
    
    if (r3 >= r2)
    {
        uint16_t r7_1 = r1_5 + arg1;
        *0x109b1c += r7_1;
        *0x109b2a = 0;
        uint32_t r0_8 = *0x109b20 + r7_1;
        *0x109b20 = r0_8;
        
        if (r0_8 >= 0x14)  /* "3.00.06_240523" */
        {
            sub_827c(r0_8, r1_5, r2, r3);
            *0x109b20 = 0;
        }
        
        sub_149d0(r7_1);
    }
    else
    {
        if (r1_5)
        {
            *0x109b29 = r3 + r1_5;
            *0x109b2a = 0;
        }
        
        if (arg1)
        {
            uint32_t r1_7 = *0x109b29;
            arg1 = r1_7 + arg1;
            *0x109b29 = arg1;
            
            if (arg1 >= r2)
            {
                sub_827c(arg1, r1_7, r2, r3);
                uint16_t r0_3 = *0x109b1c + *0x109b29;
                *0x109b1c = r0_3;
                *0x109b2d = 1;
                *0x109b2c = 0;
                *0x109b20 = 0;
                sub_149d0(r0_3);
            }
        }
    }
}

int32_t sub_13c00(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t r2;
    int32_t var_1c_1 = r2;
    int32_t var_20_1 = arg2;
    int32_t r0_3 = 0xff7feb2c(*0x109b68 * 7 + arg1 * 3, 0xa);
    *0x109b68 = r0_3;
    int32_t r0_4 = r0_3 * 3;
    char* r0_7;
    
    r0_7 = ((r0_4 >> 0x1f >> 0x1e) + r0_4) >> 2 > arg1 ? 0x109b6c : 0x109b80;
        /* "0523" */  /* "523" */
    
    if (arg2 < 5)
        return 0;
    
    *0x109b64 ^= 1;
    uint32_t r1_7 = *r0_7;
    
    if (r1_7 < 4)
        *r0_7 = r1_7 + 1;
    
    void* r1_11 = &r0_7[r0_7[1] << 1];
    *(r0_7 + 8) += arg1 - *(r1_11 + 0xc);
    *(r1_11 + 0xc) = arg1;
    uint32_t r1_14 = r0_7[1] + 1;
    r0_7[1] = r1_14;
    
    if (r1_14 >= 4)
        r0_7[1] = 0;
    
    int32_t r0_10 = 0xff7feb00(*(r0_7 + 8), *r0_7);
    uint32_t r1_16 = *0x109b6c;
    uint32_t r4 = 0;
    
    if (r1_16)
        r4 = 0xff7feb00(*0x109b74, r1_16);
    
    uint32_t r1_17 = *0x109b80;
    
    if (r1_17)
        r4 = (0xff7feb00(*0x109b88, r1_17) + r4) >> 1;
    
    int32_t var_20 = 7;
    int32_t r7 = 0x25;
    
    if (r4 >= 0x1770)
    {
        r7 = 0x1e;  /* "0523" */
        var_20 = 5;
    }
    else if (r4 >= 0xfa0)
    {
        r7 = 0x20;  /* "23" */
        var_20 = 6;
    }
    
    int32_t r0_17 = arg1 - r0_10;
    
    if (arg1 - r0_10 < 0)
        r0_17 = 0 - r0_17;
    
    int32_t r0_20 = 0xff7feb2c(r0_10 << 2, 0xa);
    
    if (r0_20 < 0xa8c)
        r0_20 = 0xa8c;
    else if (r0_20 > 0x1b58)
        r0_20 = 0x1b58;
    
    if (r0_17 >= r0_20)
    {
        sub_13ef4(1);
        0xff7feb2c(r0_17, 0xa8c);
        sub_13f24();
    }
    else
    {
        uint32_t r1_19 = *0x109b29;
        
        if (r1_19 < *0x103d65 && arg1 < 0x7d0)
            sub_13ef4(0);
        else if (arg2 < var_20 || arg2 > r7)
        {
            if (arg2 > r7 && !r1_19)
                *0x109b60 += 1;
            
            if (arg2 <= r7)
                sub_13ef4(0);
            else
                sub_13ef4(1);
        }
        else
            *0x109b60 += 1;
    }
    
    return 1;
}

int32_t sub_13d64(int32_t arg1, int32_t arg2)
{
    int32_t r4 = arg2;
    
    if (arg1 >= 0x190)
    {
        if (r4 >= 5)
        {
            uint32_t r1 = *0x109b94;
            
            if (r1 < 4)
                *0x109b94 = r1 + 1;
            
            *0x109b9c += arg1 - *((*0x109b95 << 1) + 0x109ba0);
            *((*0x109b95 << 1) + 0x109ba0) = arg1;
            uint32_t r1_9 = *0x109b95 + 1;
            *0x109b95 = r1_9;
            
            if (r1_9 >= 4)
                *0x109b95 = 0;
            
            int32_t r1_10 = *0x109b60;
            
            if (!r1_10)
                sub_13ef4(0);
            else
            {
                int32_t r0_3 = 0xff7feb00(*0x109b9c, *0x109b94);
                int32_t var_24_1 = 0x25;
                int32_t r7_1 = 7;
                
                if (arg1 >= 0x1770)
                {
                    r7_1 = 5;
                    var_24_1 = 0x1e;  /* "0523" */
                }
                else if (arg1 >= 0xfa0)
                {
                    r7_1 = 6;
                    var_24_1 = 0x20;  /* "23" */
                }
                
                uint32_t var_28_1 = 1;
                uint32_t r0_5 = *0x109bbe;
                
                if (r0_5)
                {
                    int32_t r0_8 = 0xff7feb2c(r4 * 0x64, 0xff7feb00(r0_5, *0x109bbc));
                    
                    if (r0_8 < 0x32)  /* "2_V3.0" */
                    {
                        sub_13ef4(0);
                        var_28_1 = 0;
                    }
                    else if (r1_10 <= 1)
                    {
                        if (!*0x109b2a && r0_8 > 0xa0 && r7_1 << 1 < r4)
                            *0x109b2a = 1;
                    }
                    else if (r0_8 > 0x4b && r7_1 << 1 < r4)
                    {
                        var_28_1 = 2;
                        *0x109b2a = 0;
                        r4 s>>= 1;
                    }
                }
                else if (r1_10 > 1 && r7_1 << 1 < r4)
                {
                    var_28_1 = 2;
                    *0x109b2a = 0;
                    r4 s>>= 1;
                }
                
                uint32_t r1_16 = *0x109bbd;
                *0x109bbe += r4 - *(r1_16 + 0x109bc0);
                *(r1_16 + 0x109bc0) = r4;
                uint32_t r0_13 = *0x109bbd + 1;
                *0x109bbd = r0_13;
                
                if (r0_13 >= 4)
                    *0x109bbd = 0;
                
                uint32_t r0_14 = *0x109bbc;
                
                if (r0_14 < 4)
                    *0x109bbc = r0_14 + 1;
                
                int32_t r0_18 = 0xff7feb2c(r0_3 << 2, 0xa);
                
                if (r0_18 > 0x1b58)
                    r0_18 = 0x1b58;
                
                if (r0_3 - arg1 >= r0_18)
                {
                    sub_13ef4(var_28_1);
                    *0x109b60 = 0;
                }
                else if (r4 < r7_1 || r4 > var_24_1)
                    sub_13ef4(0);
                else
                {
                    sub_13b74(var_28_1);
                    *0x109b60 = 0;
                }
            }
            
            return 1;
        }
        
        sub_13f24();
    }
    
    return 0;
}

void sub_13ef4(uint32_t arg1)
{
    uint32_t r3 = *0x109b2b + 1;
    *0x109b2b = r3;
    *0x109b2a += arg1;
    
    if (r3 >= 5)
    {
        *0x109b29 = 0;
        *0x109b2b = 0;
        *0x109b2a = 0;
    }
    
    if (*0x109b2a == arg1 && !*0x109b29)
        *0x109b2b = 0;
}

int32_t sub_13f24()
{
    if (*0x109b29 < *0x103d65)
    {
        uint32_t r1_3 = *0x109b2c + 1;
        *0x109b2c = r1_3;
        
        if (r1_3 > 5)
        {
            *0x109b29 = 0;
            *0x109b2b = 0;
            *0x109b2a = 0;
        }
    }
    
    return 0x109b28;
}

uint32_t sub_13f50(int32_t arg1)
{
    uint32_t r2 = *0x109ba8;
    
    if (r2 < 3)
        *0x109ba8 = r2 + 1;
    
    void* r3_2 = (*0x109ba9 << 1) + 0x109ba8;
    *0x109bb0 += arg1 - *(r3_2 + 0xc);
    *(r3_2 + 0xc) = arg1;
    uint32_t r0_2 = *0x109ba9 + 1;
    *0x109ba9 = r0_2;
    
    if (r0_2 >= 3)
        *0x109ba9 = 0;
    
    uint32_t result = 0x7fffffff;
    
    for (int32_t i = 0; *0x109ba8 > i; i += 1)
    {
        uint32_t result_1 = *((i << 1) + 0x109bb4);
        
        if (result_1 < result)
            result = result_1;
    }
    
    *0x109bac = result;
    return result;
}

int32_t sub_13fb0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0_3 = ((arg1 >> 0x1f >> 0x1d) + arg1) >> 3;  /* "40523" */  /* "523" */
    int32_t r1_3 = ((arg2 >> 0x1f >> 0x1d) + arg2) >> 3;  /* "40523" */  /* "523" */
    int32_t r2_3 = ((arg3 >> 0x1f >> 0x1d) + arg3) >> 3;  /* "40523" */  /* "523" */
    int32_t r0_7;
    int32_t r1_5;
    r0_7 = sub_5784(r0_3 * r0_3 + r1_3 * r1_3 + r2_3 * r2_3);
    int32_t r0_8;
    int32_t r1_6;
    r0_8 = sub_186d4(r0_7, r1_5);
    int32_t r0_9;
    int32_t r1_7;
    r0_9 = sub_5734(r0_8, r1_6, 3);
    int32_t r0_10;
    int32_t r2_5;
    int32_t r3;
    r0_10 = sub_586c(r0_9, r1_7);
    int32_t r1_8 = *0x109c64;
    
    if (!r1_8)
        *0x109c64 = r0_10;
    else
        r0_10 = 0xff7feb00(r1_8 * 3 + r0_10 * 7, 0xa);
    
    *0x109c64 = r0_10;
    sub_1414c(r0_10, r1_8, r2_5, r3);
    void* r1_13 = (*0x109c68 << 1) + 0x109c68;
    *0x109c78 += arg1 - *(r1_13 + 2);
    *(r1_13 + 2) = arg1;
    void* r1_17 = (*0x109c68 << 1) + 0x109c68;
    *0x109c7c += arg2 - *(r1_17 + 6);
    *(r1_17 + 6) = arg2;
    void* r1_21 = (*0x109c68 << 1) + 0x109c68;
    *0x109c80 += arg3 - *(r1_21 + 0xa);
    *(r1_21 + 0xa) = arg3;
    uint32_t r1_24 = *0x109c68 + 1;
    *0x109c68 = r1_24;
    
    if (r1_24 >= 2)
        *0x109c68 = 0;
    
    int32_t r0_13 = *0x109c78;
    int32_t r0_16 = ((r0_13 >> 0x1f) + r0_13) >> 1;  /* "523" */
    *0x103d6a = r0_16;
    int32_t r1_26 = *0x109c7c;
    int32_t r1_29 = ((r1_26 >> 0x1f) + r1_26) >> 1;  /* "523" */
    *0x103d6c = r1_29;
    int32_t r2_15 = *0x109c80;
    int32_t r2_18 = ((r2_15 >> 0x1f) + r2_15) >> 1;  /* "523" */
    *0x103d6e = r2_18;
    
    if (*0x109b1f)
        sub_14440(r0_16, r1_29, r2_18);
    
    return sub_17208(*0x103d6c);
}

uint32_t sub_140bc()
{
    uint32_t result = *0x109b1d;
    *0x109b1d = 0;
    return result;
}

uint32_t sub_140cc()
{
    uint32_t result = *0x109b26;
    *0x109b26 = 0;
    return result;
}

uint32_t sub_140dc()
{
    uint32_t result = *0x109b24;
    *0x109b24 = 0;
    return result;
}

int32_t sub_140ec()
{
    int32_t result = *0x109b68;
    
    if (result >= 0)
        return result;
    
    return 0 - result;
}

uint32_t sub_140fc()
{
    uint32_t result = *0x109b1c;
    *0x109b1c = 0;
    return result;
}

int32_t sub_1410c()
{
    if (*0x109b1e < 0x7d)
        return 0;
    
    return 1;
}

int32_t sub_14120()
{
    0xff7fec0a(0x109b28, 0x15c);
    sub_14394(0, 0xaa, 0x46);
    sub_14b44(2);
    *0x103d65 = 0xf;
    return 0xf;
}

int32_t sub_1414c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int16_t r7 = arg1;
    void* r2 = *0x109b40;
    void* r2_1;
    
    if (!r2)
    {
        *0x109b40 = arg1 * 3;
        
        for (int32_t i = 0; i < 3; )
        {
            r2_1 = (i << 1) + 0x109b28;
            i += 1;
            *(r2_1 + 0x1c) = r7;  /* "240523" */
        }
    }
    else
    {
        void* r1_2 = (*0x109b3c << 1) + 0x109b28;
        arg4 = arg1 - *(r1_2 + 0x1c);  /* "240523" */
        r2_1 = r2 + arg4;
        *0x109b40 = r2_1;
        *(r1_2 + 0x1c) = r7;  /* "240523" */
        uint32_t r1_5 = *0x109b3c + 1;
        *0x109b3c = r1_5;
        
        if (r1_5 >= 3)
            *0x109b3c = 0;
    }
    
    *((*0x109b4c << 1) + 0x109b4e) = 0xff7feb00(*0x109b40, 3, r2_1, arg4, arg2);
    uint32_t r0_5 = *0x109bc4;
    
    if (r0_5 < 0x4b)
        *0x109bc4 = r0_5 + 1;
    
    void* r0_9 = (*0x109bc5 << 1) + 0x109ba8;
    *0x109c5c += arg1 - *(r0_9 + 0x1e);  /* "0523" */
    *(r0_9 + 0x1e) = r7;  /* "0523" */
    uint32_t r0_12 = *0x109bc5 + 1;
    *0x109bc5 = r0_12;
    
    if (r0_12 >= 0x4b)
        *0x109bc5 = 0;
    
    int32_t r0_14;
    int32_t r2_5;
    r0_14 = 0xff7feb00(*0x109c5c, *0x109bc4);
    uint32_t r0_15 = *0x109b1e;
    
    if (r0_15 < 0x7d)
    {
        uint32_t r0_17 = r0_15 + 1;
        *0x109b1e = r0_17;
        
        if (r0_17 >= 0x7d)
        {
            int32_t r0_19;
            int32_t r1_10;
            r0_19 = sub_57ac(*0x103d66);
            int32_t r0_20;
            int32_t r1_11;
            r0_20 = sub_5574(r0_19, r1_10, 0x851eb852, 0x3fd851eb);
            *0x109b22 = sub_586c(r0_20, r1_11);
            char r0_24;
            r0_24 = 0xff7feb2c(0x2f * *0x103d70, 0x64);
            *0x109b21 = r0_24;
        }
    }
    
    uint32_t r0_26 = sub_149ec(&var_1c, &var_18, r2_5);
    uint32_t r0_27 = *0x109b28;
    
    if (!r0_27)
    {
        if (var_1c)
        {
            if (!*0x109b38)
            {
                *0x109b38 = r0_14;
                *0x109b30 = *0x109c60;
                sub_13f50(r0_14);
            }
            
            if (r0_26)
            {
                *0x109b28 = 2;
                *0x109b34 = *0x109c60;
                *0x109b3a = r0_26;
                *0x109b60 = 1;
            }
        }
    }
    else if (r0_27 == 1)
    {
        if (var_1c)
        {
            *0x109b28 = 2;
            int32_t r2_7 = r0_26 - r0_14;
            int32_t r3_1 = r0_26 - *0x109bac;
            
            if (r2_7 >= 0x2bc)
            {
                if (r2_7 >= 0xbb8)
                    *0x109b1d += 1;
                
                *0x109b1d += 1;
                *0x109b1e = 0;
            }
            
            *0x109b68 = r2_7;
            
            if (r3_1 >= 0x708 && r2_7 >= 0)
            {
                if (!sub_13c00(r3_1, *0x109c60 - *0x109b34))
                    sub_13ef4(0);
                else
                {
                    *0x109b34 = *0x109c60;
                    *0x109b3a = r0_26;
                    *0x109b2e = 0;
                }
            }
        }
    }
    else if (r0_27 == 2 && var_18)
    {
        *0x109b28 = 1;
        int32_t r6_2 = r0_14 - r0_26;
        
        if (!sub_13d64(r6_2, *0x109c60 - *0x109b30))
            sub_13f50(r0_26);
        else
        {
            sub_13f50(r0_26);
            *0x109b30 = *0x109c60;
            *0x109b38 = r0_26;
        }
        
        *0x109b68 = r6_2;
    }
    
    int32_t r0_46 = *0x109c60 + 1;
    *0x109c60 = r0_46;
    uint32_t r2_8 = *0x109b4c + 1;
    *0x109b4c = r2_8;
    
    if (r2_8 >= 9)
    {
        r2_8 = 0x109b48;
        *0x109b4c = 0;
    }
    
    int32_t result = r0_46 - *0x109b34;
    
    if (result < 0x50)
        return result;
    
    return 0xff7fec0a(0x109b28, 0x15c, r2_8);
}

void sub_14360(int32_t arg1)
{
    if (arg1 < 0xa)
        arg1 = 0xa;
    else if (arg1 > 0x28)
        arg1 = 0x28;
    
    *0x103d65 = arg1;
}

int32_t sub_14378(char arg1, int32_t arg2)
{
    *0x103d69 = arg1;
    int32_t r0_1 = arg2 - 0x28;
    
    if (r0_1 >= 0x3d)
        arg2 = 0x41;
    
    *0x103d64 = arg2;
    int32_t entry_r3;
    return sub_827c(r0_1, arg2, 0x103d64, entry_r3);
}

uint32_t sub_14394(char arg1, int32_t arg2, int32_t arg3)
{
    if (arg2 < 0x50)
        arg2 = 0x50;
    else if (arg2 > 0xfa)
        arg2 = 0xfa;
    
    uint32_t r0 = arg2;
    *0x103d66 = r0;
    
    if (r0 < 0xa0)
        *0x103d66 = ((((0xa0 - r0) >> 0x1f) + 0xa0 - r0) >> 1) + r0;  /* "523" */
    
    if (arg3 < 0x14)  /* "3.00.06_240523" */
        arg3 = 0x14;  /* "3.00.06_240523" */
    else if (arg3 > 0xdc)
        arg3 = 0xdc;
    
    uint32_t r0_2 = arg3;
    uint32_t r2 = arg1;
    *0x103d67 = r0_2;
    *0x103d68 = r2;
    int32_t r0_4;
    int32_t r1_3;
    
    if (r2 == 1)
    {
        if (r0_2 <= 0x32)  /* "2_V3.0" */
        {
            *0x103d70 = 0x64;
            return r0_2;
        }
        
        r0_4 = 0x32 * (r0_2 - 0x32);  /* "2_V3.0" */
        r1_3 = 0xf;
    }
    else
    {
        if (r0_2 <= 0x41)
        {
            *0x103d70 = 0x64;
            return r0_2;
        }
        
        r0_4 = 0x32 * (r0_2 - 0x41);  /* "2_V3.0" */
        r1_3 = 0x14;  /* "3.00.06_240523" */
    }
    
    int32_t r0_7 = 0xff7feb2c(r0_4, r1_3) + 0x65;
    *0x103d70 = r0_7;
    
    if (r0_7 <= 0xc8)
        return r0_7;
    
    *0x103d70 = 0xc8;
    return r0_7;
}

void sub_14414(int32_t arg1)
{
    if (*0x103d69 > 4)
        *0x109b24 = sub_c42c(arg1) + *0x109b24;
}

int32_t sub_14434()
{
    *0x109b1e = 0;
    return 0;
}

int32_t sub_14440(int32_t arg1, int32_t arg2, int32_t arg3)
{
    *((*0x103f9c << 1) + 0x103f9e) = arg1;
    *((*0x103f9c << 1) + 0x103fd0) = arg2;
    *((*0x103f9c << 1) + 0x104002) = arg3;
    int32_t result_1 = 0;
    *((*0x103f9c << 1) + 0x104034) = arg1 - *0x104066;
    *0x104066 = arg1;
    uint32_t r1_8 = *0x103f9c + 1;
    *0x103f9c = r1_8;
    
    if (r1_8 >= 0x19)  /* "06_240523" */
        *0x103f9c = 0;
    
    if (*0x103f94)
    {
        int32_t r0_5;
        
        if (arg2 + 0xd1f < 0x1a3f)
        {
            int32_t r0_4 = 0xff7feb2c(*0x104070, 9);
            r0_5 = arg2 - r0_4;
            
            if (arg2 - r0_4 < 0)
                r0_5 = 0 - r0_5;
        }
        
        if (arg2 + 0xd1f >= 0x1a3f || r0_5 >= 0x4b0)
            *0x104089 = 0;
        else
        {
            uint32_t r0_6 = *0x104089;
            
            if (r0_6 < 0xc8)
                *0x104089 = r0_6 + 1;
        }
        
        int32_t r0_9 = 0xff7feb2c(*0x10406c, 9);
        int32_t r0_10 = arg1 - r0_9;
        
        if (arg1 - r0_9 < 0)
            r0_10 = 0 - r0_10;
        
        if (r0_10 >= 0x4b0)
            *0x104088 = 0;
        else
        {
            uint32_t r0_11 = *0x104088;
            
            if (r0_11 < 0xc8)
                *0x104088 = r0_11 + 1;
        }
    }
    
    uint32_t r0_13 = *0x104069;
    int32_t r2_16 = *0x10406c + *((r0_13 << 1) + 0x103f9e);
    *0x10406c = r2_16;
    uint32_t r0_15 = *0x104068;
    int32_t r0_17 = r2_16 - *((r0_15 << 1) + 0x103f9e);
    *0x10406c = r0_17;
    int32_t r2_18 = *0x104070 + *((r0_13 << 1) + 0x103fd0);
    *0x104070 = r2_18;
    int32_t r0_20 = r2_18 - *((r0_15 << 1) + 0x103fd0);
    *0x104070 = r0_20;
    int32_t r1_13 = *0x104074 + *((r0_13 << 1) + 0x104002);
    *0x104074 = r1_13;
    *0x104074 = r1_13 - *((r0_15 << 1) + 0x104002);
    int32_t r0_25 = 0xff7feb2c(r0_17, 9);
    int32_t r0_27 = 0xff7feb2c(r0_20, 9);
    int32_t r1_14 = *((r0_15 << 1) + 0x103f9e);
    int32_t var_64 = r1_14;
    int32_t r12_1 = r1_14;
    int32_t r1_15 = *((r0_15 << 1) + 0x103fd0);
    uint32_t r0_29 = r0_15;
    int32_t var_6c_1 = r1_15;
    int32_t var_5c_1 = r1_15;
    
    while (true)
    {
        int32_t r1_16 = *((r0_29 << 1) + 0x103f9e);
        
        if (r1_16 < var_64)
            var_64 = r1_16;
        
        if (r1_16 > r12_1)
            r12_1 = r1_16;
        
        int32_t r1_17 = *((r0_29 << 1) + 0x103fd0);
        
        if (r1_17 < var_5c_1)
            var_5c_1 = r1_17;
        
        if (r1_17 > var_6c_1)
            var_6c_1 = r1_17;
        
        if (r0_13 == r0_29)
            break;
        
        if (r0_29 < 0x18)  /* ".06_240523" */
            r0_29 += 1;
        else
            r0_29 = 0;
    }
    
    int32_t r0_32 = r12_1 - var_64;
    uint32_t r0_38 = r0_15 + 1;
    *0x104068 = r0_38;
    
    if (r0_38 >= 0x19)  /* "06_240523" */
        *0x104068 = 0;
    
    uint32_t r0_41 = r0_13 + 1;
    *0x104069 = r0_41;
    
    if (r0_41 >= 0x19)  /* "06_240523" */
        *0x104069 = 0;
    
    uint32_t r0_42 = *0x104079;
    int32_t r2_26 = *0x10407c + *((r0_42 << 1) + 0x103f9e);
    *0x10407c = r2_26;
    uint32_t r0_44 = *0x104078;
    int32_t r0_46 = r2_26 - *((r0_44 << 1) + 0x103f9e);
    *0x10407c = r0_46;
    int32_t r2_28 = *0x104080 + *((r0_42 << 1) + 0x103fd0);
    *0x104080 = r2_28;
    int32_t r0_49 = r2_28 - *((r0_44 << 1) + 0x103fd0);
    *0x104080 = r0_49;
    int32_t r1_23 = *0x104084 + *((r0_42 << 1) + 0x104002);
    *0x104084 = r1_23;
    int32_t r0_52 = r1_23 - *((r0_44 << 1) + 0x104002);
    *0x104084 = r0_52;
    int32_t r0_54 = 0xff7feb2c(r0_46, 9);
    int32_t r0_56 = 0xff7feb2c(r0_49, 9);
    int32_t r0_58 = 0xff7feb2c(r0_52, 9);
    int32_t r1_24 = *((r0_44 << 1) + 0x103f9e);
    int32_t var_64_2 = r1_24;
    int32_t r12_3 = r1_24;
    int32_t r1_25 = *((r0_44 << 1) + 0x103fd0);
    uint32_t r0_60 = r0_44;
    int32_t var_6c_3 = r1_25;
    int32_t var_5c_2 = r1_25;
    
    while (true)
    {
        int32_t r1_26 = *((r0_60 << 1) + 0x103f9e);
        
        if (r1_26 < var_64_2)
            var_64_2 = r1_26;
        
        if (r1_26 > r12_3)
            r12_3 = r1_26;
        
        int32_t r1_27 = *((r0_60 << 1) + 0x103fd0);
        
        if (r1_27 < var_5c_2)
            var_5c_2 = r1_27;
        
        if (r1_27 > var_6c_3)
            var_6c_3 = r1_27;
        
        if (r0_42 == r0_60)
            break;
        
        if (r0_60 < 0x18)  /* ".06_240523" */
            r0_60 += 1;
        else
            r0_60 = 0;
    }
    
    int32_t r2_34 = r12_3 - var_64_2;
    uint32_t r0_68 = r0_44 + 1;
    *0x104078 = r0_68;
    
    if (r0_68 >= 0x19)  /* "06_240523" */
        *0x104078 = 0;
    
    uint32_t r0_71 = r0_42 + 1;
    *0x104079 = r0_71;
    
    if (r0_71 >= 0x19)  /* "06_240523" */
        *0x104079 = 0;
    
    int32_t r7 = 0;
    
    for (int32_t i = 0; i < 0x19; i += 1)  /* "06_240523" */
    {
        int32_t r1_32 = *((i << 1) + 0x104034);
        
        if (r1_32 > r7)
            r7 = r1_32;
    }
    
    uint32_t r0_72 = *0x10408a;
    
    if (!r0_72)
    {
        if (r2_34 < 0x2710 && arg2 < 0x9c4 && arg2 > 0xfffff63c)
        {
            int32_t r1_35 = arg1 - r0_54;
            
            if ((r1_35 > 0x1d4c && arg1 > 0xfffff63c && r0_54 < 0xffffea20 && r7 > 0x9c4)
                || (r1_35 > 0x1d4c && arg1 > 0x15e0 && r0_54 > 0xfffff63c && r7 > 0x5dc) || (
                arg3 - 0x15e1 < 0xa1f && r0_58 < 0xffffea20 && r0_58 > 0xffffe000
                && arg3 - r0_58 > 0x2710) || (r0_56 > 0x15e0 && r0_56 - arg2 > 0xfa0
                && r0_54 < 0xfffffa24 && arg1 > 0xfffffc18 && r1_35 > 0x1068 && r7 > 0x3e8
                && r7 < 0xdac))
            {
                result_1 = 1;
                *0x10408a = 0x19;  /* "06_240523" */
            }
            else if (r0_56 < 0xffffea20 && arg2 - r0_56 > 0xfa0 && r0_54 < 0xfffffa24
                && arg1 > 0xfffffc18 && r1_35 > 0x1068 && r7 > 0x3e8 && r7 < 0xdac)
            {
                result_1 = 1;
                *0x10408a = 0x19;  /* "06_240523" */
            }
        }
        else if (r0_25 > 0xfffff63c && r0_27 < 0xbb8 && r0_27 > 0xfffff448 && r0_32 > 0x7d0
            && r2_34 > 0xbb8)
        {
            int32_t r0_82;
            int32_t r1_39;
            r0_82 = sub_5784(0xff7feb2c(r2_34, r0_32));
            
            if (r2_34 < 0xbb8)
            {
                int32_t r0_85;
                int32_t r1_41;
                r0_85 = sub_5784(0xff7feb2c(var_6c_3 - var_5c_2, var_6c_1 - var_5c_1));
                
                if (r2_34 < 0xbb8 && r0_25 - r0_54 > 0x2260)
                {
                    *0x10408a = 0x19;  /* "06_240523" */
                    result_1 = 1;
                }
            }
        }
        
        if (*0x103f94 && !result_1 && r7 > 0x5dc && *0x104088 >= 3 && *0x104089 > 3)
        {
            int32_t r0_91 = *0x10406c;
            int32_t r0_93;
            
            if (r0_91 - *0x10407c <= 0x5dc0 || r0_91 <= 0xffffd120)
            {
                int32_t r3_13 = *0x104080;
                int32_t r0_92 = *0x104070;
                r0_93 = r0_92 - r3_13;
                
                if (r0_92 - r3_13 < 0)
                    r0_93 = 0 - r0_93;
            }
            
            if ((r0_91 - *0x10407c > 0x5dc0 && r0_91 > 0xffffd120) || r0_93 > 0x5dc0)
            {
                *0x10408a = 0x19;  /* "06_240523" */
                int32_t r0_94 = *0x104074;
                result_1 = 1;
                
                if (r0_94 < 0)
                    r0_94 = 0 - r0_94;
                
                if (r0_94 < 0x5dc)
                {
                    int32_t r0_95 = *0x104084;
                    
                    if (r0_95 < 0)
                        r0_95 = 0 - r0_95;
                    
                    if (r0_95 < 0x5dc)
                    {
                        result_1 = 0;
                        *0x10408a = 0;
                    }
                }
            }
        }
    }
    else
        *0x10408a = r0_72 - 1;
    
    int32_t result = 0x103f95;
    uint32_t r1_43 = *0x103f95;
    
    if (r1_43 == 1)
    {
        if (arg1 > 0xfffff510 && r0_25 > 0xfffff510)
            *0x103f95 = 0;
    }
    else if (!r1_43)
    {
        char r1_45;
        
        if (arg1 < 0xffffea20 || r0_25 < 0xffffea20)
            r1_45 = *0x103f98 + 1;
        else
            r1_45 = 0;
        
        *0x103f98 = r1_45;
        
        if (*0x10408a < 0xc && *0x103f98 >= 0xc)
        {
            *0x103f95 = 1;
            
            if (!result_1)
                result_1 = 3;
        }
    }
    
    uint32_t r1_48 = *0x103f96;
    
    if (r1_48 == 2)
    {
        if (arg2 + 0xaef < 0x15df)
            *0x103f96 = 0;
        
        goto label_149a0;
    }
    
    if (!r1_48)
    {
        char r1_54;
        
        if (arg2 + 0x15e0 < 0x2bc1)
            r1_54 = 0;
        else
            r1_54 = *0x103f99 + 1;
        
        *0x103f99 = r1_54;
        
        if (*0x10408a >= 0xc || *0x103f99 < 0xc)
            goto label_149a0;
        
        *0x103f96 = 2;
        
        if (!result_1)
            result_1 = 3;
        
        result = result_1;
    }
    else
    {
    label_149a0:
        
        if (result_1)
            result = result_1;
    }
    
    return result;
}

int32_t sub_149d0(int16_t arg1)
{
    *0x109b24 += arg1 * *0x109b21;
    int16_t result = *0x109b26 + arg1 * *0x109b22;
    *0x109b26 = result;
    return result;
}

uint32_t sub_149ec(char* arg1, char* arg2, int32_t arg3)
{
    uint32_t r0 = *0x109b4c;
    uint32_t result = 0;
    uint32_t i_1 = 0xff7feb00(r0 + 1, 9, arg3, 0x109b48, 0x109b48, arg1, arg2);
    int32_t r1 = 0xff7feb00(r0 + 4, 9);
    *arg1 = 0;
    uint32_t result_2 = 0;
    *arg2 = 0;
    uint32_t i_2 = i_1;
    uint32_t i = i_1;
    uint32_t i_3 = i_1;
    uint32_t result_1 = *((i_1 << 1) + 0x109b4e);
    
    while (*0x109b4c != i)
    {
        uint32_t result_3 = *((i << 1) + 0x109b4e);
        
        if (result_3 >= result_2)
        {
            result_2 = result_3;
            i_2 = i;
        }
        
        if (result_3 <= result_1)
        {
            result_1 = result_3;
            i_3 = i;
        }
        
        i = i + 1;
        
        if (i >= 9)
            i = 0;
    }
    
    if (i_2 == r1)
    {
        result = result_2;
        *arg1 = 1;
    }
    else if (i_3 == r1)
    {
        result = result_1;
        *arg2 = 1;
    }
    
    return result;
}

uint32_t sub_14a74()
{
    uint32_t result = *0x108fb5;
    
    if (!result)
        return result;
    
    return sub_7680() - *0x108fc8;
}

int32_t sub_14a8c()
{
    uint32_t r0 = *0x108fcc;
    
    if (r0 << 0x1c < 0)  /* "240523" */
    {
        *0x108fcc = r0 & 0xf7;
        sub_f118();
        char r0_4 = *0x108fcc | 2 | 1;
        *0x108fcc = r0_4;
        return r0_4;
    }
    
    if (r0 << 0x1b < 0)  /* "_240523" */
    {
        int16_t r0_5 = *0x108fce;
        *0x108fd0 = r0_5;
        *0x108fb3 = 0;
        *0x108fcc = 0;
        return r0_5;
    }
    
    if (r0 << 0x1a < 0)  /* "6_240523" */
    {
        *0x108fcc = r0 & 0xdf;
        sub_f118();
        *0x108fcc |= 2;
        sub_15bb4(0x108fba);
        return sub_15b94(0x108fba, 0x811e4d, 0x258);
    }
    
    if (r0 << 0x19 >= 0)  /* "06_240523" */
        return sub_ef54();
    
    *0x108fcc = r0 & 0xbf;
    sub_ef38();
    sub_e2c4();
    *0x108fcc &= 0xfd;
    sub_15bb4(0x108fba);
    sub_15b94(0x108fba, 0x811e4d, 0x2710);
    char r0_14 = *0x108fcc & 0xfb;
    *0x108fcc = r0_14;
    *0x108fb3 = 0;
    return r0_14;
}

int32_t sub_14b40() __pure
{
    return;
}

int32_t sub_14b44(int32_t arg1)
{
    *0x109b1f = arg1;
    char result;
    
    result = arg1 == 2 ? 1 : 0;
    
    sub_168b0(result);
    return result;
}

int32_t sub_14b60(int32_t arg1)
{
    *0x1099a8 += arg1;
    return sub_16dbc(0, arg1);
}

uint32_t sub_14b78(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0 = *0x108fcc;
    
    if (r0 << 0x1f)  /* "523" */
    {
        r0 <<= 0x1e;  /* "0523" */
        
        if (r0 >= 0)
        {
            var_18 = 0;
            sub_b464(0x20148000, &var_18);
            
            if (*0x108fb3 & ~*0x108fb4)
            {
            label_14d0c:
                *0x108fb3 = 0;
                *0x108fcc |= 0x20;  /* "23" */
                *0x108fd0 = *0x108fce;
                sub_14434();
                *0x108fb5 = 0;
                
                if (*0x108fb2)
                {
                    *0x108fb2 = 0;
                    sub_ad20(0x80c659, 0, 0x3e8, 1);
                }
                
                sub_14a8c();
                r0 = *0x108fcc << 0x1d;  /* "40523" */
                
                if (r0 >= 0)
                {
                    sub_15b94(0x108fba, 0x811e4d, 0x258);
                    char r0_39 = *0x108fcc | 4;
                    *0x108fcc = r0_39;
                    return r0_39;
                }
            }
            else
            {
                r0 = var_18 >> 0x17 << 0x1f;  /* "0.06_240523" */  /* "523" */
                
                if (r0)
                {
                    r0 = *0x108fb0;
                    
                    if (r0 == 0x23)
                        goto label_14d0c;
                }
            }
        }
        else
        {
            uint32_t r4_1 = *0x108fd0;
            uint32_t r7_1 = *0x108fce;
            
            if (r4_1 != r7_1)
            {
                *0x108fd0 = r7_1;
                int32_t r1_2;
                r0 = 0xff7feb2c(0xff7feb2c(r7_1 - r4_1 + 0x1ec, 0x1ec), 6);
                
                if (!r1_2)
                {
                    while (r4_1 != r7_1)
                    {
                        sub_13fb0(*(r4_1 + 0x108fd3) << 8 | *(r4_1 + 0x108fd2), 
                            *(r4_1 + 0x108fd5) << 8 | *(r4_1 + 0x108fd4), 
                            *(r4_1 + 0x108fd7) << 8 | *(r4_1 + 0x108fd6));
                        
                        if (*0x108fb6 && !*0x108fbe)
                        {
                            if (sub_140ec() <= 0x7d0)
                            {
                                uint32_t r0_15 = *0x108fc0 + 1;
                                *0x108fc0 = r0_15;
                                
                                if (r0_15 > 5)
                                {
                                    *0x108fc0 = 0;
                                    *0x108fbf = 0;
                                }
                            }
                            else
                            {
                                uint32_t r0_12 = *0x108fbf + 1;
                                *0x108fbf = r0_12;
                                
                                if (r0_12 > 0xa)
                                {
                                    *0x108fbf = 0;
                                    sub_6cba(2);
                                    sub_15b94(0x108fbc, 0x819be1, 0xbb8);
                                    *0x108fbe = 1;
                                }
                                
                                *0x108fc0 = 0;
                            }
                        }
                        
                        r4_1 = r4_1 + 6;
                        
                        if (r4_1 >= 0x1ec)
                            r4_1 = r4_1 - 0x1ec;
                    }
                    
                    if (!sub_a144())
                    {
                        uint32_t r0_17 = sub_140fc();
                        
                        if (r0_17)
                        {
                            if (!*0x108fb8)
                            {
                                *0x108fc4 = sub_17aac();
                                sub_15b94(0x108fb8, 0x81b69d, 0xbb8);
                            }
                            
                            sub_18030(r0_17);
                            
                            if (*0x1099f0 != 2)
                            {
                                sub_18020(sub_140cc());
                                sub_18010(sub_140dc());
                            }
                            
                            sub_6ce2(0x12);  /* "2_3.00.06_240523" */
                        }
                        
                        sub_14b60(sub_140bc());
                        uint32_t r0_26 = sub_1872c();
                        
                        if (r0_26)
                            sub_16dbc(3, r0_26);
                    }
                    else
                    {
                        sub_140fc();
                        sub_140bc();
                        sub_1872c();
                        sub_140dc();
                        sub_140cc();
                    }
                    
                    r0 = sub_1410c();
                    
                    if (r0)
                    {
                        *0x108fcc |= 0x40;
                        *0x108fb5 = 1;
                        r0 = sub_7680();
                        *0x108fc8 = r0;
                    }
                }
            }
        }
    }
    
    return r0;
}

int32_t sub_14d78(uint16_t* arg1, uint16_t* arg2, uint16_t* arg3, int32_t arg4)
{
    uint16_t* var_1c = arg3;
    uint16_t* var_20 = arg2;
    uint16_t* var_24 = arg1;
    uint16_t* r6 = arg1;
    uint16_t* r4 = arg3;
    uint16_t* r5 = arg2;
    
    if (*0x108fcc << 0x1e < 0)  /* "0523" */
    {
        sub_ef54();
        uint32_t r7_2 = *0x108fce;
        uint32_t r0_14 = 0xff7feb2c(r7_2 - 6 * arg4 + 0x1ec, 0x1ec);
        
        while (r0_14 != r7_2)
        {
            *r6 = *(r0_14 + 0x108fd3) << 8 | *(r0_14 + 0x108fd2);
            *r5 = *(r0_14 + 0x108fd5) << 8 | *(r0_14 + 0x108fd4);
            *r4 = *(r0_14 + 0x108fd7) << 8 | *(r0_14 + 0x108fd6);
            r0_14 = r0_14 + 6;
            r4 = &r4[1];
            r5 = &r5[1];
            r6 = &r6[1];
            
            if (r0_14 >= 0x1ec)
                r0_14 = r0_14 - 0x1ec;
        }
        
        return 0x14;  /* "3.00.06_240523" */
    }
    
    uint32_t r0_2 = *0x108fce;
    int32_t r0_3 = r0_2 - 6;
    
    if (r0_2 - 6 < 0)
        r0_3 += 0x1ec;
    
    uint16_t r1_2 = *(r0_3 + 0x108fd3) << 8 | *(r0_3 + 0x108fd2);
    uint16_t r1_5 = *(r0_3 + 0x108fd5) << 8 | *(r0_3 + 0x108fd4);
    uint16_t r0_7 = *(r0_3 + 0x108fd7) << 8 | *(r0_3 + 0x108fd6);
    int32_t r0_8 = 0;
    
    while (r0_8 < arg4)
    {
        *r6 = r1_2;
        *r5 = r1_5;
        *r4 = r0_7;
        r0_8 += 1;
        r4 = &r4[1];
        r5 = &r5[1];
        r6 = &r6[1];
    }
    
    return 0;
}

int32_t sub_14e34()
{
    sub_8480();
    sub_14120();
    sub_14394(*0x1042b4, *0x1042b6, *0x1042b7);
    sub_14b44(0);
    sub_14360(0xc);
    char result = *0x108fcc & 0xfb;
    *0x108fcc = result;
    return result;
}

uint32_t sub_14e6c()
{
    uint32_t result = *0x108fb2;
    
    if (!result)
    {
        result = sub_a6d0();
        
        if (!result)
        {
            result = *0x108fcc << 0x1e;  /* "0523" */
            
            if (result >= 0)
            {
                result = sub_14a74();
                
                if (result >= 0xe10)
                {
                    result = sub_17a74();
                    
                    if (result == 1)
                    {
                        *0x108fb2 = result;
                        return sub_a16c();
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_14ea8()
{
    if (*0x108fcc << 0x1d >= 0)  /* "40523" */
    {
        sub_15b94(0x108fba, 0x811e4d, 0x258);
        *0x108fcc |= 4;
    }
    
    *0x108fd0 = *0x108fce;
    char result = *0x108fcc | 8;
    *0x108fcc = result;
    return result;
}

int32_t sub_14ee0()
{
    sub_15b94(0x108fba, 0x811e4d, 0x3a98);
    char result = *0x108fcc | 0x14;  /* "3.00.06_240523" */
    *0x108fcc = result;
    return result;
}

uint32_t sub_14f08()
{
    return *0x108fb0;
}

uint32_t sub_14f14()
{
    sub_10d30(1, 0x108fb0, 1);
    uint32_t result = *0x108fb0;
    
    if (result != 0x13)  /* "_3.00.06_240523" */
    {
        sub_f190(0x68, 0xa5);
        0xff900b4c(0xc3500);
        sub_f0f4(0xf, 0x108fb0, 1);
        result = *0x108fb0;
        
        if (result != 0x11)  /* "02_3.00.06_240523" */
        {
            sub_188d0(0x14, 0xb6);  /* "3.00.06_240523" */
            0xff900b4c(0xc3500);
            sub_18898(0, 0x108fb0, 1);
            result = *0x108fb0;
            
            if (result != 0x23)
                return 0;
        }
    }
    
    return result;
}

int32_t sub_14f74()
{
    return sub_fc84(0x104f31, 0xa) ^ 1;
}

void sub_14f88(int32_t* arg1, int32_t arg2)
{
    int32_t* r6 = arg1;
    
    for (uint32_t i = 0; i < arg2; i = i + 1)
    {
        arg1 = r6[i];
        
        if (arg1)
            (*arg1)(arg1);
    }
}

void sub_14fa8(uint32_t arg1)
{
    /* unimplemented  {cpsid I} */
    **0x104dc8 = arg1;
    
    if (arg1 != 0xc3c3c3c3 && arg1 != 0xa5a5a5a5)
        sub_1871c(2);
}

int32_t sub_14fd4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t r4 = *0x100b14;
    int32_t* r4_1;
    
    if (r4 < 0x80)
    {
        int32_t r6_3 = (*0x100b10 + r4) << 0x19;  /* "06_240523" */
        *0x100b14 = r4 + 1;
        r4_1 = 0x14 * (r6_3 >> 0x19) + 0x100110;  /* "3.00.06_240523" */  /* "06_240523" */
    }
    else
        r4_1 = &data_0;
    
    if (!r4_1)
        return 9;
    
    *0x10435c += 1;
    /* unimplemented  {cpsid I} */
    *r4_1 = arg1;
    r4_1[1] = arg2;
    r4_1[2] = arg3;
    r4_1[3] = arg4;
    r4_1[4] = arg5;
    *0x100104 = 1;
    
    if (*0x10435c)
        *0x10435c -= 1;
    
    if (!*0x10435c)
        /* unimplemented  {cpsie I} */
    
    return 0;
}

int32_t sub_1503c(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    
    if (*0x1098b4)
    {
        int32_t r0_1 = *0x103d5c;
        
        if (arg2 == r0_1)
        {
            int32_t r5_1 = *0x1098b8;
            0xff7febb4(r0_1);
            0xff7febc6();
            int32_t r0_2 = *0x1098bc;
            int32_t r0_12;
            
            if (arg1 <= r0_2)
            {
                int32_t r0_14;
                int32_t r1_4;
                r0_14 = sub_5784(r0_2 - arg1);
                int32_t r0_15;
                int32_t r1_5;
                r0_15 = sub_5574(r0_14, r1_4, 0xcccccccd, 0x3fdccccc);
                int32_t r5_3 = r5_1 - sub_5824(r0_15, r1_5);
                *0x1098b8 = 0xff7feb2c(*0x1098b4 + r5_3 + *0x1098b8, 3);
                r0_12 = r5_3 - 0xff7feb2c(0xff7febb4(), 5);
            }
            else
            {
                int32_t r0_4;
                int32_t r1;
                r0_4 = sub_5784(arg1 - r0_2);
                int32_t r0_5;
                int32_t r1_1;
                r0_5 = sub_5574(r0_4, r1, 0xcccccccd, 0x3fdccccc);
                int32_t r5_2 = sub_5824(r0_5, r1_1) + r5_1;
                *0x1098b8 = 0xff7feb2c(*0x1098b4 + r5_2 + *0x1098b8, 3);
                r0_12 = 0xff7feb2c(0xff7febb4(), 5) + r5_2;
            }
            
            *0x1098bc = arg1;
            return r0_12;
        }
    }
    
    int32_t r6 = 0;
    
    while (*(0x81f420 + (r6 << 2)) <= arg2)
    {
        r6 += 1;
        
        if (r6 >= 5)
            break;
    }
    
    0xff7febb4();
    0xff7febc6();
    int32_t r1_8 = 0xff7feb2c(0xff7febb4(), 0x15);  /* ".00.06_240523" */
    int32_t r6_1 = *(0x81f434 + (r6 << 2)) + r1_8 + 0x64;
    *0x1098b4 = r6_1;
    int32_t r0_30;
    int32_t r1_13;
    
    if (arg1 >= 0x41)
    {
        int32_t r0_33;
        int32_t r1_14;
        r0_33 = sub_5784(arg1 - 0x41);
        int32_t r0_34;
        int32_t r1_15;
        r0_34 = sub_5574(r0_33, r1_14, 0xcccccccd, 0x3fdccccc);
        int32_t r0_36;
        int32_t r1_16;
        r0_36 = sub_5784(r6_1);
        r0_30 = sub_540c(r0_36, r1_16, r0_34, r1_15);
    }
    else
    {
        int32_t r0_26;
        int32_t r1_10;
        r0_26 = sub_5784(0x41 - arg1);
        int32_t r0_27;
        int32_t r1_11;
        r0_27 = sub_5574(r0_26, r1_10, 0xcccccccd, 0x3fdccccc);
        int32_t r0_29;
        int32_t r1_12;
        r0_29 = sub_5784(r6_1);
        r0_30 = sub_5556(r0_29, r1_12, r0_27, r1_11);
    }
    
    int32_t r0_38 = r6_1 + sub_5824(r0_30, r1_13);
    int32_t r0_40 = ((r0_38 >> 0x1f) + r0_38) >> 1;  /* "523" */
    *0x1098bc = arg1;
    *0x1098b8 = r0_40;
    *0x103d5c = arg2;
    return r0_40;
}

int32_t sub_15174(char* arg1, char* arg2)
{
    *arg1 = *0x1098b0;
    char result = *0x1098b1;
    *arg2 = result;
    return result;
}

int32_t sub_15184()
{
    return sub_191f2(0x81f44c);
}

uint32_t sub_15194(char* arg1, char* arg2)
{
    char* var_18 = arg2;
    uint32_t result = 0;
    int32_t r2 = *0x1098cc;
    
    if (!r2)
    {
        0xff7fec0a(arg1, 0xe, r2);
        *arg1 = 0xff;
        return 0;
    }
    
    int32_t entry_r3;
    int32_t r0 = sub_1927e(0x81f44c, *0x1098c4, r2, entry_r3);
    *arg1 = 0;
    arg1[1] = 5;
    arg1[2] = 0x1e;  /* "0523" */
    char r7_1 = 0;
    uint32_t i = 0;
    int32_t r0_2 = 0xff7feb00(0x30, 1);  /* "R02_V3.0" */
    int32_t var_28_1 = r0_2;
    
    for (; r0_2 > i; i = i + 1)
    {
        if (!0xff7feb00(result, 0xe))
        {
            r7_1 += 1;
            arg2[result] = r7_1;
            result = result + 1;
        }
        
        if (result == 1)
        {
            result = 2;
            arg2[1] = *0x1098ca;
        }
        
        uint32_t r0_10 = *((i << 2) + r0 + 4);
        
        if (r0_10 == 0xff || !r0_10)
            arg2[result] = 0;
        else if (r0_10 - 0x1e < 0x15)  /* ".00.06_240523" */  /* "0523" */
            arg2[result] = r0_10;
        else
            arg2[result] = 0xff7feb2c(0xff7febb4(), 0x14) + 0x1e;
                /* "3.00.06_240523" */  /* "0523" */
        
        r0_2 = var_28_1;
        result = result + 1;
    }
    
    0xff7fec0a(&arg1[3], 3);
    return result;
}

int32_t sub_15260(int32_t arg1)
{
    int16_t r4 = arg1;
    *0x1098cc = 0;
    
    if (arg1 > 6)
        r4 = 6;
    
    *0x1098ca = r4;
    int16_t r0;
    int32_t r3;
    r0 = sub_eb1c();
    uint32_t r4_1 = r0 - r4;
    *0x1098cc = 0;
    int32_t result = sub_1927e(0x81f44c, *0x1098c4, r4_1, r3);
    
    if (result)
        *0x1098cc = r4_1;
    
    return result;
}

int32_t sub_1529c()
{
    *0x1098c8 = 0;
    *0x1098cc = 0;
    uint32_t r2 = *0x1042f5;
    
    if (r2 == 0xff)
        *0x1042f5 = 0;
    
    int32_t entry_r3;
    return sub_19240(0x81f44c, 0x1098c4, r2, entry_r3);
}

uint32_t sub_152c8()
{
    uint32_t result = sub_18b34();
    
    if (result)
    {
        result = *0x1041e2;
        
        if (result)
        {
            result = sub_17a74();
            
            if (result != 1)
            {
                result = sub_a144();
                
                if (!result)
                {
                    result = sub_eb1c();
                    
                    if (result)
                    {
                        sub_f660(4);
                        *0x1098c9 = 0;
                        return sub_15b94(0x1098c0, 0x81821d, 0x3e8);
                    }
                }
            }
        }
    }
    
    return result;
}

uint32_t sub_1531c(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14 = arg3;
    int32_t* var_18 = arg2;
    uint32_t result = *0x1098c9 + 1;
    *0x1098c9 = result;
    
    if (result > 3)
    {
        if (result <= 0xe)
        {
            result = sub_f57c();
            
            if (!result)
            {
                sub_15bb4(0x1098c0);
                return sub_f710(4);
            }
        }
        else if (result >= 0x14)  /* "3.00.06_240523" */
        {
            uint32_t r0_4 = (0xff7feb2c(0xff7febb4(), 0x14) + 0x1e) << 0x18 >> 0x18;
                /* "3.00.06_240523" */  /* ".06_240523" */  /* "0523" */
            
            if (r0_4)
            {
                var_10 = 0;
                var_10 = r0_4;
                int32_t r4_2 = (0xff7feb00(sub_eb04(), 0x1e) << 2) + 4;  /* "0523" */
                var_14 = 4;
                sub_192dc(0x81f44c, 0x1098c4, sub_eb1c(), r4_2, &var_10, 4);
            }
            
            sub_15bb4(0x1098c0);
            return sub_f710(4);
        }
    }
    
    return result;
}

int32_t sub_15398(void* arg1, int16_t* arg2)
{
    int32_t result = 0;
    int32_t* r0_1 = sub_1559c(*(arg1 + 2));
    
    if (!r0_1)
        return 0x40;
    
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        if (*(i * 0x18 + 0x105b3e) == *(arg1 + 2))  /* ".06_240523" */
            return 0x42;
    }
    
    uint32_t i_1;
    
    for (i_1 = 0; i_1 < 0xa; i_1 = i_1 + 1)
    {
        if (*(i_1 * 0x18 + 0x105b3e) == 0xff)  /* ".06_240523" */
        {
            result = (*r0_1)(i_1 * 0x18 + 0x105b28, arg1 + 6, *(arg1 + 4), *(arg1 + 1), arg1 + 8, 
                arg1, arg2);  /* ".06_240523" */
            
            if (!result)
            {
                *(i_1 * 0x18 + 0x105b3e) = *(arg1 + 2);  /* ".06_240523" */
                *arg2 = *(i_1 * 0x18 + 0x105b3c);  /* ".06_240523" */
            }
            
            break;
        }
    }
    
    if (i_1 == 0xa)
        return 0x4b;
    
    return result;
}

void* sub_15420(int32_t arg1, int32_t arg2)
{
    int32_t var_18 = arg2;
    void* result;
    
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        result = sub_1559c(*(i * 0x18 + 0x105b3e));  /* ".06_240523" */
        
        if (result)
            result = (*(result + 0xc))(i * 0x18 + 0x105b28, arg1, arg2);  /* ".06_240523" */
    }
    
    return result;
}

void* sub_15454(int32_t arg1)
{
    void* result;
    
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        result = sub_1559c(*(i * 0x18 + 0x105b3e));  /* ".06_240523" */
        
        if (result)
            result = (*(result + 8))(i * 0x18 + 0x105b28, arg1);  /* ".06_240523" */
    }
    
    return result;
}

uint32_t sub_15484(int16_t* arg1, int32_t arg2)
{
    uint32_t r2_1 = *arg1;
    uint32_t result = r2_1 << 0x11 >> 0x11;  /* "02_3.00.06_240523" */
    
    if (!(r2_1 >> 0xf))
        return result;
    
    return result | arg2 << 8;
}

int32_t sub_15494(int32_t arg1)
{
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        if (*(i * 0x18 + 0x105b3e) == arg1)  /* ".06_240523" */
            return *(0x18 * i + 0x105b38);  /* ".06_240523" */
    }
    
    return 0;
}

uint32_t sub_154c4(int32_t arg1)
{
    uint32_t r3 = 0xff;
    
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        if (*(i * 0x18 + 0x105b3c) == arg1)  /* ".06_240523" */
        {
            r3 = *(0x18 * i + 0x105b3e);  /* ".06_240523" */
            break;
        }
    }
    
    return arg1 >> 8 << 8 | r3;
}

uint32_t sub_154f8(int32_t arg1)
{
    uint32_t r3 = 0xff;
    
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        if (*(i * 0x18 + 0x105b3e) == arg1)  /* ".06_240523" */
        {
            r3 = *(0x18 * i + 0x105b3c);  /* ".06_240523" */
            break;
        }
    }
    
    return arg1 >> 8 << 8 | r3;
}

int32_t sub_1552c(int32_t arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    
    if (!arg1)
    {
        int32_t r0_9;
        
        for (uint32_t i = 0; i < 0xa; i = i + 1)
        {
            void* r0_7 = 0x18 * i;  /* ".06_240523" */
            *(r0_7 + 0x105b38) = 0;
            *(r0_7 + 0x105b3c) = i + 0xa;
            *(r0_7 + 0x105b3e) = 0xff;
            *(r0_7 + 0x105b2c) = 0;
            *(r0_7 + 0x105b30) = 0;
            *(r0_7 + 0x105b36) = 0;
            *(r0_7 + 0x105b34) = 0;
            *(0x105b28 + r0_7) = 0;
            r0_9 = 0xff80c59c(*(r0_7 + 0x105b3c));
        }
        
        return r0_9;
    }
    
    int32_t r0_5;
    
    for (uint32_t i_1 = 0; i_1 < 0xa; i_1 = i_1 + 1)
    {
        void* r0_2 = sub_1559c(*(i_1 * 0x18 + 0x105b3e));  /* ".06_240523" */
        
        if (r0_2)
            (*(r0_2 + 4))(i_1 * 0x18 + 0x105b28);  /* ".06_240523" */
        
        *(i_1 * 0x18 + 0x105b3e) = 0xff;  /* ".06_240523" */
        *(i_1 * 0x18 + 0x105b2c) = 0;  /* ".06_240523" */
        *(i_1 * 0x18 + 0x105b30) = 0;  /* ".06_240523" */
        *(i_1 * 0x18 + 0x105b36) = 0;  /* ".06_240523" */
        r0_5 = 0xff80c67c(*(i_1 * 0x18 + 0x105b3c));  /* ".06_240523" */
    }
    
    return r0_5;
}

int32_t sub_1559c(char arg1)
{
    uint32_t r1 = arg1;
    
    if (r1 == 0x14)  /* "3.00.06_240523" */
        return 0x81ed98;
    
    if (r1 == 0xf2)
        return 0x81ee08;
    
    if (r1 == 0xfc)
        return 0x81eee8;
    
    if (r1 != 0xfd)
        return 0;
    
    return sub_19440();
}

uint32_t sub_155cc(void* arg1, int32_t arg2)
{
    uint32_t r2_1 = *(arg1 + 2);
    uint32_t result = r2_1 << 0x11 >> 0x11;  /* "02_3.00.06_240523" */
    
    if (!(r2_1 >> 0xf))
        return result;
    
    return result | arg2 << 8;
}

void sub_155dc(int32_t arg1)
{
    if (*0x104220 != arg1)
    {
        *0x104220 = arg1;
        sub_db84();
    }
}

uint32_t sub_155f4(char* arg1, int32_t arg2, int32_t arg3, void* arg4 @ r6, void* arg5 @ r7)
{
    void* var_8 = arg4;
    uint32_t r0 = *arg1;
    
    if (r0 == 0x72)
        return r0;
    
    if (r0 == 0x48)
        return sub_173d8();
    
    if (r0 <= 0x2c)
        return (*(0x81f058 + (r0 << 2)))(arg1);
    
    if (r0 == 0x94)
        return sub_989c(arg1);
    
    if (r0 > 0x94)
    {
        if (r0 == 0xbf)
            return sub_8cf2(arg1);
        
        if (r0 > 0xbf)
        {
            if (r0 == 0xc7)
                return sub_a2f0(arg1);
            
            if (r0 <= 0xc7)
            {
                int32_t r2_2;
                int32_t r3_6;
                r0 = 0xff7fec8e(r0, 0x1041e0, 0, r0 - 0xc0);
                void* arg_c = arg5;
                return r0;
            }
            
            if (r0 == 0xf0)
                return r0;
            
            if (r0 > 0xf0)
            {
                if (r0 == 0xf1)
                    return r0;
                
                if (r0 == 0xff)
                    return sub_a2f0(arg1);
                
                return sub_8e90(r0);
            }
            
            if (r0 == 0xc8)
            {
                if (arg1[1] == 1)
                    *0x1041e4 = 1;
                else
                    *0x1041e4 = 0;
                
                return sub_9044(0xc8, 0);
            }
            
            if (r0 != 0xc9)
                return sub_8e90(r0);
            
            return r0;
        }
        
        if (r0 == 0x9b)
            return sub_9920(arg1);
        
        if (r0 <= 0x9b)
        {
            void* r0_4;
            void* r1_6;
            int32_t r2;
            r0_4 = 0xff7fec8e(r0, r0 - 0x95, arg3, r0 - 0x95);
            *(r0_4 + 0x10);  /* "R02_3.00.06_240523" */
            *(r0_4 + 0x24) = r0_4;
            r0 = *(r1_6 + 0x24);
        }
        
        switch (r0)
        {
            case 0x9c:
            {
                return sub_9a44(arg1);
                break;
            }
            case 0x9e:
            {
                return sub_99e4(arg1);
                break;
            }
            case 0x9f:
            {
                return arg1;
                break;
            }
            case 0xa0:
            {
                return sub_9a6c();
                break;
            }
            case 0xa1:
            {
                return sub_9af8(arg1);
                break;
            }
            case 0xb0:
            {
                return sub_935c(arg1);
                break;
            }
        }
        
        return sub_8e90(r0);
    }
    
    if (r0 == 0x68)
        return sub_a2f0(arg1);
    
    if (r0 <= 0x68)
    {
        if (r0 == 0x39)
            return r0;
        
        if (r0 > 0x39)
        {
            if (r0 == 0x50)
                return sub_704c(arg1);
            
            if (r0 > 0x50)
            {
                if (r0 == 0x60)
                    return r0;
                
                if (r0 != 0x61)
                    return sub_8e90(r0);
                
                return r0;
            }
            
            if (r0 == 0x43)
                return sub_1747c(arg1);
            
            if (r0 == 0x44)
                return sub_a2f0(arg1);
            
            if (r0 == 0x46)
                return sub_17614(arg1, arg2);
            
            return sub_8e90(r0);
        }
        
        int32_t r1_3;
        r0 = 0xff7fec8e(r0, r0 - 0x2e, arg3, r0 - 0x2e);
        char r3_2 = r1_3 << 0x1c;  /* "240523" */
        *(arg4 + 0xd) = r3_2;
        *(arg4 + 0xd) = r3_2;
        *(arg4 + 0x19) = r3_2;  /* "06_240523" */
        *(arg5 + 2) = r0 << 0x1e;  /* "0523" */
        return r0;
    }
    
    if (r0 == 0x80)
        return sub_a2f0(arg1);
    
    if (r0 > 0x80)
    {
        if (r0 == 0x91)
            return sub_9872(arg1);
        
        if (r0 > 0x91)
        {
            if (r0 == 0x92)
                return sub_9a26(arg1);
            
            if (r0 == 0x93)
                return sub_9994(arg1);
            
            return sub_8e90(r0);
        }
        
        if (r0 == 0x81)
            return sub_a2f0(arg1);
        
        if (r0 == 0x90)
            return sub_9d04(arg1);
        
        return sub_8e90(r0);
    }
    
    if (r0 == 0x76)
        return r0;
    
    if (r0 > 0x76)
    {
        if (r0 == 0x77)
            return sub_a2f0(arg1);
        
        if (r0 != 0x78)
            return sub_8e90(r0);
        
        return r0;
    }
    
    if (r0 == 0x69)
        return sub_73c8(arg1);
    
    if (r0 == 0x6a)
        return sub_7340(arg1);
    
    if (r0 == 0x75)
        return r0;
    
    return sub_8e90(r0);
}

void* sub_15722(void* arg1 @ r4, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_8eb4(arg1);
}

int32_t sub_1584e(int32_t arg1, void* arg2, char arg3, void* arg4 @ r4, char arg5 @ r5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    uint32_t r0_1 = *(arg4 + 1);
    
    if (r0_1 == 1)
        *(arg2 + 3) = arg5;
    else if (!r0_1)
        *(arg2 + 3) = arg3;
    else
        *(arg2 + 3) = r0_1;
    
    return sub_9044(0xc5, 0);
}

int32_t sub_15874(void* arg1 @ r6)
{
    *(arg1 * 2);
    void* var_8 = arg1;
    
    for (int32_t i = 0; i < 0x80; i += 1)
    {
        void* r5_2 = 0xc * i;
        uint32_t r0_1 = *(0x104360 + r5_2);
        
        if (r0_1 && !0xff80c7a0(r0_1, 0x44))
            0xff80c8d4(*(0x104360 + r5_2), 0x44, *(r5_2 + 0x104368));
    }
    
    return 0;
}

void* sub_158b0(void* arg1, void* arg2)
{
    uint32_t r4 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    void* r3 = *(arg1 + 0xc);
    uint32_t r6 = *(arg2 + 8);
    *(r3 + 0x68) = *(arg2 + 9) << 0x1d >> 0x1f << r6 | (*(r3 + 0x68) & ~(1 << r6));
        /* "40523" */  /* "523" */
    void* r3_4 = *(arg1 + 0xc);
    uint32_t r3_6 = *(arg2 + 8);
    *(r3_4 + 0x38) = *(arg2 + 9) << 0x1f >> 0x1f << r3_6 | (*(r3_4 + 0x38) & ~(1 << r3_6));
        /* "523" */
    void* r3_8 = *(arg1 + 0xc);
    uint32_t r3_11 = *(arg2 + 8);
    *(r3_8 + 0x3c) = *(arg2 + 9) << 0x1e >> 0x1f << r3_11 | (*(r3_8 + 0x3c) & ~(1 << r3_11));
        /* "0523" */  /* "523" */
    void* r5_7 = *(arg1 + 0xc);
    int32_t r3_13 = 1 << *(arg2 + 8);
    *(r5_7 + 0x30) = r3_13 | (*(r5_7 + 0x30) & ~r3_13);  /* "R02_V3.0" */
    void* result = *(arg1 + 0xc);
    *(result + 0x34) &= ~(1 << *(arg2 + 8));  /* "V3.0" */
    
    if (!r4)
        /* unimplemented  {cpsie I} */
    
    return result;
}

void sub_15934(int32_t arg1, int32_t arg2)
{
    if (!arg2)
    {
        sub_15ef0(0x104ef0, 8, arg1);
        return;
    }
    
    if (arg2 == 1)
        sub_15ef6(0x104ef0, 8);
}

int32_t sub_15958(int32_t arg1)
{
    int32_t r5 = 0;
    void* r0_1 = 0xc * sub_b134(arg1);
    int32_t r2 = *(r0_1 + 0x104364);
    int32_t entry_r3;
    
    if (r2 <= 0)
        entry_r3 = r2 + 1;
    
    if (r2 > 0 || r2 == 0xffffffff)
    {
        0xff80c8d4(arg1, 0x44, *(r0_1 + 0x104368), entry_r3);
        int32_t r0_3 = *(r0_1 + 0x104364);
        
        if (r0_3 > 0)
            *(r0_1 + 0x104364) = r0_3 - 1;
    }
    else if (!r2)
    {
        *(0x104360 + r0_1) = 0;
        r5 = 1;
    }
    else
    {
        while (true)
            /* nop */
    }
    
    sub_b18c(arg1, r5);
    return 0;
}

int32_t sub_159a8()
{
    *0x1092c2 = 0;
    *0x1092c3 = 0;
    *0x1092cc = 0;
    *0x1092ce = 0;
    *0x1092cf = 0;
    *0x1092e0 = 0;
    return 0;
}

int32_t sub_159c0(int32_t arg1, char* arg2, char* arg3)
{
    int32_t r0 = sub_1503c(arg1, 0x19);  /* "06_240523" */
    int32_t r4 = r0;
    
    if (r0 >= 0x8c)
    {
        r0 = 0x8c;
        r4 = 0x8c - 0xff7feb2c(0xff7febb4(), 5);
    }
    
    if (r4 <= 0x5a)
    {
        int32_t r1_1;
        r0 = 0xff7feb2c(0xff7febb4(r0), 5);
        r4 = r1_1 + 0x5a;
    }
    
    int32_t r0_3 = 0xff7febb4(r0);
    int32_t r0_7 = 0xff7feb2c(0x19 * (r4 - 0x5a), 0x32);  /* "06_240523" */  /* "2_V3.0" */
    int32_t r1_9 = r0_7 + r0_3 - (((r0_3 >> 0x1f >> 0x1d) + r0_3) >> 3 << 3) + 0x3b;
        /* "40523" */  /* "523" */
    
    if (r1_9 >= 0x5a)
    {
        r0_7 = 0x5a;
        r1_9 = 0x5a - 0xff7feb2c(0xff7febb4(), 5);
    }
    
    if (r1_9 <= 0x3c)
        r1_9 = 0xff7feb2c(0xff7febb4(r0_7, r1_9), 5) + 0x3c;
    
    *arg2 = r4;
    *arg3 = r1_9;
    *0x1098b0 = r4;
    *0x1098b1 = r1_9;
    return 0x1098b0;
}

void sub_15a48(char* arg1) __noreturn
{
    uint32_t r0 = *arg1;
    
    if (r0)
    {
        sub_e250(r0);
        /* no return */
    }
    
    sub_e250(0xa);
    /* no return */
}

int32_t sub_15a68(uint16_t* arg1, int32_t arg2, int32_t arg3)
{
    uint32_t r0_1 = sub_ea24(arg2);
    *arg1 = r0_1;
    
    if (r0_1)
        sub_b16c(r0_1);
    
    uint32_t r0_3 = sub_b09c(arg3, 0xffffffff);
    *arg1 = r0_3;
    
    if (!r0_3)
        return 0xffffffff;
    
    int32_t* r0_8 = (sub_b134(r0_3) << 0x10 >> 0xb) + 0x100b18;  /* "R02_3.00.06_240523" */
    *0x10435c += 1;
    /* unimplemented  {cpsid I} */
    *r0_8 = 0xffffffff;
    r0_8[2] = 0;
    r0_8[3] = 0;
    r0_8[4] = 0;
    r0_8[5] = arg2;
    r0_8[1] = 0xffffffff;
    r0_8[6] = 0;
    r0_8[7] = *arg1;
    *(r0_8 + 0x1e) = 1;  /* "0523" */
    
    if (*0x10435c)
        *0x10435c -= 1;
    
    if (!*0x10435c)
        /* unimplemented  {cpsie I} */
    
    return 0;
}

int32_t sub_15af0(void* arg1, int32_t arg2)
{
    int32_t r3_3;
    
    if (!*0x106204)
    {
        *0x106204 = *(arg1 + 3) << 8 | *(arg1 + 2);
        r3_3 = *0x106204 - arg2;
        *0x106204 = r3_3;
    }
    else
    {
        *0x106204 -= arg2;
        r3_3 = *0x106204;
        
        if (r3_3 < 0)
        {
            r3_3 = 0;
            *0x106204 = r3_3;
        }
    }
    
    sub_a7bc(arg1, arg2, *0x105f78, r3_3);
    return 0;
}

int32_t sub_15b30(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t i = arg1 - 0x6c000;
    
    if (i < 0x10000)
    {
        int32_t r4_1 = 3;
        
        do
        {
            int32_t temp0_1 = r4_1;
            r4_1 -= 1;
            
            if (temp0_1 < 1)
                break;
            
            i = 0xff9004ba(arg1, arg3, arg2);
        } while (i);
    }
    
    return i;
}

void sub_15b5e(int32_t arg1)
{
    if (arg1 - 0x6c000 < 0x10000)
        sub_dcd0(arg1, 1);
}

void sub_15b76(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 - 0x6c000 < 0x10000)
        sub_e048(arg1, arg3, arg2);
}

int32_t sub_15b94(int16_t* arg1, int32_t arg2, int32_t arg3)
{
    if (*arg1)
        sub_15bb4(arg1);
    
    return sub_15a68(arg1, arg2, arg3);
}

uint32_t sub_15bb4(int16_t* arg1)
{
    uint32_t result = *arg1;
    
    if (result)
    {
        sub_b16c(result);
        void* r1_1 = (sub_b134(*arg1) << 0x10 >> 0xb) + 0x100b18;  /* "R02_3.00.06_240523" */
        *0x10435c += 1;
        /* unimplemented  {cpsid I} */
        *(r1_1 + 0x1e) = 0;  /* "0523" */
        
        if (*0x10435c)
            *0x10435c -= 1;
        
        result = *0x10435c;
        
        if (!result)
            /* unimplemented  {cpsie I} */
        
        *arg1 = 0;
    }
    
    return result;
}

int32_t sub_15c08()
{
    return sub_c868();
}

int32_t sub_15c10(char arg1)
{
    *0x109aad = arg1;
    return sub_ad20(0x818b31, 0x109aad, 0x12c, 0xffffffff);
}

uint32_t sub_15c30(char* arg1)
{
    uint32_t r1_2 = *0x109aac + 1;
    *0x109aac = r1_2;
    uint32_t r0_1;
    int32_t entry_r3;
    
    if (r1_2 == 1)
        r0_1 = *arg1;
    else if (r1_2 == 2)
        r0_1 = 2;
    else
    {
        if (r1_2 != 3)
        {
            *0x109aac = 0;
            sub_1a404(2, 1, 0x109aac, entry_r3);
            return sub_ada4(0x818b31);
        }
        
        r0_1 = *arg1;
    }
    
    return sub_1a404(r0_1, 1, 0x109aac, entry_r3);
}

int32_t sub_15c74(char* arg1)
{
    int32_t r1 = *0x104f54;
    0xff7febc6(*0x20200000 ^ r1, r1);
    char result;
    
    for (int32_t i = 0; i < 6; i += 1)
    {
        result = 0xff7febb4();
        arg1[i] = result;
    }
    
    return result;
}

void sub_15ca0(uint32_t arg1)
{
    do
    {
        if (!(*0x2013204c << 0x1f >> 0x1f))  /* "523" */
        {
            arg1 = *0x2013204c << 2 >> 0xe;
            
            if (arg1)
                *0x104f44 = arg1;
            
            break;
        }
    } while (arg1);
}

int32_t sub_15cc8()
{
    *0x2013204c = *0x2013204c >> 1 << 1 | 1;
    return 0x20132040;
}

uint32_t sub_15cdc(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t* var_18 = arg3;
    int32_t var_20 = arg1;
    int16_t* r4 =
        sub_13644(0x818cb1, arg3[1] << 8 | *(arg3 + 3), *(arg3 + 2) << 8 | *(arg3 + 1), arg3);
    
    if (!r4)
    {
        r4 = sub_134a0();
        r4[6] = *(arg3 + 2) << 8 | *(arg3 + 1);
        r4[4] = arg3[1] << 8 | *(arg3 + 3);
        r4[2] = 0;
        r4[5] = 0xffff;
    }
    else
        sub_be78(6 * *r4 + 0x104f70, r4);
    
    *r4 = arg1;
    r4[1] = arg2;
    r4[7] = *(arg3 + 6) << 8 | *(arg3 + 5);
    sub_beec(6 * arg1 + 0x104f70, r4);
    return (*(arg3 + 6) << 8 | *(arg3 + 5)) + 0xb;
}

void sub_15d70(int32_t arg1, void* arg2, void* arg3, int32_t arg4) __noreturn
{
    void* var_14 = arg3;
    void* var_18 = arg2;
    var_18 = 0;
    *var_18[1] = arg1;
    *var_18[2] = arg1 >> 8;
    *var_18[3] = arg2;
    var_14 = arg2 >> 8;
    *var_14[1] = arg3;
    *var_14[2] = arg3 >> 8;
    sub_18c(&data_0, &var_18, &*(data_4 + 3), sub_18c, var_18, var_14, arg4);
    /* no return */
}

int32_t sub_15db0(void* arg1, int32_t* arg2)
{
    int16_t* r3 = *arg2;
    *arg2 = &r3[2];
    int16_t r3_1 = *r3;
    *arg2 = &r3[4];
    
    if (!*(arg1 + 4) && *(arg1 + 8) == r3_1 && *(arg1 + 0xc) == r3[2])
        return 1;
    
    return 0;
}

int32_t sub_15dde(int32_t arg1, uint32_t arg2)
{
    uint32_t var_18 = arg2;
    int32_t var_1c = arg1;
    uint32_t i = arg2;
    uint32_t i_2;
    
    i_2 = arg2 <= 0x40 ? arg2 : 0x40;
    
    void* r0_1 = sub_10c44(i_2);
    sub_1683c(&var_1c, &*var_1c[2], 9);
    
    while (i)
    {
        uint32_t i_1;
        
        i_1 = i <= i_2 ? i : i_2;
        
        sub_139b8(var_1c, *var_1c[2], i_1, r0_1);
        sub_1683c(&var_1c, &*var_1c[2], i_1);
        i = i - i_1;
        sub_136a4(r0_1, i_1, 1, i);
    }
    
    return sub_e264(r0_1);
}

int32_t sub_15e44(int32_t arg1, int32_t arg2, void* arg3)
{
    uint32_t r3_1 = *(arg3 + 2) << 8 | *(arg3 + 1);
    int16_t* r0_2 = sub_13644(0x818cb1, *(arg3 + 4) << 8 | *(arg3 + 3), r3_1, r3_1);
    
    if (r0_2)
    {
        sub_be78(6 * *r0_2 + 0x104f70, r0_2);
        sub_135c8(r0_2);
    }
    
    return 7;
}

void sub_15e84(void* arg1, int32_t arg2, void* arg3, void* arg4) __noreturn
{
    void* var_18 = arg4;
    int32_t r3 = sub_e5c4(arg3 + 0xb);
    *(arg1 + 0xe) = arg3;
    sub_15d70(*(arg1 + 0xc), arg4, arg3, r3);
    /* no return */
}

void sub_15ef0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    arg1[arg2] = arg3;
}

void sub_15ef6(int32_t* arg1, int32_t arg2)
{
    arg1[arg2] = 0;
}

int32_t sub_15efe(int32_t arg1)
{
    return sub_15f08(arg1);
}

void sub_15f08(int32_t arg1)
{
    uint32_t r1 = *0x103cf8;
    
    if (!r1)
        return;
    
    if (r1 == 1)
    {
        if (arg1 <= 0x19)  /* "06_240523" */
            *0x202010a8 = 0x46ff77c9;
        else if (arg1 - 0x1a <= 8)  /* "6_240523" */
            *0x202010a8 = 0x46ff77d1;
        else if (arg1 - 0x23 <= 8)
            *0x202010a8 = 0x46ff77da;
        else if (arg1 >= 0x2c)
            *0x202010a8 = 0x46ff77db;
    }
    else if (r1 == 2 || r1 == 3)
    {
        if (arg1 <= 0x16)  /* "00.06_240523" */
            *0x202010a8 = 0x46ff6489;
        else if (arg1 - 0x17 <= 0xb)  /* "0.06_240523" */
            *0x202010a8 = 0x46ff648b;
        else if (arg1 - 0x23 <= 5)
            *0x202010a8 = 0x46ff6495;
        else if (arg1 >= 0x29)
            /* tailcall */
            return sub_15f74(0x46ff6489, arg1 - 0x17, 0x20201080);  /* "0.06_240523" */
    }
}

int32_t sub_15f74(int32_t arg1, int32_t, void* arg3)
{
    *(arg3 + 0x28) = arg1 + 0x14;  /* "3.00.06_240523" */
    return arg1 + 0x14;  /* "3.00.06_240523" */
}

int32_t sub_15f88()
{
    int32_t r0_1 = *0x20201074;
    int32_t result;
    
    if (!(*0x202010d0 & 2))
        result = r0_1 & 0xfffeffff;
    else
        result = r0_1 | 0x10000;
    
    *0x20201074 = result;
    return result;
}

void sub_15fb0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    for (int32_t i = 0; i < arg3; i += 1)
    {
        *arg1 = arg2;
        arg1 = &arg1[1];
    }
}

uint32_t sub_15fd0(int32_t arg1)
{
    int16_t var_28[0xe];
    0xff7febd8(&var_28, 0x81f568, 0x18);  /* ".06_240523" */
    
    if (var_28[0] <= arg1)
        return 0x64;
    
    int32_t r4_1 = 1;
    
    while (var_28[r4_1] > arg1)
    {
        r4_1 += 1;
        
        if (r4_1 >= 0xb)
            return 0;
    }
    
    uint32_t r0_3 = var_28[r4_1];
    int32_t r0_7 =
        0xff7feb2c(0xa * (arg1 - r0_3), *(&var_28[r4_1] - 2) - r0_3, 0xa) + 0x64 - 0xa * r4_1;
    
    if (r0_7 > 0x64)
        r0_7 = 0x64;
    else if (r0_7 < 0)
        r0_7 = 0;
    
    return r0_7;
}

int32_t sub_1603c(int32_t arg1, void* arg2, int32_t arg3)
{
    if (arg1 == 2 && *(arg2 + 0x17) == arg3)  /* "0.06_240523" */
        return 1;
    
    return 0;
}

int32_t sub_16050()
{
    *0x109478 = 0;
    *0x10947c = 0;
    return 0x109470;
}

int32_t sub_16060()
{
    int32_t r3;
    int32_t var_18 = r3;
    uint32_t r6 = *0x103cf8;
    
    if (!r6)
    {
        *0x20201074 = 0x1e820;
        *0x20201078 = 0;
        *0x2020107c = 0;
        *0x20201080 = 0x7c00f70;
        *0x20201084 = 0;
        __builtin_memcpy(0x20201088, 
            "\x10\x01\x00\x00\x80\x39\x00\x00\xc4\xf8\x01\x03\x00\x90\x7f\x5f\xfc\x0f\x10\xdb\x08\xf0\x"
        "0d\xdb\x06\x02\x00\x61\xb2\x0d\x00\xfc\xe7\xff\xff\x46\x06\x00\x00\x10", 
            0x28);
    label_160ea:
        sub_18ae0(0xd0);
        sub_18af4(8, 5, 1, 7, 0);
    }
    else
    {
        if (r6 == 1)
        {
            *0x20201074 = 0x1e820;
            *0x20201078 = 0;
            *0x2020107c = 0;
            *0x20201080 = 0x7c00f70;
            *0x20201084 = 0;
            __builtin_memcpy(0x20201088, 
                "\x10\x01\x00\x00\x80\x39\x00\x00\xc4\xf8\x01\x03\x00\x93\x4a\x5f\xdc\x0e\x10\xdb\x08\x"
            "d0\x18\xdb\x06\x02\x00\x61\xb0\x0d\x00\xfc\xc9\x77\xff\x46\x06\x00\x00\x10", 
                0x28);
            goto label_160ea;
        }
        
        if (r6 == 2)
        {
            *0x20201074 = 0x1e820;
            *0x20201078 = 0;
            *0x2020107c = 0;
            *0x20201080 = 0x87c00f70;
            *0x20201084 = 0;
            __builtin_memcpy(0x20201088, 
                "\x20\x01\x00\x00\x80\x39\x00\x00\xc4\xf8\x01\x03\x00\x14\x23\x3f\xac\x0d\x10\xdb\x08\x"
            "90\x18\xdb\x06\x02\x00\x61\xb0\x0d\x00\xfc\x89\x64\xff\x46\x05\x00\x00\x10", 
                0x28);
        label_16172:
            sub_18ae0(0xc0);
            sub_18af4(8, 5, 1, 2, 3);
        }
        else if (r6 == 3)
        {
            *0x20201074 = 0x1e820;
            *0x20201078 = 0;
            *0x2020107c = 0;
            *0x20201080 = 0x87c00f70;
            *0x20201084 = 0;
            __builtin_memcpy(0x20201088, 
                "\x20\x01\x00\x00\x80\x39\x00\x00\xc4\xf8\x01\x03\x80\x13\x13\x5f\xde\x0d\x10\xdb\x08\x"
            "90\x18\xdb\x06\x02\x00\x61\xb0\x0d\x00\xfc\x89\x64\xff\x46\x03\x00\x00\x10", 
                0x28);
            goto label_16172;
        }
    }
    
    return sub_15f08(*0x105a9c);
}

int32_t sub_161dc() __pure
{
    return;
}

int32_t sub_16250(void* arg1 @ r4, int32_t arg2 @ r5, int32_t arg3 @ r6)
{
    sub_a8c8(0x84);
    *(arg1 + 0x10) = *(arg1 + 0x10) >> 7 << 7 | 2;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = (*(arg1 + 0x10) & 0xffff80ff) | 0x500;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = (*(arg1 + 0x10) & 0xffe0ffff) | 0x80000;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = *(arg1 + 0x10) << 8 >> 8;  /* "R02_3.00.06_240523" */
    *(arg1 + 4) = (*(arg1 + 4) & 0xff00ffff) | 0x820000;
    *(arg1 + 4) = (*(arg1 + 4) & ~arg2) | arg3;
    *(arg1 + 4) = *(arg1 + 4) >> 8 << 8 | 0x82;
    *(arg1 + 0x14) = *(arg1 + 0x14) >> 7 << 7 | 4;  /* "3.00.06_240523" */
    *(arg1 + 0x14) &= 0xffff80ff;  /* "3.00.06_240523" */
    *(arg1 + 0x14) = (*(arg1 + 0x14) & 0xffe0ffff) | 0x40000;  /* "3.00.06_240523" */
    *(arg1 + 0x14) = *(arg1 + 0x14) << 8 >> 8;  /* "3.00.06_240523" */
    /* tailcall */
    return sub_162e8(0, 0x128040, 0);
}

int32_t sub_16258(void* arg1 @ r4, int32_t arg2 @ r5, int32_t arg3 @ r6)
{
    sub_a8c8(0x78);
    sub_a788(0x80);
    *(arg1 + 0x10) = *(arg1 + 0x10) >> 7 << 7 | 2;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = (*(arg1 + 0x10) & 0xffff80ff) | 0x500;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = (*(arg1 + 0x10) & 0xffe0ffff) | 0x80000;  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = *(arg1 + 0x10) << 8 >> 8;  /* "R02_3.00.06_240523" */
    *(arg1 + 4) = (*(arg1 + 4) & 0xff00ffff) | 0x820000;
    *(arg1 + 4) = (*(arg1 + 4) & ~arg2) | arg3;
    *(arg1 + 4) = *(arg1 + 4) >> 8 << 8 | 0x82;
    *(arg1 + 0x14) = *(arg1 + 0x14) >> 7 << 7 | 4;  /* "3.00.06_240523" */
    *(arg1 + 0x14) &= 0xffff80ff;  /* "3.00.06_240523" */
    *(arg1 + 0x14) = (*(arg1 + 0x14) & 0xffe0ffff) | 0x40000;  /* "3.00.06_240523" */
    *(arg1 + 0x14) = *(arg1 + 0x14) << 8 >> 8;  /* "3.00.06_240523" */
    /* tailcall */
    return sub_162e8(0, 0x128040, 0);
}

uint32_t sub_162e8(uint32_t arg1, char* arg2, uint8_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    while (true)
    {
        arg2[arg1] = arg3;
        arg1 = arg1 + 1;
        
        if (arg1 >= 0x28)
            break;
        
        arg3 = arg1 << 1;
    }
    
    return arg1;
}

int32_t sub_16320()
{
    *0x20201070 = 0xc00000;
    sub_16060();
    return sub_15f88();
}

int32_t sub_16338(int32_t arg1)
{
    int32_t r3 = *0x20201080;
    int32_t r1_1;
    
    if (arg1 <= 0xd48)
    {
        *0x20201080 = r3 | 0x800;
        r1_1 = *0x20201088 | 0x100;
    }
    else
    {
        *0x20201080 = r3 & 0xfffff7ff;
        r1_1 = *0x20201088 & 0xfffffeff;
    }
    
    *0x20201088 = r1_1;
    int32_t r1_3 = 0;
    
    if (arg1 > 0xe74)
        r1_3 = 7;
    else if (arg1 > 0x708)
        r1_3 = 0xf;
    
    *0x20201080 = (*0x20201080 & 0xfc3fffff) | r1_3 << 0x16;  /* "00.06_240523" */
    int32_t r1_5 = 0;
    
    if (arg1 > 0x1036)
        r1_5 = 5;
    else if (arg1 > 0xfd2)
        r1_5 = 6;
    else if (arg1 > 0xf6e)
        r1_5 = 4;
    else if (arg1 <= 0xea6)
    {
        if (arg1 > 0xdfc)
            r1_5 = 7;
        else if (arg1 > 0xd16)
            r1_5 = 5;
    }
    
    int32_t result = *0x20201080 >> 3 << 3 | r1_5;
    *0x20201080 = result;
    return result;
}

int32_t sub_163dc() __pure
{
    return 0;
}

int32_t sub_163e0()
{
    return sub_16320();
}

int32_t sub_163e8() __pure
{
    return;
}

int32_t sub_163ea() __pure
{
    return;
}

int32_t sub_163ec(int32_t arg1)
{
    if (arg1 > 0x7f)
        arg1 = 0x7f;
    
    return *(0x81e9a8 + arg1);
}

int32_t sub_163fc()
{
    *0x2020108c = 0x22d80;
    return 0x22d80;
}

int32_t sub_1640c()
{
    *0x2020108c = 0x3980;
    return 0x3980;
}

int32_t sub_1641c()
{
    int32_t result = *0x20100030 | 7;
    *0x20100030 = result;
    return result;
}

int32_t sub_1642c() __pure
{
    return 0;
}

int32_t sub_16430()
{
    return sub_7680() + 0x386cd300;
}

int32_t sub_16440()
{
    int32_t r1;
    int32_t r2;
    r1 = sub_9d24();
    int32_t r0 = sub_7a5c(0x109ab0, r1, r2);
    int32_t r0_1;
    int32_t r1_1;
    r0_1 = 0xff7feb2c(r0, 0x3c);
    int32_t r0_2;
    
    if (r1_1 >= 5)
    {
        r0_2 = r0;
        *0x10bfa4 = r0;
    }
    else
    {
        r0_2 = 0x3c * r0_1;
        *0x10bfa4 = r0_2;
    }
    
    *0x104310 = r0_2;
    
    if (!0xff7feb00(r0_2, 0x3c) && *0x1041e0 != 1)
    {
        sub_14e6c();
        
        if (*0x1041e2 == 1)
        {
            int32_t r7_1 = *0x10bfa4;
            int32_t r1_3 = 0xff7feb00(0xff7feb00(r7_1, 0x3c), 0x3c);
            
            if (!0xff7feb00(r7_1, 0x3c * *0x10434b))
                sub_f420();
            
            if (!0xff7feb00(*0x10bfa4, 0x708))
            {
                sub_ab7c();
                sub_152c8();
            }
            
            if (r1_3 == 0x20)  /* "23" */
                sub_177f8();
            
            sub_17b30();
            
            if (!r1_3)
            {
                sub_178e0();
                sub_18ed4();
            }
        }
        
        if (!0xff7feb00(*0x10bfa4, &data_15180))
        {
            sub_17ac4();
            *0x104314 = 0;
            *0x104315 = 0;
            *0x104316 = 0;
            *0x104317 = 0;
        }
    }
    
    return sub_15b94(0x109aae, 0x819341, 0x3e8 * (0x3c - r1_1));
}

int32_t sub_1652c(int32_t arg1) __pure
{
    if (arg1 != 2)
        return 0;
    
    return 0x81ec20;
}

int32_t sub_165cc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    var_20 = 1;
    uint32_t r6 = __mrs(primask);
    /* unimplemented  {cpsid I} */
    0xff80bfcc(&var_20);
    0xff80b670(1);
    int32_t r0_1;
    int32_t r3_1;
    char r5;
    r0_1 = sub_138a8(3, &var_20, &var_1c, 0xff8181d8());
    int32_t r7 = 0;
    void* r4 = 0x12a1d8;
    
    if (!r0_1 && var_1c)
    {
        *0x12a1e4 = r5;
        *0x12a1dc = 0;
        int32_t r0_3;
        int32_t r3_2;
        void* r4_1;
        char r5_1;
        r0_3 = sub_138a8(8, &var_20, &var_18, r3_1);
        
        if (!r0_3 && var_18)
            *(r4_1 + 0xd) = r5_1;
        
        var_20 = 2;
        int32_t r0_5;
        r0_5 = sub_138a8(9, &var_20, 0x12a1e0, r3_2);
        
        if (r0_5)
            *(r4 + 8) = 0xc8;
    }
    
    *(r4 + 0xc) = r5;
    *(r4 + 4) = r7;
    *(r4 + 0xd) = r5;
    *(r4 + 8) = 0xc8;
    0xff802aac(1);
    int32_t result = (*0x12a1e8)();
    
    if (!r6)
        /* unimplemented  {cpsie I} */
    
    return result;
}

uint32_t sub_16660()
{
    uint32_t result = *0x12a1e2 << 0x1f;  /* "523" */
    
    if (result)
        return result;
    
    return 0xff80bf1c(result);
}

int32_t sub_16674()
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r2;
    int32_t var_1c = r2;
    uint32_t r1;
    uint32_t var_20 = r1;
    int32_t result = 0;
    uint32_t r0_1 = *0x12a1e2 << 0x1f;  /* "523" */
    int32_t r0_2;
    
    if (!r0_1)
        r0_2 = 0xff80c462(r0_1);
    
    if (r0_1 || r0_2)
    {
        result = 1;
        
        if (*0x12a1e4)
        {
            uint32_t r0_4 = *0x12a1e2;
            
            if (!r0_4 && 0xff818220(r0_4))
            {
                *0x2010001c = 0x80000000;
                uint32_t i;
                
                do
                    i = sub_a7a0();
                 while (i);
                int32_t r0_9 = (*0x2010001c << 5 >> 5) + 1;
                
                if (*0x20100020 < *0x12a1e0)
                    r0_9 += 1;
                
                uint32_t r4_2 = r0_9 << 5 >> 5;
                int32_t r0_10 = 0xff80c98c();
                int32_t r0_12 = 0xff802ed0(r4_2);
                uint32_t r0_16;
                
                if (r0_10 != 0xffffffff)
                {
                    uint32_t r1_8;
                    
                    if (r0_12 != 0xffffffff)
                    {
                        r1_8 = (r0_10 - r0_12) << 5 >> 5;
                        
                        if (r1_8 > 0x4000000)
                            r1_8 = 0 - ((r0_12 - r0_10) << 5 >> 5);
                    }
                    
                    if (r0_12 != 0xffffffff && r1_8 > 0)
                        goto label_16704;
                    
                    r0_16 = (r0_10 - r4_2) << 5 >> 5;
                    
                    if (r0_16 > 0x4000000)
                        r0_16 = 0 - ((r4_2 - r0_10) << 5 >> 5);
                }
                else if (r0_12 == 0xffffffff)
                    r0_16 = 0x3e80;
                else
                {
                label_16704:
                    uint32_t r1_15 = (r0_12 - r4_2) << 5 >> 5;
                    
                    if (r1_15 > 0x4000000)
                        r1_15 = 0 - ((r4_2 - r0_12) << 5 >> 5);
                    
                    r0_16 = r1_15;
                }
                
                uint32_t r4_3 = *0x12a1e5;
                
                if (r4_3 || r0_16 <= 0x320)
                {
                    if (r0_16 > 0x3e80)
                    {
                        r0_16 = 0x3e80;
                        goto label_1674e;
                    }
                    
                    if (r0_16 > 1)
                        goto label_1674e;
                }
                else
                {
                    r0_16 = 0x320;
                label_1674e:
                    int32_t r0_23 = 0xff7feb00(r0_16 << 0xb, 0x64);
                    
                    if (*0x12a1d8 + 1 <= r0_23 - 1)
                    {
                        0xff8ff004(r0_23 - 1, r4_3);
                        (*0x12a210)();
                        return 3;
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_16784(int32_t arg1)
{
    return 0xff7feb00(arg1 << 0xf, 0xf4240);
}

int32_t sub_16794(int32_t arg1)
{
    int32_t result = sub_16784(arg1);
    *0x12a1d8 = result;
    return result;
}

int32_t sub_167a4(int32_t arg1)
{
    return sub_dcd0(arg1, 1);
}

void sub_167b0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) __noreturn
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    sub_c038(*0x104f5c, 6, &var_20, arg4);
    void* r7;
    sub_18c(&data_0, &var_20, &data_4, sub_18c, arg1, r7);
    /* no return */
}

void sub_1680c(int32_t arg1, int16_t arg2, void* arg3, void* arg4) __noreturn
{
    void* var_10 = arg3;
    var_10 = arg2;
    *var_10[2] = arg3;
    sub_18c(&data_0, &var_10, &data_4, sub_18c, var_10, arg4);
    /* no return */
}

int32_t sub_1683c(int16_t* arg1, int16_t* arg2, int32_t arg3)
{
    int32_t r1 = *arg2 + arg3;
    
    if (r1 < 0x1000)
    {
        *arg2 = r1;
        return 0x1000;
    }
    
    *arg1 = sub_ea5c(*arg1);
    int16_t result = *arg2 + arg3 - 0xffa;
    *arg2 = result;
    return result;
}

int32_t sub_1686c()
{
    if (!*0x106200)
        *0x106200 = 1;
    
    return 0x106200;
}

int32_t sub_16880(int32_t arg1, uint32_t arg2)
{
    int32_t r3;
    int32_t var_14 = r3;
    uint32_t var_1c = arg2;
    int32_t result = arg1;
    uint32_t i = arg2;
    int32_t r6 = arg1;
    
    do
    {
        char r1;
        
        r1 = i <= 0x10 ? i : 0x10;  /* "R02_3.00.06_240523" */
        
        uint32_t r5_1 = r1;
        0xff7febd8(&result, r6, r5_1);
        sub_a800(&result);
        r6 += r5_1;
        i = (i - r5_1) << 0x10 >> 0x10;  /* "R02_3.00.06_240523" */
    } while (i);
    
    return result;
}

void sub_168b0(char arg1)
{
    *0x103f94 = arg1;
}

uint8_t sub_168bc(int32_t arg1)
{
    uint8_t result = arg1 << 0x1f >> 0x1d;  /* "40523" */  /* "523" */
    *0x1041e1 = (*0x1041e1 & 0xfb) | result;
    return result;
}

int32_t sub_168d4(char arg1)
{
    *0x109b10 = arg1;
    sub_6ce2(0xc);
    
    if (*0x1041e0 != 1)
        return 0x1041e0;
    
    *0x1041e0 = 3;
    sub_14e34();
    sub_14ea8();
    sub_19918();
    return sub_ad20(0x80c659, 0, 0x3e8, 1);
}

uint32_t sub_16914(int32_t arg1)
{
    int16_t* r4;
    
    r4 = arg1 == 2 ? 0x104ed0 : 0x104ee0;
    
    sub_a714(*r4);
    sub_a72c(r4[2]);
    sub_a744(r4[4]);
    return sub_a75c(r4[6]);
}

int32_t sub_16948(int32_t arg1, int32_t arg2)
{
    if (arg1 - 2 >= 0x16)  /* "00.06_240523" */
        return 6;
    
    char r7;
    sub_bcd0(arg1 + 0x13, arg2 - 1, r7);  /* "_3.00.06_240523" */
    int32_t r1_2 = ((arg1 - 2) >> 0x1f >> 0x1d) + arg1 - 2;  /* "40523" */  /* "523" */
    int32_t r2 = (arg1 - 2 - (r1_2 >> 3 << 3)) << 2;
    *((r1_2 >> 3 << 2) + 0x20132030) =
        (arg2 - 1) << r2 | (*((r1_2 >> 3 << 2) + 0x20132030) & ~(0xf << r2));
    return 0;
}

int32_t sub_16994(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ r4, void* arg5 @ r5, int32_t arg6 @ r7)
{
    void* r1;
    int32_t r2;
    int32_t lr;
    r1 = 0xff7fec8e(arg1, arg2, arg3, arg1, lr);
    int32_t r3_1 = r2 >> 0x1c;  /* "240523" */
    int32_t r6 = *(r1 * 2);
    *(r3_1 + 0x14) = arg6;  /* "3.00.06_240523" */
    *(arg4 + 0x54) = r3_1;
    char r7 = *(arg4 + 0x14);  /* "3.00.06_240523" */
    *(arg5 + 0x54);
    *(r6 + 0x11) = 0x1c;  /* "02_3.00.06_240523" */  /* "240523" */
    *(r6 + 0x11) = arg4;  /* "02_3.00.06_240523" */
    *(r6 + 1);
    sub_bcd0(4, arg5, r7);
    return 0;
}

int32_t sub_169ca()
{
    int32_t r5;
    sub_bc0c(0x15, r5);  /* ".00.06_240523" */
    /* tailcall */
    return sub_169d8(6);
}

int32_t sub_169d4()
{
    int32_t r5;
    sub_bc0c(0x16, r5);  /* "00.06_240523" */
    sub_bc0c(7, r5);
    /* tailcall */
    return sub_169d8(0xc);
}

int32_t sub_169d8(int32_t arg1)
{
    int32_t r5;
    sub_bc0c(arg1, r5);
    return 0;
}

int32_t sub_169e8()
{
    int32_t r5;
    sub_bc0c(0x19, r5);  /* "06_240523" */
    sub_bc0c(7, r5);
    /* tailcall */
    return sub_169d8(0xc);
}

int32_t sub_169f8()
{
    int32_t r5;
    sub_bc0c(0x1a, r5);  /* "6_240523" */
    sub_bc0c(0xd, r5);
    sub_bc0c(8, r5);
    /* tailcall */
    return sub_169d8(0x2b);
}

int32_t sub_16a76()
{
    int32_t r5;
    sub_bc0c(0x29, r5);
    /* tailcall */
    return sub_169d8(0x2b);
}

int32_t j_sub_169d8()
{
    /* tailcall */
    return sub_169d8(0x2a);
}

int32_t j_sub_169d8()
{
    /* tailcall */
    return sub_169d8(0);
}

int32_t j_sub_169d8()
{
    /* tailcall */
    return sub_169d8(1);
}

int32_t j_sub_169d8()
{
    /* tailcall */
    return sub_169d8(2);
}

int32_t j_sub_169d8()
{
    /* tailcall */
    return sub_169d8(3);
}

int32_t sub_16a94() __pure
{
    return 6;
}

void sub_16a98(char arg1)
{
    *0x108fb6 = arg1;
}

void sub_16aa4(char arg1)
{
    *0x105fb1 = arg1;
}

int32_t sub_16ab0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t r0_1 = sub_c3a4(0x17200, 0x10395c, sub_13aec(&var_10));
    sub_13b14(var_10, 0x17200, r0_1);
    *0x20133080 |= 1 << var_10;
    return 0x20133080;
}

int32_t sub_16aec(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t r0 = sub_c3a4(0x1862c, 0x8071f8, arg3);
    sub_13aec(&var_10);
    sub_13b14(var_10, 0x1862c, r0);
    *0x20133080 |= 1 << var_10;
    return 0x20133080;
}

int32_t sub_16b2c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t r0 = sub_c3a4(0x16f6c, 0x103a28, arg3);
    sub_13aec(&var_10);
    sub_13b14(var_10, 0x16f6c, r0);
    *0x20133080 |= 1 << var_10;
    sub_13aec(&*var_10[1]);
    sub_13b14(*var_10[1], 0x16fd8, 0xe03c);
    int32_t result = *0x20133080 | 1 << *var_10[1];
    *0x20133080 = result;
    return result;
}

uint32_t sub_16b94()
{
    int32_t entry_r2;
    int32_t entry_r3;
    return sub_f1ac(sub_19bb0+0x36, 0x812c89, entry_r2, entry_r3);  /* ".0" */
}

void sub_16ba8(char arg1)
{
    *0x109abb = arg1;
}

int32_t sub_16bb4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    sub_13aec(&var_8);
    sub_13b14(var_8, &data_7cac, 0x2122204);
    *0x20133080 |= 1 << var_8;
    return 0x20133080;
}

int32_t sub_16be8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t r0 = sub_c3a4(0x17670, 0x103a30, arg3);
    sub_13aec(&var_10);
    sub_13b14(var_10, 0x17670, r0);
    *0x20133080 |= 1 << var_10;
    return 0x20133080;
}

int32_t sub_16c28(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    sub_13aec(&var_10);
    sub_13b14(var_10, 0x17970, 0x43700000);
    *0x20133080 |= 1 << var_10;
    return 0x20133080;
}

int32_t sub_16c5c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t r0 = sub_c3a4(0x1bfc8, 0x807208, arg3);
    sub_13aec(&var_10);
    sub_13b14(var_10, 0x1bfc8, r0);
    *0x20133080 |= 1 << var_10;
    return 0x20133080;
}

void sub_16c9c(char arg1, int32_t arg2)
{
    *0x1099e8 = arg1;
    *0x1099ec = arg2;
}

uint8_t sub_16ca8(int32_t arg1)
{
    uint8_t result = arg1 << 0x1f >> 0x1f;  /* "523" */
    *0x1041e1 = *0x1041e1 >> 1 << 1 | result;
    return result;
}

int32_t sub_16cc0(int32_t arg1)
{
    char result;
    
    result = arg1 == 1 ? -0x54 : 0;
    
    *0x104225 = result;
    return result;
}

void sub_16cd4(char arg1)
{
    *0x103d62 = arg1;
}

int32_t sub_16ce0()
{
    *0x108fbe = 0;
    sub_15bb4(0x108fbc);
    *0x108fbc = 0;
    return 0x108fb0;
}

void sub_16cfc(uint32_t arg1)
{
    if (arg1 == 1 || arg1 == 7)
        sub_a490();
}

int32_t sub_16d0c(int32_t arg1)
{
    if (!*0x109908)
        return 0xff7fec0a(arg1, 0x64);
    
    *0x109910 = 0;
    *0x10990c = 0;
    *0x10990e = 0;
    
    if (*0x109909 > 1)
    {
        uint32_t r2_1 = 0;
        int32_t r1_2 = 0;
        
        while (*(r1_2 + 0x109940))
        {
            r1_2 += 1;
            r2_1 = r2_1 + 1;
            
            if (r1_2 >= 0x28)
                break;
        }
        
        if (*0x109917 != r2_1)
            *0x109917 = r2_1;
    }
    
    int32_t i = 0;
    
    for (uint32_t r5 = *0x109917; r5 > i; i += 1)
    {
        uint32_t r1_4 = *(i + 0x109918);
        
        if (r1_4 == 2)
            *0x10990e += *(i + 0x109940);
        else if (r1_4 == 3 || r1_4 == 4)
            *0x10990c += *(i + 0x109940);
        else if (r1_4 == 5)
            *0x109910 += *(i + 0x109940);
    }
    
    return 0xff7febd8(arg1, 0x109904, 0x64);
}

int32_t sub_16da0()
{
    return sub_7680();
}

uint32_t sub_16da8()
{
    return *0x109908;
}

int32_t sub_16db4()
{
    return sub_f57c();
}

int32_t sub_16dbc(int32_t arg1, int32_t arg2)
{
    *0x1098f8;
    int32_t r0;
    int16_t r1;
    void* r2;
    r0 = 0xff7fec8e(arg1, arg2, 0x1098d4, arg1);
    int16_t result = *(r2 + 0x28) + r1;
    *(r2 + 0x28) = result;
    return result;
}

int32_t sub_16dda(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ r4, int32_t arg5)
{
    int32_t result = arg4 + arg2;
    *(arg3 + 0x24) = result;
    return result;
}

int32_t sub_16de0(int32_t arg1, int16_t arg2, void* arg3, int32_t arg4)
{
    int16_t result = *(arg3 + 0x1e) + arg2;  /* "0523" */
    *(arg3 + 0x1e) = result;  /* "0523" */
    return result;
}

int32_t sub_16de8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r4)
{
    /* tailcall */
    return sub_16df8(arg1, arg2, arg3, arg4 + 0x3c);
}

int32_t j_sub_16df2()
{
    int32_t entry_r1;
    int32_t entry_r2;
    /* tailcall */
    return sub_16df2(1, entry_r1, entry_r2);
}

int32_t j_sub_16df2()
{
    int32_t entry_r1;
    int32_t entry_r2;
    /* tailcall */
    return sub_16df2(0, entry_r1, entry_r2);
}

void sub_16df2(char arg1, int32_t, void* arg3, int32_t arg4)
{
    *(arg3 + 7) = arg1;
}

int32_t sub_16df6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r4)
{
    /* tailcall */
    return sub_16df8(arg1, arg2, arg3, arg4 + 0x1e);  /* "0523" */
}

int32_t sub_16df8(int32_t, int32_t, void* arg3, int32_t arg4 @ r4, int32_t arg5)
{
    *(arg3 + 0x24) = arg4;
}

uint32_t sub_16e00()
{
    return sub_f49c(&data_0);
}

uint32_t sub_16e0c()
{
    uint32_t r3;
    uint32_t var_18 = r3;
    
    if (sub_eaec() != *0x1098d0)
    {
        var_18 = sub_eaec();
        uint32_t r4_1 = *0x1098f8;
        *0x109900 += r4_1;
        
        if (r4_1 > 1)
            *0x1098ea = 0;
        else
        {
            uint32_t r0_6 = *0x1098ea;
            
            if (r0_6 < 0x5a0)
                *0x1098ea = r0_6 + 1;
        }
        
        if (!sub_16db4())
        {
            uint32_t r0_10 = *0x1098dc;
            
            if (r0_10 <= 5)
            {
                *0x1098dc = r0_10 + 1;
                sub_16e00();
            }
        }
        else
        {
            *0x1098dc = 0;
            
            if (0xff7feb00(*0x1098ea, 0x1e) == 0x1d && *0x1098d4 != 1)  /* "40523" */  /* "0523" */
                sub_16e00();
        }
        
        int32_t r6_1 = 0xff7fec8e(*0x1098d4) << 0x10;  /* "R02_3.00.06_240523" */
        sub_170b0(r4_1, var_18);
        sub_81d4();
        *0x1098fc = r6_1;
        *0x1098f8 = r6_1;
        *0x1098d0 = sub_eaec();
    }
    
    return *0x1098d4;
}

uint32_t sub_16ea4(int32_t arg1 @ r4, char* arg2 @ r5, int32_t arg3 @ r6, int32_t* arg4 @ r7, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    if (sub_16db4() && arg2[6] == 1)
    {
        *arg2 = arg3;
        sub_16cfc(6);
        arg2[3] = arg3;
    }
    else if (arg1 >= 5)
    {
        sub_1ac18(1);
        sub_16e00();
        arg2[6] = 1;
    }
    
    sub_81d4();
    *(arg2 + 0x28) = arg3;
    *(arg2 + 0x24) = arg3;
    *arg4 = sub_eaec();
    return *arg2;
}

uint32_t sub_16ee4(int32_t arg1, int32_t arg2)
{
    char r1 = *0x1098d7;
    
    if (arg1 >= 0x20)  /* "23" */
    {
        *0x1098ed = *0x1098ed + 1 + r1;
        uint32_t r0_5 = *0x1098f0 + 1;
        *0x1098f0 = r0_5;
        
        if (*0x1098fc)
        {
            r0_5 += 1;
            *0x1098f0 = r0_5;
        }
        
        *0x1098d7 = 0;
        *0x1098f4 = arg2;
        uint32_t r0_6 = r0_5;
        
        if (r0_6 < *0x1098ec)
            return r0_6;
        
        *0x1098d4 = 0;
        *0x1098d7 = 0;
        *0x1098d6 = 0x10;  /* "R02_3.00.06_240523" */
        sub_17f38(*0x1098e4);
        return sub_16cfc(5);
    }
    
    *0x1098d7 = r1 + 1;
    
    if (*0x1098dc >= 5)
    {
        *0x1098d4 = 1;
        *0x1098da = 0;
        *0x1098d7 = 0;
        *0x1098d6 = 0x10;  /* "R02_3.00.06_240523" */
        sub_16cfc(4);
        sub_17f38(*0x1098e4);
    }
    
    uint32_t r1_4 = *0x1098d8;
    uint32_t r0_11 = *0x1098d7;
    
    if (*0x1098d5 == 1)
    {
        if (r0_11 > r1_4)
        {
            if (sub_16db4())
                goto label_16f6c;
            
            *0x1098d4 = 1;
            sub_16cfc(4);
            uint32_t r0_19 = sub_17f38(*0x1098e4);
            *0x1098da = 0;
            *0x1098d6 = 0x10;  /* "R02_3.00.06_240523" */
            *0x1098d7 = 0;
            return r0_19;
        }
    }
    else if (r0_11 >= r1_4)
    {
    label_16f6c:
        sub_16cfc(3);
        uint32_t r6 = *0x1098e4;
        int32_t r1_5 = 0xff7feb2c(arg2 - r6 + 0x5a0, 0x5a0);
        sub_17cc4(r6, r1_5, 5);
        *0x1098d4 = 2;
        int16_t r0_17 = *0x1098e6 + r1_5;
        *0x1098e6 = r0_17;
        *0x1098e4 = arg2;
        return r0_17;
    }
    
    return r0_11;
}

uint32_t sub_16fb4(int32_t arg1, int32_t arg2)
{
    uint32_t r0 = *0x1098e6;
    uint32_t r0_3;
    
    if (arg1 < 0x1e)  /* "0523" */
    {
        *0x1098e6 = r0 + 1;
        sub_17cc4(*0x1098e4, 1, 0xff);
        *0x1098e4 = arg2;
        
        if (*0x1098dc < 5)
        {
            uint32_t result;
            
            if (*0x1098ea <= 0x96)
            {
                result = *0x1098e6;
                
                if (result >= 0x258 && *0x1098d4 >= 2 && result >= 0x384)
                {
                    *0x1098d4 = 0;
                    *0x1098d6 = 0x10;  /* "R02_3.00.06_240523" */
                    *0x1098d7 = 0;
                    return 0x10;  /* "R02_3.00.06_240523" */
                }
            }
            else
            {
                *0x1098d4 = 1;
                sub_16cfc(7);
                *0x1098da = 0;
                *0x1098d7 = 0;
                *0x1098e4 = 0;
                *0x1098e6 = 0;
                result = sub_17f38(*0x1098e2);
                *0x1098e2 = 0;
                *0x1098e8 = 0;
            }
            
            return result;
        }
        
        *0x1098d4 = 1;
        *0x1098da = 0;
        *0x1098d7 = 0;
        uint32_t r0_11 = *0x1098ea;
        *0x1098e6 -= r0_11;
        r0_3 = 0xff7feb2c(arg2 - r0_11 + 0x5a0, 0x5a0);
        *0x1098e4 = r0_3;
    }
    else
    {
        if ((r0 >= 0x5a && *0x109908) || (arg1 < 0x5a && !*0x1098fc))
        {
            *0x1098d4 = 5;
            sub_16cfc(2);
            *0x1098d7 = 0;
            *0x1098ee = arg2;
            *0x1098ed = 1;
            *0x1098f0 = 1;
            *0x1098f4 = arg2 + 1;
            
            if (*0x1098fc)
                *0x1098f0 = 2;
            
            int32_t r0_7 = sub_17278(arg2);
            *0x1098d5 = r0_7;
            
            if (r0_7 == 1)
            {
                *0x1098d8 = 0xa;
                *0x1098ec = 4;
                return 4;
            }
            
            *0x1098d8 = 5;
            *0x1098ec = 0xa;
            return 5;
        }
        
        *0x1098d4 = 0;
        sub_16cfc(5);
        *0x1098d7 = 0;
        *0x1098e8 = 0;
        *0x1098e6 = 0;
        r0_3 = *0x1098e2;
    }
    
    return sub_17f38(r0_3);
}

void sub_170b0(uint32_t arg1, int32_t arg2)
{
    if (arg1 < 0x20 && !*0x1098fc && !*0x1098db)  /* "23" */
    {
        uint32_t r0 = *0x1098d6;
        
        if (!r0)
        {
            if (!sub_16db4())
            {
                *0x1098d7 = 0;
                *0x1098d4 = 1;
                *0x1098da = 0;
                return;
            }
            
            if (*0x1098ea > 0x96)
            {
                *0x1098d4 = 1;
                sub_16cfc(7);
                *0x1098da = 0;
            }
            else if (arg2 - 0x169 >= 0x2cf)
            {
                if (!*0x1098d7)
                {
                    *0x1098e0 = 0;
                    *0x1098de = 0;
                    *0x1098f2 = 0;
                    int32_t r0_7 = sub_17278(arg2);
                    *0x1098d5 = r0_7;
                    char r0_8;
                    
                    r0_8 = r0_7 == 1 ? 0x3c : 0x28;
                    
                    *0x1098d8 = r0_8;
                }
                
                uint32_t r0_11 = *0x1098d7 + 1;
                *0x1098d7 = r0_11;
                uint32_t r1_2 = *0x1098de + arg1;
                *0x1098de = r1_2;
                
                if (arg1)
                    *0x1098e0 += 1;
                
                if (r0_11 >= 5 && r1_2 > 6 * r0_11)
                {
                    *0x1098d7 = 0;
                    *0x1098de = 0;
                    *0x1098e0 = 0;
                }
                
                if (!0xff7feb00(*0x1098d7, 5))
                {
                    if (*0x1098f2 > 6)
                    {
                        *0x1098d7 = 0;
                        *0x1098de = 0;
                        *0x1098e0 = 0;
                    }
                    
                    *0x1098f2 = 0;
                }
                
                uint32_t r0_15 = *0x1098d7;
                uint32_t r1_4 = *0x1098d8;
                
                if (r0_15 == r1_4)
                {
                label_17176:
                    sub_16e00();
                    *0x1098dd = 0;
                    return;
                }
                
                if (r0_15 <= r1_4)
                    return;
                
                if (!sub_16db4())
                    *0x1098d4 = 1;
                else
                {
                    arg1 = *0x1098ea;
                    
                    if (arg1 <= *0x1098d8 - 5)
                    {
                        if (*0x1098dd)
                            goto label_17176;
                        
                        *0x1098d4 = 2;
                        *0x1098ed = 0;
                        uint32_t r7_1 = *0x1098d7;
                        uint32_t r0_20 = 0xff7feb2c(arg2 - r7_1 + 0x5a1, 0x5a0);
                        *0x1098e2 = r0_20;
                        *0x1098e4 = arg2;
                        uint32_t r1_8 = r7_1 - 1;
                        *0x1098e6 = r1_8;
                        *0x1098d7 = 0;
                        sub_17cc4(r0_20, r1_8, 2);
                        sub_16cfc(1);
                        return;
                    }
                    
                    *0x1098dd = 1;
                    
                    if (arg1 <= 0x55)
                        return;
                    
                    *0x1098d4 = 1;
                }
                
                *0x1098da = 0;
            }
        }
        else
            *0x1098d6 = r0 - 1;
    }
    
    *0x1098d7 = 0;
}

int32_t sub_171ec()
{
    0xff7fec0a(0x1098d4, 0x30);  /* "R02_V3.0" */
    return 0xff7fec0a(0x109904, 0x64);
}

void sub_17208(uint32_t arg1)
{
    char r2_1 = *0x109c86 + 1;
    uint32_t r4 = *0x109c85;
    
    if (arg1 > 0x1000)
    {
        *0x109c88 = 0;
        *0x109c8c = 0;
        
        if (r4 != 1)
        {
            arg1 = *0x109c8a + 1;
            *0x109c8a = arg1;
            
            if (arg1 >= 0x64)
            {
                *0x109c85 = 1;
                *0x109c86 = r2_1;
            }
        }
    }
    else if (arg1 >= 0xfffff000)
    {
        *0x109c8c = 0;
        *0x109c8a = 0;
        
        if (r4)
        {
            arg1 = *0x109c88 + 1;
            *0x109c88 = arg1;
            
            if (arg1 >= 0x64)
            {
                *0x109c85 = 0;
                *0x109c86 = r2_1;
            }
        }
    }
    else
    {
        *0x109c88 = 0;
        *0x109c8a = 0;
        
        if (r4 != 2)
        {
            arg1 = *0x109c8c + 1;
            *0x109c8c = arg1;
            
            if (arg1 >= 0x64)
            {
                *0x109c85 = 2;
                *0x109c86 = r2_1;
            }
        }
    }
}

int32_t sub_17278(int32_t arg1) __pure
{
    if (arg1 < 0x564 && arg1 > 0x168)
        return 1;
    
    return 0;
}

int32_t sub_17294(void* arg1)
{
    uint32_t r0 = *(arg1 + 1);
    *0x1099f0;
    int32_t entry_r2;
    char* r6_1 = *(0xff7fec8e(r0, 0x1099f0, entry_r2, r0) + arg1);
    int32_t r5_1 = *r6_1;
    0xff7fec0a(0x1099d0, 0x14);  /* "3.00.06_240523" */
    
    if (r5_1)
        sub_18618();
    
    sub_185e8(0x34);  /* "V3.0" */
    *r6_1 = 1;
    sub_15b94(0x105fba, 0x80c685, 0x3e8);
    sub_17658();
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    var_28 = 0x77;
    *var_28[1] = 0;
    *var_28[3] = 0;
    var_24 = 0;
    *var_24[1] = 0;
    *var_24[2] = 0;
    *var_1c[3] = sub_c410(&var_28, 0xf);
    return sub_a800(&var_28);
}

int32_t sub_173d8()
{
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t r0 = sub_17aac();
    int32_t r0_1 = sub_17a80();
    int32_t r0_2 = sub_17a8c();
    var_28 = 0x48;
    *var_28[1] = r0 >> 0x10;  /* "R02_3.00.06_240523" */
    *var_28[2] = r0 >> 8;
    *var_28[3] = r0;
    0xff7fec0a(&var_24, 3);
    *var_24[3] = r0_1 >> 0x10;  /* "R02_3.00.06_240523" */
    var_20 = r0_1 >> 8;
    *var_20[1] = r0_1;
    *var_20[2] = r0_2 >> 0x10;  /* "R02_3.00.06_240523" */
    *var_20[3] = r0_2 >> 8;
    var_1c = r0_2;
    *var_1c[1] = 0;
    *var_1c[2] = 0;
    *var_1c[1] = sub_17ab8() >> 8;
    *var_1c[2] = sub_17ab8();
    *var_1c[3] = sub_c410(&var_28, 0xf);
    return sub_a800(&var_28);
}

uint32_t sub_17452()
{
    int32_t var_138 = 0;
    int32_t var_134 = 0;
    int32_t var_130 = 0;
    int32_t var_12c = 0;
    void var_128;
    0xff7fec0a(&var_128, 0x120);
    var_138 = 0xff;
    return sub_9066(0x44, &var_138, 1);
}

int32_t sub_1747c(void* arg1)
{
    int32_t var_1b0 = 0;
    int32_t var_1ac = 0;
    int32_t var_1a8 = 0;
    int32_t var_1a4 = 0;
    int32_t r0_3 = sub_17be4(sub_eb1c() - *(arg1 + 1));
    uint32_t var_1a0;
    
    if (!r0_3)
        0xff7fec0a(&var_1a0, 0x124, 0x124);
    else
        0xff7febd8(&var_1a0, r0_3, 0x124);
    
    if (!*(arg1 + 1))
    {
        var_1a0 = sub_eb1c();
        int32_t r0_10 = 0xff7feb00(sub_eb04(), 0x3c);
        
        if (*(arg1 + 4) > r0_10)
            *(arg1 + 4) = r0_10;
        
        sub_17af0(&(&var_1a0)[r0_10 * 3 + 1]);
    }
    else
        *(arg1 + 4) = 0x17;  /* "0.06_240523" */
    
    if (!var_1a0)
    {
        var_1b0 = 0x43;
        *var_1b0[1] = 0xff;
        0xff7fec0a(&*var_1b0[2], 0xd);
        *var_1a4[3] = sub_c410(&var_1b0, 0xf);
        return sub_a800(&var_1b0);
    }
    
    uint32_t r4_1 = 0;
    uint32_t i = *(arg1 + 3);
    char var_78[0x64];
    
    for (uint32_t r2_1 = *(arg1 + 4); r2_1 >= i; i = i + 1)
    {
        void* r1_4 = &(&var_1a0)[i * 3];
        uint32_t r3_1 = *(r1_4 + 4);
        
        if (!r3_1)
        {
            if (*(r1_4 + 0xa))
            {
                var_78[r4_1] = i;
                r4_1 = r4_1 + 1;
            }
        }
        else if (r3_1 != 0xffff)
        {
            var_78[r4_1] = i;
            r4_1 = r4_1 + 1;
        }
    }
    
    var_1b0 = 0x43;
    char r0_15;
    
    r0_15 = !r4_1 ? -1 : -0x10;
    
    *var_1b0[1] = r0_15;
    *var_1b0[2] = r4_1;
    
    if (*(arg1 + 5) == 1)
        *var_1b0[3] = 1;
    
    *var_1a4[3] = sub_c410(&var_1b0, 0xf);
    char result = sub_a800(&var_1b0);
    
    if (r4_1)
    {
        char var_7c;
        sub_c8f4(var_1a0, &var_7c);
        var_1b0 = 0x43;
        *var_1b0[1] = sub_6c9c(var_7c);
        char var_7b;
        *var_1b0[2] = sub_6c9c(var_7b);
        char var_7a;
        result = sub_6c9c(var_7a);
        *var_1b0[3] = result;
        *var_1ac[2] = r4_1;
        
        for (uint32_t i_1 = 0; i_1 < r4_1; i_1 = i_1 + 1)
        {
            uint32_t r0_27 = var_78[i_1];
            var_1ac = r0_27 << 2;
            *var_1ac[1] = i_1;
            void* r2_2 = &(&var_1a0)[r0_27 * 3];
            uint32_t r0_29 = *(r2_2 + 0xa);
            
            if (!*(arg1 + 5))
                r0_29 = 0xa * r0_29;
            
            var_1a8 = r0_29 >> 8;
            *var_1ac[3] = r0_29;
            uint32_t r0_31 = *(r2_2 + 4);
            *var_1a8[2] = r0_31 >> 8;
            *var_1a8[1] = r0_31;
            uint32_t r0_32 = *(r2_2 + 8);
            var_1a4 = r0_32 >> 8;
            *var_1a8[3] = r0_32;
            *var_1a4[3] = sub_c410(&var_1b0, 0xf);
            result = sub_a800(&var_1b0);
        }
    }
    
    return result;
}

int32_t sub_17614(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t var_14 = arg2;
    int32_t result = arg1;
    result = 0;
    var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x46;
    *result[1] = 0;
    *result[2] = 0;
    *result[3] = 0;
    var_14 = 0;
    0xff7fec0a(&*var_14[1], 0xa, 0);
    *var_c[3] = sub_c410(&result, 0xf);
    sub_a800(&result);
    return result;
}

uint32_t sub_17658()
{
    uint32_t result = sub_10610();
    
    if (result)
        return result;
    
    uint32_t result_1 = result;
    uint32_t result_2 = result;
    uint32_t result_3 = result;
    uint32_t result_4 = result;
    uint32_t r4_1 = 0;
    int32_t r7_1 = *0x109a58;
    int32_t r6_1 = *0x109a48;
    void* var_20_1 = 0x109a30;
    uint32_t r5_1 = *0x109a40;
    uint32_t r0_1 = *0x109a3e;
    
    if (sub_f510() == 2)
        r4_1 = sub_f51c();
    
    if (r4_1 - 0x28 >= 0xb5)
        r4_1 = 0;
    
    result_1 = 0x78;
    *result_1[1] = *(var_20_1 + 2);
    uint32_t r0_8 = *0x1099f0;
    char r0_9;
    
    if (r0_8 == 1)
        r0_9 = 2;
    else if (r0_8 == 2)
        r0_9 = 1;
    else
        r0_9 = 3;
    
    *result_1[2] = r0_9;
    *result_1[3] = r0_1 >> 8;
    result_2 = r0_1;
    *result_2[1] = r4_1;
    *result_2[2] = r7_1 >> 0x10;  /* "R02_3.00.06_240523" */
    *result_2[3] = r7_1 >> 8;
    result_3 = r7_1;
    *result_3[1] = r5_1 >> 0x10;  /* "R02_3.00.06_240523" */
    *result_3[2] = r5_1 >> 8;
    *result_3[3] = r5_1;
    result_4 = r6_1 >> 0x10;  /* "R02_3.00.06_240523" */
    *result_4[1] = r6_1 >> 8;
    *result_4[2] = r6_1;
    *result_4[3] = sub_c410(&result_1, 0xf);
    return sub_a800(&result_1);
}

uint32_t sub_17700()
{
    return 0xff804e8c() << 0x1f >> 0x1f;  /* "523" */
}

int32_t sub_1770c(int32_t arg1)
{
    char result = 0;
    
    for (uint32_t i = 0; i < 3; i = i + 1)
    {
        void* r3_2 = 6 * i;
        int32_t r3_3;
        
        if (!*(r3_2 + 0x103d00))
            r3_3 = *(0x103cfc + r3_2);
        else
            r3_3 = *(r3_2 + 0x103cfe);
        
        if (arg1 <= r3_3)
            *(r3_2 + 0x103d00) = 1;
        else
        {
            *(r3_2 + 0x103d00) = 0;
            result += 1;
        }
    }
    
    return result;
}

void sub_1774c() __noreturn
{
    0xff900640(0x200);
    __dmb_SY();
    *0xe000ed08 = 0x100000;
    __dsb_SY();
    sub_18a08();
    *0x104dc8 = 0x12dacc;
    *0x12dacc = 0;
    sub_13b3c();
    sub_10d90();
    sub_896c();
    sub_f214();
    sub_84f6();
    sub_10d70();
    sub_bdd8(*0x12dac8);
    /* no return */
}

void* sub_177ac(int32_t arg1)
{
    void* result = sub_13624(arg1);
    void* r5 = *0x104f58;
    
    while (true)
    {
        void* r0_1 = sub_13624(*(r5 + 0xa));
        
        if (!r0_1)
        {
        label_177e6:
            *(result + 0xa) = *(r5 + 0xa);
            *(r5 + 0xa) = arg1;
            return result;
        }
        
        uint32_t r1_1 = *(r0_1 + 8);
        uint32_t r2_1 = *(result + 8);
        
        if (r1_1 > r2_1)
            goto label_177e6;
        
        if (r1_1 >= r2_1)
        {
            if (!*(r0_1 + 4))
                goto label_177e6;
            
            if (*(result + 4) && *(r0_1 + 0xe) > *(result + 0xe))
                goto label_177e6;
        }
        
        r5 = r0_1;
    }
}

uint32_t sub_177f8()
{
    uint32_t result = sub_189d4();
    
    if (result)
    {
        result = *0x1041e2;
        
        if (result)
        {
            result = sub_17a74();
            
            if (result != 1)
            {
                result = sub_a144();
                
                if (!result)
                {
                    result = sub_eb1c();
                    
                    if (result)
                    {
                        *0x10938d = 0;
                        sub_f660(0x80);
                        return sub_15b94(0x10938e, 0x81bf29, 0x3e8);
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_1784c(int32_t arg1)
{
    int32_t r4 = arg1;
    int32_t r5 = 0;
    uint32_t r0;
    int32_t r2;
    int32_t r3;
    r0 = sub_eb1c();
    
    if (r4 >= 3)
        r4 = 2;
    
    char var_e0[0x98];
    uint32_t r2_1;
    
    if (r4 < 0)
        r2_1 = 0;
    else
    {
        int32_t temp0_1;
        
        do
        {
            void var_48;
            int32_t r0_2;
            r0_2 = sub_17914(r0 - r4, &var_48, r2, r3);
            
            if (r0_2)
            {
                var_e0[r5] = r4;
                void var_44;
                r2 = 0xff7febd8(&var_e0[r5 + 1], &var_44, 0x30);  /* "R02_V3.0" */
                r5 += 0x31;  /* "02_V3.0" */
            }
            
            temp0_1 = r4;
            r4 -= 1;
        } while (temp0_1 - 1 >= 0);
        
        r2_1 = !r5 ? 0 : r5;
    }
    
    return sub_a594(0x2a, &var_e0, r2_1);
}

void sub_1789c(uint32_t arg1)
{
    uint32_t r4 = arg1;
    
    if (!r4)
        return;
    
    if (r4 < 0x5a)
        r4 = 0x5a;
    
    *0x109398 = sub_eb1c();
    *0x10939a = 0xff7feb00(sub_eb04(), 0x3c);
    uint32_t r0_3 = *0x10939c;
    
    if (!r0_3)
    {
        *0x10939c = r4;
        *0x10939d = r4;
    }
    else
    {
        if (r0_3 < r4)
            *0x10939c = r4;
        
        if (*0x10939d > r4)
            *0x10939d = r4;
    }
    
    sub_6ce2(3);
}

int32_t sub_178e0()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    uint32_t r2_1 = *0x109398;
    
    if (!r2_1)
        return 0x109398;
    
    var_c = 2;
    var_10 = 0x10939c;
    sub_192dc(0x81f408, 0x109394, r2_1, (*0x10939a << 1) + 4, 0x10939c, 2);
    return 0xff7fec0a(0x109398, 6);
}

int32_t sub_17914(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r0 = sub_1927e(0x81f408, *0x109394, arg1, arg4);
    0xff7fec0a(arg2, 0x34);  /* "V3.0" */
    
    if (!r0)
    {
        if (*0x109398 != arg1)
            return 0;
        
        *((*0x10939a << 1) + arg2 + 4) = *0x10939c;
        *((*0x10939a << 1) + arg2 + 5) = *0x10939d;
    }
    else
    {
        0xff7febd8(arg2, r0, 0x34);  /* "V3.0" */
        
        for (uint32_t i = 0; i < 0x18; i = i + 1)  /* ".06_240523" */
        {
            void* r1_3 = (i << 1) + arg2;
            
            if (*(r1_3 + 4) == 0xff)
                *(r1_3 + 4) = 0;
            
            if (*(r1_3 + 5) == 0xff)
                *(r1_3 + 5) = 0;
        }
        
        if (*0x109398 == arg1)
        {
            *((*0x10939a << 1) + arg2 + 4) = *0x10939c;
            *((*0x10939a << 1) + arg2 + 5) = *0x10939d;
        }
    }
    
    return 1;
}

int32_t sub_17998() __pure
{
    return;
}

void sub_1799c(int32_t arg1)
{
    for (int32_t i = 0; i < 5; )
    {
        int32_t r2_1 = i << 2;
        i += 1;
        *(0x1099b0 + r2_1) = *(r2_1 + 0x1099b4);
    }
    
    *0x1099c4 = arg1;
}

int32_t sub_179b8()
{
    return *0x109974 - *0x10997c + *0x109980;
}

uint32_t sub_179cc()
{
    uint32_t result = *0x1041e2;
    
    if (result)
    {
        if (0xff7feb00(*0x10998c - *0x109990, 0x64) | (*0x109974 - *0x109978)
            | (*0x1099a8 - *0x1099ac) | 0xff7feb00(*0x109984 - *0x109988, 0xa))
        {
            void var_18;
            sub_17af0(&var_18);
            int32_t r0_7 = sub_eb04();
            int32_t r1_6;
            
            if (!r0_7)
                r1_6 = 0xff7feb00(sub_7680(), 0x3c);
            
            if (r0_7 || r1_6)
            {
                int32_t r4_2 = 0xc * 0xff7feb00(sub_eb04() + 0x3b, 0x3c) - 8;
                sub_192dc(0x81f4e8, 0x109968, sub_eb1c(), r4_2, &var_18, 0xc);
            }
        }
        
        result = sub_16da8();
        
        if (result)
        {
            sub_81a8();
            return sub_171ec();
        }
    }
    
    return result;
}

uint32_t sub_17a74()
{
    return *0x109970;
}

int32_t sub_17a80()
{
    return *0x109984;
}

int32_t sub_17a8c()
{
    return 0xff7feb00(*0x10998c, 0x64);
}

int32_t sub_17aa0()
{
    return *0x1099a8;
}

int32_t sub_17aac()
{
    return *0x109974;
}

uint32_t sub_17ab8()
{
    return *0x1099a0;
}

int32_t sub_17ac4()
{
    sub_1799c(*0x109974);
    *0x109974 = 0;
    *0x109978 = 0;
    *0x109998 = 0;
    *0x1099a0 = 0;
    *0x109984 = 0;
    *0x10998c = 0;
    *0x1099a8 = 0;
    *0x109988 = 0;
    *0x109990 = 0;
    *0x1099a4 = 0;
    *0x1099ac = 0;
    *0x10997c = 0;
    return 0;
}

int32_t sub_17af0(int16_t* arg1)
{
    *arg1 = *0x109974 - *0x109978;
    arg1[1] = *0x1099a8 - *0x1099ac;
    arg1[4] = *0x1099a0 - *0x1099a4;
    arg1[2] = 0xff7feb00(*0x10998c - *0x109990, 0x64);
    int16_t result = 0xff7feb00(*0x109984 - *0x109988, 0xa);
    arg1[3] = result;
    return result;
}

uint32_t sub_17b30()
{
    if (*0x10997c != *0x109974)
    {
        void* r0_5 = 0xff7feb00(0xff7feb00(sub_eb04(), 0x3c) + 0x17, 0x18) + 0x1042f4;
            /* "0.06_240523" */  /* ".06_240523" */
        *(r0_5 + 4) += 1;
        *0x1099a0 += 1;
    }
    
    int32_t r0_8 = *0x109974;
    *0x109980 = r0_8 - *0x10997c;
    *0x10997c = r0_8;
    *0x109970 = sub_16e0c();
    
    if (!0xff7feb00(sub_eb04(), 0x3c) && !0xff7feb00(sub_eb04(), 0x3c))
        0xff7fec0a(0x1042f8, 0x18);  /* ".06_240523" */
    
    if (!0xff7feb00(sub_eb04(), 0x3c))
    {
        sub_1873c();
        sub_8200();
    }
    
    uint32_t result = sub_16da8();
    
    if (result != 2)
        return result;
    
    sub_81a8();
    return sub_171ec();
}

int32_t sub_17bc8()
{
    sub_191f2(0x81f4e8);
    return sub_191f2(0x81f4f4);
}

int32_t sub_17be0() __pure
{
    return 0;
}

int32_t sub_17be4(int32_t arg1)
{
    int32_t entry_r3;
    return sub_1927e(0x81f4e8, *0x109968, arg1, entry_r3);
}

int32_t sub_17bfc() __pure
{
    return;
}

int32_t sub_17c00()
{
    int32_t r3;
    int32_t var_18 = r3;
    0xff7fec0a(0x109970, 0x40);
    sub_1804c();
    uint32_t r0;
    int32_t r3_1;
    r0 = sub_eb1c();
    int32_t r0_1 = sub_1927e(0x81f4e8, *0x109968, r0, r3_1);
    
    if (r0_1)
    {
        uint32_t r7_1 = 0xff7feb00(sub_eb04(), 0x3c);
        
        for (uint32_t i = 0; i < r7_1; i = i + 1)
        {
            void* r0_5 = i * 0xc + r0_1;
            
            if (*(r0_5 + 4) != 0xffff)
                sub_8234(r0_5 + 4);
        }
        
        sub_8200();
        void* r0_7 = 0xc * r7_1 + r0_1;
        
        if (*(r0_7 + 4) != 0xffff)
            sub_8234(r0_7 + 4);
    }
    
    int32_t r5_1 = sub_eb1c() - 6;
    int32_t result_1 = 0xff7fec0a(0x1099b0, 0x18);  /* ".06_240523" */
    int32_t result;
    
    for (int32_t i_1 = 0; i_1 < 6; )
    {
        result = sub_1927e(0x81f4e8, *0x109968, r5_1, result_1);
        result_1 = result;
        
        if (result_1)
        {
            int32_t r1_4 = 0;
            
            for (uint32_t j = 0; j < 0x18; j = j + 1)  /* ".06_240523" */
            {
                uint32_t r2_4 = *(j * 0xc + result_1 + 4);
                
                if (r2_4 != 0xffff)
                    r1_4 += r2_4;
            }
            
            result = i_1 << 2;
            *(0x1099b0 + result) = r1_4;
        }
        
        i_1 += 1;
        r5_1 += 1;
    }
    
    return result;
}

uint32_t sub_17cc4(int32_t arg1, int32_t arg2, uint32_t arg3)
{
    int32_t r6 = arg1;
    uint32_t r4 = arg3;
    int32_t r5 = arg2;
    
    if (r6 < 0)
        r6 += 0x5a0;
    
    if (r5 < 0)
        r5 = arg2 + 0x5a0;
    
    int32_t r1 = r6 + r5;
    int32_t var_28 = r1;
    
    if (r1 >= 0x5a0)
        var_28 = r1 - 0x5a0;
    
    uint32_t var_24 = 0xff7feb00(sub_16da0(), &data_15180);
    
    if (var_28 > 0x438)
        var_24 = var_24 + 1;
    
    uint32_t r3 = *0x10990a;
    
    if (!r3 || *0x109904 != var_24)
    {
        0xff7fec0a(0x109904, 0x64);
        *0x109904 = var_24;
        *0x109912 = r6;
        *0x109940 = r5;
        *0x109918 = 2;
        *0x109917 = 1;
        *0x109909 = 1;
        int16_t r6_1 = r5;
        *0x10990a = r6_1;
        
        if (r5 > 0x37)  /* "0" */
        {
            char r1_3 = 0xff7feb2c(0xff7febb4(1), 0xa) + 0x2d;
            *0x109940 = r1_3;
            uint32_t r0_12 = r5 - r1_3;
            *0x109941 = r0_12;
            *0x109919 = 3;
            *0x109917 += 1;
            
            if (r0_12 > 0x1e)  /* "0523" */
            {
                int32_t r0_13 = 0xff7febb4();
                *0x109942 =
                    *0x109941 - (r0_13 - (((r0_13 >> 0x1f >> 0x1d) + r0_13) >> 3 << 3) + 0x16);
                    /* "00.06_240523" */  /* "40523" */  /* "523" */
                *0x109941 = r0_13 - (((r0_13 >> 0x1f >> 0x1d) + r0_13) >> 3 << 3) + 0x16;
                    /* "00.06_240523" */  /* "40523" */  /* "523" */
                *0x10991a = 2;
                *0x109917 += 1;
            }
        }
        
        *0x109902 = r6_1;
        r4 = 2;
    }
    else
    {
        uint32_t r0_18 = *0x109914;
        
        if (r0_18 != r6)
        {
            if (!*0x109908 || r3 < 0x5a || !*0x109917 || r0_18 < 0x3c || r0_18 > 0x438)
            {
                0xff7fec0a(0x109904, 0x64);
                *0x109904 = var_24;
                *0x109912 = r6;
                *0x109918 = 2;
                *0x109917 = 1;
                *0x109909 = 1;
            }
            else
            {
                *0x109902 = 0;
                *0x109909 += 1;
                int32_t i = r6 - r0_18;
                
                if (r6 - r0_18 < 0)
                    i += 0x5a0;
                
                while (i)
                {
                    uint32_t r6_2 = *0x109917;
                    
                    if (i > 0xff)
                    {
                        *(r6_2 + 0x109940) = 0xff;
                        i -= 0xff;
                        *(*0x109917 + 0x109918) = 0;
                    }
                    else
                    {
                        *(r6_2 + 0x109940) = i;
                        *(*0x109917 + 0x109918) = 0;
                        i = 0;
                    }
                    
                    *0x109917 += 1;
                }
            }
            
            *0x1098fe = 0;
            *0x109900 = 0;
            r4 = 2;
            goto label_17ea4;
        }
        
        if (r4 != 5)
        {
            uint32_t r0_22 = *0x1098fe + 1;
            *0x1098fe = r0_22;
            
            if (r4 != 0xff)
                goto label_17ea4;
            
            if (r0_22 > 0xf)
            {
                if (0xff7feb00(*0x109900, 7) + *(0x81f458 + 0xff7feb00(*0x109902, 0xf)) > 0x32)
                        /* "2_V3.0" */
                    r4 = 2;
                else
                    r4 = 3;
                
                *0x1098fe = 0;
                *0x109900 = 0;
                goto label_17ea4;
            }
            
            uint32_t r0_29 = *0x109917;
            
            if (!r0_29)
            {
                r4 = 2;
                goto label_17ea4;
            }
            
            r4 = *(r0_29 + 0x109917);
            
            if (r4 == 2 || r4 == 3 || r4 == 4)
                goto label_17eb2;
            
            r4 = 2;
            goto label_17ea4;
        }
        
        *0x109902 = 0;
        *0x1098fe = 0;
        *0x109900 = 0;
    label_17ea4:
        uint32_t r0_30 = *0x109917;
        
        if (*(r0_30 + 0x109917) == r4 || r0_30 >= 0x27)
        {
        label_17eb2:
            uint32_t r0_31 = *0x109917;
            int32_t r2_5 = *(r0_31 + 0x10993f) + r5;
            
            if (r2_5 <= 0xff)
                *(r0_31 + 0x10993f) = r2_5;
            else
            {
                *(r0_31 + 0x109918) = r4;
                *(*0x109917 + 0x109940) = r5;
                *0x109917 += 1;
            }
        }
        else
        {
            *(r0_30 + 0x109940) = r5;
            *(*0x109917 + 0x109918) = r4;
            *0x109917 += 1;
            *0x1098fe = 0;
            *0x109900 = 0;
        }
        
        *0x10990a += r5;
        *0x109902 += r5;
    }
    
    *0x109914 = var_28;
    *0x1098d4 = r4;
    uint32_t result = *0x109908;
    
    if (!result)
    {
        result = sub_f8f8(var_28);
        
        if (result)
        {
            result = 1;
            *0x109908 = 1;
        }
    }
    
    return result;
}

uint32_t sub_17f38(int32_t arg1)
{
    uint32_t r1 = *0x109914;
    int32_t r1_1 = r1 - arg1;
    
    if (r1 - arg1 < 0)
        r1_1 += 0x5a0;
    
    uint32_t r3 = *0x10990a - r1_1;
    *0x10990a = r3;
    uint32_t r2_2 = arg1;
    *0x109914 = r2_2;
    
    if (*0x109908 && r3 >= 0x5a)
    {
        uint32_t r0_1 = *0x109917;
        
        if (r0_1 && r2_2 >= 0x3c && r2_2 <= 0x438)
        {
            while (true)
            {
                r0_1 -= 1;
                
                if (r0_1 <= 0)
                    break;
                
                uint32_t r3_1 = *(r0_1 + 0x109940);
                
                if (r3_1 >= r1_1)
                {
                    if (*(r0_1 + 0x109940) <= r1_1)
                        *0x109917 -= 1;
                    else
                        *(r0_1 + 0x109940) = r3_1 - r1_1;
                    
                    break;
                }
                
                r1_1 -= r3_1;
                *0x109917 -= 1;
            }
            
            uint32_t r1_2 = *0x109917;
            
            if (*(r1_2 + 0x109917))
                *(r1_2 + 0x109917) = 2;
            
            return sub_81d4();
        }
    }
    
    *0x10990a = 0;
    *0x109917 = 0;
    *0x109908 = 0;
    return 0;
}

int32_t sub_17fc4(int32_t arg1, int32_t arg2)
{
    uint32_t r0;
    int32_t r3;
    r0 = sub_eb1c();
    
    if (r0 == arg1 && sub_16da8())
        return sub_16d0c(arg2);
    
    int32_t r0_4 = sub_1927e(0x81f4f4, *0x10996c, arg1, r3);
    
    if (!r0_4)
        return 0xff7fec0a(arg2, 0x64);
    
    return 0xff7febd8(arg2, r0_4, 0x64);
}

int32_t sub_18010(int32_t arg1)
{
    int32_t result = *0x109984 + arg1;
    *0x109984 = result;
    return result;
}

int32_t sub_18020(int32_t arg1)
{
    int32_t result = *0x10998c + arg1;
    *0x10998c = result;
    return result;
}

int32_t sub_18030(int32_t arg1)
{
    int32_t result = *0x109974 + arg1;
    *0x109974 = result;
    
    if (result > 0x1869f)
        *0x109974 = 0x1869f;
    
    return result;
}

uint32_t sub_1804c()
{
    *0x109994 = 0x64 * sub_18de4();
    uint32_t result = sub_18dc8();
    
    if (result == 1)
    {
        int32_t r0_3;
        int32_t r1_1;
        r0_3 = sub_57ac(*0x109994);
        int32_t r0_4;
        int32_t r1_2;
        r0_4 = sub_5574(r0_3, r1_1, 0x4cc25072, 0x3ff9bfdb);
        result = sub_586c(r0_4, r1_2);
        *0x109994 = result;
    }
    
    return result;
}

int32_t sub_18084()
{
    return sub_1863c();
}

int32_t sub_1808c()
{
    int32_t r3;
    int32_t var_18 = r3;
    
    if (*0x1099e5)
        goto label_180b6;
    
    int32_t result;
    
    if (sub_f510() == 2)
    {
        *0x1099e5 = 1;
        *0x109a3c = *0x109a3e;
    label_180b6:
        uint32_t r0_4 = sub_f510();
        int32_t r5_1;
        
        if (r0_4 == 2)
        {
            r5_1 = sub_f51c();
            *0x109a04 = 0;
        }
        else if (r0_4 == 3)
        {
            r5_1 = 0;
            *0x109a04 += 1;
        }
        else
        {
            r5_1 = 0;
            *0x109a04 = 0;
        }
        
        if (r5_1 - 0x28 <= 0xb4)
        {
            *0x109a18 += r5_1;
            *0x109a1c += 1;
            sub_14414(r5_1);
        }
        
        int32_t r1_3;
        result = 0xff7feb2c(*0x109a3e - *0x109a3c, *0x109a38);
        
        if (!r1_3)
        {
            *(*0x1099f4 + 0x109a5c) = r5_1;
            result = *0x1099f4 + 1;
            *0x1099f4 = result;
            
            if (result >= 0x50)
            {
                *0x109a38 <<= 1;
                *0x1099f4 = 0x28;
                int32_t r0_21 = 0;
                int32_t r2_3;
                
                do
                {
                    *(r0_21 + 0x109a5c) = *((r0_21 << 1) + 0x109a5c);
                    r2_3 = *0x1099f4;
                    r0_21 += 1;
                } while (r2_3 > r0_21);
                
                return 0xff7fec0a(r2_3 + 0x109a5c, 0x28);
            }
        }
    }
    else
    {
        result = *0x109a04 + 1;
        *0x109a04 = result;
    }
    
    return result;
}

uint32_t sub_18148()
{
    return sub_18624();
}

int32_t sub_18150()
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t result = *0x109a3e;
    
    if (result >= 0x3c)
    {
        result = *0x1041e2;
        
        if (result == 1)
        {
            if (*0x109a2c < 0x25980600)
                *0x109a2c = sub_16430() - *0x109a3a - *0x109a3e + 3;
            
            if (*0x109a20)
            {
                int32_t r1_3 = *0x109a3e;
                *0x109a42 = 0xff7feb2c(*0x109a40, r1_3);
                *0x109a36 = 0xff7feb00(0x3c * *0x109a58, r1_3, 0x3c);
            }
            
            int32_t r1_5 = *0x109a1c;
            
            if (!r1_5)
                *0x109a33 = 0;
            else
                *0x109a33 = 0xff7feb00(*0x109a18, r1_5);
            
            *0x109a34 = 0;
            *0x109a35 = 0;
            
            if (*0x1099e5)
            {
                int32_t r0_16 = 0xff7feb2c(*0x109a3e - *0x109a3c, *0x109a38);
                
                for (int32_t i = 0; i < r0_16; i += 1)
                {
                    uint32_t r2_1 = *0x109a34;
                    uint32_t r3_1 = *(i + 0x109a5c);
                    
                    if (r2_1 > r3_1 || !r2_1)
                        *0x109a34 = r3_1;
                    
                    uint32_t r2_2 = *(i + 0x109a5c);
                    
                    if (*0x109a35 < r2_2)
                        *0x109a35 = r2_2;
                }
            }
            
            return sub_18670();
        }
    }
    
    return result;
}

int32_t sub_18214(int32_t arg1, int32_t arg2)
{
    int32_t var_1c = arg1;
    uint32_t r1 = *0x1099ca;
    int32_t r0_2 = (*0x1099c9 << 0xc) - 0x400;
    int32_t r4 = r1 + r0_2;
    
    if (r1 + r0_2 < 0)
        r4 += 0x4000;
    
    int32_t r5 = 0;
    
    while (true)
    {
        int32_t var_20;
        sub_dcba(r4, &var_20, 4);
        int32_t r0_4 = var_20;
        
        if (r0_4 != 0xffffffff)
        {
            if (r0_4 == arg1)
                break;
            
            int32_t temp0_1 = r4;
            r4 -= 0x400;
            
            if (temp0_1 - 0x400 < 0)
                r4 += 0x4000;
            
            r5 += 1;
            
            if (r5 < 0xa)
                continue;
        }
        
        return 0;
    }
    
    sub_dcba(r4, arg2, 0x80);
    return 1;
}

int32_t sub_18270(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t r0_2 = (*0x1099c9 << 0xc) + *0x1099ca - (arg2 << 0xa);
    int32_t r4 = r0_2 - 0x400;
    
    if (r0_2 - 0x400 < 0)
        r4 += 0x4000;
    
    sub_dcba(r4, arg3, 4);
    int32_t r0_4 = *arg3;
    
    if (r0_4 == 0xffffffff || r0_4 <= arg1)
        return 0;
    
    sub_dcba(r4, arg3, 0x30);  /* "R02_V3.0" */
    return 1;
}

int32_t sub_182bc()
{
    *0x1099f0 = 1;
    return 1;
}

int32_t sub_182c8(char* arg1)
{
    uint32_t r5 = *arg1;
    uint8_t var_2a8 = r5;
    int32_t var_1c;
    0xff7febd8(&var_1c, &arg1[1], 4);
    char var_30;
    int32_t r2_1;
    
    if (r5 - 1 < 0xee)
    {
        void var_b0;
        uint8_t var_2e;
        
        if (sub_18214(var_1c, &var_b0))
        {
            var_30 = 0;
            int16_t var_a0;
            uint32_t r0_4 = var_a0;
            int16_t var_a4;
            int32_t r6_1;
            void var_a8;
            int16_t var_9e;
            
            if (!r0_4)
                r6_1 = 0;
            else
                r6_1 = 0xff7feb2c(var_9e - r0_4 + 1, var_a4, &var_a8);
            uint32_t r7_1 = 0xff7feb00(r6_1 + 0x1f3, 0x1f4);
            uint8_t var_2f_1 = r7_1;
            var_2e = r7_1 >> 8;
            char var_2d_1 = var_a4;
            char var_2c_1 = 1;
            char var_2b_1 = 0x11;  /* "02_3.00.06_240523" */
            int32_t result = sub_a594(0x44, &var_30, 6);
            
            for (int32_t i = 0; i < r7_1; i += 1)
            {
                var_2a8 = i + 1;
                char var_2a7_1 = 0;
                int32_t r5_1 = r6_1;
                
                if (r6_1 > 0x1f4)
                    r5_1 = 0x1f4;
                
                void var_2a6;
                0xff7febd8(&var_2a6, i * 0x1f4 + &var_b0 + 0x30, r5_1);  /* "R02_V3.0" */
                result = sub_a594(0x45, &var_2a8, r5_1 + 2);
            }
            
            return result;
        }
        
        var_30 = 1;
        uint8_t var_2f_2 = r5;
        0xff7febd8(&var_2e, &var_1c, 4);
        r2_1 = 6;
    }
    else
    {
        var_30 = 2;
        uint8_t var_2f = r5;
        r2_1 = 2;
    }
    
    return sub_a594(0x44, &var_30, r2_1);
}

void sub_183b8(int32_t arg1, char* arg2)
{
    if (arg1 == 0x41)
    {
        int32_t var_40 = 0;
        0xff7febd8(&var_40, arg2, 4);
        uint8_t i_1 = 0;
        int32_t r4_1 = 1;
        uint32_t i;
        
        do
        {
            void var_3c;
            
            if (!sub_18270(var_40, i_1, &var_3c))
                break;
            
            r4_1 += sub_184d4(&var_3c, &(&i_1)[r4_1]);
            i = i_1 + 1;
            i_1 = i;
        } while (i < 0xa);
        sub_a594(0x42, &i_1, r4_1);
    }
    else if (arg1 == 0x43)
        sub_182c8(arg2);
}

int32_t sub_1841a(int32_t arg1, char* arg2)
{
    *arg2 = 2;
    arg2[1] = arg1;
    int32_t r2_2;
    int32_t r3_1;
    r2_2 = 0xff7fec8e(&arg2[2], &arg2[1], arg1, arg1);
    /* tailcall */
    return sub_1846e();
}

int32_t sub_18452(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x12);  /* "2_3.00.06_240523" */
    int32_t r4;
    /* tailcall */
    return sub_184c4(arg1, *(arg2 + 0x13), r4);  /* "_3.00.06_240523" */
}

uint32_t sub_1845a(char arg1, char* arg2 @ r4, int32_t arg3, int32_t arg4, int32_t arg5)
{
    *arg2 = arg1;
    return *arg2;
}

int32_t sub_18460(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x14);  /* "3.00.06_240523" */
    int32_t r4;
    /* tailcall */
    return sub_184c4(arg1, *(arg2 + 0x15), r4);  /* ".00.06_240523" */
}

int32_t sub_1846e()
{
    0xff7febd8();
    int32_t r4;
    /* tailcall */
    return sub_184b8(r4);
}

int32_t sub_18474(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x16);  /* "00.06_240523" */
    int32_t r4;
    /* tailcall */
    return sub_184c4(arg1, *(arg2 + 0x17), r4);  /* "0.06_240523" */
}

int32_t sub_1847c(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x18);  /* ".06_240523" */
    int32_t r4;
    /* tailcall */
    return sub_184c4(arg1, *(arg2 + 0x19), r4);  /* "06_240523" */
}

int32_t sub_18484(char* arg1, char* arg2 @ r4, void* arg3 @ r5)
{
    *arg1 = *(arg3 + 7);
    /* tailcall */
    return sub_1845a(*arg2 + 1, arg2);
}

int32_t sub_18490(int32_t arg1 @ r5)
{
    /* tailcall */
    return sub_1846e();
}

int32_t sub_18498(int32_t arg1 @ r5)
{
    /* tailcall */
    return sub_1846e();
}

int32_t sub_184a0(int32_t arg1 @ r5)
{
    /* tailcall */
    return sub_1846e();
}

int32_t sub_184a8(char* arg1, char* arg2 @ r4, void* arg3 @ r5)
{
    *arg1 = *(arg3 + 0xa);
    /* tailcall */
    return sub_1845a(*arg2 + 1, arg2);
}

int32_t sub_184b8(char* arg1 @ r4)
{
    /* tailcall */
    return sub_1845a(*arg1 + 4, arg1);
}

int32_t sub_184be(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0xe);
    int32_t r4;
    /* tailcall */
    return sub_184c4(arg1, *(arg2 + 0xf), r4);
}

int32_t sub_184c4(void* arg1, char arg2, char* arg3 @ r4)
{
    *(arg1 + 1) = arg2;
    /* tailcall */
    return sub_1845a(*arg3 + 2, arg3);
}

int32_t sub_184cc(int32_t arg1 @ r5)
{
    /* tailcall */
    return sub_1846e();
}

uint32_t sub_184d4(void* arg1, char* arg2)
{
    *arg2 = 2;
    void* r5 = &arg2[2];
    arg2[1] = *(arg1 + 6);
    int32_t var_28;
    __builtin_memcpy(&var_28, 
        "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0d\x13\x00\x01\x02\x04\x07\x08\x09\x00\x00", 0x14);
        /* "3.00.06_240523" */
    uint32_t r0 = *(arg1 + 6);
    char r0_3;
    
    if (r0 == 4 || r0 == 7 || r0 == 8)
    {
        for (int32_t i = 0; i < 0xb; )
        {
            int32_t r0_6;
            char* r4_2;
            r0_6 = sub_1841a(*(&var_28 + i), r5);
            r5 += r0_6;
            r0_3 = *r4_2 + r0_6;
            i += 1;
            *r4_2 = r0_3;
        }
    }
    else
    {
        for (int32_t i_1 = 0; i_1 < 6; )
        {
            int32_t var_1c;
            int32_t r0_2;
            char* r4_1;
            r0_2 = sub_1841a(*(&var_1c + i_1), r5);
            r5 += r0_2;
            r0_3 = *r4_1 + r0_2;
            i_1 += 1;
            *r4_1 = r0_3;
        }
    }
    
    return r0_3;
}

int32_t sub_18558()
{
    return sub_f90c();
}

uint32_t sub_18560()
{
    int32_t r6 = 0;
    *0x1099cc = 0;
    int32_t r4 = 0;
    
    while (true)
    {
        int32_t r7_1 = 0;
        int32_t r5_1 = 0;
        int32_t var_98_1 = r4 << 0xc;
        
        while (true)
        {
            void var_94;
            sub_dcba(var_98_1, &var_94, 0x30);  /* "R02_V3.0" */
            int16_t result_1;
            uint32_t result = result_1;
            
            if (result == 0xffff)
            {
                if (!r6)
                {
                    r6 = 1;
                    *0x1099ca = r7_1;
                    *0x1099c9 = r4;
                }
                
                goto label_185c4;
            }
            
            if (result == 0x1951)
            {
                uint32_t r0_3 = *0x1099cc;
                
                if (r0_3 < 0xa)
                    *0x1099cc = r0_3 + 1;
                
                result = 0x400;
                r7_1 += 0x400;
                r5_1 += 1;
                var_98_1 += 0x400;
                
                if (r5_1 < 4)
                    continue;
                else
                {
                    if (!r6)
                        goto label_185ca;
                    
                label_185c4:
                    result = *0x1099cc;
                    
                    if (result < 0xa)
                        goto label_185ca;
                }
            }
            else
            {
                r6 = 0;
            label_185ca:
                r4 += 1;
                
                if (r4 < 4)
                    break;
            }
            
            if (r6)
                return result;
            
            return sub_1863c();
        }
    }
}

int32_t sub_185e8(int32_t arg1)
{
    if (*0x1099f0)
        sub_f9fc();
    
    sub_f928(arg1);
    *0x103d60 = arg1;
    *0x1099e5 = 0;
    return 0;
}

int32_t sub_18618()
{
    return sub_f9fc();
}

uint32_t sub_18624()
{
    if (*0x1099c8)
        return 0x1099c8;
    
    *0x1099c8 = 1;
    return sub_18560();
}

int32_t sub_1863c()
{
    for (int32_t i = 0; i < 4; i += 1)
        sub_1865c(i);
    
    *0x1099c9 = 0;
    *0x1099ca = 0;
    *0x1099cc = 0;
    return 0;
}

int32_t sub_1865c(int32_t arg1)
{
    return sub_dcd0((arg1 << 0xc) + 0x6c000, 1);
}

uint32_t sub_18670()
{
    sub_e048((*0x1099c9 << 0xc) + *0x1099ca + 0x6c000, 0x80, 0x109a2c);
    uint32_t r1_2 = *0x1099ca + 0x400;
    *0x1099ca = r1_2;
    uint32_t r0_5 = *0x1099cc;
    
    if (r0_5 < 0xa)
        *0x1099cc = r0_5 + 1;
    
    if (r1_2 >= 0x1000)
    {
        *0x1099ca = 0;
        uint32_t r0_10 = (*0x1099c9 + 1) << 0x1e >> 0x1e;  /* "0523" */
        *0x1099c9 = r0_10;
        sub_1865c(r0_10);
    }
    
    return sub_6ce2(7);
}

int32_t sub_186cc()
{
    return sub_fa30();
}

int32_t sub_186d4(int32_t arg1, int32_t arg2)
{
    int32_t result_1;
    int32_t r1;
    result_1 = sub_5b44(arg1, arg2);
    int32_t result = result_1;
    
    if (result_1)
        result_1 = 1;
    
    if ((0x7ff00000 - ((r1 | result_1) << 1 >> 1)) >> 0x1f)  /* "523" */
    {
        int32_t r1_6;
        
        r1_6 = !arg1 ? 0 : 1;
        
        if (!((0x7ff00000 - ((arg2 | r1_6) << 1 >> 1)) >> 0x1f))  /* "523" */
            sub_7a50(1);
    }
    
    return result;
}

uint32_t sub_1871c(int32_t arg1)
{
    *0x20201040 = arg1;
    uint32_t result = arg1 >> 1;
    *0x20201040 = result;
    return result;
}

uint32_t sub_1872c()
{
    uint32_t result = *0x109c86;
    *0x109c86 = 0;
    return result;
}

uint32_t sub_1873c()
{
    void var_20;
    sub_17af0(&var_20);
    void* var_28;
    uint32_t r2;
    int32_t r3;
    
    if (!sub_eb04())
    {
        r2 = sub_eb1c() - 1;
        r3 = 0x118;
        int32_t var_24_1 = 0xc;
        var_28 = &var_20;
    }
    else
    {
        int32_t r4_2 = 0xc * 0xff7feb00(sub_eb04() + 0x3b, 0x3c) - 8;
        r2 = sub_eb1c();
        r3 = r4_2;
        int32_t var_24 = 0xc;
        var_28 = &var_20;
    }
    
    sub_192dc(0x81f4e8, 0x109968, r2, r3, var_28, 0xc);
    return sub_6ce2(4);
}

uint32_t sub_1879c()
{
    if (sub_17aac() == *0x108fc4)
        return sub_15bb4(0x108fb8);
    
    *0x108fc4 = sub_17aac();
    return sub_6ce2(0x12);  /* "2_3.00.06_240523" */
}

int32_t sub_187c8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    var_18 = 0;
    uint32_t r5_1 = sub_188d0(0x21, 0x87) << 0x1f >> 0x1f;  /* "523" */  /* "3" */
    *0x108fb7 = 0;
    uint32_t r4 = sub_18898(9, &var_18, 1) & r5_1;
    
    while (var_18)
    {
        if (*0x108fb7 >= 0xa)
            break;
        
        uint32_t r5_3 = sub_188d0(0x21, 0x87) & r4;  /* "3" */
        r4 = sub_18898(9, &var_18, 1) & r5_3;
        *0x108fb7 += 1;
    }
    
    if (!r4)
        return 0;
    
    return 1;
}

int32_t sub_18830()
{
    uint32_t r4_1 = sub_188d0(0x16, 7) << 0x1f >> 0x1f;  /* "00.06_240523" */  /* "523" */
    uint32_t r5_1 = sub_188d0(0x2a, 4) & r4_1;
    uint32_t r4_3 = sub_188d0(0x28, 3) & r5_1;
    uint32_t r5_3 = sub_188d0(0x27, 0) & r4_3;
    uint32_t r4_5 = sub_188d0(0x19, 0x20) & r5_3;  /* "06_240523" */  /* "23" */
    uint32_t r5_5 = sub_188d0(0xb, 7) & r4_5;
    uint32_t r4_7 = sub_188d0(0x21, 7) & r5_5;  /* "3" */
    sub_72b0();
    
    if (!r4_7)
        return 0;
    
    return 1;
}

uint32_t sub_18898(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    
    if (!arg3)
        return 0xa;
    
    int32_t r4_1 = 3;
    uint32_t result = 0;
    
    while (true)
    {
        int32_t temp0_1 = r4_1;
        r4_1 -= 1;
        
        if (temp0_1 < 1)
            break;
        
        result = sub_b700(0x20145000, 0x3f, arg1, arg2, arg3, 0xc8);
        
        if (!result)
            return result;
    }
    
    return result;
}

uint32_t sub_188d0(uint32_t arg1, int32_t arg2)
{
    int32_t var_8 = arg2;
    uint32_t var_c = arg1;
    return sub_bad4(0x20145000, 0x3e, arg1, &var_8, 1);
}

uint32_t sub_188ec()
{
    sub_188d0(0x14, 0xb6);  /* "3.00.06_240523" */
    0xff900b4c(0x61a80);
    sub_188d0(0xf, 5);
    sub_188d0(0x5e, 0xc0);
    sub_188d0(0x34, 4);  /* "V3.0" */
    sub_188d0(0x20, 5);  /* "23" */
    sub_188d0(0x1a, 2);  /* "6_240523" */
    sub_188d0(0x17, 0x40);  /* "0.06_240523" */
    sub_188d0(0x3d, 0x20);  /* "23" */
    return sub_77b8();
}

uint32_t sub_18940()
{
    sub_16050();
    sub_f710(0x10);  /* "R02_3.00.06_240523" */
    sub_f5f4(0);
    return sub_15bb4(0x109474);
}

int32_t sub_18960()
{
    uint32_t var_30;
    int32_t r2;
    void* r3;
    r2 = 0xff7fec0a(&var_30, 0x2c);
    var_30 = *0x109ab6;
    uint32_t var_2c = *0x109ab5;
    uint32_t var_28 = *0x109ab4;
    uint32_t var_24 = *0x109ab3;
    uint32_t var_20 = *0x109ab2;
    uint32_t var_1c = *0x109ab0;
    return sub_b254(&var_30, 8, r2, r3);
}

int32_t sub_18998()
{
    sub_b674(0x20145000);
    sub_b890(0x20145000, 2);
    sub_b8fc(0x20145000, 0xf);
    sub_b804(0x20145000, 0);
    sub_b95c(0x20145000, 0);
    return sub_b848(0x20145000, 0);
}

int32_t sub_189d0() __pure
{
    return;
}

uint32_t sub_189d4()
{
    return *0x1042bd << 0x1c >> 0x1f;  /* "240523" */  /* "523" */
}

void sub_189e4(int32_t arg1)
{
    uint32_t r1 = *0x1042bd;
    
    if (r1 << 0x1c >> 0x1f != arg1)  /* "240523" */  /* "523" */
    {
        *0x1042bd = (r1 & 0xf7) | arg1 << 0x1f >> 0x1c;  /* "240523" */  /* "523" */
        sub_18ed4();
    }
}

int32_t sub_18a08()
{
    sub_15cc8();
    sub_18c94();
    sub_163e0();
    sub_15ca0(1);
    sub_19170();
    sub_18b98();
    sub_18bd8();
    sub_fbe0();
    sub_7588(1);
    sub_7588(2);
    sub_759c(1);
    sub_759c(2);
    sub_7588(0x11);  /* "02_3.00.06_240523" */
    sub_759c(0x11);  /* "02_3.00.06_240523" */
    *0x20132014 |= 0x10;  /* "R02_3.00.06_240523" */
    *0x20131000 = (*0x20131000 & 0xffffffe3) + 4;
    *0x20131004 = *0x20131004 >> 4 << 4 | 0x640;
    *0x20131000 |= 1;
    sub_97a8();
    0xff8ffea2();
    sub_9468();
    return sub_95b4();
}

uint32_t sub_18a98(int32_t arg1)
{
    uint32_t result = arg1 << 0x1c >> 0x14;  /* "3.00.06_240523" */  /* "240523" */
    *0x2020103c = (*0x2020103c & 0xfffff0ff) | result;
    return result;
}

uint32_t sub_18ab0(int32_t arg1)
{
    uint32_t result = arg1 << 0x1f >> 0x1f;  /* "523" */
    *0x2020103c = *0x2020103c >> 1 << 1 | result;
    return result;
}

uint32_t sub_18ac8(int32_t arg1)
{
    uint32_t result = arg1 << 0x1d >> 0x1d;  /* "40523" */
    *0x20201000 = *0x20201000 >> 3 << 3 | result;
    return result;
}

void sub_18ae0(int32_t arg1)
{
    *0x20201018 = *0x20201018 >> 8 << 8 | arg1;
}

int32_t sub_18af4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t result = arg1 << 0x18 | arg2 << 0x14 | arg3 << 0x10 | arg4 << 8 | arg5;
        /* "R02_3.00.06_240523" */  /* "3.00.06_240523" */  /* ".06_240523" */
    *0x20201014 = result;
    return result;
}

uint32_t sub_18b14()
{
    return *0x104296 << 0x1e >> 0x1f;  /* "0523" */  /* "523" */
}

uint32_t sub_18b24()
{
    uint32_t result = *0x1042f6;
    
    if (result == 1)
        return result;
    
    return 0;
}

uint32_t sub_18b34()
{
    uint32_t result = *0x1042f5;
    
    if (result == 1)
        return result;
    
    return 0;
}

void sub_18b44(int32_t arg1)
{
    uint32_t r1 = *0x104296;
    
    if (r1 << 0x1e >> 0x1f != arg1)  /* "0523" */  /* "523" */
    {
        *0x104296 = (r1 & 0xfd) | arg1 << 0x1f >> 0x1e;  /* "0523" */  /* "523" */
        sub_18ed4();
    }
}

void sub_18b68(int32_t arg1)
{
    if (*0x1042f6 != arg1)
    {
        *0x1042f6 = arg1;
        sub_18ed4();
    }
}

void sub_18b80(int32_t arg1)
{
    if (*0x1042f5 != arg1)
    {
        *0x1042f5 = arg1;
        sub_18ed4();
    }
}

int32_t sub_18b98()
{
    *0x2020101c = (*0x2020101c & 0xfff7ffff) | 0x80000;
    0xff900b4c(0x75300);
    *0x2020101c = (*0x2020101c & 0xfffbffff) | 0x40000;
    0xff900b4c(0x4b0, 0x40000);
    int32_t result = *0x2020101c & 0xffefffff;
    *0x2020101c = result;
    return result;
}

int32_t sub_18bd8()
{
    0xff8fff14(0x8000);
    sub_18c14();
    sub_18c60();
    *0x20201018 = *0x20201018 >> 8 << 8 | 0xc0;
    *0x20201014 = 0x8510203;
    sub_18c7c();
    *0x202010cc = 0x100;
    return 0x100;
}

int32_t sub_18c14()
{
    int32_t result = (*0x2020103c & 0xfffffff1) | 2;
    *0x2020103c = result;
    return result;
}

void sub_18c28(uint32_t arg1, int32_t arg2)
{
    if (!arg2)
    {
        *0x2020100c = *0x2020100c | arg1 << 0x10;  /* "R02_3.00.06_240523" */
        return;
    }
    
    if (arg2 == 1)
    {
        *0x2020100c = *0x2020100c >> 0x10 << 0x10 | arg1;  /* "R02_3.00.06_240523" */
        *0x20201010 = *0x20201010 >> 7 << 7 | ~arg1 << 0x19 >> 0x19;  /* "06_240523" */
    }
}

int32_t sub_18c60()
{
    sub_18c28(0x500, 1);
    return sub_18c28(0x57f, 0);
}

int32_t sub_18c7c()
{
    int32_t result = (*0x20201010 & 0xfff0ffff) | 0x10000;
    *0x20201010 = result;
    return result;
}

int32_t sub_18c94()
{
    0xff8fff14(0xa0);
    sub_18ac8(1);
    sub_18ab0(1);
    sub_18a98(1);
    *0x20201000 &= 0xfff0ffff;
    *0x20201038 = 3;
    int32_t result = (*0x20132040 & 0xffffc0ff) | 0x1000;
    *0x20132040 = result;
    return result;
}

int32_t sub_18cdc()
{
    return sub_15b5e(0x7a000);
}

uint32_t sub_18ce8()
{
    int32_t r3;
    int32_t var_18 = r3;
    0xff7febfc(0x104294, 0xc8, 0xff);
    int32_t r1_6 = *0x104296 >> 1 << 1 & 0x89;
    *0x104297 = 1;
    *0x104298 = 0;
    *0x104296 = r1_6 << 0x19 >> 0x19;  /* "06_240523" */
    *0x10429f = 2;
    *0x10429a = 0x1388;
    *0x10429c = 1;
    *0x10429d = 1;
    *0x10429e = 0x14;  /* "3.00.06_240523" */
    *0x1042a0 = 0x36;  /* ".0" */
    *0x1042a1 = 2;
    *0x1042a4 = 0x1388;
    *0x1042a8 = 0x493e0;
    *0x1042ac = 0xbb8;
    *0x1042b0 = 0x78;
    *0x1042b2 = 0x1e0;
    int32_t r6 = *0x81f560;
    *0x1042b8 = *0x81f564;
    *0x1042b4 = r6;
    char r6_3 = *0x1042bd & 0xb7;
    uint8_t r2_6 = ((*0x1042bc | 1 | 0xe) & 0x8f) << 0x19 >> 0x19;  /* "06_240523" */
    *0x1042c4 = 0;
    *0x1042bc = r2_6;
    int32_t r5_2 = (*0x1042d4 | 4) & 0xef;
    *0x1042bd = r6_3 | 1 | 0x80 | 0x20;  /* "23" */
    *0x1042cc = 0;
    *0x1042cd = 0;
    *0x1042c2 = 0xac;
    *0x10434b = 0x1e;  /* "0523" */
    *0x1042d5 = 0;
    *0x1042d4 = (((r5_2 | 1) & 0xf5) << 0x19 >> 0x19 & 0x9f) + 0x40;  /* "06_240523" */
    return sub_1804c();
}

uint32_t sub_18dc8()
{
    return *0x104296 << 0x1d >> 0x1f;  /* "40523" */  /* "523" */
}

int32_t sub_18dd8()
{
    return *0x1042a8;
}

int32_t sub_18de4()
{
    return *0x1042ac;
}

int32_t sub_18df0()
{
    return *0x1042a4;
}

int32_t sub_18dfc()
{
    sub_15b30(0x7a000, 0x104294, 0xc8);
    
    if (*0x104294 == 2)
        return 1;
    
    return 0;
}

void sub_18e20(uint32_t arg1)
{
    if (arg1)
        arg1 = 1;
    
    uint32_t r1 = *0x104296;
    
    if (r1 << 0x1d >> 0x1f != arg1)  /* "40523" */  /* "523" */
        *0x104296 = (r1 & 0xfb) | (arg1 << 0x1f >> 0x1d);  /* "40523" */  /* "523" */
}

void sub_18e44(int32_t arg1)
{
    *0x1042c4 = arg1;
}

void sub_18e50(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 < 0x64)
        return;
    
    if (*0x1042a4 != arg1 || *0x1042a8 != arg2 || *0x1042ac != arg3)
    {
        *0x1042a4 = arg1;
        *0x1042a8 = arg2;
        *0x1042ac = arg3;
    }
    
    sub_1804c();
}

void sub_18e78(int32_t arg1, int32_t arg2)
{
    if (arg1 >= 5 && arg2 >= 5 && (*0x1042b0 != arg1 || *0x1042b2 != arg2))
    {
        *0x1042b0 = arg1;
        *0x1042b2 = arg2;
    }
}

uint32_t sub_18e98(int32_t arg1, char arg2, char arg3, char arg4)
{
    if (arg1)
        arg1 = 1;
    
    *0x1042b4 = arg1;
    *0x1042b5 = arg2;
    uint32_t r1 = arg3;
    *0x1042b6 = r1;
    uint32_t r2 = arg4;
    *0x1042b7 = r2;
    return sub_14394(arg1, r1, r2);
}

int32_t sub_18eb8()
{
    sub_15b5e(0x7a000);
    return sub_15b76(0x7a000, 0x104294, 0xc8);
}

int32_t sub_18ed4()
{
    void var_d0;
    sub_15b30(0x7a000, &var_d0, 0xc8);
    int32_t result = 0xff7fec20(&var_d0, 0x104294, 0xc8);
    
    if (!result)
        return result;
    
    return sub_18eb8();
}

uint32_t sub_18f00()
{
    uint32_t result = *0x1041e2;
    
    if (result != 1)
        return result;
    
    sub_18eb8();
    sub_f29c();
    return sub_179cc();
}

uint32_t sub_18f1c()
{
    sub_17c00();
    return sub_f2a4();
}

int32_t sub_18f28()
{
    sub_6034();
    sub_a58c();
    sub_a16c();
    sub_18cdc();
    *0x1041e0 = 5;
    sub_f3fc();
    sub_17bc8();
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_18084();
    sub_10a9c(r0, r1, r2, r3);
    return sub_10a14(0x3e8);
}

int32_t sub_18f60()
{
    *0x1041e0 = 1;
    sub_14ee0();
    sub_72f0();
    sub_15c10(1);
    sub_72e4();
    sub_15bb4(0x105fb6);
    sub_f710(1);
    sub_f710(0x100);
    sub_f480();
    sub_a58c();
    sub_a16c();
    
    if (*0x1041e2 == 1)
        sub_6034();
    else
        sub_14ee0();
    
    if (!sub_ea50())
        *0x1042f4 = *0x10bfac;
    else
    {
        *0x1042f4 = 0x64;
        *0x10bfac = 0x64;
    }
    
    if (*0x1041e2 == 1)
        sub_18f00();
    else
        sub_18eb8();
    
    sub_16ba8(0);
    return 0;
}

int32_t sub_18fec()
{
    sub_6034();
    sub_a58c();
    sub_a16c();
    *0x1041e0 = 5;
    
    if (*0x1041e2 == 1)
        sub_18f00();
    
    return sub_10a14(0x3e8);
}

int32_t sub_19018()
{
    return sub_105c0(0xef, 0, 0);
}

uint32_t sub_19028()
{
    uint32_t result = *0x10938d + 1;
    *0x10938d = result;
    
    if (result >= 3)
    {
        if (!sub_f57c())
        {
            sub_f710(0x80);
            return sub_15bb4(0x10938e);
        }
        
        result = *0x10938d;
        
        if (result >= 0x23)
        {
            sub_f554();
            sub_f710(0x80);
            return sub_15bb4(0x10938e);
        }
    }
    
    return result;
}

uint32_t sub_19060(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t result = *0x10947c + 1;
    *0x10947c = result;
    
    if (result > 3)
    {
        if (result > 0x23)
        {
            uint32_t r0_2 = sub_f510();
            
            if (r0_2 != 2)
                result = *0x10947c;
            
            if (r0_2 == 2 || result >= 0x32)  /* "2_V3.0" */
            {
                uint32_t r0_3;
                uint32_t r1;
                r0_3 = sub_f51c();
                uint32_t r4_1 = r0_3;
                uint32_t r0_4 = r0_3 - 0x3c;
                
                if (r0_4 >= 0x3d)
                {
                    r0_4 = *0x109470;
                    
                    if (!r0_4)
                    {
                        sub_18940();
                        *0x109478 = sub_7680();
                        sub_f660(0x10);  /* "R02_3.00.06_240523" */
                        sub_f5f4(1);
                        sub_15b94(0x109474, 0x81bf61, 0x3e8);
                        *0x109470 = 1;
                        return 1;
                    }
                    
                    if (r4_1 < 0x3c)
                    {
                        r0_4 = *0x109471;
                        
                        if (r0_4 > 0x46)
                        {
                            r0_4 = 0xff7feb2c(0xff7febb4(r0_4), 0xa);
                            r4_1 = r1 + 0x41;
                        }
                    }
                }
                
                *0x109470 = 0;
                
                if (r4_1 >= 0x28)
                {
                    if (!sub_17a74())
                    {
                        if (r4_1 > 0x78)
                        {
                            int32_t r0_10;
                            r0_10 = sub_179b8();
                            
                            if (r0_10 < 0x1e)  /* "0523" */
                            {
                                uint32_t r0_11 = *0x1099f0;
                                
                                if (r0_11 != 2)
                                {
                                    int32_t r1_3;
                                    r1_3 = 0xff7feb2c(0xff7febb4(r0_11), 0xa);
                                    r1 = r1_3 + 0x5f;
                                    r4_1 = r1;
                                }
                            }
                        }
                    }
                    else if (r4_1 >= 0x64)
                    {
                        int32_t r1_2;
                        r1_2 = 0xff7feb2c(0xff7febb4(), 0xa);
                        r1 = r1_2 + 0x5a;
                        r4_1 = r1;
                    }
                }
                else
                {
                    int32_t r1_1;
                    r1_1 = 0xff7feb2c(0xff7febb4(r0_4), 0xa);
                    r1 = r1_1 + 0x28;
                    r4_1 = r1;
                }
                
                if (*0x109471 != r4_1)
                {
                    *0x109472 = 0;
                    *0x109471 = r4_1;
                }
                else
                {
                    uint32_t r0_16 = *0x109472 + 1;
                    *0x109472 = r0_16;
                    
                    if (r0_16 >= 3)
                    {
                        *0x109472 = 0;
                        arg3 = sub_1b9ec(r0_16, r1, arg3, arg4);
                    }
                }
                
                sub_f238(*0x109478, r4_1, arg3, arg4);
                return sub_18940();
            }
        }
        else
        {
            result = sub_f57c();
            
            if (!result)
                return sub_18940();
        }
    }
    
    return result;
}

int32_t sub_19170()
{
    sub_e8a0();
    return 0xff7febc6(*0x104f54);
}

int32_t sub_19184(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = *0x20200000;
    int32_t r1 = *0x105aa8;
    
    if (result > r1)
        arg3 = result - r1;
    else if (result < r1)
        arg3 = result - r1 - 1;
    
    if (arg3 < 0x20000)
        return result;
    
    *0x105aa8 = result;
    return sub_84f6();
}

int32_t sub_191b8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = *0x20200000;
    int32_t r1 = *0x105aa0;
    
    if (result > r1)
        arg3 = result - r1;
    else if (result < r1)
        arg3 = result - r1 - 1;
    
    if (arg3 < 0x20000)
        return result;
    
    *0x105aa0 = result;
    return sub_f214();
}

int32_t sub_191ec(int32_t arg1, int32_t arg2) __pure
{
    return arg1 + arg2;
}

int32_t sub_191f2(int32_t* arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r2;
    int32_t var_1c_1 = r2;
    int32_t r1;
    int32_t var_20_1 = r1;
    int32_t r6 = *arg1;
    int32_t r0;
    int32_t r2_1;
    int32_t r3_1;
    r0 = 0xff7feb00(0x1000, *(arg1 + 0xa));
    int32_t result = 0;
    
    while (true)
    {
        int32_t r1_2 = arg1[1];
        
        if (r1_2 <= result)
            break;
        
        int32_t r5_1 = r6;
        
        for (int32_t i = 0; i < r0; i += 1)
        {
            int32_t r0_2;
            r0_2 = sub_ea04(r5_1, r1_2, r2_1, r3_1);
            
            if (r0_2 != 0xffffffff)
            {
                r2_1 = sub_15b5e(r6);
                break;
            }
            
            r5_1 += *(arg1 + 0xa);
        }
        
        r6 += 0x1000;
        result += 0x1000;
    }
    
    return result;
}

int32_t sub_19240(int32_t* arg1, uint32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r7 = arg2;
    int32_t r6 = 0;
    int32_t r4 = *arg1;
    int32_t result;
    
    while (true)
    {
        result = arg1[1];
        
        if (result <= r4)
            break;
        
        if (!r6)
        {
            int32_t r0_3;
            r0_3 = sub_ea04(r4, arg2, arg3, arg4);
            
            if (r0_3 == 0xffffffff)
            {
                arg2 = *(arg1 + 0xa);
                r4 += arg1[2] - arg2;
            }
            else
            {
                r6 = 1;
                *r7 = r4;
            }
        }
        else
        {
            int32_t r0_1;
            r0_1 = sub_ea04(r4, arg2, arg3, arg4);
            result = r0_1 + 1;
            
            if (r0_1 == 0xffffffff)
                break;
            
            *r7 = r4;
        }
        
        r4 += *(arg1 + 0xa);
    }
    
    return result;
}

int32_t sub_1927e(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r7 = arg3;
    int32_t r4 = arg2;
    int32_t r0_1;
    
    if (r4)
        r0_1 = sub_ea04(arg2, arg2, arg3, arg4);
    
    if (!r4 || r0_1 != r7)
    {
        int32_t r0_2 = *arg1;
        uint32_t r1_1;
        
        if (r0_2 < r4)
            r1_1 = r0_2 + arg1[1];
        
        if (r0_2 >= r4 || r1_1 <= r4)
        {
            r1_1 = arg1[1] >> 1;
            r4 = r0_2 + r1_1;
        }
        else
            r4 -= *(arg1 + 0xa);
        
        int32_t r6_1 = 0;
        
        while (true)
        {
            if (arg1[1] <= r6_1)
                return 0;
            
            int32_t r0_5;
            r0_5 = sub_ea04(r4, r1_1, arg3, arg4);
            
            if (r0_5 == r7)
                break;
            
            uint32_t r0_7 = *(arg1 + 0xa);
            r1_1 = *arg1;
            r4 -= r0_7;
            
            if (r1_1 > r4)
            {
                r1_1 = arg1[1];
                r4 += r1_1;
            }
            
            r6_1 += r0_7;
        }
    }
    
    return r4 + 0x800000;
}

int32_t sub_192dc(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_1c = arg3;
    int32_t* var_20 = arg2;
    int32_t r2 = var_1c;
    int32_t result = r2 + 1;
    
    if (r2 != 0xffffffff)
    {
        void* r0_1;
        int32_t r1;
        int32_t r2_1;
        int32_t r3;
        r0_1 = sub_836c(arg1, arg2, r2, arg4);
        
        if (sub_ea04(r0_1, r1, r2_1, r3) == 0xffffffff)
            sub_15b76(r0_1, &var_1c, 4);
        
        void* r4_1 = r0_1 + arg4;
        int32_t r0_6 = 0;
        
        while (true)
        {
            void* r0_9;
            int32_t r2_4;
            
            if (r0_6 >= arg6)
            {
                r0_9 = r4_1;
                r2_4 = arg6;
            }
            else if (*(r4_1 + 0x800000 + r0_6) == 0xff)
            {
                r0_6 += 1;
                continue;
            }
            else
            {
                result = 0xff7fec20(r4_1 + 0x800000, arg5, arg6);
                
                if (!result)
                    break;
                
                sub_832c(arg1, r0_1, arg4);
                r2_4 = arg6;
                r0_9 = r4_1;
            }
            
            return sub_15b76(r0_9, arg5, r2_4);
        }
    }
    
    return result;
}

void sub_1934c(int32_t arg1, int32_t* arg2)
{
    if (!arg1 || arg1 == 0xffffffff)
        return;
    
    arg1 = arg1 <= 0x386d4380 ? 0 : arg1 - 0x386d4380;
    
    *arg2 = arg1;
}

void sub_1936c(int32_t arg1)
{
    if (!*0x104250)
    {
        *0x104250 = arg1;
        sub_db84();
    }
}

int32_t sub_19384()
{
    *0x104250 = 0;
    return sub_db84();
}

int32_t sub_19398() __pure
{
    return;
}

int32_t sub_1939a() __pure
{
    return 0;
}

int32_t sub_1939e() __pure
{
    return;
}

int32_t sub_193a0(void* arg1)
{
    int32_t r1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = 0;  /* "R02_3.00.06_240523" */
    return 0xff80c010(r1, r1, 0);
}

int32_t sub_193b0(void* arg1, int16_t* arg2, int16_t arg3, int32_t arg4, int16_t* arg5)
{
    int32_t var_18 = arg4;
    int16_t* var_20 = arg2;
    void* var_24 = arg1;
    int32_t var_38 = 0x12a5dc7;
    int32_t var_34 = 0xaf2665e3;
    int32_t var_30 = 0xd7114e47;
    int32_t var_2c = 0xde5bf728;
    int32_t result = sub_a014(arg2, &var_38, 0, 6, &data_0, *(arg1 + 0x14), 0x81ef18, 0x40);
        /* "3.00.06_240523" */
    
    if (!result)
    {
        int16_t* r0_1 = 0xff80c1f4(0xc, 1);
        *(arg1 + 0x10) = r0_1;  /* "R02_3.00.06_240523" */
        r0_1[2] = *arg2;
        r0_1[4] = *arg5;
        int32_t r1_5 = arg4 << 0x1f;  /* "523" */
        
        if (r1_5)
            r1_5 = 0x8000;
        
        *r0_1 = r1_5 | arg3;
        r0_1[1] = *(arg1 + 0x14) | 0x8000;  /* "3.00.06_240523" */
        *(arg1 + 0x16) = 0xfc;  /* "00.06_240523" */
        *(arg1 + 0xe) = 1;
        *(arg1 + 8) = &r0_1[5];
        *(arg1 + 4) = 0x81efc4;
        0xff80c4d0(*(arg1 + 0x14), 0, arg3, 0x8000);  /* "3.00.06_240523" */
    }
    
    return result;
}

int32_t sub_19440() __pure
{
    return 0x81ef9c;
}

int32_t sub_19448(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    if (!0xff80c474(arg3))
    {
        int16_t* r0_2 = 0xff80c348(0xc14, arg4, arg3, 8);
        *r0_2 = *arg2;
        r0_2[2] = 0;
        r0_2[1] = 2;
        uint32_t r1_2 = *0x105f30;
        *(r0_2 + 5) = r1_2 >> 8;
        r0_2[3] = r1_2;
        *0x105f30 = r1_2 + 1;
        0xff80c3b8(r0_2, r1_2 + 1, 0x105f30);
    }
    
    return 0;
}

int32_t sub_19490(int32_t arg1, int16_t* arg2, int32_t arg3, int32_t arg4)
{
    if (!0xff80c474(arg3))
    {
        int16_t* r0_2 = 0xff80c348(0xc16, arg4, arg3, 4, arg4);
        *r0_2 = *arg2;
        r0_2[1] = 0;
        0xff80c3b8();
        sub_10424(&arg2[3], arg2[2]);
    }
    
    return 0;
}

int32_t sub_194cc() __pure
{
    return;
}

int32_t sub_194ce() __pure
{
    return 0;
}

int32_t sub_194d2() __pure
{
    return;
}

int32_t sub_194d4(void* arg1)
{
    int32_t r1 = *(arg1 + 0x10);  /* "R02_3.00.06_240523" */
    *(arg1 + 0x10) = 0;  /* "R02_3.00.06_240523" */
    return 0xff80c010(r1, r1, 0);
}

int32_t sub_194e4(void* arg1, int16_t* arg2, int16_t arg3, int32_t arg4, int16_t* arg5)
{
    int32_t var_18 = arg4;
    int16_t* var_20 = arg2;
    void* var_24 = arg1;
    int32_t var_38 = 0x24dcca9e;
    int32_t var_34 = 0xe0a9e50e;
    int32_t var_30 = 0xb5a3f393;
    int32_t var_2c = 0x6e40fff0;
    int32_t result = sub_9ef8(arg2, &var_38, 0, 6, &data_0, *(arg1 + 0x14), 0x81ee64, 0x40);
        /* "3.00.06_240523" */
    
    if (!result)
    {
        int16_t* r0_1 = 0xff80c1f4(0xc, 1);
        *(arg1 + 0x10) = r0_1;  /* "R02_3.00.06_240523" */
        r0_1[2] = *arg2;
        r0_1[4] = *arg5;
        int32_t r1_5 = arg4 << 0x1f;  /* "523" */
        
        if (r1_5)
            r1_5 = 0x8000;
        
        *r0_1 = r1_5 | arg3;
        r0_1[1] = *(arg1 + 0x14) | 0x8000;  /* "3.00.06_240523" */
        *(arg1 + 0x16) = 0xfc;  /* "00.06_240523" */
        *(arg1 + 0xe) = 1;
        *(arg1 + 8) = &r0_1[5];
        *(arg1 + 4) = 0x81ef10;
        0xff80c4d0(*(arg1 + 0x14), 0, arg3, 0x8000);  /* "3.00.06_240523" */
    }
    
    return result;
}

int32_t sub_19574() __pure
{
    return 0x81eee8;
}

int32_t sub_19600()
{
    return *0x20200000;
}

uint32_t sub_1960c(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    
    if (!arg3)
        return 0xa;
    
    int32_t r4_1 = 3;
    uint32_t result = 0;
    
    while (true)
    {
        int32_t temp0_1 = r4_1;
        r4_1 -= 1;
        
        if (temp0_1 < 1)
            break;
        
        result = sub_b700(0x20145000, 0x66, arg1, arg2, arg3, 0x1f4);
        
        if (!result)
            return result;
    }
    
    return result;
}

uint32_t sub_19648(uint32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    
    if (!arg3)
        return 0xa;
    
    int32_t r4_1 = 3;
    uint32_t result = 0;
    
    while (true)
    {
        int32_t temp0_1 = r4_1;
        r4_1 -= 1;
        
        if (temp0_1 < 1)
            break;
        
        result = sub_bb60(0x20145000, 0x66, arg1, arg2, arg3, 0x1f4);
        
        if (!result)
            return result;
    }
    
    return result;
}

int32_t sub_19684(int32_t arg1)
{
    uint32_t r5 = *0x109acc;
    uint32_t i = 0;
    int32_t r1 = r5 - arg1;
    int32_t result = 0;
    
    if (r1 <= 0)
        r1 = 0 - r1;
    
    uint32_t r1_3;
    
    if (r1 > 5 && r5)
    {
        r1_3 = *0x109abe + 1;
        *0x109abe = r1_3;
    }
    
    if (r1 <= 5 || !r5 || r1_3 >= 5)
    {
        *0x109abe = 0;
        
        if (!*0x109ad4)
        {
            do
            {
                uint32_t r4_2 = i << 1;
                i = i + 1;
                *(0x109ad4 + r4_2) = arg1;
            } while (i < 0x14);  /* "3.00.06_240523" */
        }
        else
        {
            for (; i < 0x13; i = i + 1)  /* "_3.00.06_240523" */
            {
                int32_t r4_3 = i << 1;
                *(0x109ad4 + r4_3) = *(r4_3 + 0x109ad6);
            }
            
            *0x109afa = arg1;
        }
        
        for (uint32_t i_1 = 0; i_1 < 0x14; i_1 = i_1 + 1)  /* "3.00.06_240523" */
            result += *(0x109ad4 + (i_1 << 1));
        
        result = 0xff7feb00();
        *0x109acc = result;
    }
    
    return result;
}

uint32_t sub_19708(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0 = *0x109aca;
    uint16_t r0_4;
    
    if (!r0)
        r0_4 = sub_eca0(r0, arg2, arg3, arg4);
    else
        r0_4 = (sub_eca0(r0, arg2, arg3, arg4) + *0x109aca) << 0xf >> 0x10;
            /* "R02_3.00.06_240523" */
    
    *0x109aca = r0_4;
    uint32_t r4 = r0_4;
    
    if (sub_e94c() == 1 && sub_15fd0(*0x109aca) < 0x50)
        r4 = *0x109aca - 0x1e;  /* "0523" */
    
    *0x109ab9 = sub_a152();
    sub_19684(r4);
    int32_t r2;
    int32_t r3;
    r2 = sub_199c0(*0x109acc);
    int32_t r1_1 = 0x10cc;
    *0x109abf += 1;
    
    if (*0x109aca < 0x10cc && (sub_ec90() <= 1 || !*0x109ab8))
        *0x109ac1 += 1;
    
    if (sub_ec90() <= 0xa)
        *0x109ac0 += 1;
    
    if (*0x103d62 == 0xff)
    {
        int32_t r0_26 = *0x10bfac - 0x64;
        
        if (r0_26 <= 0x64)
        {
            r1_1 = 0x103d62;
            *0x103d62 = r0_26;
        }
    }
    
    uint32_t result = *0x109abf;
    
    if (result >= 4)
    {
        bool cond:0_1 = !sub_e94c();
        uint32_t r0_28 = *0x103d62;
        
        if (cond:0_1)
        {
            if (r0_28 == 0xff)
            {
                char r0_43 = *0x109ab8;
                *0x103d62 = r0_43;
                *0x10bfac = r0_43 + 0x64;
                *0x1042f4 = r0_43 + 0x64;
            }
            else if (r0_28 <= *0x109ab8)
                *0x109ac5 = 0;
            else
            {
                uint32_t r0_38 = *0x109ac5 + 1;
                *0x109ac5 = r0_38;
                uint32_t r0_39;
                
                if (r0_38 < 5)
                    r0_39 = sub_ec90();
                
                if (r0_38 >= 5 || r0_39 <= 0x5a)
                {
                    char r0_41 = *0x103d62 - 1;
                    *0x103d62 = r0_41;
                    *0x10bfac = r0_41 + 0x64;
                    *0x1042f4 = r0_41 + 0x64;
                    *0x109ac5 = 0;
                    sub_6ce2(0xc);
                }
            }
            
            if (*0x109ac1 <= 2)
            {
                if (*0x109ac0 <= 2)
                {
                    uint32_t r0_58 = *0x109ac4 + 1;
                    *0x109ac4 = r0_58;
                    *0x109ac2 = 0;
                    *0x109ac3 = 0;
                    
                    if (r0_58 > 2 && *0x109aba)
                        *0x109aba = 0;
                }
                else
                {
                    uint32_t r0_55 = *0x109ac2 + 1;
                    *0x109ac2 = r0_55;
                    *0x109ac3 = 0;
                    *0x109ac4 = 0;
                    *0x109aba = 1;
                    
                    if (!*0x103d63)
                    {
                        if (r0_55 >= 5)
                        {
                            *0x103d63 = 0;
                            *0x109ac2 = 0;
                        }
                    }
                    else if (r0_55 > 1)
                    {
                        *0x103d63 = 0;
                        *0x109ac2 = 0;
                    }
                }
            }
            else if (*0x1041e0 != 1)
            {
                uint32_t r0_49 = *0x109ac3 + 1;
                *0x109ac3 = r0_49;
                *0x109ac2 = 0;
                *0x109ac4 = 0;
                *0x109aba = 2;
                
                if (r0_49 > 6)
                {
                label_19872:
                    *0x109ac3 = 0;
                    *0x10bfac = 0x64;
                    *0x1042f4 = 0x64;
                    *0x109abb = 1;
                    sub_19018();
                    *0x109abc = 0;
                    
                    if (*0x109ac8)
                        sub_15bb4(0x109ac8);
                }
                else if (r0_49 > 1 && !*0x109ab8)
                    goto label_19872;
            }
        }
        else if (r0_28 == 0xff)
        {
            char r0_60 = *0x109ab8;
            *0x103d62 = r0_60;
            *0x10bfac = r0_60 + 0x64;
            *0x1042f4 = r0_60 + 0x64;
        }
        else
        {
            int32_t r0_29;
            int32_t r2_1;
            int32_t r3_1;
            r0_29 = sub_d480(3, r1_1, r2, r3);
            
            if (r0_29 == 1)
            {
                *0x103d62 = 0x64;
                sub_1a404(0, 1, r2_1, r3_1);
            }
            else
            {
                uint32_t r0_30 = *0x103d62;
                
                if (r0_30 < 0x63)
                    *0x103d62 = r0_30 + 1;
            }
            
            char r0_33 = *0x103d62 + 0x64;
            *0x10bfac = r0_33;
            *0x1042f4 = r0_33;
            sub_6ce2(0xc);
        }
        
        *0x109abf = 0;
        *0x109ac1 = 0;
        *0x109ac0 = 0;
        result = *0x109aba;
        
        if (result != 2)
        {
            if (*0x109ac8)
                sub_15bb4(0x109ac8);
            
            *0x109aca;
            result = sub_a152();
            *0x109ab9 = result;
        }
    }
    
    return result;
}

uint32_t sub_19918()
{
    uint32_t result = *0x109abd;
    
    if (result == 1)
        return result;
    
    *0x109abd = 1;
    int32_t r0_1 = *0x10bfac - 0x64;
    
    if (r0_1 <= 0x64)
        *0x103d62 = r0_1;
    
    int32_t r2_1;
    
    if (!*0x109ac6)
        r2_1 = 0x12c;
    else
        r2_1 = 0x7530;
    
    return sub_15b94(0x109ac6, 0x81c86d, r2_1);
}

int32_t sub_1996c()
{
    if (!*0x109ac8)
        sub_15b94(0x109ac8, 0x81c609, 0xa);
    
    int32_t r2;
    
    if (*0x1041e0 == 1)
        r2 = 0x36ee80;
    else
        r2 = 0x9c40;
    
    return sub_15b94(0x109ac6, 0x81c86d, r2);
}

void sub_199c0(int32_t arg1)
{
    uint32_t i = 0;
    int32_t r6 = 0;
    
    if (!*0x109ace)
        *0x109ace = 0x1a4;
    
    if (arg1 <= 0x154)
        return;
    
    char r0 = sub_15fd0(arg1);
    
    if (!*0x109afc)
    {
        do
        {
            *(0x109afc + i) = r0;
            i = i + 1;
        } while (i < 0x14);  /* "3.00.06_240523" */
    }
    else
    {
        for (; i < 0x13; i = i + 1)  /* "_3.00.06_240523" */
            *(0x109afc + i) = *(i + 0x109afd);
        
        *0x109b0f = r0;
    }
    
    for (uint32_t i_1 = 0; i_1 < 0x14; i_1 = i_1 + 1)  /* "3.00.06_240523" */
        r6 += *(0x109afc + i_1);
    
    *0x109ab8 = 0xff7feb00(r6, 0x14);  /* "3.00.06_240523" */
}

int32_t sub_19a34(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = sub_1b4d4(arg1, arg2, arg3);
    
    if (!result)
        return result;
    
    *0x103d58 = 5;
    sub_1b70c(0x103d56);
    sub_f600();
    sub_f710(2);
    return 1;
}

void sub_19a5c(char* arg1, int32_t arg2, char arg3, int32_t arg4)
{
    for (uint32_t i = 0; i < arg4; i = i + 1)
    {
        void* r6_1 = &arg1[i << 2];
        int32_t r4_1 = i << 4;
        *(0x1094ae + r4_1) = *(r6_1 + 0x1c) >> 8;  /* "240523" */
        *(r4_1 + 0x1094af) = *(r6_1 + 0x1c);  /* "240523" */
        void* r4_3 = (i << 1) + arg2;
        *(r4_1 + 0x1094b0) = *(r4_3 + 4) >> 0xd;
        *(r4_1 + 0x1094b1) = *(r4_3 + 4) >> 5;
        *(r4_1 + 0x1094b2) = *(r4_3 + 0x54) >> 0xd;
        *(r4_1 + 0x1094b3) = *(r4_3 + 0x54) >> 5;
        *(r4_1 + 0x1094b4) = *(r4_3 + 0xa4) >> 0xd;
        *(r4_1 + 0x1094b5) = *(r4_3 + 0xa4) >> 5;
        *(r4_1 + 0x1094b6) = arg3;
        *(r4_1 + 0x1094b7) = arg1[3];
        *(r4_1 + 0x1094b8) = *arg1;
        *(r4_1 + 0x1094b9) = arg1[8];
        *(r4_1 + 0x1094ba) = arg1[9];
        *(r4_1 + 0x1094bb) = *(arg1 + 0x21e) >> 8;
        *(r4_1 + 0x1094bc) = arg1[0x21e];
        *(r4_1 + 0x1094bd) = arg1[0x1a];  /* "6_240523" */
    }
    
    if (arg4)
        sub_c954(arg4 << 4);
}

void sub_19af0(char* arg1, int32_t arg2, char arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    
    for (uint32_t i = 0; i < arg4; i = i + 1)
    {
        void* r5_1 = &arg1[i << 3];
        int32_t r6_1 = i << 4;
        *(0x1094ae + r6_1) = *(r5_1 + 0x1c) >> 8;  /* "240523" */
        *(r6_1 + 0x1094af) = *(r5_1 + 0x1c);  /* "240523" */
        void* r1_5 = (i << 1) + arg2;
        *(r6_1 + 0x1094b0) = *(r1_5 + 4) >> 8;
        *(r6_1 + 0x1094b1) = *(r1_5 + 4);
        *(r6_1 + 0x1094b2) = *(r1_5 + 0x54) >> 8;
        *(r6_1 + 0x1094b3) = *(r1_5 + 0x54);
        *(r6_1 + 0x1094b4) = arg1[9];
        *(r6_1 + 0x1094b5) = arg1[0xa];
        *(r6_1 + 0x1094b6) = *(r5_1 + 0x20) >> 8;  /* "23" */
        *(r6_1 + 0x1094b7) = *(r5_1 + 0x20);  /* "23" */
        *(r6_1 + 0x1094b8) = arg3;
        *(r6_1 + 0x1094b9) = arg1[8];
        *(r6_1 + 0x1094ba) = arg1[3];
        *(r6_1 + 0x1094bb) = *arg1;
        *(r6_1 + 0x1094bc) = arg1[4];
        *(r6_1 + 0x1094bd) = arg1[1];
    }
    
    if (arg4)
        sub_c954(arg4 << 4);
}

int32_t sub_19b6c(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = arg3 << 0x1f >> 0x1f;  /* "523" */
    *var_10[1] = 2 & arg3;
    int32_t r2 = arg3 & 4;
    *var_10[2] = r2;
    
    if (*(&var_10 + arg2))
    {
        uint32_t r0_4 = arg1[4];
        
        if (!r0_4)
            return 2;
        
        arg1[4] = r0_4 - 1;
        *arg1 = r0_4 - 1;
        int32_t r2_1;
        int32_t r3;
        r2_1 = sub_19d94(arg2, &var_10, r2, arg4);
        sub_1ac30(arg2, arg1[4], r2_1, r3);
    }
    
    return 0;
}

int32_t sub_19bb0(char* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    char* var_24 = arg1;
    char var_38 = 0;
    int32_t var_34 = 0;
    sub_1960c(3, &var_38, 1);
    int32_t r0_2 = arg4 << 1;
    char r1_2 = arg2 << 1;
    uint32_t r0_5 = var_38 - r0_2 + r1_2;
    
    if (r0_5 < 0x80)
        r0_5 += 0x80;
    
    uint8_t r1_3;
    
    r1_3 = !arg3 ? r1_2 - 0x80 : r0_5;
    
    sub_1960c(r1_3, &var_34, 2);
    uint32_t r1_6 = (var_34 << 8) + *var_34[1];
    uint32_t r0_10 = var_38;
    
    if (arg3)
    {
        uint32_t r2_3 = *0x1091c7;
        char r2_4;
        
        r2_4 = r0_10 <= r2_3 ? r0_10 - r2_3 - 0x80 : r0_10 - r2_3;
        
        if (r0_2 != r2_4)
            arg1[7] = 0;
        
        uint32_t r2_9 = *0x1091c8 + 1;
        *0x1091c8 = r2_9;
        
        if (r2_9 >= arg4)
        {
            *0x1091c8 = 0;
            *0x1091c7 = r0_10;
        }
    }
    
    uint32_t r1_7;
    uint32_t r2_10;
    void* r3_1;
    
    if (r1_6 < 0xeba)
    {
        if (r1_6 >= 0x140)
            return 0;
        
        arg1[6] = 2;
        r2_10 = 0;
        r3_1 = arg2;
        r1_7 = 0;
    }
    else
    {
        arg1[6] = 1;
        r2_10 = *arg1;
        r1_7 = arg1[1];
        r3_1 = arg2;
    }
    
    return sub_19c7c(arg1, r1_7, r2_10, r3_1);
}

int32_t sub_19c7c(void* arg1, int32_t arg2, uint32_t arg3, void* arg4)
{
    int32_t r6 = arg2;
    uint32_t r1 = *(arg1 + 5);
    uint32_t r3 = *(arg1 + 4);
    uint32_t r0 = *(arg1 + 8);
    
    if (r3 != arg3)
    {
        uint32_t r1_1 = *(arg1 + 7);
        uint32_t r0_4;
        
        if (!r1_1)
            r0_4 = r0 << 4;
        else if (*(arg1 + 6) != r1_1)
            r0_4 = 0xb * r0;
        else if (r0 == 1 || r0 == 2)
            r0_4 = (r0 << 4) + 0x10;  /* "R02_3.00.06_240523" */
        else
            r0_4 = 0x16 * r0;  /* "00.06_240523" */
        
        uint32_t r0_7 = r0_4 << 0x14 >> 0x18;  /* "3.00.06_240523" */  /* ".06_240523" */
        *(arg1 + 8) = r0_7;
        
        if (r0_7 <= 1)
            r0_7 = 1;
        
        *(arg1 + 8) = r0_7;
        
        if (r0_7 >= 0x20)  /* "23" */
            r0_7 = 0x20;  /* "23" */
        
        *(arg1 + 8) = r0_7;
        uint32_t r1_3 = *(arg1 + 6);
        
        if (r1_3 == 1)
        {
            uint32_t r0_17 = r0_7 + r3;
            
            if (r0_17 <= arg3)
                arg3 = r0_17;
        }
        else if (r0_7 <= r3)
            arg3 = r3 - r0_7;
        
        *(arg1 + 4) = arg3;
        sub_19d94(arg4, r1_3, arg3, r3);
        *(arg1 + 7) = *(arg1 + 6);
    }
    else
    {
        if (r1 == r6)
            return 8;
        
        if (*(arg1 + 6) == 1)
        {
            if (r1 < r6)
                r6 = r1 + 1;
            
            *(arg1 + 5) = r6;
        }
        else
        {
            if (r1)
                r1 -= 1;
            
            *(arg1 + 5) = r1;
        }
        
        sub_19d94(arg4, r1, arg3, r3);
    }
    
    int32_t r0_11;
    int32_t r2_1;
    int32_t r3_2;
    r0_11 = sub_19d44(*(arg1 + 6), arg4, *(arg1 + 5), *(arg1 + 4));
    
    if (r0_11)
    {
        uint32_t r0_12 = *(arg1 + 5);
        
        if (r0_12 >= 0xd)
            *(arg1 + 5) = r0_12 - 1;
    }
    
    int32_t r2_2;
    int32_t r3_3;
    r2_2 = sub_1ac68(arg4, *(arg1 + 5), r2_1, r3_2);
    sub_1ac30(arg4, *(arg1 + 4), r2_2, r3_3);
    return 0;
}

int32_t sub_19d44(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    if (*0x1091c4 == arg1 || *0x1091c5 != arg3)
        *0x1091c6 = 0;
    else
    {
        void* r4_3 = arg2 * 3;
        *(0x1091f0 + r4_3) = *(r4_3 + 0x1091f1);
        *(r4_3 + 0x1091f1) = *(r4_3 + 0x1091f2);
        *(r4_3 + 0x1091f2) = arg4;
        
        if (*(0x1091f0 + r4_3) == arg4)
            *0x1091c6 += 1;
    }
    
    *0x1091c4 = arg1;
    *0x1091c5 = arg3;
    
    if (*0x1091c6 < 3)
        return 0;
    
    *0x1091c6 = 0;
    return 1;
}

uint32_t sub_19d94(char arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r4 = *0x109272;
    var_18 = 0;
    sub_1960c(3, &var_18, 1);
    uint32_t r0 = var_18;
    char r0_1;
    
    r0_1 = r0 <= r4 ? r0 - r4 - 0x80 : r0 - r4;
    
    uint32_t r1_1 = r0_1;
    uint32_t result = r1_1 - 2;
    
    if (result < 0x7f)
    {
        result = (r1_1 >> 1) - *0x109271 + arg1;
        *(0x10921f + result) = 1;
    }
    
    return result;
}

int32_t sub_19ddc(int32_t arg1, int32_t arg2)
{
    int32_t r2;
    int32_t var_1c_1 = r2;
    int32_t var_20_1 = arg2;
    
    if (arg1)
    {
        *0x1091ca = arg1;
        int32_t r2_1 = *0x1091e0;
        int32_t r2_2 = r2_1 - arg1;
        
        if (r2_1 - arg1 < 0)
            r2_2 = 0 - r2_2;
        
        *0x1091e4 = r2_2;
        *0x1091e0 = arg1;
    }
    
    if (arg2)
        *0x1091c3 = arg2;
    
    uint32_t r0 = *0x1091c3;
    uint32_t r1 = *0x103d54;
    
    if (r0 < r1 && *0x1091e4 < 2)
        *0x1091d4 = *0x1091ca;
    
    int32_t r0_3 = *0x1091d4;
    
    if (r0_3)
    {
        int32_t r0_4;
        int32_t r1_1;
        r0_4 = sub_5784(r0_3);
        int32_t r0_5;
        int32_t r1_2;
        r0_5 = sub_5556(r0_4, r1_1, 0, 0x40200000);
        *0x1091d8 = sub_5824(r0_5, r1_2);
        int32_t r0_8;
        int32_t r1_4;
        r0_8 = sub_5556(r0_4, r1_1, 0, 0x40240000);
        *0x1091dc = sub_5824(r0_8, r1_4);
    }
    
    int32_t r0_10 = *0x1091d8;
    
    if (r0_10)
    {
        uint32_t r1_5 = *0x1091ca;
        
        if (r1_5 > r0_10 && *0x1091e4 < 3)
        {
            uint32_t r0_14 = *0x1091c1 + 1;
            *0x1091c1 = r0_14;
            
            if (r0_14 > 9)
                *0x103d53 = 1;
        }
        else if (r1_5 >= *0x1091dc)
        {
            *0x1091c0 = 0;
            *0x1091c1 = 0;
            *0x103d53 = 0;
        }
        else
        {
            uint32_t r0_18 = *0x1091c0 + 1;
            *0x1091c0 = r0_18;
            
            if (r0_18 > 2)
                *0x103d53 = 2;
        }
    }
    
    int32_t r0_20 = sub_d820(*0x1091ca, r0, r1);
    
    if (r0_20 == 2)
    {
        *0x103d52 = 1;
        *0x1091cc = 2;
    }
    else if (r0_20 == 1)
        *0x1091cc = 1;
    
    return *0x1091cc;
}

int32_t sub_19eb4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    uint32_t r4 = 0;
    var_20 = 0;
    var_1c = 0;
    var_18 = 0;
    int32_t r0 = 0xff7feb00(0x2710, *0x109260);
    int32_t r1_2;
    
    if (*0x10926d)
    {
        r1_2 = *0x109278;
        *0x109278 = r1_2 + 1;
    }
    
    if (!*0x10926d || r1_2 > r0)
    {
        int32_t r0_2 = sub_19600();
        sub_1960c(7, &var_20, 4);
        int32_t r0_3 = sub_19600();
        uint32_t r2_3 = (var_20 << 8) + *var_20[1];
        uint32_t r1_9 = (*var_20[2] << 8) + *var_20[3];
        
        if (r2_3 > r1_9 || r0_2 > r0_3)
        {
            *0x10927c = 0;
            return 1;
        }
        
        *((*0x10927c << 3) + 0x109280) = r2_3;
        *((*0x10927c << 3) + 0x109284) = r1_9;
        *((*0x10927c << 3) + 0x109298) = r0_2;
        *((*0x10927c << 3) + 0x10929c) = r0_3;
        uint32_t r0_7 = *0x10927c + 1;
        *0x10927c = r0_7;
        
        if (r0_7 < 3)
            return 2;
        
        *0x10927c = 0;
    label_19f52:
        int32_t r1_18 = *((r4 << 3) + 0x1092a0) - *((r4 << 3) + 0x109298);
        int32_t r0_11 = *((r4 << 3) + 0x1092a4) - *((r4 << 3) + 0x10929c);
        int32_t r0_12;
        
        r0_12 = r1_18 <= r0_11 ? r0_11 - r1_18 : r1_18 - r0_11;
        
        int32_t r0_13;
        
        if (r0_12 < 3)
        {
            r0_13 = 1;
            goto label_19f6e;
        }
        
        int32_t r0_23;
        
        while (true)
        {
            r0_13 = 0;
        label_19f6e:
            int32_t r0_18;
            
            if (r0_13)
            {
                int32_t r1_20 = *((r4 << 3) + 0x109288) - *((r4 << 3) + 0x109280);
                int32_t r0_17 = *((r4 << 3) + 0x10928c) - *((r4 << 3) + 0x109284);
                
                r0_18 = r1_20 <= r0_17 ? r0_17 - r1_20 : r1_20 - r0_17;
            }
            
            int32_t r0_19;
            
            r0_19 = !r0_13 || r0_18 >= 3 ? 0 : 1;
            
            if (!r0_19 || *((r4 << 3) + 0x1092a0) == *((r4 << 3) + 0x109298))
                r0_23 = 0;
            else
                r0_23 = 1;
            
            r4 = r4 + 1;
            
            if (r4 >= 2)
                break;
            
            if (r0_23)
                goto label_19f52;
        }
        
        if (!r0_23)
            return 2;
        
        uint32_t r4_2 = 0;
    label_19fd0:
        int32_t r0_27 =
            0xff7feb00((*((r4_2 << 3) + 0x109288) - *((r4_2 << 3) + 0x109280)) << 0xf, *0x109262);
        int32_t r2_12 = *((r4_2 << 3) + 0x109298);
        *(&var_1c + (r4_2 << 1)) = 0xff7feb00(r0_27, *((r4_2 << 3) + 0x1092a0) - r2_12, r2_12) - 1;
        bool c_1 = TEST_BIT(0xfd, 0xa);
        
        if (!c_1 || !c_1)
            return 3;
        
        uint32_t r0_41;
        uint32_t r1_32;
        
        if (r4_2 + 1 >= 2)
        {
            r1_32 = *var_1c[2];
            r0_41 = var_1c;
            
            if (r1_32 - r0_41 > 0x14 && r0_41 - r1_32 > 0x14)  /* "3.00.06_240523" */
                return 2;
        }
        
        uint32_t r0_43 = (r1_32 + r0_41) >> 1;
        var_18 = r0_43 >> 8;
        *var_18[1] = r0_43;
        sub_19648(0x14, &var_18, 2);  /* "3.00.06_240523" */
        *0x10927c = 0;
        *0x109278 = 0;
        *0x10926d = 1;
    }
    
    return 0;
}

int32_t sub_1a090(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    sub_1960c(0x10, &var_10, 1);  /* "R02_3.00.06_240523" */
    
    if (arg1 > 2)
        return 1;
    
    var_10 &= ~(1 << arg1);
    sub_19648(0x10, &var_10, 1);  /* "R02_3.00.06_240523" */
    sub_1960c(0x11, &var_10, 1);  /* "02_3.00.06_240523" */
    var_10 |= 0x10;  /* "R02_3.00.06_240523" */
    sub_19648(0x11, &var_10, 1);  /* "02_3.00.06_240523" */
    var_10 = *0x10926e;
    sub_19648(0x16, &var_10, 1);  /* "00.06_240523" */
    return 0;
}

int32_t sub_1a0f8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r4 = 0;
    int32_t r5 = *0x1092b0;
    var_18 = 0;
    int32_t result = 0;
    int32_t r0 = 0xff7feb00(0x3e8, *0x109262);
    sub_1960c(7, &var_18, 4);
    uint32_t r0_5 = (var_18 << 8) + *var_18[1];
    uint32_t r1_6 = (*var_18[2] << 8) + *var_18[3];
    uint32_t r1_7;
    
    r1_7 = r0_5 > r1_6 ? r1_6 - r0_5 + 0xffff : r1_6 - r0_5;
    
    if (r1_7 <= 5)
        r4 = r0_5;
    
    int32_t r0_6 = 0x1f40;
    
    if (r4 && r5)
    {
        r0_6 = r5 > r4 ? r4 - r5 + 0xffff : r4 - r5;
    }
    
    if (0x14 * ((r0 * 0xc00000) >> 0x18) >= r0_6)  /* "3.00.06_240523" */  /* ".06_240523" */
        result = 0xffffffff;
    
    *0x1092b0 = r4;
    return result;
}

int32_t sub_1a17c()
{
    *0x109278 = 0;
    *0x10927c = 0;
    *0x109274 = 0;
    *0x10926d = 0;
    *0x1092b0 = 0;
    return 0;
}

int32_t sub_1a194(uint8_t* arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_1c = arg3;
    uint8_t* var_24 = arg1;
    int32_t r0 = sub_19600();
    int32_t r0_1 = *0x109274;
    int32_t r7;
    
    r7 = r0_1 >= r0 ? r0 - r0_1 - 1 : r0 - r0_1;
    
    int32_t r0_3 = sub_5776(*0x109271);
    int32_t result;
    uint32_t r0_12;
    
    if (sub_57fa(sub_5378(
        sub_53f4(sub_52fe(sub_5378(0x42800000, sub_5776(*0x109262)), 0x3f4ccccd), 0xf), r0_3)) >= r7)
    {
        uint32_t r1_2 = *arg1;
        r0_12 = *arg2;
        
        if (r0_12 >= 0x80)
        {
            if (r1_2 < 0x80)
                goto label_1a210;
            
            if (r0_12 != r1_2)
            {
                result = 0;
                *0x109274 = r0;
            }
            else
            {
                result = 0x20;  /* "23" */
                *0x109274 = r0;
            }
        }
        else
        {
            uint32_t r0_18 = r1_2 + (arg4 << 1) + 2;
            *arg1 = r0_18;
            
            if (r0_18 < 0x80)
            {
                r0_12 = r0_18 + 0x80;
                goto label_1a210;
            }
            
            result = 0x20;  /* "23" */
            *0x109274 = r0;
        }
    }
    else
    {
        *arg2 = 0;
        r0_12 = 0x80;
    label_1a210:
        *arg1 = r0_12;
        result = 0x20;  /* "23" */
        *0x109274 = r0;
    }
    return result;
}

uint32_t sub_1a234(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    uint32_t result = *0x109268;
    sub_1960c(0x11, &var_10, 1);  /* "02_3.00.06_240523" */
    
    if (var_10 << 0x1b < 0)  /* "_240523" */
        return result;
    
    return result & 0xef;
}

int32_t sub_1a25c(uint8_t* arg1, int32_t arg2)
{
    sub_1960c(1, 0x109265, 1);
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r1 = sub_1960c(2, 0x109268, 1);
    uint32_t r0_1 = *0x109265 >> 3;
    
    if (!r0_1)
    {
    label_1a28a:
        int32_t r0_2;
        int32_t r1_1;
        int32_t r2_1;
        int32_t r3_1;
        r0_2 = sub_1a0f8(r0_1, r1, r2, r3);
        
        if (r0_2 != 0xffffffff)
        {
            int32_t r2_2;
            int32_t r3_2;
            r2_2 = sub_1a72c(arg1, r1_1, r2_1, r3_1);
            return sub_1a358(arg1, arg2, r2_2, r3_2);
        }
    }
    else
    {
        r0_1 = *0x109264;
        
        if (r0_1 == 6)
            goto label_1a28a;
    }
    
    *0x109268 = 0;
    return 1;
}

uint32_t sub_1a2ac(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    uint32_t result = *0x109203;
    var_20 = 0;
    int32_t r6 = 0;
    uint32_t i = 0;
    sub_1960c(0x11, &var_20, 1);  /* "02_3.00.06_240523" */
    uint32_t r0 = *0x109268;
    
    if (r0 << 0x1b < 0 && var_20 << 0x1b < 0)  /* "_240523" */
        r6 = 1;
    
    if (r0 << 0x1d < 0)  /* "40523" */
        r6 = 1;
    
    uint32_t r0_2 = *0x109264;
    
    if (r0_2 != 1 && r0_2 != 5)
        *0x1091d0 = 1;
    
    if (r6)
    {
        int32_t r0_3;
        int32_t r1_5;
        int32_t r2_1;
        int32_t r3_2;
        r0_3 = sub_1af08(0x1091fc, *0x1091fd, *0x1091fc, *0x1091fe);
        
        if (r0_3 == 1)
        {
            result = 1;
            *0x109202 = 1;
            *0x109203 = 1;
            sub_1a17c();
            uint32_t r0_4 = *0x109264;
            
            if (r0_4 != 5)
            {
                var_1c = *0x109260;
                *var_1c[2] = r0_4;
                sub_1a99c(&var_1c);
            }
        }
        else if (r0_3 == 2)
        {
            result = 2;
            *0x109202 = 2;
            *0x109203 = 2;
            
            if (*0x109264 != 5)
            {
                do
                {
                    if (*(i + 0x10926f))
                        r1_5 = sub_1a090(i, r1_5, r2_1, r3_2);
                    
                    i = i + 1;
                } while (i <= 1);
            }
        }
    }
    
    return result;
}

int32_t sub_1a358(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r0_1;
    int32_t r2_1;
    r0_1 = 0xff7fec8e(*0x109268, 0x109260, *0x109265, *0x109264, arg4);
    int32_t r0_3;
    int32_t r1_1;
    int32_t r2_2;
    int32_t r3_1;
    r0_3 = sub_1adc8(r2_1, r0_1);
    sub_19eb4(r0_3, r1_1, r2_2, r3_1);
    int32_t r0_5;
    int32_t r1_3;
    int32_t r2_3;
    int32_t r3_2;
    r0_5 = sub_1a6d4(arg1, r0_1 << 0x18);  /* ".06_240523" */
    int32_t r0_6 = r0_5 | r0_3;
    /* tailcall */
    return sub_1a3f8(r0_6, r0_6, r1_3, r2_3, r3_2);
}

int32_t sub_1a398(char arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r5, uint8_t* arg5 @ r6)
{
    int32_t r0_1;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0_1 = sub_1adc8(arg3, arg1);
    sub_19eb4(r0_1, r1, r2, r3);
    /* tailcall */
    return sub_1a3f8(sub_1a6d4(arg4, arg5) | r0_1);
}

int32_t sub_1a3b4(char arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0_1;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0_1 = sub_1adc8(arg3, arg1);
    sub_19eb4(r0_1, r1, r2, r3);
    /* tailcall */
    return sub_1a3f8(r0_1);
}

int32_t sub_1a3c4(int32_t arg1, char* arg2 @ r5)
{
    int32_t r4;
    int32_t entry_r2;
    int32_t entry_r3;
    
    if (arg1 << 0x1c < 0)  /* "240523" */
        r4 = sub_19b6c(0x109204, 0, entry_r2, entry_r3);
    *arg2 = *0x109204;
    /* tailcall */
    return sub_1a3f8(r4);
}

int32_t sub_1a3de(char* arg1 @ r5)
{
    int32_t entry_r2;
    int32_t entry_r3;
    sub_1b4f0(arg1, 0x1092e4, entry_r2, entry_r3);
    int32_t r4;
    /* tailcall */
    return sub_1a3f8(r4);
}

int32_t sub_1a3e8(char arg1, int32_t arg2, int32_t arg3, void* arg4 @ r5)
{
    int32_t r0_1 = sub_1adc8(arg3, arg1);
    sub_1a8ec(arg4);
    /* tailcall */
    return sub_1a3f8(r0_1);
}

int32_t sub_1a3f8(int32_t arg1 @ r4, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) __pure
{
    return arg1;
}

int32_t sub_1a404(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    char r5 = arg2;
    var_20 = 0;
    var_1c = 0xa0;
    var_18 = 7;
    int32_t r1_1;
    int32_t r2;
    int32_t r3;
    r1_1 = sub_1960c(0x10, &var_20, 1);  /* "R02_3.00.06_240523" */
    
    if (arg1 > 2)
        return 1;
    
    uint32_t r0_1 = var_20;
    
    if (r0_1 != 0x85 && r0_1 != 0x86)
        sub_1a534(r0_1, r1_1, r2, r3);
    
    if (sub_e8c4() && (!*0x10428c || !*0x104291))
    {
        var_20 = 0x87;
        sub_19648(0x10, &var_20, 1);  /* "R02_3.00.06_240523" */
        sub_19648(0x17, &var_1c, 1);  /* "0.06_240523" */
        sub_19648(0x1a, &var_18, 1);  /* "6_240523" */
        sub_19648(0x18, &var_1c, 1);  /* ".06_240523" */
        sub_19648(0x1b, &var_18, 1);  /* "_240523" */
        r5 = 0;
    }
    else if (!arg1)
    {
        if (var_20 != 0x85)
        {
            var_20 = 0x85;
            sub_19648(0x10, &var_20, 1);  /* "R02_3.00.06_240523" */
            sub_19648(0x17, &var_1c, 1);  /* "0.06_240523" */
            sub_19648(0x1a, &var_18, 1);  /* "6_240523" */
        }
    }
    else if (arg1 == 1)
    {
        if (var_20 != 0x86)
        {
            var_20 = 0x86;
            sub_19648(0x10, &var_20, 1);  /* "R02_3.00.06_240523" */
            sub_19648(0x18, &var_1c, 1);  /* ".06_240523" */
            sub_19648(0x1b, &var_18, 1);  /* "_240523" */
        }
    }
    else if (arg1 == 2 && var_20)
    {
        var_20 = 0;
        sub_19648(0x10, &var_20, 1);  /* "R02_3.00.06_240523" */
        r5 = 0;
    }
    
    *0x109316 = r5;
    return 0;
}

int32_t sub_1a50c()
{
    uint32_t r0;
    int32_t r2;
    int32_t r3;
    r0 = sub_a144();
    int32_t r0_2;
    
    if (!r0)
        r0_2 = 2;
    else if (sub_ec90() == 0x64)
        r0_2 = 0;
    else
        r0_2 = 1;
    
    return sub_1a404(r0_2, 0, r2, r3);
}

uint32_t sub_1a534(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    var_c = 0;
    var_10 = 0x190;
    *var_10[2] = 3;
    sub_1b70c(&var_10);
    return sub_19648(0x10, &var_c, 1);  /* "R02_3.00.06_240523" */
}

int32_t sub_1a558(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = 0;
    
    if (arg2 << 0x1c < 0 && arg3 << 0x1d < 0)  /* "240523" */  /* "40523" */
        result = 2;
    
    if (arg2 << 0x1e < 0 && *(arg1 + 3) > 0x80)  /* "0523" */
        return result | 4;
    
    return result;
}

uint32_t sub_1a578(int32_t arg1, int32_t arg2, uint8_t* arg3, char* arg4, char* arg5, int32_t arg6)
{
    char* var_18 = arg4;
    int32_t var_24 = arg1;
    uint32_t r4 = 0;
    char var_a4[0x80];
    0xff7fec0a(&var_a4, 0x80);
    int32_t r5 = 0;
    uint32_t result;
    
    if (!arg1)
    {
        *arg3 = arg6;
        sub_1960c(0x80, &var_a4, arg6 << 0x19 >> 0x18);  /* ".06_240523" */  /* "06_240523" */
        
        while (true)
        {
            result = *arg3;
            
            if (result <= r4)
                break;
            
            uint32_t r0_11 = r4 << 1;
            void* r0_15 = (r4 << 2) + arg2;
            *(r0_15 + 0x1c) = (var_a4[r0_11] << 8) + var_a4[r0_11 + 1];  /* "240523" */
            
            if (*(0x10921f + r4))
            {
                *(0x10921f + r4) = 0;
                *(r0_15 + 0x1c) |= 0x1000;  /* "240523" */
            }
            
            r4 = r4 + 1;
        }
    }
    else
    {
        uint32_t r0_2 = *arg5;
        uint32_t r2 = *arg4;
        uint32_t r1 = *0x109271;
        uint32_t r1_1 = r1 << 1;
        uint32_t r0_32;
        uint32_t r6_1;
        
        if (r0_2 <= r2)
        {
            r6_1 = r0_2 - r2 - 0x80;
            int32_t r1_6 = 0xff7feb00(r6_1, r1_1);
            
            if (r1_6 && r1 >= 2)
            {
                r5 = r1_6;
                r6_1 = r6_1 - r5;
            }
            
            if (r0_2 == 0x80)
            {
                sub_1960c(r2, &var_a4, r6_1);
                r0_32 = *arg5;
                
                if (r5)
                    r0_32 = r0_32 - r5 + 0x80;
            }
            else
            {
                sub_1960c(r2, &var_a4, 0 - r2);
                sub_1960c(0x80, &var_a4[0x100 - *arg4], *arg5 - r5 + 0x80);
                r0_32 = *arg5 - r5;
            }
        }
        else
        {
            r6_1 = r0_2 - r2;
            int32_t r1_2 = 0xff7feb00(r6_1, r1_1);
            
            if (r1_2 && r1 >= 2)
            {
                r5 = r1_2;
                r6_1 = r6_1 - r5;
            }
            
            sub_1960c(r2, &var_a4, r6_1);
            r0_32 = *arg5 - r5;
        }
        
        *arg4 = r0_32;
        *arg3 = r6_1 >> 1;
        
        while (true)
        {
            result = *arg3;
            
            if (result <= r4)
                break;
            
            int32_t r0_37 = r4 << 1;
            void* r0_41 = (r4 << 2) + arg2;
            *(r0_41 + 0x1c) = (var_a4[r0_37] << 8) + var_a4[r0_37 + 1];  /* "240523" */
            
            if (*(0x10921f + r4))
            {
                *(0x10921f + r4) = 0;
                *(r0_41 + 0x1c) |= 0x1000;  /* "240523" */
            }
            
            r4 = r4 + 1;
        }
    }
    
    return result;
}

int32_t sub_1a6d4(int32_t arg1, uint8_t* arg2)
{
    int32_t result = 0;
    char var_20 = 0;
    
    if (*0x109268 << 0x1d < 0)  /* "40523" */
    {
        sub_1960c(3, &var_20, 1);
        char* var_1c_1 = 0x109272;
        result = sub_1a194(0x109272, &var_20, *0x109271, *0x10926e);
        
        if (!result && *0x10926d)
            sub_1a578(*0x10926e, arg1, arg2, var_1c_1, &var_20, *0x109271);
    }
    
    return result;
}

int32_t sub_1a72c(uint8_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18 = arg3;
    int32_t var_1c_1 = arg2;
    uint8_t* var_20 = arg1;
    var_20 = &data_0;
    int16_t var_1c = 0;
    var_18 = 0;
    var_14 = 0;
    sub_1960c(4, &var_20, 3);
    uint32_t r0 = var_20;
    arg1[9] = r0 << 0x1c >> 0x1c;  /* "240523" */
    arg1[0xa] = *var_20[1] << 0x1c >> 0x1c;  /* "240523" */
    arg1[6] = r0 >> 4;
    arg1[7] = *var_20[1] >> 4;
    arg1[8] = *var_20[2] >> 4;
    arg1[0xb] = *var_20[2] << 0x1c >> 0x1c;  /* "240523" */
    sub_1960c(0x17, &var_20, 6);  /* "0.06_240523" */
    *arg1 = var_20 << 0x19 >> 0x19;  /* "06_240523" */
    arg1[1] = *var_20[1] << 0x19 >> 0x19;  /* "06_240523" */
    arg1[2] = *var_20[2] << 0x19 >> 0x19;  /* "06_240523" */
    arg1[3] = *var_20[3] << 0x19 >> 0x1d;  /* "06_240523" */  /* "40523" */
    arg1[4] = var_1c << 0x19 >> 0x1d;  /* "06_240523" */  /* "40523" */
    arg1[5] = *var_1c[1] << 0x19 >> 0x1d;  /* "06_240523" */  /* "40523" */
    sub_1960c(0x41, &var_20, 6);
    arg1[0xc] = var_20;
    arg1[0xd] = *var_20[1];
    arg1[0xe] = *var_20[2];
    arg1[0x18] = *var_20[3];  /* ".06_240523" */
    arg1[0x19] = var_1c;  /* "06_240523" */
    arg1[0x1a] = *var_1c[1];  /* "6_240523" */
    sub_1960c(0x47, &var_20, 4);
    arg1[0xc] = var_20;
    arg1[0xd] = *var_20[1];
    arg1[0xe] = *var_20[2];
    sub_1960c(0x22, &var_18, 2);
    *0x109207 = arg1[0xc];
    *0x109208 = *arg1;
    var_14 = arg1[3];
    uint32_t r0_39 = var_18;
    *var_14[1] = r0_39 << 0x1f >> 0x1f;  /* "523" */
    *var_14[2] = r0_39 << 0x1a >> 0x1e;  /* "6_240523" */  /* "0523" */
    *var_14[3] = *var_18[1] << 0x1f >> 0x1f;  /* "523" */
    *0x109209 = sub_1abc8(&var_14);
    *0x109210 = arg1[0xd];
    *0x109211 = arg1[1];
    var_14 = arg1[4];
    uint32_t r0_50 = var_18;
    *var_14[1] = r0_50 << 0x1e >> 0x1f;  /* "0523" */  /* "523" */
    *var_14[2] = r0_50 >> 6;
    *var_14[3] = *var_18[1] << 0x1d >> 0x1f;  /* "40523" */  /* "523" */
    *0x109212 = sub_1abc8(&var_14);
    *0x109219 = arg1[0xe];
    *0x10921a = arg1[2];
    *0x10921b = arg1[5];
    arg1[3] = *0x109209;
    arg1[4] = *0x109212;
    arg1[5] = *0x10921b;
    sub_1960c(0x47, &var_20, 4);
    arg1[0xf] = var_20;
    arg1[0x10] = *var_20[1];  /* "R02_3.00.06_240523" */
    uint32_t r0_65 = *var_20[2];
    arg1[0x11] = r0_65;  /* "02_3.00.06_240523" */
    uint32_t r1_14 = *var_20[3] << 0x1c >> 0x1c;  /* "240523" */
    arg1[0x12] = r1_14;  /* "2_3.00.06_240523" */
    *(arg1 + 0x14) = (r0_65 << 4) + r1_14;  /* "3.00.06_240523" */
    sub_1960c(0x4b, &var_20, 4);
    *(arg1 + 0x21c) = (var_20 << 8) + *var_20[1];
    *(arg1 + 0x21e) = (*var_20[2] << 8) + *var_20[3];
    uint32_t r1_21 = arg1[0x1a];  /* "6_240523" */
    
    if (r1_21 >> 4 == arg1[0xb])
    {
        *0x1091fc = r1_21;
        *0x1091fd = arg1[0x14];  /* "3.00.06_240523" */
        *0x1091fe = *(arg1 + 0x21e);
        uint32_t r0_74 = *0x104291;
        
        if (r0_74 && r0_74 != 0xff)
            *0x103d54 = r0_74;
    }
    
    return 0;
}

uint32_t sub_1a8ec(void* arg1)
{
    int32_t r1 = *0x81f3cc;
    int32_t r2 = *0x81f3d0;
    int32_t r3 = *0x81f3d4;
    int32_t var_30 = *0x81f3c8;
    int32_t var_2c = r1;
    int32_t var_28 = r2;
    int32_t var_24 = r3;
    int32_t var_18 = 0x4040201;
    char var_20 = 0;
    int32_t var_1c = 0;
    sub_1960c(0x4f, &var_1c, 4);
    uint32_t r0_1 = *var_1c[2];
    sub_1960c(0x25, &var_20, 1);
    uint32_t r0_2 = var_20;
    uint32_t r7 = *(&var_18 + (r0_2 << 0x1a >> 0x1e));  /* "6_240523" */  /* "0523" */
    int32_t r6 = *(&var_30 + (r0_2 << 0x1e >> 0x1c));  /* "240523" */  /* "0523" */
    int32_t r0_9 = sub_52fe(
        sub_53f4(sub_5776(RORW(r0_1 >> 0x10, 0x10) << 0x10 | RORW(r0_1, 0x10)), 0xfffffff4), 
        0x40533333);  /* "R02_3.00.06_240523" */
    uint32_t result = r6 << 1 >> 0x18;  /* ".06_240523" */
    
    if (result)
    {
        result = sub_ea8c(sub_5378(sub_5378(sub_5378(r0_9, sub_5378(r6, 0x49742400)), 0x447a0000), 
            sub_5776(r7)));
        *(arg1 + 0x222) = result;
    }
    
    return result;
}

int32_t sub_1a99c(int16_t* arg1)
{
    char var_2c;
    0xff7febd8(&var_2c, &data_1ab44, 0x14);  /* "3.00.06_240523" */
    char var_30 = 8;
    char var_34 = 0;
    int32_t var_38 = 0xa200;
    char var_2b;
    char var_2b_1 = var_2b | 0xe0;
    *0x109262 = 0x19;  /* "06_240523" */
    uint32_t r0_1 = arg1[1];
    *0x109264 = r0_1;
    *0x109260 = *arg1;
    
    if (r0_1 == 3)
    {
        *0x109262 = 0x64;
        *0x109260 = 0xc8;
    }
    
    uint32_t r0_2 = *0x109262;
    int32_t r0_3 = 0xff7feb00(0x3e8, r0_2);
    char r0_6 = 0xff7feb00(*0x109260, r0_3) - 1;
    int32_t r0_8 = 0xff7feb00(0x4e20, r0_2) - 1;
    char var_29 = r0_6;
    uint8_t var_28 = r0_8 >> 8;
    char var_27 = r0_8;
    char var_26 = r0_6;
    char var_23 = 0x23;
    char var_20 = 0x27;
    int32_t r0_9;
    void* r3_1;
    r0_9 = 0xff7fec8e(0xef, 7, r0_1, r0_1, r0_2, r0_1);
    int32_t r6_2 = r0_9 >> 0x10;  /* "R02_3.00.06_240523" */
    *r3_1 = r6_2;
    var_2c = 5;
    char var_22 = 0x57;
    char var_1f = 0x16;  /* "00.06_240523" */
    char var_1c = 0;
    char var_2b_2 = 0;
    char var_26_1 = 0;
    sub_19648(0x10, &var_2c, 0x11);  /* "R02_3.00.06_240523" */  /* "02_3.00.06_240523" */
    sub_19648(0x22, &var_30, 1);
    sub_19648(0x23, &var_38, 2);
    sub_19648(0x25, &var_34, 1);
    
    if (*var_38[1] << 0x18 >= 0)  /* ".06_240523" */
        *0x109263 = 0;
    else
        *0x109263 = 1;
    
    uint32_t r0_13;
    int32_t r1_9;
    int32_t r2_2;
    int32_t r3_2;
    r0_13 = sub_1ae94(r6_2, var_2c);
    sub_1ada2(r0_13, r1_9, r2_2, r3_2);
    return 0;
}

void sub_1ab68(void* arg1, int32_t arg2)
{
    if (*(arg1 + 1) >= 0x15)  /* ".00.06_240523" */
        return;
    
    uint32_t r2_2 = *(arg1 + 3);
    int32_t r1 = arg2 << 1;
    
    if (r2_2 >= *(arg1 + 2) >> 1)
    {
        *(0x1091ec + r1) = 0;
        *(0x1091e8 + r1) = 0;
        return;
    }
    
    char r1_1;
    
    if (r2_2 > 1)
    {
        *(0x1091e8 + r1) = 0;
        uint32_t r2_8 = *(0x1091ec + r1) + 1;
        *(0x1091ec + r1) = r2_8;
        
        if (r2_8 == 0x78)
            r1_1 = *(arg1 + 1) + 1;
        else
            r1_1 = *(arg1 + 1);
    }
    else
    {
        *(0x1091ec + r1) = 0;
        uint32_t r2_3 = *(0x1091e8 + r1);
        int16_t r2_4;
        
        r2_4 = r2_3 == 0x1e ? 0 : r2_3 + 1;  /* "0523" */
        
        uint32_t r2_5 = r2_4;
        *(0x1091e8 + r1) = r2_5;
        
        if (r2_5 == 0x1e)  /* "0523" */
            r1_1 = 0x15;  /* ".00.06_240523" */
        else
            r1_1 = *(arg1 + 1);
    }
    
    *(arg1 + 1) = r1_1;
}

uint32_t sub_1abc8(char* arg1)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    uint32_t i = 0;
    int32_t var_18 = 0;
    char r3_2;
    
    if (arg1[3] == 1)
        r3_2 = 4;
    else
        r3_2 = arg1[2];
    
    *var_18[1] = r3_2;
    uint32_t r3_3 = *arg1;
    var_18 = r3_3;
    uint32_t r7 = arg1[1];
    *var_18[2] = r7;
    
    do
    {
        int32_t r2_2 = i * 3;
        
        if (*(0x81f384 + r2_2) == r3_3 && *(r2_2 + 0x81f385) == *var_18[1]
                && *(r2_2 + 0x81f386) == r7)
            return i;
        
        i = i + 1;
    } while (i < 0x16);  /* "00.06_240523" */
    
    return 0;
}

void sub_1ac18(char arg1)
{
    *0x103d52 = arg1;
}

void sub_1ac24(int32_t arg1)
{
    *0x1091d0 = arg1;
}

uint32_t sub_1ac30(char arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    uint32_t r5 = arg1 + 0x17;  /* "0.06_240523" */
    char r4;
    
    r4 = arg2 <= 0x7f ? arg2 : 0x7f;
    
    sub_1960c(r5, &var_10, 1);
    var_10 = var_10 >> 7 << 7 | r4;
    return sub_19648(r5, &var_10, 1);
}

int32_t sub_1ac68(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18_1 = arg3;
    void* var_1c = arg2;
    int32_t result = arg1;
    uint32_t r5 = arg1 + 0x1a;  /* "6_240523" */
    result = 0;
    var_1c = &data_0;
    int32_t var_18 = 0;
    var_14 = 0;
    
    if (arg2 > 0x15)  /* ".00.06_240523" */
        arg2 = ".00.06_240523";
    
    void* r0_2 = arg2 * 3;
    var_18 = *(0x81f384 + r0_2);
    *var_18[1] = *(r0_2 + 0x81f386);
    uint32_t r0_4 = *(r0_2 + 0x81f385);
    
    if (r0_4 < 4)
    {
        *var_18[2] = r0_4;
        *var_18[3] = 0;
    }
    else
    {
        *var_18[2] = 0;
        *var_18[3] = 1;
    }
    
    sub_1960c(0x22, &var_1c, 2);
    
    if (!arg1)
    {
        var_1c = ((var_1c & 0xcf) | *var_18[2] << 4) >> 1 << 1 | *var_18[1];
        *var_1c[1] = *var_1c[1] >> 1 << 1 | *var_18[3];
    }
    else if (arg1 == 1)
    {
        var_1c = ((var_1c << 0x1a >> 0x1a | *var_18[2] << 6) & 0xfd) | *var_18[1] << 1;
            /* "6_240523" */
        *var_1c[1] = (*var_1c[1] & 0xfb) | *var_18[3] << 2;
    }
    
    sub_1960c(r5, &result, 1);
    result = var_18 << 4 | (result & 0x8f);
    sub_19648(r5, &result, 1);
    sub_19648(0x22, &var_1c, 2);
    uint32_t r0_26 = *0x109264;
    
    if (r0_26 == 1 || r0_26 == 4)
    {
        sub_1960c(0x20, &var_14, 1);  /* "23" */
        uint32_t r0_30 = ((*var_18[3] << 2) + *var_18[2]) << 1;
        
        if (r0_30 >= 5)
            r0_30 = 5;
        
        var_14 = var_14 >> 3 << 3 | r0_30 | 0x80;
        sub_19648(0x20, &var_14, 1);  /* "23" */
    }
    
    return result;
}

uint32_t sub_1ad90(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0x5a;
    return sub_19648(0x3b, &var_8, 1);
}

uint32_t sub_1ada2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0;
    sub_1960c(0x10, &var_8, 1);  /* "R02_3.00.06_240523" */
    var_8 |= 0x80;
    return sub_19648(0x10, &var_8, 1);  /* "R02_3.00.06_240523" */
}

int32_t sub_1adc8(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = 0;
    
    if (arg1 << 0x1b >> 0x1e && *0x109264 != 6)  /* "_240523" */  /* "0523" */
        return 1;
    
    int32_t result = sub_1a558(0x109216, arg2, arg1);
    
    while (true)
    {
        uint32_t r0_19 = *0x109271;
        
        if (r0_19 <= r4)
            break;
        
        uint32_t r6_1;
        
        if (r0_19 == 2)
            r6_1 = r4;
        else if (!*0x10926f)
            r6_1 = &*(nullptr + 1);
        else
            r6_1 = &data_0;
        
        int32_t r3_2 = sub_1ab68(r6_1 * 9 + 0x109204, r6_1);
        
        if (arg2 << 0x1c < 0)  /* "240523" */
            result |= sub_19b6c(r6_1 * 9 + 0x109204, r6_1, arg1, r3_2);
        
        if (!(arg2 << 0x1f))  /* "523" */
        {
            *(r4 * 9 + 0x10920a) = 0;
            *(r4 * 9 + 0x10920b) = 0;
        }
        else
            result |= sub_19bb0(r6_1 * 9 + 0x109204, r6_1, *0x10926e, *0x109271);
        
        r4 = r4 + 1;
    }
    
    return result;
}

int32_t sub_1ae68(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    sub_1960c(0x10, &var_10, 1);  /* "R02_3.00.06_240523" */
    var_10 = var_10 << 0x19 >> 0x19;  /* "06_240523" */
    sub_19648(0x10, &var_10, 1);  /* "R02_3.00.06_240523" */
    *0x1091cc = 0;
    return 0x1091c0;
}

uint32_t sub_1ae94(char arg1, int32_t arg2)
{
    uint32_t i = 0;
    *0x10926e = arg1;
    uint8_t r0_1 = arg2 << 0x1f >> 0x1f;  /* "523" */
    *0x10926f = r0_1;
    uint8_t r1_1 = arg2 << 0x1e >> 0x1f;  /* "0523" */  /* "523" */
    *0x109270 = r1_1;
    *0x109271 = r0_1 + r1_1;
    *0x10926d = 0;
    *0x109272 = 0x80;
    
    do
    {
        int32_t r0_4 = i * 9;
        *(0x109204 + r0_4) = 0x6f;
        *(r0_4 + 0x109205) = 0x15;  /* ".00.06_240523" */
        *(r0_4 + 0x109206) = 0;
        *(r0_4 + 0x10920a) = 0;
        *(r0_4 + 0x10920b) = 0;
        i = i + 1;
        *(r0_4 + 0x10920c) = 4;
    } while (i < 2);
    
    *0x109217 = 0x15;  /* ".00.06_240523" */
    *0x109203 = 1;
    *0x109202 = 1;
    *0x10926c = 1;
    *0x109201 = 3;
    *0x109200 = 3;
    sub_1a17c();
    uint32_t result = *0x1091cc;
    
    if (result)
        return result;
    
    return sub_d7e0(0xa, 0x64);
}

int32_t sub_1af08(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    void* var_24 = arg1;
    int32_t result = 0;
    
    if (*0x109263)
        sub_19ddc(arg4, arg3);
    
    int32_t var_2c = 2;
    *0x103d53 = 2;
    uint32_t r0_5 = (*0x10428f - *0x10428e) << 0x10 >> 0x10;  /* "R02_3.00.06_240523" */
    
    if (!r0_5)
        r0_5 = 0x1e;  /* "0523" */
    
    *(*0x1092c3 + 0x1092c4) = arg3;
    uint32_t r0_9 = *0x1092c3 + 1;
    *0x1092c3 = r0_9;
    uint32_t r0_10;
    
    r0_10 = r0_9 < 0xf8 ? r0_9 << 0x1d >> 0x1d : 0;  /* "40523" */
    
    *0x1092c3 = r0_10;
    uint32_t r1_2 = *0x1092c2;
    int32_t var_48;
    
    if (r1_2 >= 8)
    {
        int32_t r7_1 = 0;
        int32_t r6_1 = 0;
        
        for (int32_t i = 0; i < 4; i += 1)
        {
            r7_1 += *(r0_10 + 0x1092c4);
            r0_10 = r0_10 + 1 - ((((r0_10 + 1) >> 0x1f >> 0x1d) + r0_10 + 1) >> 3 << 3);
                /* "40523" */  /* "523" */
        }
        
        for (int32_t i_1 = 0; i_1 < 4; )
        {
            i_1 += 1;
            r6_1 += *(r0_10 + 0x1092c4);
            r0_10 = r0_10 + 1 - ((((r0_10 + 1) >> 0x1f >> 0x1d) + r0_10 + 1) >> 3 << 3);
                /* "40523" */  /* "523" */
        }
        
        int32_t r0_15;
        int32_t r1_4;
        r0_15 = sub_57ac(r0_5);
        var_48 = r1_4;
        int32_t r0_16;
        int32_t r1_5;
        r0_16 = sub_5574(r0_15, r1_4, 0x33333333, 0x3fe33333);
        int32_t r0_17;
        int32_t r1_6;
        r0_17 = sub_5734(r0_16, r1_5, 3);
        int32_t r0_18;
        int32_t r1_7;
        r0_18 = sub_5734(r0_17, r1_6, 0xffffffff);
        int32_t r0_20;
        int32_t r1_8;
        r0_20 = sub_5784(r7_1 - r6_1);
        
        if (r7_1 < r6_1)
            *0x1092cc = 1;
        
        int32_t r0_22;
        int32_t r1_10;
        r0_22 = sub_5574(r0_15, var_48, 0x9999999a, 0x3fd99999);
        int32_t r0_23;
        int32_t r1_11;
        r0_23 = sub_5734(r0_22, r1_10, 3);
        int32_t r0_24;
        int32_t r1_12;
        r0_24 = sub_5734(r0_23, r1_11, 0xffffffff);
        var_48 = r0_24;
        int32_t r0_26;
        int32_t r1_13;
        r0_26 = sub_5784(r6_1 - r7_1);
        
        if (r6_1 < r7_1)
            *0x1092cc = 2;
    }
    else
        *0x1092c2 = r1_2 + 1;
    
    uint32_t r0_27 = *0x10428c;
    
    if (!r0_27)
        r0_27 = 0x32;  /* "2_V3.0" */
    
    *((*0x1092cf << 1) + 0x1092d0) = arg4;
    uint32_t r0_31 = *0x1092cf + 1;
    *0x1092cf = r0_31;
    uint32_t r0_32;
    
    r0_32 = r0_31 < 0xf8 ? r0_31 << 0x1d >> 0x1d : 0;  /* "40523" */
    
    *0x1092cf = r0_32;
    uint32_t r1_14 = *0x1092ce;
    
    if (r1_14 >= 8)
    {
        int32_t r7_2 = 0;
        int32_t r6_2 = 0;
        
        for (int32_t i_2 = 0; i_2 < 4; i_2 += 1)
        {
            r7_2 += *((r0_32 << 1) + 0x1092d0);
            r0_32 = r0_32 + 1 - ((((r0_32 + 1) >> 0x1f >> 0x1d) + r0_32 + 1) >> 3 << 3);
                /* "40523" */  /* "523" */
        }
        
        for (int32_t i_3 = 0; i_3 < 4; i_3 += 1)
        {
            r6_2 += *((r0_32 << 1) + 0x1092d0);
            r0_32 = r0_32 + 1 - ((((r0_32 + 1) >> 0x1f >> 0x1d) + r0_32 + 1) >> 3 << 3);
                /* "40523" */  /* "523" */
        }
        
        int32_t r0_37;
        int32_t r1_16;
        r0_37 = sub_57ac(r0_27);
        var_48 = r0_37;
        int32_t r0_38;
        int32_t r1_17;
        r0_38 = sub_5574(r0_37, r1_16, 0x33333333, 0x3fe33333);
        int32_t r0_39;
        int32_t r1_18;
        r0_39 = sub_5734(r0_38, r1_17, 3);
        int32_t r0_40;
        int32_t r1_19;
        r0_40 = sub_5734(r0_39, r1_18, 0xffffffff);
        int32_t r0_42;
        int32_t r1_20;
        r0_42 = sub_5784(r6_2 - r7_2);
        
        if (r6_2 < r7_2)
            *0x1092e0 = 1;
        
        int32_t r0_44;
        int32_t r1_22;
        r0_44 = sub_5574(var_48, r1_16, 0x9999999a, 0x3fd99999);
        int32_t r0_45;
        int32_t r1_23;
        r0_45 = sub_5734(r0_44, r1_22, 3);
        int32_t r0_46;
        int32_t r1_24;
        r0_46 = sub_5734(r0_45, r1_23, 0xffffffff);
        var_48 = r0_46;
        int32_t r0_48;
        int32_t r1_25;
        r0_48 = sub_5784(r7_2 - r6_2);
        
        if (r7_2 < r6_2)
            *0x1092e0 = 2;
    }
    else
        *0x1092ce = r1_14 + 1;
    
    uint32_t r2_37 = *0x1041e3;
    char r1_26 = arg4;
    uint8_t r0_50 = arg4 >> 8;
    uint8_t var_40;
    char var_3c;
    int32_t var_44;
    
    if (r2_37 == 3)
    {
        var_48 = *(arg1 + 6);
        *var_48[1] = arg3;
        *var_48[2] = *0x103d54;
        *var_48[3] = arg2;
        var_44 = var_2c;
        *var_44[1] = *0x1091c2;
        *var_44[2] = *0x103d52;
        *var_44[3] = *0x1091d0;
        var_40 = *0x103d53;
        char var_3f_1 = r1_26;
        uint8_t var_3e_1 = r0_50;
        char var_3d_1 = *0x1092cc;
        var_3c = 0xff7feb00(arg4, arg3, &var_48);
        char var_3b_1 = 0xff7feb00(*0x10428a, *0x10428f, &var_48) + 0xa;
        sub_9066(0xc5, &var_48, 0xe);
    }
    else if (r2_37 == 4)
    {
        var_48 = *(arg1 + 6);
        *var_48[1] = arg3;
        uint32_t r3_13 = *0x10428e;
        *var_48[2] = r3_13;
        uint32_t r2_42 = *0x10428f;
        *var_48[3] = r2_42;
        var_44 = r1_26;
        *var_44[1] = r0_50;
        uint32_t r0_57 = *0x104288;
        *var_44[2] = r0_57;
        *var_44[3] = r0_57 >> 8;
        uint32_t r0_59 = *0x10428a;
        var_40 = r0_59;
        uint8_t var_3f_2 = r0_59 >> 8;
        char var_3e_2 = *0x10428c;
        int32_t r0_63;
        int32_t r1_30;
        r0_63 = sub_57ac(r3_13 + r2_42);
        int32_t r0_64;
        int32_t r1_31;
        r0_64 = sub_5574(r0_63, r1_30, 0x33333333, 0x3fe33333);
        char var_3d_2 = sub_586c(r0_64, r1_31);
        sub_9066(0xc5, &var_48, 0xe);
    }
    uint32_t r0_66 = *0x10428c;
    var_40 = r0_66;
    uint32_t r0_67;
    
    if (r0_66 >= 0x96)
        r0_67 = *0x104288;
    
    uint32_t r6_3;
    
    if (r0_66 < 0x96 || r0_67 >= 0x2710)
    {
        int32_t r0_73 = 0xff7feb00(*0x104288, *0x10428e);
        *0x1091f6 = r0_73;
        var_48 = r0_73;
        int16_t r0_75 = 0xff7feb00(*0x10428a, *0x10428f);
        *0x1091f8 = r0_75;
        *0x1091fa = var_48 - r0_75;
        r6_3 = 0xff7feb00(arg4, arg3);
    }
    else
    {
        int16_t r0_68 = r0_67 - *0x10428e;
        *0x1091f6 = r0_68;
        int16_t r1_34 = *0x10428a - *0x10428f;
        *0x1091f8 = r1_34;
        *0x1091fa = r0_68 - r1_34;
        r6_3 = arg4 - arg3;
    }
    
    int32_t r0_81;
    int32_t r1_40;
    r0_81 = sub_57ac(*0x1091fa);
    var_48 = r0_81;
    int32_t r0_82;
    int32_t r1_41;
    r0_82 = sub_5574(r0_81, r1_40, 0x33333333, 0x3fe33333);
    int32_t r0_84;
    int32_t r1_42;
    r0_84 = sub_57ac(*0x1091f8);
    int32_t r0_85;
    int32_t r1_43;
    r0_85 = sub_540c(r0_84, r1_42, r0_82, r1_41);
    var_3c = sub_586c(r0_85, r1_43);
    int32_t r0_89;
    int32_t r1_45;
    r0_89 = sub_5734(var_48, r1_40, 0xffffffff);
    var_48 = r0_89;
    int32_t r0_91;
    int32_t r1_46;
    r0_91 = sub_57ac(*0x1091f6);
    int32_t r0_92;
    int32_t r1_47;
    r0_92 = sub_5556(r0_91, r1_46, var_48, r1_45);
    uint32_t r0_94 = sub_586c(r0_92, r1_47);
    int32_t r1_50;
    
    if (!var_40 || !*0x104291)
        r1_50 = 0;
    else
        r1_50 = 1;
    
    uint32_t r2_46 = *(arg1 + 6);
    
    if (r2_46 == 1)
    {
        if (r6_3 > var_3c)
        {
            if (!r1_50)
                *(arg1 + 5) = 3;
            else
            {
            label_1b348:
                
                if (*0x103d52 == 2 || var_2c == 1)
                    *(arg1 + 5) = 1;
                
                uint32_t r0_104 = (*(arg1 + 5) - 1) << 0x18 >> 0x18;  /* ".06_240523" */
                *(arg1 + 5) = r0_104;
                
                if (!r0_104)
                {
                    *0x104317 += 1;
                    
                    if (sub_17a74())
                    {
                        if (r6_3 > var_3c)
                            *0x104315 += 1;
                        else if (*0x1092cc == 1 && *0x1092e0 == 1)
                            *0x104316 += 1;
                        else if (*0x103d52 == 2)
                            *0x104314 += 1;
                    }
                    
                    *(arg1 + 4) = 3;
                    *(arg1 + 5) = 3;
                    result = 2;
                    *0x1092cc = 0;
                    *0x1092e0 = 0;
                }
            }
        }
        else if (*0x1092cc != 1)
        {
            if (*0x103d52 == 2 && r6_3 > r0_94 && r1_50)
                goto label_1b348;
            
            *(arg1 + 5) = 3;
        }
        else
        {
            if ((*0x1092e0 == 1 || (*0x103d52 == 2 && r6_3 > r0_94)) && r1_50)
                goto label_1b348;
            
            *(arg1 + 5) = 3;
        }
    }
    else if (r2_46 == 2)
    {
        if (*0x103d52 != 1)
            *(arg1 + 4) = 3;
        else if (*0x1092cc != 2)
        {
            if (r6_3 < r0_94)
                goto label_1b2d2;
            
            *(arg1 + 4) = 3;
        }
        else if (*0x1092e0 == 2 || r6_3 < r0_94)
        {
        label_1b2d2:
            uint32_t r0_98 = (*(arg1 + 4) - 1) << 0x18 >> 0x18;  /* ".06_240523" */
            *(arg1 + 4) = r0_98;
            
            if (!r0_98)
            {
                *(arg1 + 4) = 3;
                *(arg1 + 5) = 3;
                result = 1;
                *0x1092cc = 0;
                *0x1092e0 = 0;
            }
        }
        else
            *(arg1 + 4) = 3;
    }
    
    return result;
}

int32_t sub_1b3d0()
{
    if (!*0x10936c)
        return 1;
    
    return 0;
}

void sub_1b3e4(uint32_t arg1, int16_t* arg2, void* arg3, int32_t arg4)
{
    if (!arg1)
        return;
    
    uint32_t r2 = *arg2;
    uint32_t r2_1;
    
    r2_1 = r2 <= arg1 ? arg1 - r2 : r2 - arg1;
    
    if (r2_1 > 3)
    {
        *arg2 = arg1;
        *(arg3 + 0x18) = 0;  /* ".06_240523" */
        return;
    }
    
    *(arg3 + (*(arg3 + 0x18) << 1)) = arg1;  /* ".06_240523" */
    arg1 = *(arg3 + 0x18) + 1;  /* ".06_240523" */
    *(arg3 + 0x18) = arg1;  /* ".06_240523" */
    
    if (arg1 < 0xa)
        return;
    
    int32_t r0_2 = 0;
    
    for (int32_t i = 0; i < 0xa; )
    {
        uint32_t r2_3 = *(arg3 + (i << 1));
        i += 1;
        r0_2 += r2_3;
    }
    
    int32_t r0_3 = 0xff7feb2c(r0_2, 0xa);
    uint32_t r1_2 = *(arg3 + 0x14);  /* "3.00.06_240523" */
    
    if (!r1_2)
        *(arg3 + 0x14) = r0_3;  /* "3.00.06_240523" */
    else if (!*(arg3 + 0x16))  /* "00.06_240523" */
    {
        int32_t r1_3;
        
        r1_3 = r1_2 >= r0_3 ? r1_2 - r0_3 : r0_3 - r1_2;
        
        if (r1_3 <= arg4)
            *(arg3 + 0x14) = r0_3;  /* "3.00.06_240523" */
        else
            *(arg3 + 0x16) = r0_3;  /* "00.06_240523" */
    }
    
    *(arg3 + 0x18) = 0;  /* ".06_240523" */
    arg1 = *(arg3 + 0x16);  /* "00.06_240523" */
    uint32_t r1_4 = *(arg3 + 0x14);  /* "3.00.06_240523" */
    uint32_t r2_5;
    
    r2_5 = arg1 <= r1_4 ? r1_4 - arg1 : arg1 - r1_4;
    
    if (r2_5 <= arg4 || !arg1)
        return;
    
    *0x103d54 = ((arg1 + r1_4) >> 1) - 5;
    
    if (arg1 <= 0xff)
    {
        char r0_7;
        
        if (arg1 >= r1_4)
        {
            *0x10428e = r1_4;
            r0_7 = *(arg3 + 0x16);  /* "00.06_240523" */
        }
        else
        {
            *0x10428e = arg1;
            r0_7 = *(arg3 + 0x14);  /* "3.00.06_240523" */
        }
        
        *0x10428f = r0_7;
        *0x104291 = (((arg1 + r1_4) >> 1) - 5);
    }
    else
    {
        int16_t r0_4;
        
        if (arg1 >= r1_4)
        {
            *0x104288 = arg1;
            r0_4 = *(arg3 + 0x14);  /* "3.00.06_240523" */
        }
        else
        {
            *0x104288 = r1_4;
            r0_4 = *(arg3 + 0x16);  /* "00.06_240523" */
        }
        
        *0x10428a = r0_4;
        *0x10428c = *0x104288 - *0x10428a;
    }
    
    sub_db84();
}

int32_t sub_1b4b8()
{
    0xff7fec0a(0x109338, 0x1a);  /* "6_240523" */
    return 0xff7fec0a(0x109352, 0x1a);  /* "6_240523" */
}

int32_t sub_1b4d4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_10 = arg3;
    int32_t __saved_r3;
    sub_1b674(&var_10, &__saved_r3);
    
    if (var_10 == 0x21)  /* "3" */
        return 1;
    
    return 0;
}

uint32_t sub_1b4f0(char* arg1, uint32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0 = *(arg2 + 1);
    uint32_t r4 = arg2;
    
    if (r0)
        arg2 = *(r4 + 0xc);
    
    uint32_t r0_3;
    
    if (!r0 || !arg2)
    {
        uint32_t r0_10;
        
        if (!r0)
        {
            *(r4 + 5) = *arg1;
            uint32_t r0_7 = arg1[0x18];  /* ".06_240523" */
            *(r4 + 4) = r0_7;
            *(r4 + 8) = sub_1b5c4(r0_7, arg2, arg3, arg4);
            sub_1960c(0, r4 + 2, 1);
            sub_1960c(2, r4 + 3, 1);
            sub_1a8ec(arg1);
            r0_10 = *(arg1 + 0x222);
            *(r4 + 6) = r0_10;
            return r0_10;
        }
        
        r0_3 = *(r4 + 0xc);
        
        if (!r0_3)
        {
            *(r4 + 0xd) = arg1[0x1a];  /* "6_240523" */
            r0_3 = *(arg1 + 0x21e);
            int16_t r1_1 = *(r4 + 0x10);  /* "R02_3.00.06_240523" */
            *(r4 + 0x12) = r1_1;  /* "2_3.00.06_240523" */
            uint32_t r1_2 = r1_1;
            *(r4 + 0x10) = r0_3;  /* "R02_3.00.06_240523" */
            
            if (r1_2 && r0_3)
            {
                int16_t r0_5;
                
                r0_5 = r0_3 <= r1_2 ? r1_2 - r0_3 : r0_3 - r1_2;
                
                r0_10 = r0_5;
                
                if (*(r4 + 0xe) >= r0_10)
                    return r0_10;
                
                *(r4 + 0xe) = r0_10;
                *(r4 + 0x14) = *(r4 + 0x10);  /* "R02_3.00.06_240523" */  /* "3.00.06_240523" */
                int16_t r0_12 = *(r4 + 0x12);  /* "2_3.00.06_240523" */
                *(r4 + 0x16) = r0_12;  /* "00.06_240523" */
                return r0_12;
            }
        }
    }
    else
    {
        r0_3 = *0x1092fc + 1;
        *0x1092fc = r0_3;
        
        if (r0_3 == 0x19)  /* "06_240523" */
            return sub_19648(0x10, 0x81f3d8, 0x11);
                /* "R02_3.00.06_240523" */  /* "02_3.00.06_240523" */
        
        if (r0_3 == 0x32)  /* "2_V3.0" */
        {
            *0x1092fc = 0;
            return sub_19648(0x10, 0x81f3e9, 0x11);
                /* "R02_3.00.06_240523" */  /* "02_3.00.06_240523" */
        }
    }
    
    return r0_3;
}

int32_t sub_1b5a8(int32_t arg1)
{
    *0x109300 = 0;
    *0x109304 = 0;
    *0x109308 = 0;
    *0x10930c = 0;
    return 0xff7fec0a(arg1, 0x18, 0x109308);  /* ".06_240523" */
}

int32_t sub_1b5c4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    var_18 = 0;
    *0x109304 = *0x109300;
    *0x10930c = *0x109308;
    *0x109300 = sub_19600();
    sub_1960c(7, &var_18, 4);
    uint32_t r0_5 = (var_18 << 8) + *var_18[1];
    *0x109308 = r0_5;
    
    if (r0_5 - ((*var_18[2] << 8) + *var_18[3]) + 9 <= 0x12)  /* "2_3.00.06_240523" */
    {
        int32_t r1_8 = *0x109304;
        
        if (!r1_8)
            return 0x4e20;
        
        int32_t r2_1 = *0x109300;
        
        if (!r2_1)
            return 0x4e20;
        
        int32_t r3_1 = *0x10930c;
        
        if (!r3_1 || !r0_5)
            return 0x4e20;
        
        int32_t r1_9;
        
        r1_9 = r2_1 <= r1_8 ? r2_1 - r1_8 - 1 : r2_1 - r1_8;
        
        int32_t r5_1;
        
        r5_1 = r0_5 <= r3_1 ? 0xffff - r3_1 + r0_5 : r0_5 - r3_1;
        
        int32_t r0_8 = sub_53f4(sub_5776(r1_9), 0xfffffff1);
        int32_t result = sub_57fa(sub_5378(sub_5776(r5_1), r0_8));
        
        if (result < 0xffff)
            return result;
    }
    
    return 0xffff;
}

uint32_t sub_1b674(char* arg1, char* arg2)
{
    sub_1960c(0, arg1, 1);
    return sub_1960c(0x40, arg2, 1);
}

int32_t sub_1b68e(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (sub_1a2ac(arg1, arg2, arg3) == 2)
        return 0;
    
    return 1;
}

int32_t sub_1b6a0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r1 = arg2 >> 5;
    int32_t result = 0;
    int32_t r0 = arg1 >> 5;
    int32_t r2 = arg3 >> 5;
    int32_t r3 = r1;
    
    if (r0 < 0)
        r0 = 0 - r0;
    
    if (r1 < 0)
        r1 = 0 - r3;
    
    if (r2 < 0)
        r2 = 0 - r2;
    
    int32_t r2_1 = r0 + r1 + r2;
    int32_t r0_2 = *0x109328;
    
    if (r0_2 && r2_1)
    {
        int32_t r0_3;
        
        r0_3 = r0_2 <= r2_1 ? r2_1 - r0_2 : r0_2 - r2_1;
        
        int32_t r0_5;
        
        if (r0_3 < 0x28)
        {
            int32_t r0_4 = *0x10932c;
            
            r0_5 = r0_4 <= r3 ? r3 - r0_4 : r0_4 - r3;
        }
        
        if (r0_3 >= 0x28 || r0_5 >= 0x32)  /* "2_V3.0" */
            result = 1;
    }
    
    *0x10932c = r3;
    *0x109328 = r2_1;
    
    if (result)
        sub_1ac18(1);
    
    sub_1ac24(result);
    return result;
}

int32_t sub_1b70c(int16_t* arg1)
{
    0xff7fec0a(0x109330, 8);
    sub_437a();
    sub_6070();
    *0x109313 = arg1[1];
    return sub_1a99c(arg1);
}

uint32_t sub_1b734(int32_t arg1)
{
    int32_t r1;
    int32_t var_18 = r1;
    int16_t var_344[0xd];
    0xff7fec0a(&var_344, 0x224);
    int16_t var_120[0x2];
    0xff7fec0a(&var_120, 0xf4);
    char var_2c = 0;
    sub_1a25c(&var_344, &var_2c);
    uint32_t r1_2 = *0x109313;
    int16_t var_7c;
    int16_t* var_28 = &var_7c;
    int16_t var_cc;
    int32_t var_324 = 0xff7fec8e(&var_cc, r1_2);
    int32_t r0_4;
    int32_t r1_3;
    int32_t r2;
    int32_t r3_1;
    r0_4 = 0xff900b64(&data_1b794);
    /* unimplemented  {vshr.S64 d16, d3, #0x10} */  /* "R02_3.00.06_240523" */
    uint32_t result;
    int32_t r2_1;
    result = sub_1a234(r0_4, r1_3, r2, r3_1);
    
    if (result & 0x14)  /* "3.00.06_240523" */
    {
        int32_t r0_5 = sub_1b68e(result, 0x14, r2_1);  /* "3.00.06_240523" */
        uint32_t r3_2 = var_2c;
        
        if (!r3_2)
            r3_2 = 1;
        
        uint16_t var_11c[0xa];
        
        if (sub_14d78(&var_11c, &var_cc, var_28, r3_2) << 0x18 >> 0x18)  /* ".06_240523" */
            sub_1b6a0(var_11c[0], var_cc, var_7c);
        
        if (!r0_5)
        {
            *0x109371 = 1;
            *0x109372 = 3;
            *0x109330 = 0;
            return sub_6070();
        }
        
        *0x109371 = 0;
        int32_t var_348_1 = arg1;
        int16_t r0_14;
        int32_t r1_7;
        int32_t r2_5;
        int32_t r3_5;
        r0_14 = sub_8544(*0x109330, &var_344, var_2c, &var_120, var_348_1);
        *0x109330 = r0_14;
        int32_t var_24_1;
        int32_t var_20;
        
        if (*0x1041e3 == 2)
        {
            var_28 = &data_0;
            var_24_1 = 0;
            var_20 = 0;
            int32_t r0_17 = *0x10931e + 1;
            *0x10931e = r0_17;
            var_28 = r0_17;
            *var_28[1] = r0_17 >> 8;
            *var_28[2] = var_2c;
            sub_9066(0xc5, &var_28, 0xb);
            var_348_1 = var_2c;
            r1_7 = sub_19a5c(&var_344, &var_120, *0x109330, arg1);
        }
        
        if (*0x1041e3 == 1)
        {
            for (int32_t i = 0; i < var_2c; i += 1)
            {
                uint32_t r0_25 = var_344[i * 2 + 0xe];
                var_28 = r0_25;
                *var_28[1] = r0_25 >> 8;
                int16_t var_126;
                uint32_t r0_27 = var_126;
                *var_28[2] = r0_27;
                *var_28[3] = r0_27 >> 8;
                void* r0_29 = &var_120[i];
                uint32_t r1_11 = *(r0_29 + 4);
                var_24_1 = r1_11;
                *var_24_1[1] = r1_11 >> 8;
                uint32_t r1_13 = *(&*(data_53 + 1) + r0_29);
                *var_24_1[2] = r1_13;
                *var_24_1[3] = r1_13 >> 8;
                uint32_t r0_31 = *(r0_29 + 0xa4);
                var_20 = r0_31;
                *var_20[1] = r0_31 >> 8;
                char var_32a;
                *var_20[2] = var_32a;
                r1_7 = sub_9066(0xc5, &var_28, 0xb);
            }
        }
        
        result = *0x109330;
        
        if (result <= 0)
            /* tailcall */
            return sub_1b93e(1, 0x10936c, r1_7, r2_5, r3_5, var_348_1);
        
        *0x109372 = 2;
        *0x10936e = result;
        *0x109310 = result;
    }
    
    return result;
}

uint32_t sub_1b90a(void* arg1 @ r6, void* arg2 @ r7, char arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    int32_t entry_r1;
    uint32_t entry_r2;
    sub_9066(0xc5, entry_r1, entry_r2);
    void arg_4;
    void arg_228;
    sub_19af0(&arg_4, &arg_228, *(arg1 + 2), arg3 >> 1);
    uint32_t result = *(arg1 + 2);
    
    if (!result)
        /* tailcall */
        return sub_1b93e(1, arg2);
    
    *(arg2 + 6) = 2;
    *(arg2 + 3) = result;
    *(arg2 + 4) = result;
    return result;
}

void sub_1b93e(char arg1, void* arg2 @ r7, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    *(arg2 + 6) = arg1;
}

uint32_t sub_1b956(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_e1e0();
}

uint32_t sub_1b958(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    uint32_t result;
    int32_t r2;
    result = sub_1a234(arg1, arg2, arg3, arg4);
    
    if (!(result & 0x50))
        return result;
    
    return sub_1b68e(result, 0x50, r2);
}

uint32_t sub_1b95a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    void arg_4;
    return sub_dbd4(&arg_4);
}

int32_t j_sub_1b982(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_1b982(arg1, arg2, arg3, arg4);
}

int32_t sub_1b95e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5 @ r4, uint16_t* arg6, char arg7, uint16_t* arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    uint32_t r0;
    int32_t r2;
    r0 = sub_1a234(arg1, arg2, arg3, arg4);
    
    if (!(r0 & 0x14))  /* "3.00.06_240523" */
        return 0x14;  /* "3.00.06_240523" */
    
    sub_1b68e(0x14, r0, r2);  /* "3.00.06_240523" */
    return sub_14d78(arg5 + 4, arg6, arg8, arg7 >> 1);
}

int32_t sub_1b982(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0_1;
    int32_t r1_1;
    int32_t r2_1;
    r0_1 = sub_1a234(arg1, arg2, arg3, arg4);
    int32_t r4;
    /* tailcall */
    return sub_1b988(r0_1 << 0x1b, r1_1, r2_1, r4);  /* "_240523" */
}

void sub_1b988(uint32_t arg1, int32_t arg2, int32_t arg3, void* arg4 @ r4, uint16_t* arg5, char arg6, int16_t arg7, int16_t arg8, int16_t arg9, char arg10, uint16_t* arg11, int32_t arg12, int32_t arg13, int32_t arg14, int32_t arg15)
{
    bool n;
    
    if (!n)
        return;
    
    sub_1b68e(arg1, arg2, arg3);
    uint32_t r3_1 = arg10;
    
    if (!r3_1)
        r3_1 = 1;
    
    if (sub_14d78(arg4 + 4, arg5, arg11, r3_1) << 0x18 >> 0x18)  /* ".06_240523" */
        sub_1b6a0(arg7, arg8, arg9);
}

uint32_t sub_1b9ec(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_1ad90(arg1, arg2, arg3, arg4);
}

int32_t sub_1b9f4(char arg1)
{
    *0x1092c1 = arg1;
    *0x1092c0 = 0;
    return 0;
}

uint32_t sub_1ba04()
{
    char r0 = sub_f57c();
    sub_f710(2);
    char* r1 = *0x109384;
    
    if (r1)
        *r1 = r0;
    
    char* r1_1 = *0x109388;
    
    if (r1_1)
        *r1_1 = r0;
    
    *0x109380 = 0;
    *0x109384 = 0;
    *0x109388 = 0;
    return sub_15bb4(0x109318);
}

int32_t sub_1ba3c()
{
    0x81e94d();
    /* jump -> 0x8071e1 */
}

int32_t sub_1ba4c(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    if (arg4 == 0x3399)
    {
        int32_t r3_2 = arg1 | arg2 | arg3;
        
        if (!r3_2)
        {
            *0x12dac4 = 0;
            *0x12dac8 = 0;
            0xff7fec0a(0x12dabc, 8, 0x12dabc, r3_2);
        }
        else
        {
            int32_t r0 = *arg1;
            *0x12dac8 = arg1[1];
            *0x12dac4 = r0;
            0xff7febd8(0x12dabc, arg2, 8);
        }
    }
    
    0xff7fec0a(0x128000, 0x5abc);
    return 0xff7fec0a(0x12f5cc, 0xa34);
}

int32_t sub_1baf4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) __pure
{
    return arg1;
}

int32_t sub_1bb30(void* arg1, int32_t arg2, int32_t arg3, char arg4, void* arg5 @ r4, int32_t arg6 @ r6)
{
    *(arg1 + 0x16);  /* "00.06_240523" */
    *(arg1 + 0x1c) = arg4 - 0x60;  /* "240523" */
    *(arg5 + 0x38) = arg5;
    int32_t r7;
    /* tailcall */
    return sub_1b90a(arg6, r7);
}

int32_t sub_1bb3e(int32_t* arg1, int32_t arg2, int32_t arg3 @ r9, void* arg4 @ r12)
{
    *(arg4 + 0x247);
    *arg1 = arg1;
    /* unimplemented  {cpsie AF} */
    *(data_4b + 1) = 0x4c;
    /* unimplemented  {cpsie AF} */
    *(data_4b + 1) = 0x4c;
    *0x13000000 = 0;
    data_0 = 0;
    data_0 = 0;
    data_0 = 0;
    data_0 = 0;
    data_0 = 0;
    int32_t r0_9 = arg2 << 0x10;  /* "R02_3.00.06_240523" */
    *r0_9 = r0_9;
    int32_t r0_14 = arg2 << 0x10;  /* "R02_3.00.06_240523" */
    *r0_14 = r0_14;
    /* unimplemented  {stc2l p0, c0, [r5], {0x80}} */
    /* unimplemented  {stc2l p0, c0, [r7], #-0x200} */
    /* unimplemented  {stc2l p0, c0, [r5], #-0x200} */
    /* unimplemented  {ldc2 p0, c0, [sp], #-0x200} */
    int32_t r0_15 = r0_14 >> 0x10;  /* "R02_3.00.06_240523" */
    /* unimplemented  {ldc2l p0, c0, [sp, #-0x200]} */
    /* unimplemented  {ldc2l p0, c0, [r9, #0x200]!} */
    /* unimplemented  {stc p0, c0, [r8, #0x204]!} */
    /* unimplemented  {cdp2 p0, #7, c0, c5, c0, #4} */
    /* unimplemented  {stcl p0, c0, [r8, #0x204]} */
    int32_t r0_25 = r0_15 << 0x10;  /* "R02_3.00.06_240523" */
    *r0_25 = r0_25;
    *r0_25 = r0_25;
    uint32_t r0_31 = r0_25 >> 8 << 8;
    *r0_31 = r0_15;
    uint32_t r0_34 = r0_31 << 0x18;  /* ".06_240523" */
    *r0_34 = r0_34;
    /* undefined */
}

int32_t sub_1bb6a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, void* arg6 @ r6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    int32_t r5_1;
    
    r5_1 = arg1 <= arg4 ? arg5 - arg4 + arg1 : arg1 - arg4;
    
    int32_t r0_2 = sub_53f4(sub_5776(*(arg6 + 0x18)), 0xfffffff1);  /* ".06_240523" */
    int32_t r0_6 = sub_57fa(sub_5378(sub_5776(r5_1), r0_2));
    
    if (r0_6 < arg5)
        return r0_6;
    
    return arg5;
}

int32_t sub_1bf36(int32_t arg1, int32_t arg2, int32_t* arg3, int16_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    int32_t r0_5 = arg1 << 2;
    /* unimplemented  {cdp p0, #1, c0, c8, c1, #4} */
    
    if (r0_5 || r0_5)
    {
        *arg3;
        arg3[2];
        arg3[4];
        return sub_1b6a0(arg4, 0, arg3[1]);
    }
    
    int32_t r0_2 = arg3 << 2;
    /* unimplemented  {cdp p0, #4, c0, c12, c1, #4} */
    *(r0_2 + 8);
    *(r0_2 + 0x10);  /* "R02_3.00.06_240523" */
    /* tailcall */
    return sub_1b988(r0_2, *r0_2, *(r0_2 + 4), &data_dc);
}

int32_t sub_1bf6a(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, void* arg5 @ r4, int32_t arg6 @ r6, int32_t arg7 @ r7)
{
    *arg3 = arg1;
    arg3[1] = arg2;
    arg3[2] = arg4;
    arg3[3] = arg5;
    arg3[4] = arg7;
    /* unimplemented  {vaddl.S32 q0, d28, d1} */
    arg3[5] = arg1;
    arg3[6] = arg5;
    arg3[7] = arg6;
    arg3[8] = arg7;
    void* r4 = *(arg5 + 8);
    *(r4 + 8);
    *(r4 + 4);
    /* undefined */
}

int32_t sub_1bf72(void* arg1, int32_t arg2, int32_t* arg3, int16_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    *(arg1 + 0x64);
    *arg3;
    arg3[2];
    arg3[4];
    return sub_1b6a0(arg4, 0, arg3[1]);
}

int32_t sub_1bf96(int32_t arg1, int32_t arg2)
{
    int32_t r4;
    /* tailcall */
    return sub_1c0ec(arg1, arg2, r4);
}

int32_t sub_1c076(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4, void* arg5 @ r4, int32_t arg6 @ r5)
{
    bool v;
    
    if (v)
        /* jump -> 0x1c07c */
    
    *arg3 = arg1;
    arg3[1] = arg6;
    void arg_98;
    arg3[2] = &arg_98;
    arg3[3] = arg1;
    arg3[4] = arg1 << 2;
    arg3[5] = &arg3[3];
    arg3[6] = arg4;
    arg3[7] = arg5;
    arg3[8] = &arg_98;
    arg3[9] = arg1;
    arg3[0xa] = arg4;
    arg3[0xb] = arg5;
    arg3[0xc] = &arg_98;
    *arg4 = arg1;
    arg4[1] = arg5;
    arg4[2] = &arg_98;
    uint32_t r3 = &arg3[0xd] >> 0x10;  /* "R02_3.00.06_240523" */
    *r3 = arg1;
    *(r3 + 4) = r3;
    *(r3 + 8) = 0x80bafd;
    uint32_t r0_2 = arg1 >> 0x10;  /* "R02_3.00.06_240523" */
    arg3[0xd] = r0_2;
    arg3[0xe] = arg1 << 2;
    arg3[0xf] = r3 + 0xc;
    arg3[0x10] = arg5;  /* "R02_3.00.06_240523" */
    arg3[0x11] = &arg_98;  /* "02_3.00.06_240523" */
    /* unimplemented  {vaddl.S32 q0, d28, d1} */
    arg3[0x12] = r0_2;  /* "2_3.00.06_240523" */
    arg3[0x13] = arg5;  /* "_3.00.06_240523" */
    arg3[0x14] = 0x80bafd;  /* "3.00.06_240523" */
    arg3[0x15] = &arg_98;  /* ".00.06_240523" */
    void* r4 = *(arg5 + 8);
    *(r4 + 8);
    *(r4 + 4);
    /* undefined */
}

int32_t sub_1c0ec(int32_t arg1, int32_t arg2, void* arg3 @ r4, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, uint32_t arg8, uint32_t arg9, int32_t arg10, uint32_t* arg11)
{
    *(arg3 + 0x34) = arg2;  /* "V3.0" */
    uint32_t r0_8 = 0;
    
    while (true)
    {
        uint32_t r7_1 = r0_8 << 2 >> 0x18;  /* ".06_240523" */
        uint32_t r0_12 = r0_8 >> 0x10;  /* "R02_3.00.06_240523" */
        
        while (true)
        {
            uint32_t r2_2 = r0_12 >> 0x10;  /* "R02_3.00.06_240523" */
            uint32_t r0_14 = r0_12;
            uint32_t r1_5 = r0_14 << 2;
            /* unimplemented  {vaddl.S32 q8, d24, d1} */
        label_1c154:
            int32_t r5 = r1_5;
            r0_8 = r0_14;
            
            if (r0_8)
                break;
            
            r0_12 = r0_8 << 2;
            
            if (!r0_12)
            {
            label_1c15e:
                uint32_t r0_32 = r0_12 << 2;
                uint32_t r1_6 = *(r7_1 + 0x18);  /* ".06_240523" */
            label_1c164:
                r7_1 = arg8;
                uint32_t r0_16 = r0_32 << 4;
                uint32_t* r6_1 = arg11;
                
                while (true)
                {
                    uint32_t r0_18 = r0_16 << 4;
                    
                    while (true)
                    {
                        r0_12 = r0_18 << 4;
                        
                        if (r0_12)
                            goto label_1c15e;
                        
                        uint32_t r0_21 = r0_12 << 4;
                        *r6_1 = r0_21;
                        r6_1[1] = r2_2;
                        r6_1[2] = arg9;
                        r6_1[3] = arg10;
                        r6_1[4] = r5;
                        r6_1[5] = r6_1;
                        r6_1[6] = r7_1;
                        r6_1 = &r6_1[7];
                    label_1c182:
                        r0_14 = r0_21 << 2;
                        
                        if (r0_14)
                        {
                            r1_5 = r0_14 << 2;
                            goto label_1c154;
                        }
                        
                        uint32_t r0_22 = r0_14 << 2;
                        bool cond:0_1 = r0_22;
                        
                        if (!arg9)
                        {
                            r0_22 <<= 2;
                            cond:0_1 = r0_22;
                        }
                        
                        uint32_t r0_33;
                        bool cond:1_1;
                        
                        if (arg9 || r7_1)
                        {
                            while (true)
                            {
                                uint32_t r0_30;
                                uint32_t r0_31;
                                
                                if (cond:0_1)
                                {
                                label_1c1ba:
                                    r0_30 = r0_22 << 2;
                                    *r2_2 = r0_30;
                                    *(r2_2 + 4) = arg9;
                                    *(r2_2 + 8) = arg10;
                                    *(r2_2 + 0xc) = r6_1;
                                    r2_2 += 0x10;  /* "R02_3.00.06_240523" */
                                label_1c1be:
                                    r0_31 = r0_30 << 2;
                                    *r2_2 = r0_31;
                                    *(r2_2 + 4) = r1_6;
                                    *(r2_2 + 8) = arg9;
                                    *(r2_2 + 0xc) = arg10;
                                    *(r2_2 + 0x10) = r6_1;  /* "R02_3.00.06_240523" */
                                    r2_2 += 0x14;  /* "3.00.06_240523" */
                                label_1c1c2:
                                    r0_21 = r0_31 << 2;
                                    
                                    if (r0_21)
                                        goto label_1c192;
                                    
                                    goto label_1c1c6;
                                }
                                
                                uint32_t r0_27 = r0_22 << 2;
                                
                                if (r0_27)
                                    goto label_1c1ac;
                                
                                uint32_t r0_28 = r0_27 << 2;
                                *r1_6 = r0_28;
                                *(r1_6 + 4) = r1_6;
                                *(r1_6 + 8) = r2_2;
                                *(r1_6 + 0xc) = r7_1;
                                r1_6 += 0x10;  /* "R02_3.00.06_240523" */
                                uint32_t r0_29 = r0_28 << 2;
                                uint32_t r0_26;
                                
                                if (r0_29)
                                {
                                    r0_26 = r0_29 << 2;
                                    r5 = RORW(r7_1 >> 0x10, 0x10) << 0x10 | RORW(r7_1, 0x10);
                                        /* "R02_3.00.06_240523" */
                                label_1c1b2:
                                    r0_21 = r0_26 << 2;
                                    
                                    if (r0_21)
                                        goto label_1c182;
                                }
                                else
                                {
                                    r0_26 = r0_29 << 2;
                                    
                                    if (r0_26)
                                        goto label_1c1b2;
                                    
                                    r0_21 = r0_26 << 2;
                                    cond:1_1 = r0_21;
                                label_1c1e8:
                                    
                                    if (!cond:1_1)
                                    {
                                        r0_22 = r0_21 << 2;
                                        
                                        if (r0_22)
                                            goto label_1c1ba;
                                        
                                        r0_30 = r0_22 << 2;
                                        
                                        if (r0_30)
                                            goto label_1c1be;
                                        
                                        r0_31 = r0_30 << 2;
                                        
                                        if (r0_31)
                                            goto label_1c1c2;
                                        
                                        r0_21 = r0_31 << 2;
                                        
                                        if (r0_21)
                                        {
                                        label_1c1c6:
                                            r0_32 = r0_21 << 2;
                                            
                                            if (r0_32)
                                                goto label_1c196;
                                            
                                            goto label_1c1ca;
                                        }
                                        
                                        r0_32 = r0_21 << 2;
                                        
                                        if (!r0_32)
                                        {
                                            r0_33 = r0_32 << 2;
                                            
                                            if (r0_33)
                                                goto label_1c1ce;
                                            
                                            r0_21 = r0_33 << 2;
                                            
                                            if (r0_21)
                                                goto label_1c1d2;
                                            
                                            uint32_t r0_34 = r0_21 << 2;
                                            uint32_t r0_36;
                                            bool v;
                                            
                                            if (!(r0_21 & 0x3fffffff) || r0_21 << 2 < 0 != v)
                                                r0_36 = r0_34 << 4;
                                            else
                                            {
                                                *r1_6 = r0_34;
                                                *(r1_6 + 4) = arg9;
                                                *(r1_6 + 8) = r6_1;
                                                r1_6 += 0xc;
                                                r0_36 = r0_34 << 4;
                                            }
                                            
                                            char* r0_41 = r0_36 << 8;
                                            *((r1_6 >> 0x10) + 0x44) = r0_41;
                                                /* "R02_3.00.06_240523" */
                                            r0_41[r5] = r0_41;
                                            /* jump -> 0xacc16c00 */
                                        }
                                        
                                    label_1c1ca:
                                        r0_33 = r0_32 << 2;
                                        
                                        if (r0_33)
                                            break;
                                        
                                    label_1c1ce:
                                        r0_21 = r0_33 << 2;
                                        
                                        if (!r0_21)
                                        {
                                        label_1c1d2:
                                            r0_22 = r0_21 << 2;
                                            cond:0_1 = r0_22;
                                            continue;
                                        }
                                    }
                                }
                                r0_22 = r0_21 << 2;
                                *r0_22 = r0_22;
                                *(r0_22 + 4) = r5;
                                goto label_1c1ba;
                            }
                        }
                        else
                        {
                            r0_21 = r0_22 << 2;
                            cond:1_1 = r0_21;
                            
                            if (r7_1)
                                goto label_1c1e8;
                            
                        label_1c192:
                            r0_32 = r0_21 << 2;
                            
                            if (r0_32)
                                goto label_1c164;
                            
                        label_1c196:
                            r0_33 = r0_32 << 2;
                            /* unimplemented  {revsh r5, r7} */
                        }
                        r0_16 = r0_33 << 2;
                        
                        if (r0_16)
                            break;
                        
                        uint32_t r0_23 = r0_16 << 2;
                        *r1_6 = r0_23;
                        *(r1_6 + 4) = r5;
                        r1_6 += 8;
                        r0_18 = r0_23 << 2;
                        
                        if (!r0_18)
                        {
                        label_1c1ac:
                            breakpoint();
                        }
                    }
                }
            }
        }
    }
}

int32_t sub_1c2f4(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4, int32_t* arg5 @ r4, int32_t* arg6 @ r5, int32_t* arg7 @ r6, int32_t* arg8 @ r7)
{
    bool c;
    
    if (!c)
    {
        arg1 s>>= 0x19;  /* "06_240523" */
        c = /* c = unimplemented  {asrs r0, r0, #0xe} */;
    }
    
    if (!c)
        /* tailcall */
        return sub_1c408(&data_80, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    
    int32_t r0_1 = arg1 >> 4;
    
    if (!r0_1)
    {
        if (!r0_1)
        {
            int32_t r0_4 = r0_1 << 2;
            int32_t r0_6;
            bool v;
            
            if (!(r0_1 & 0x3fffffff) || r0_1 << 2 < 0 != v)
                r0_6 = r0_4 << 4;
            else
            {
                *arg2 = r0_4;
                arg2[1] = arg4;
                arg2[2] = arg7;
                arg2 = &arg2[3];
                r0_6 = r0_4 << 4;
            }
            
            int32_t r0_8 = r0_6 << 8;
            *((arg2 >> 0x10) + 0x44) = r0_8;  /* "R02_3.00.06_240523" */
            arg6[r0_6 * 0x40] = r0_8;
            /* jump -> 0xacc16c00 */
        }
        
        int32_t r0_3;
        int32_t r1_1;
        int32_t r2;
        r0_3 = 0x7dd814(arg2 & 0xc0c0c0c0, &arg2[0x20], arg3, &arg2[0x20] + 0);  /* "23" */
        0xffade21c(r0_3, r1_1, r2 + 0x40);
        /* unimplemented  {stc2l p13, c15, [r1], {0x81}} */
        /* undefined */
    }
    
    *r0_1 = r0_1;
    *(r0_1 + 4) = arg7;
    *(r0_1 + 8) = arg8;
    *arg2 = r0_1;
    arg2[1] = arg8;
    int32_t r0_21 = r0_1 << 5;
    *arg4 = r0_21;
    int32_t r0_23 = r0_21 << 0x19;  /* "06_240523" */
    *arg3 = r0_23;
    arg3[1] = arg7;
    *arg7 = r0_23;
    int32_t r0_25 = 0;
    *arg8 = r0_25;
    arg8[1] = &arg7[1];
    int32_t r0_26 = r0_25 << 0x14;  /* "3.00.06_240523" */
    *arg6 = r0_26;
    arg6[1] = &arg7[1];
    arg6[2] = &arg8[2];
    *arg5 = r0_26;
    arg5[1] = &arg8[2];
    arg4[2];
    uint32_t r0_28 = arg2[2] >> 7;
    uint32_t r0_29 = r0_28 >> 2;
    bool z_1 = !(r0_28 & 0xfffffffc);
    bool c_2 = TEST_BIT(r0_28, 1);
    int32_t r6_2 = *(r0_29 + 4);
    
    if (z_1 || !c_2)
    {
        void* r0_31 = *r0_29 + &arg4[3];
        z_1 = r0_31 == -(r6_2);
        c_2 = r0_31 + r6_2 < r0_31;
    }
    
    if (z_1 || !c_2)
        /* jump -> &data_1c350 */
    
    /* jump -> 0x1c2cc */
}

int32_t sub_1c354(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int128_t arg5 @ q0)
{
    /* unimplemented  {cdp p14, #0, c2, c1, c0, #6} */
    int128_t q9;
    q9 = *arg5[8] + arg5;
    /* unimplemented  {stcl p12, c14, [r1, #0x204]} */
    int32_t r4;
    int32_t r6;
    /* tailcall */
    return sub_1bb6a(arg1, arg2, arg3, arg4, r4, r6);
}

int32_t j_sub_1c2f4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r4;
    int32_t r5;
    int32_t r6;
    /* tailcall */
    return sub_1c2f4(arg1, arg2, arg3, arg4, r4, r5, r6, &data_0);
}

int32_t j_sub_1c076(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r5)
{
    /* tailcall */
    return sub_1c076(arg1, arg2, arg3, arg4, arg5, arg6);
}

int32_t sub_1c372()
{
    /* tailcall */
    return sub_1c8fc();
}

void sub_1c37a() __noreturn
{
    /* tailcall */
    return sub_1c582();
}

void sub_1c408(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r5, int32_t arg7 @ r6, int32_t arg8 @ r7) __noreturn
{
    int32_t arg_204 = arg2;
    *(arg1 + arg6) = arg1;
    int32_t arg_4 = arg4;
    *(arg1 + arg8) = arg1;
    *(arg1 + arg3) = arg1;
    int32_t arg_104 = arg3;
    arg_4 = arg7;
    int32_t r0_1 = *(*(arg1 + arg4) + arg7);
    arg_104 = arg8;
    *(r0_1 + arg5) = r0_1;
    int32_t arg_304 = arg6;
    arg_204 = arg5;
    *(r0_1 + arg2) = r0_1;
    data_3f00 = 0;
    data_3f06 = 0;
    data_3f12 = 0;
    void* r0_2;
    int16_t r1;
    int32_t r8;
    r0_2 = r8(0x3eda, 0, 0x800800, 0x4a408a81);
    *(r0_2 + 0x32) = r1;  /* "2_V3.0" */
    *(r0_2 + 0x10) = r1;  /* "R02_3.00.06_240523" */
    void* r0_3 = r0_2 & ~r0_2;
    *(r0_3 + 0x1a) = r1;  /* "6_240523" */
    int32_t r0_4 = r0_3 >> r0_3;
    *(r0_4 + 0xe) = r1;
    *(r0_4 + 4) = r1;
    /* tailcall */
    return sub_1c75c(0, 0, 0, 0, 0);
}

void sub_1c582() __noreturn
{
    trap(0x80);
}

void sub_1c650(void* arg1) __noreturn
{
    *(arg1 + 0x28);
    trap(0x80);
}

void sub_1c75c(int32_t arg1, uint32_t arg2, int32_t arg3, int32_t arg4 @ r4, int32_t arg5 @ r6) __noreturn
{
    while (true)
    {
        arg2 u>>= 0x10;  /* "R02_3.00.06_240523" */
        bool v;
        
        if (!v)
            break;
        
        v = (arg3 >> 2) - 5 + -(arg3);
        arg3 = 0;
    }
    
    trap(0xb3);
}

int32_t sub_1c8fc()
{
    /* undefined */
}

int32_t sub_1c982(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, void* arg6 @ r5, void* arg7)
{
    uint32_t r7 = *(arg6 + 2);
    *(arg1 + 7) = arg6;
    *(arg7 + 6) = arg1;
    *(arg7 + 0xa) = arg7;
    *(arg7 + 0xe) = arg3;
    *(arg7 + 0x12) = arg4;  /* "2_3.00.06_240523" */
    *(arg7 + 0x16) = arg5;  /* "00.06_240523" */
    *(arg7 + 0x1a) = r7 - 0xcc;  /* "6_240523" */
    
    if (r7 != 0xcc)
        /* jump -> 0x1c994 */
    
    *0x1cd50;
    *(r7 - 0xa8);
    /* undefined */
}

int32_t sub_1c9d0(int32_t arg1, char arg2, int32_t arg3, void* arg4, void* arg5 @ r4, void* arg6 @ r5)
{
    int32_t r2 = *(arg5 + 0x44);
    *(arg4 + 0x60) = r2;
    *(arg6 + 0x34) = arg4 - 4;  /* "V3.0" */
    *(arg5 + 1) = arg2 - 0x70;
    *(arg4 + 0x60) = r2;
    *(arg4 + 0x74);
    *(arg6 + 0x34) = arg4 - 4;  /* "V3.0" */
    
    if ((arg4 - 4) << 1)
        /* jump -> 0x1ca56 */
    
    *(arg6 + 0x19) = arg4;  /* "06_240523" */
    *(arg5 + 0x24) = arg5;
    *(arg4 + 0x60) = r2;
    void* r7_1 = *(arg4 + 0x74);
    *(arg6 + 0x34) = arg4 - 4;  /* "V3.0" */
    *0x1cd50;
    *(r7_1 + 0x24);
    /* undefined */
}

