#include<stdio.h>
int Fact(int iNo)
{
    int iFact = 1;
    int iCnt =0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
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
    iRet = Fact(iValue);
    printf("factorial of %d is %d",iValue,iRet);

    return 0;
}