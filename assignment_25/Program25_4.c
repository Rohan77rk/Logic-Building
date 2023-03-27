#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bCheck;
    int iCnt = 0;
    while( *str != '\0')
    {
        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u')|| (*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
        {

            iCnt++;
        }
        
        str++;
    }
    if(iCnt >= 1)
    {
        bCheck = true;
}
    else
    {
        bCheck =false;
    }
    return bCheck;

}

int main()
{
    char Arr[20];
    bool bRet=false;

    printf("please enter the string\n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("vowel is present");
    }
    else
    {
        printf("vowel is not present");
    }
    return 0;
}