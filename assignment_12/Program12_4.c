#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo =iNo/10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;
     printf("enter the number :");
     scanf("%d",&iValue);

     iRet = CountFour(iValue);

     printf(" Frequency of four is %d",iRet);

     return 0;
}