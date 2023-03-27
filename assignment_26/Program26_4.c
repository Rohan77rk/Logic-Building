#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt = 0;
    
    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        { 

        printf("%c",str[iCnt]);
        
        }
        
        
        iCnt++;
}

}

int main()
{
    char Arr[20];
    printf("Please enter the string :\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigit(Arr);

    return 0;
}