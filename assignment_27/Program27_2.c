#include<stdio.h>
#include<stdbool.h>

int CountChar(char *str,char ch)
{
    int iCnt = 0;
    int iChCnt = 0;
    
        
    
    while(str[iCnt] != '\0')
    {
        if((str[iCnt] == ch))
        { 
          iChCnt++;
        
        }
        iCnt++;
        }
        return iChCnt;
   

}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet ;
    printf("Please enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter the character \n");
    scanf(" %c",&cValue);

 iRet =  CountChar(Arr,cValue);
 
    printf("Frequency of %c is %d",cValue,iRet);
 
 

    return 0;
}