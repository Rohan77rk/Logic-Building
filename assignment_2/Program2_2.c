#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iNo > iCnt)
    
    {

        printf("\t*\n");
        iNo--;
    }
    
}

int main()
{
    int iValue = 0;
    printf("enter the number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}