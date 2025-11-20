////////////////////////////////////////////////////////////
//
//  File name   : Prime.c
//  Description : This program is used to check whether 
//                a given number is prime or not.
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
#include <stdbool.h>

////////////////////////////////////////////////////////////
//
//  Function Name : CheckPrime
//  Description   : Checks if a given number is prime
//  Input         : int iNo
//  Output        : bool 
//  Author        : Pallavi Sable
//  Date          : 16/10/2025
//  Time Complexity:
//        For Prime      : O(N/2)
//        For Non-Prime  : O(1) to O(N/2)
//
////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    // Updater
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    if (iNo == 0 || iNo == 1)
    {
        return false;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is a Prime Number\n", iValue);
    }
    else
    {
        printf("%d is Not a Prime Number\n", iValue);
    }

    return 0;
}   // End of main


////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 11   Output : Prime
//  Input : 17   Output : Prime
//  Input : 12   Output : Not Prime
//  Input : 15   Output : Not Prime
//  Input : 1    Output : Not Prime
//  Input : -7   Output : Prime (absolute value = 7)
//
////////////////////////////////////////////////////////////
