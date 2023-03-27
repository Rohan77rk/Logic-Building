#include<stdio.h>

template<class T>
T Min(T *arr,int iSize)
{
    T Sum;
    int i = 0;
    T Min = arr[0];
    for(i = 0;i < iSize;i++)
    {
        if(arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}

int main()
{
    int arr[] = {10,20,30,70,40};
    float brr[] = {10,110,30,40};

    int iSum = Min(arr,5);
    printf("\n Min : %d",iSum);

    float fSum = Min(brr,4);
    printf("\n Min : %f",fSum);

    return 0; 
}