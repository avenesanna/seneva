/**
 * addition.c -- программа, принимающая два аргумента и производящая их сложение
 *
 * Copyright (c) 2020, Seneva Anna <seneva@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include <assert.h>
#include "common.h"

/**
 * Принимает два аргумента и производит их сложение
 */
void addition(int n1, int n2)
{
    int res = 0;
    res = n1 + n2;

    square(res);
}

