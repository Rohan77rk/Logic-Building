#include<stdio.h>

void Pattern(int iNo)
{
    int i;
    for(i=1;i <= iNo;i++)
    {
        printf("$   *\t");
    }
}
int main()
{
   int iValue = 0;
   printf("enter the numbr : \n");
   scanf("%d",&iValue);
   Pattern(iValue);
    return 0;
}