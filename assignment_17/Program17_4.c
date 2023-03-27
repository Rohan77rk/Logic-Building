#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Digits(int Arr[],int iLength)
{
    int iCount = 0 ;
    

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if(Arr[iCount] >= 100 && Arr[iCount] <= 999)
        {
    printf("%d\t",Arr[iCount]);
            
        }
    
    
    
    }
    
    
    
    

}


int main()
{
    int iSize = 0, i = 0;
    
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



     Digits(ptr,iSize);

     

     
    free(ptr);

    return 0;
}