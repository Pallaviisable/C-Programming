////////////////////////////////////////////////////////////
//
//  File name   : program50.c
//  Description : This program prints all factors of a number
//               
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
//  Function Name : DisplayFactors()
//  Description   : It displays all factors of the given
//                  number except the number itself.
//  Input         : int iNo
//  Output        : Printed factors on screen
//  Author        : Pallavi Sable
//  Date          : 15/10/2025
//  Time Complexity : O(N/2)
//
////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    // Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}   // End of main

////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//  Input : 10    Output : 1 2 5
//  Input : 12    Output : 1 2 3 4 6
//  Input : -12   Output : 1 2 3 4 6
//  Input : 1     Output : (none)
//
////////////////////////////////////////////////////////////
