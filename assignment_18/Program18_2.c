#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t",iCnt);
        

    }
}

int main()
{
    int iValue = 0;
    printf("enter number is elements :\n");
    scanf("%d",&iValue);

    Pattern(iValue);

}