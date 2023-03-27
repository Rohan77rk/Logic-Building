#include <stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    if(iNo > 100)
    {
        printf("large");
    }

}
int main()
{
    int iValue = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}