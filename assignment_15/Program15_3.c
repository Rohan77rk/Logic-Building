#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCount = 0, iNumCnt = 0 ;
    bool bCheck;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] == 11)
        {
            iNumCnt++;
        }
    
    }
    if(iNumCnt > 0)
    {
        return bCheck = true;

    }
    {
        return bCheck = false;
        
    }

    

    return bCheck;

}


int main()
{
    int iSize = 0,  iCnt = 0, i = 0;
    bool bRet ;
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

     bRet = Check(ptr,iSize);

     if(bRet == true)
     {
        printf("11 is present");
     }
     else
     {
        printf("11 is absent");
     }

    free(ptr);

    return 0;
}