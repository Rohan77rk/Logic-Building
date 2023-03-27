#include<stdio.h>

int RangeEvenSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("invalid range");
    }
    for(iCnt = iStart;iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
        iSum =iSum + iCnt;
        }
    }
    
        return iSum;


}
int main()
{
    int iValue1 =0,iValue2 = 0,iRet = 0;
    printf("enter the starting point : ");
    scanf("%d",&iValue1);

    printf("enter the ending point : ");
    scanf("%d",&iValue2);

   iRet = RangeEvenSum(iValue1,iValue2);

   printf("addtion = %d",iRet);




    return 0;
}