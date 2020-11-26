/**
 * square.c -- программа, принимающая один аргумент и производящая его возведение в квадрат 
 *
 * Copyright (c) 2020, Seneva Anna <seneva@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <assert.h>
#include "common.h"

/**
 * Принимает один аргумент и производит его возведение в квадрат
 */
void square(int res1)
{
    int res2 = 0;
    res2 = res1 * res1;

    printf("\nРезультат: %d\n", res2); 
}
