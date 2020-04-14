// Write a program that gets the user's name and stores it in a string then displays it in the following different ways.

#include <stdio.h>

int main(void)
{
    char user_input[30];
    printf("Please enter your name: ");
    scanf("%s", user_input);
    // In a field that is 10 columns wide, mark the beginning and end of the field with / character
    printf("/%10s/\n", user_input);
    // Shows only the first 3 characters
    printf("/%.3s/\n", user_input);

    return 0;
}