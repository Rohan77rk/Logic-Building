#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 2
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if((iNo % 2 ==0))
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
BOOL bRet = FALSE;
printf("enter the number : \n");
scanf("%d",&iValue);
bRet = CheckEven(iValue);
if(bRet == TRUE)
{
    printf("Number is Even\n");
}
else
{
    printf("Number is odd \n");
}

return 0;
}