////////////////////////////////////////////////////////////
//
//  File name :     SumDigits.c
//  Description :   To Calculate sum of digits
//  Author :        Pallavi Sable
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////

// Handle 0 (Strict Handling Condition)

////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////
//
//  Function Name : SumDigits
//  Description   : It is used to calculate sum of digits of a number
//  Input         : int
//  Output        : int
//  Author        : Pallavi Sable
//  Date          : 16/10/2025
//  Time Complexity : O(N)   // N = number of digits
//
////////////////////////////////////////////////////////////
int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    // Handle negative number
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Strict handling for 0
    if(iNo == 0)
    {
        return 0;
    }

 
    while(iNo != 0)
    {
        iDigit = iNo % 10;   
        iSum = iSum + iDigit; 
        iNo = iNo / 10;      
    }

    return iSum;
}


////////////////////////////////////////////////////////////
//
//  ENTRY POINT FUNCTION FOR THE APPLICATION
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);
    printf("Sum of digits is : %d\n", iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////
//
// Test cases successfully handled by the application
//
// Input : 12      Output : 3
// Input : 15      Output : 6
// Input : 56      Output : 11
// Input : 11      Output : 2
// Input : 0       Output : 0    // Strict handling
// Input : -789    Output : 24   // Negative number handling
//
////////////////////////////////////////////////////////////
