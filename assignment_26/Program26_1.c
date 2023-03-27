#include<stdio.h>

void strlwrX(char *str)
{
    int iCnt = 0;
    char temp[20];
    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        { 

        temp[iCnt] = str[iCnt] + 32;
        iCnt++;
        }
        else
        {
            
        temp[iCnt] = str[iCnt];
        iCnt++;

        }
}
printf("%s",temp);
}

int main()
{
    char Arr[20];
    printf("Please enter the string :\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    return 0;
}