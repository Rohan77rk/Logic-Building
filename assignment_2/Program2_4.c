#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    printf("number is %d, and Frequency is %d \n",iNo,iFrequency);
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    printf("enter the Frequency : \n");
    scanf("%d",&iCount);


    Display(iValue,iCount);
    return 0;
}