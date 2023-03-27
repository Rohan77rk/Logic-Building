#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if((iNo % 5) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bret = FALSE;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    bret = Check(iValue);
    if(bret == TRUE)
    {
        printf("number is divisible by five");

    }
    else{
        printf("number is not divisible by five");
    }
     return 0;
}