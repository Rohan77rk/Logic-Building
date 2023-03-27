#include<stdio.h>

float Percentage(int iTotal,int iMarks)
{
    float fPer = 0.0;
    fPer = (iMarks*100)/iTotal;

    return fPer;
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;
    printf("enter total marks : ");
    scanf("%d",&iValue1);

    printf("\n enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("\n Percentage = %f ",fRet);


    return 0;
}