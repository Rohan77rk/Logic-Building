#include<stdio.h>

template<class T>
T Max(T *arr,int iSize)
{
    T Sum;
    int i = 0;
    T Max = 0;
    for(i = 0;i < iSize;i++)
    {
        if(arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

int main()
{
    int arr[] = {10,20,30,70,40};
    float brr[] = {10,110,30,40};

    int iSum = Max(arr,5);
    printf("\n Max : %d",iSum);

    float fSum = Max(brr,4);
    printf("\n Max : %f",fSum);

    return 0; 
}