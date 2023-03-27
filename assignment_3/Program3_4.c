#include<stdio.h>



void DisplayConvert(char Cvalue)

{
    if((Cvalue >= 97) && (Cvalue <=122))
    {
        Cvalue=Cvalue-32;
        printf("%c",Cvalue);
    }
    else if((Cvalue >= 65) && (Cvalue <=90))
    {
        Cvalue= Cvalue+32;
        printf("%c",Cvalue);
    }
}
int main()
{
    char cValue ;
    printf("enter the character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}