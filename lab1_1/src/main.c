/**
 * main.c -- программа, принимающая два аргумента и вызывающая функцию, которая складывает их и вызывает функцию возведения результата в квадрат, затем выводит ответ на экран.
 *
 * Copyright (c) 2020, Seneva Anna <seneva@cs.karelia.ru>
 *
 * This code is licensed under a MIT-style license.
 */

#include <stdio.h>
#include "common.h"

int main() {
   int a, b;
   printf("Введите первое число: ");
   scanf("%d", &a);
   printf("\nВведите первое число: ");
   scanf("%d", &b);

   
   addition(a, b);
   return 0;
}
