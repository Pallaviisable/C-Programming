////////////////////////////////////////////////////////////
//
//  File name   : DisplayDigits.c
//  Description : To demonstrate the need of iteration by 
//                displaying digits of a number one-by-one
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
//  Function Name : DisplayDigits
//  Description   : Displays each digit of the number 
//                  using iteration
//  Input         : int 
//  Output        : int
//  Author        : Pallavi Sable
//  Date          : 16/10/2025
//  Time Complexity : O(N)  
//                    (where N = number of digits)
//
////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    // Updater for negative input
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        printf("------------------------------------\n");
        iDigit = iNo % 10;
        printf("Digit is : %d\n", iDigit);
        iNo = iNo / 10;
        printf("Remaining Number is : %d\n", iNo);
        printf("------------------------------------\n");
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

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);

    return 0;
}   // End of main


////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//
//  Input : 7521  
//  Output:
//      Digit : 1
//      Digit : 2
//      Digit : 5
//      Digit : 7
//
//  Input : 903
//  Output:
//      Digit : 3
//      Digit : 0
//      Digit : 9
//
//  Input : -456
//  Output:
//      Digit : 6
//      Digit : 5
//      Digit : 4
//
////////////////////////////////////////////////////////////
