#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0 ;
    
    
    // int iRev = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        // iRev = (iRev * 10) + iDigit;
        if(iDigit == 0)
        {
        return true;
        }
        else
        {
            return false;
        }
        iNo = iNo / 10;
        
    

    }


}
int main()
{
    int iValue = 0;
    bool bRet;
    printf("enter the number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == true )
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}