////////////////////////////////////////////////////////////
//
//  File name   : Even.c
//  Description : This program prints even numbers from 1 to N
//  Author      : Pallavi Sable
//  Date        : 15/10/2025
//
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : Display()
//  Description   : Displays all even numbers from 1 to N
//  Input         : int 
//  Output        : int 
//  Author        : Pallavi Sable
//  Date          : 15/10/2025
//  Time Complexity: O(N)
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }

    printf("\n"); 
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Please enter a number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}   // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//  Input : 10    Output : 2 4 6 8 10
//  Input : 5     Output : 2 4
//  Input : 1     Output : (none)
//  Input : 0     Output : (none)
//  Input : -5    Output : (none)
//
////////////////////////////////////////////////////////////
