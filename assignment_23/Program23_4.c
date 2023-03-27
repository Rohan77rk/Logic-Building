#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bret = ChkSmall(cValue);

    if(bret == true)
    {
        printf("its a small Character");
    }
    else
    {
        printf("its NOT a small character");
    }

    return 0;
}