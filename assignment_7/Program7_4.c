#include<stdio.h>

void OddDisplay(int iNo)
{
    int i;
    
    for(i=1;i <= iNo;i=i+2)
    {
        
        printf("%d \t",i);
        
    }
}
int main()
{
   int iValue = 0;
   printf("enter the number : \n");
   scanf("%d",&iValue);
   OddDisplay(iValue);
    return 0;
}