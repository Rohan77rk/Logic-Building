#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0 ;
    // int iRev = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        // iRev = (iRev * 10) + iDigit;
        printf("%d \n",iDigit);
        iNo = iNo / 10;

    }

}
int main()
{
    int iValue = 0;
    printf("enter the number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}