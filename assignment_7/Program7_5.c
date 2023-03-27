#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int i;
    int iMultiple;
    
    for(i=1;i <= 5;i++)
    {
        iMultiple = iNo*i;
        printf("%d \t",iMultiple);
        
    }
}
int main()
{
   int iValue = 0;
   printf("enter the number : \n");
   scanf("%d",&iValue);
   MultipleDisplay(iValue);
    return 0;
}