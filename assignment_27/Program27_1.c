#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{
    int iCnt = 0;
    
    
    while(str[iCnt] != '\0')
    {
        if((str[iCnt] == ch))
        { 
          return true;
        
        }
        iCnt++;
        }

   

}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet ;
    printf("Please enter the string :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter the character \n");
    scanf(" %c",&cValue);

 bRet =  ChkChar(Arr,cValue);
 if(bRet == true)
 {
    printf("%c is present in string",cValue);
 }
 else
 {
    printf("%c is not present in string",cValue);
 }

    return 0;
}