#include<stdio.h>

int MultFact(int iNo)
{ 
    int iProduct = 1;
    int iCnt = 0;
for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
{
    if((iNo % iCnt) == 0)
    {
        iProduct = iProduct*iCnt;
    }
}
return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    iRet = MultFact(iValue);
    printf("%d",iRet);
    return 0 ;
}