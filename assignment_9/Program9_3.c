#include<stdio.h>
int EvenFact(int iNo)
{
    int iFact = 1;
    int iCnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2;iCnt <= iNo;iCnt=iCnt+2)
    {
        iFact = iFact*iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    iRet = EvenFact(iValue);
    printf("Even factorial of %d is %d",iValue,iRet);

    return 0;
}