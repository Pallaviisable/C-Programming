////////////////////////////////////////////////////////////
//
//  File name :     CountDigits.c
//  Description :   To Count Number of digits
//  Author :        Pallavi Sable
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
//
//  REQUIRED HEADER FILES
//
////////////////////////////////////////////////////////////

#include<stdio.h>


////////////////////////////////////////////////////////////
//
//  Function Name : CountDigits
//  Description :   It is used to count digits of a number
//  Input :         int
//  Output :        int
//  Author :        Pallavi Sable
//  Date :          15/10/2025
//  Time Complexity : O(N) 
//                    (N = number of digits)
//
////////////////////////////////////////////////////////////
int CountDigits(int iNo)
{
    int iCount = 0;

    // Updater for negative number
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Strict handling of 0
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
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

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d\n",iRet);

    return 0;

}//End of main


////////////////////////////////////////////////////////////
//
//  Test cases successfully handled by the application
//  
//  Input : 7521     Output : 4
//  Input : 0        Output : 1
//  Input : -9823    Output : 4
//  Input : 9        Output : 1
//  Input : 1000     Output : 4
//
////////////////////////////////////////////////////////////
