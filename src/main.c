/*
 * Main program file: main.c
 * 
 */

#include <stdio.h>
#include "sum.h"

int main(void)
{
    int a = 17;
    int b = 3;
    printf("The sum of %d and %d is %d\n", a, b, sum(a, b));
}