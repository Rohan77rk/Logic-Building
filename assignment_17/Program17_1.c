#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Max(int Arr[],int iLength)
{
    int iCount = 0 ,iNumCnt = -1, iMax = Arr[0];
    

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] > iMax)
        {
            iMax = Arr[iCount];
            
            
        }
    
    
    }
    
    
    
    return iMax;

}


int main()
{
    int iSize = 0, i = 0;
    int iRet = 0;
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



     iRet = Max(ptr,iSize);

     printf("Maximum number is %d",iRet);

     
    free(ptr);

    return 0;
}