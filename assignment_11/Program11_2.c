#include<stdio.h>

void EvenRangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart > iEnd)
    {
        printf("invalid range");
    }
    for(iCnt = iStart;iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
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

    EvenRangeDisplay(iValue1,iValue2);




    return 0;
}