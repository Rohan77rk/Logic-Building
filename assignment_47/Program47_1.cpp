#include<stdio.h>

template<class T>

T Multiply(T no1,T no2)
{
    T ans;
    ans = no1*no2;
    return ans;
}
int main()
{
    int iRet = 0;

    iRet = Multiply(10,20);
    printf("Multiplication is : %d",iRet);

    float fRet = Multiply(10.0f,20.0f);
    printf("\n Multiplication is : %f",fRet);


    return 0;
}