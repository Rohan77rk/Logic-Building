#include<stdio.h>
#include<stdbool.h>


bool ChkGreater(int iNo1,int iNo2)

{
    bool bResult ;
    if(iNo1 == iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    bool bRet ;
    printf("please enter the numbers : \n");
    scanf("%d%d",&iValue1,&iValue2);
    bRet = ChkGreater(iValue1,iValue2);
    if(bRet == true)
    {
        printf("\n Equal");
    }
    else
    {
        printf("Not equal");

    }
    return 0;

}