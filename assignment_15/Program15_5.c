#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCount = 0 ,iNumCnt = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount]  == iNo)
        {
            iNumCnt++;
        }
    
    
    }
    return iNumCnt;
    

}


int main()
{
    int iSize = 0, i = 0, iValue = 0,iRet = 0;
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

    printf("enter number to check frequency : \n");
    scanf("%d",&iValue);


     iRet = Frequency(ptr,iSize,iValue);
     printf("Frequency of %d is = %d", iValue,iRet);

    free(ptr);

    return 0;
}