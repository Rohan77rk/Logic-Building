#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo =iNo/10;
    }
    iDiff = iEvenSum - iOddSum;
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;
     printf("enter the number :");
     scanf("%d",&iValue);

     iRet = CountDiff(iValue);

     printf(" Count of even number is %d",iRet);

     return 0;
}