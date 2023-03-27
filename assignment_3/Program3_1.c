#include<stdio.h>
void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNextNo = 2;
    if(iNo <= 0)
    {
        return;
    }
    else{
            printf("\n_______________________________________________________________________________________\n");
        for(iCnt = 1;iCnt <= iNo; iNextNo = iNextNo+2)
        {
            printf("%d\n",iNextNo);
            iCnt++;

        }
        printf("\n_______________________________________________________________________________________\n");
    }
}

int main()
{
    int iValue = 0;
    printf("\n_______________________________________________________________________________________\n");
    printf("enter the number : ");
    scanf("%d",&iValue);
    printf("\n_______________________________________________________________________________________\n");

    PrintEven(iValue);
    return 0;
}