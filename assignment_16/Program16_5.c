#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Product(int Arr[],int iLength)
{
    int iCount = 0 ,iNumCnt = -1, iMult = 1;
    

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount] % 2)  != 0)
        {
            iMult = iMult * Arr[iCount];
            
            
        }
    
    
    }
    if(iMult == 1)
    {
        iMult = 0;
    }
    
    
    return iMult;

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



     iRet = Product(ptr,iSize);

     printf("Product is %d",iRet);

     
    free(ptr);

    return 0;
}