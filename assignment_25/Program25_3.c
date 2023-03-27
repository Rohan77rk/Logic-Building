#include<stdio.h>

int Difference(char *str)
{
    int iCCnt = 0, iSCnt = 0, iDiff = 0;
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str <= 'z'))
        {
            iSCnt++;
        }
        else if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCCnt++;
        }
            str++;
    }
    iDiff = iSCnt - iCCnt;
    // if(iDiff < 0)
    // {
    //     iDiff = -iDiff;
    // }
    return iDiff;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("please enter the string \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference between small letters and capital letters in the string is :%d",iRet);


    return 0;
}