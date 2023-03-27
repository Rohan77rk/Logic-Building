#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char a = 'A';
    for(i = 1;i <= iNo; i++)
    {
        printf("%c\t",a);
        a++;

    }
}

int main()
{
    int iValue = 0;
    printf("enter number is elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

}