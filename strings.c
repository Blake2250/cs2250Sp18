/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:05:15 AM
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
    char name[11]; // allocate 20 chars = NULL char
    printf("Enter your name:\n");
    // Note: If you use an array, for ex: string,
    // DO NOT use the & address operator
    scanf("%s" , name);
    printf("Your name is [%s]\n , name");
    return 0;
}
// Function Definitions


