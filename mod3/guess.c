/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Guess a number from 
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:08:01 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Blake Evans (), blakeevans@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand(), srand((int)time(0))
#include <time.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
 int input;
 int guess;
 printf("Please enter a number from 0-9");
 scanf("%d" , &input);
 // calculate our guess number
 srand ((int)time(0)); //set your seed
 guess = rand() % 10; // get your reandom num.
 printf("You enterd [%d] and guess is [%d]\n" , input, guess);
    return 0;
}
// Function Definitions


