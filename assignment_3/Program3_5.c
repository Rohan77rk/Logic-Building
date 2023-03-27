#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cWord)
{
    if((cWord == 97) || (cWord == 101) || (cWord == 105) || (cWord == 111) || (cWord == 117) || (cWord == 65) || (cWord == 69) || (cWord == 73) || (cWord == 79) || (cWord == 85))
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }
}

int main ()
{
    char cValue ;
    BOOL bRet = FALSE;
    printf("enter the char\n");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
    if(bRet == TRUE)
    {
        printf("yes the entered char is a vowel");
    }
    else
    {
        printf("no the entered char is not a vowel");
    }
        return 0;
}