#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int i= 0;

    for(i = 0; i < iLength; i++)
    {
        if(((Arr[i] % 3) == 0) && ((Arr[i] % 5) == 0))
        {
            printf("%d \t",Arr[i]);
        }
        

        
    }

}


int main()
{
    int iSize = 0,  iCnt = 0;
    int *ptr = NULL;

    printf("enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    
    printf("enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Result is : \n");

     Display(ptr,iSize);
     

    free(ptr);

    return 0;
}