#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("invalid range");
    }
    for(iCnt = iEnd;iCnt >= iStart; iCnt--)
    {
        printf("%d \t",iCnt); 
    }


}
int main()
{
    int iValue1 =0,iValue2 = 0;
    printf("enter the starting point : ");
    scanf("%d",&iValue1);

    printf("enter the ending point : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);




    return 0;
}