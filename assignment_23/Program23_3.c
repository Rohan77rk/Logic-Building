#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
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

    bret = ChkDigit(cValue);

    if(bret == true)
    {
        printf("its a Digit");
    }
    else
    {
        printf("its NOT a Digit");
    }

    return 0;
}