/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  use index notation to access string members
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:01 AM
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
    // 1) define two strings
    char fname[20];
        char lname[20];
    // 2) get first name info
    printf("Enter your fname\n");
    scanf("%s" , fname);
    // 2) get last name info
    printf("Enter your lname\n");
    scanf("%s" , lname);
    // 4) display initials
    printf("Hello %s %s\n , fname, lanme);
    // to access individual members of an array, use
    // Index notation with []
    printf("Your initials are [%c%c] , jname[0], lname[0]);
    return 0;
}
// Function Definitions


