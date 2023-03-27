#include<stdio.h>

int DollarToInr(int iNo)
{
    int iInr = 0;
    iInr = iNo*70;
return iInr;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Value of %d INR is :%d",iValue,iRet);


    return 0;

    
}