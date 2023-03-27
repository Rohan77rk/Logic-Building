#include<stdio.h>
#include<stdbool.h>


bool ChkGreater(int iNo)

{
    bool bResult ;
    if(iNo > 100)
    {
      bResult = true;  
    }
    else
    {
      bResult = false;  
    }
    return bResult;

}
int main()
{
    int iValue = 0;
    bool bRet ;
    printf("please enter the number");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);
    if(bRet == true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");

    }
    return 0;

}