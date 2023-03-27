#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCount = 0 ,iNumCnt = 0;
    

    for(iCount = (iLength - 1); iCount >= 0; iCount--)
    {
        if(Arr[iCount]  == iNo)
        {
            iNumCnt = iCount;
            break;
            
        }
    
    
    }
    
    
    return iNumCnt;

}


int main()
{
    int iSize = 0, i = 0, iValue = 0;
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

    printf("enter number to check : \n");
    scanf("%d",&iValue);


     iRet = LastOcc(ptr,iSize,iValue);

     printf("Last occurance of the number is %d",iRet);

     
    free(ptr);

    return 0;
}