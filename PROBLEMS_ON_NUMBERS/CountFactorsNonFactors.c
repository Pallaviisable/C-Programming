////////////////////////////////////////////////////////////
//
//  File name   : program53.c
//  Description : This program counts the frequency of
//                factors and non-factors of a given number.
//  Author      : Pallavi Sable
//  Date        : 16/10/2025
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
//  Function Name : CountFactorsNonFactors
//  Description   : Counts total factors and non-factors
//                  of the number from 1 to (N- 1).
//  Input         : int
//  Output        : int
//  Author        : Pallavi Sable
//  Date          : 16/10/2025
//  Time Complexity : O(N)
//
////////////////////////////////////////////////////////////

void CountFactorsNonFactors(int iNo)
{
    int iCnt = 0;
    int iFrequency1 = 0;   
    int iFrequency2 = 0;   

    // Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFrequency1++;   // Factor
        }
        else
        {
            iFrequency2++;   // Non-factor
        }
    }

    printf("Frequency of Factors     : %d\n", iFrequency1);
    printf("Frequency of Non-Factors : %d\n", iFrequency2);
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

    CountFactorsNonFactors(iValue);

    return 0;
}   // End of main


////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 8
//  Factors     -> 1, 2, 4   Frequency = 3
//  Non-Factors -> 3, 5, 6, 7 Frequency = 4
//
//  Input : 12
//  Factors     -> 1, 2, 3, 4, 6 Frequency = 5
//  Non-Factors -> 5, 7, 8, 9, 10, 11 Frequency = 6
//
//  Input : 6
//  Factors     -> 1, 2, 3 Frequency = 3
//  Non-Factors -> 4, 5 Frequency = 2
//
//  Input : 1
//  Factors     -> None Frequency = 0
//  Non-Factors -> None Frequency = 0
//
////////////////////////////////////////////////////////////
