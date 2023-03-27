#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void DigitSum(int Arr[],int iLength)
{
    int iCount = 0, iSum = 0 ,iDigit = 0;
    

    for(iCount = 0; iCount < iLength; iCount++)
    {
        for(iDigit=0,iSum=0; Arr[iCount]!=0 ;Arr[iCount] = Arr[iCount] / 10)
        {
        iDigit = Arr[iCount] % 10;
        iSum = iSum + iDigit;
        
        }
    printf("%d \t",iSum);
    
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



     DigitSum(ptr,iSize);

     

     
    free(ptr);

    return 0;
}