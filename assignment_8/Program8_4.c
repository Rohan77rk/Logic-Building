#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 1;
    for(iCnt = 1;iCnt <= 10 ;iCnt ++)
    {
        iMult = iNo*iCnt;
        printf("%d \n",iMult);
    }
    
}
int main()
{
    int iValue = 0;
    printf("enter the number :\n");
    scanf("%d",&iValue);
    Table(iValue);

    return 0;
}