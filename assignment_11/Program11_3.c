#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if(iStart > iEnd)
    {
        printf("invalid range");
    }
    for(iCnt = iStart;iCnt <= iEnd; iCnt++)
    {
        iSum =iSum + iCnt;
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

   iRet = RangeSum(iValue1,iValue2);

   printf("addtion = %d",iRet);




    return 0;
}