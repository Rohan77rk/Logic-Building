#include<stdio.h>
#include<stdbool.h>

int FirstChar(char *str,char ch)
{
    int iCnt = 0;
    int iChCnt = -1;
    
        
    
    while(str[iCnt] != '\0')
    {
        if((str[iCnt] == ch))
        { 
        iChCnt++;
          break;
        
        }
        iCnt++;
        iChCnt++;
        }
        return iChCnt;
   

}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;
    printf("Please enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter the character \n");
    scanf(" %c",&cValue);

 iRet =  FirstChar(Arr,cValue);
 
    printf("Character location is %d",iRet);
 
 

    return 0;
}