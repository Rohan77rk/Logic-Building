#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iEvenSum = 0, iOddSum = 0, iCount = 0 ,iDiff = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCount];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCount];
        }
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;

}


int main()
{
    int iSize = 0,  iCnt = 0, i = 0, iRet = 0;
    int *ptr = NULL;

    printf("enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to alocate memory");
        return -1;
    }
    printf("enter elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&ptr[i]);
    }

     iRet = Difference(ptr,iSize);
     printf("Result is = %d",iRet);

    free(ptr);

    return 0;
}