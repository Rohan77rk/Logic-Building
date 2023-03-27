#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    if(((ch >= 'a') && (ch <= 'z'))||((ch >= 'A') && (ch <= 'Z')))
    {
        return true;
    }
    else
    {
        return false;

    }
}

int main()
{
    char cValue = '\0';
    bool bret = false;

    printf("enter the single character :\n");
    scanf("%c",&cValue);

    bret = ChkAlpha(cValue);

    if(bret == true)
    {
        printf("its a character");
    }
    else
    {
        printf("its not a character");
    }

    return 0;
}