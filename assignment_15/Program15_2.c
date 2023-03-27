#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCount = 0 ,iEvenCnt = 0, iOddCnt = 0, iFrequencyDiff = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;

        }
    
    }
    iFrequencyDiff = iEvenCnt -iOddCnt;

    

    return iFrequencyDiff;

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

     iRet = Frequency(ptr,iSize);
     printf("Diffrence between Frequency of odd and even numbers is = %d",iRet);

    free(ptr);

    return 0;
}