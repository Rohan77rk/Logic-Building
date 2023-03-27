#include<stdio.h>
int FactDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt =0;
    int iFactdiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2;iCnt <= iNo;iCnt=iCnt+2)
    {
        iEvenFact = iEvenFact*iCnt;
    }
    for(iCnt = 1;iCnt <= iNo;iCnt=iCnt+2)
    {
        iOddFact = iOddFact*iCnt;
    }

    iFactdiff = iEvenFact - iOddFact;

    return iFactdiff;
}
int main()
{
    int iValue = 0,iRet = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("factorial diffrence is %d",iRet);

    return 0;
}