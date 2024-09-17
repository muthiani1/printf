#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /*unsigned int ui;
    void *addr;*/

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("O - Let's try to printf a simple sentence.\n");
    printf("len: %d\nlen2: %d\n", len, len2);
    _printf("Try a number: %d\n", 10);
   
    return (0);
}
