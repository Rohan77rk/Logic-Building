#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Range(int Arr[],int iLength,int iStart, int iEnd)
{
    int iCount = 0 ,iNumCnt = -1;
    

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] >= iStart && Arr[iCount] <= iEnd)
        {
            
            printf("%d \t",Arr[iCount]);
            
        }
    
    
    }
    
    


}


int main()
{
    int iSize = 0, i = 0, iValue1 = 0 ,iValue2 = 0;
    
    int *ptr = NULL;

    printf("enter number of elements : \n");
    scanf("%d",&iSize);

    printf("enter Starting point: \n");
    scanf("%d",&iValue1);

printf("enter end point : \n");
    scanf("%d",&iValue2);


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

    

     Range(ptr,iSize,iValue1,iValue2);


     
    free(ptr);

    return 0;
}