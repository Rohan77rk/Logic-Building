#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    int iWCnt = 0;
    
    while(str[iCnt] != '\0')
    {
        if((str[iCnt] == ' '))
        { 

        iWCnt++;
        
        }
        iCnt++;
    }
    return iWCnt;

}

int main()
{
    char Arr[20];
    int iRet = 0;
    printf("Please enter the string :\n");
    scanf("%[^'\n']s",Arr);

 iRet =  CountWhite(Arr);
 printf("Number of white spaces are :%d \n",iRet);

    return 0;
}