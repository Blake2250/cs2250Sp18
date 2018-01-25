/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:01:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Blake Evans (), blakeevans@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num = 1;
    unsigned int unum = 1;
    num = num * 1000;
    unum = unum * 10000;
    printf("The sizeof int is [%ld]\n" , sizeof(num));
    printf("num = [%d]\n" , num);
    printf("The sizeof uint is [%ld]\n" , sizeof(unum));
    num *= 10000; // compound operator
    printf("num = [%d]\n" , num);
    
    num *= 10000; // compound operator
    unum *= 10000;
    printf("num= [%d]\n" , num);
    
    // What is the rande of an int?
    // 2^32 ~ 4294000000 = i combinations
    // Tand: 
    num *= 10000; // compound operator
    unum *= 10000;
    printf("num= [%d]\n" , num);

    return 0;
}
// Function Definitions


