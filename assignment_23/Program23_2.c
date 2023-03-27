#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bret = ChkCapital(cValue);

    if(bret == true)
    {
        printf("its a CAPITAL Character");
    }
    else
    {
        printf("its NOT a CAPITAL character");
    }

    return 0;
}