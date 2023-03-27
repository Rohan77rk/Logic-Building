#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch=ch+32;
        printf("corresponding small is %c",ch);
    }
    else
    {
        ch = ch-32;
        printf("corresponding CAPITAl is %c",ch);
    }
    
}

int main()
{
    char cValue = '\0';

    printf("enter single character :\n");
    scanf("%c",&cValue);
    Display(cValue);

    return 0;
}