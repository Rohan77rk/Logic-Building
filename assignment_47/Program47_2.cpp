#include<stdio.h>

template<class T>

T Max(T no1,T no2,T no3)
{
    T Max;
    if((no1 > no2) && (no1 > no3))
    {
        Max = no1;
    }
    else if((no2 > no1)&&(no2 > no3))
    {
        Max = no2;
    }
    else if((no3 > no1)&&(no3 > no2))
    {
        Max = no3;
    }
    else
    {
        printf("Cant find Max \n Invalid input or All number may be equal");
        return -1;
    }
    return Max;
    
}
int main()
{
    int iRet = 0;

    iRet = Max(30,30,30);
    printf("Max is : %d",iRet);

    float fRet = Max(10.0f,20.0f,31.45f);
    printf("\n Max is : %f",fRet);


    return 0;
}