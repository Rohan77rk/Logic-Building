#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iNo)
{
    int iCount = 0 ,iNumCnt = 0;
    bool bCheck ;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount]  == iNo)
        {
            iNumCnt++;
        }
    
    
    }
    if(iNumCnt > 0)
    {
        bCheck =true;
    }
    else
    {
        bCheck = false;
    }
    
    return bCheck;

}


int main()
{
    int iSize = 0, i = 0, iValue = 0;
    bool bRet = 0;
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


     bRet = Check(ptr,iSize,iValue);

     if(bRet == true)
     {
        printf("number is present");
     }
     else
     {
        printf("number is present");
     }

    free(ptr);

    return 0;
}