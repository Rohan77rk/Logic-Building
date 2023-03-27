#include<stdio.h>

template<class T>
T Addn(T *arr,int iSize)
{
    T Sum;
    int i = 0;
    for(i = 0;i < iSize;i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10,20,30,40};

    int iSum = Addn(arr,5);
    printf("\n Sum : %d",iSum);

    float fSum = Addn(brr,4);
    printf("\n Sum : %f",fSum);

    return 0; 
}