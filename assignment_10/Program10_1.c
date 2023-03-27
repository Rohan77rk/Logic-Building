#include <stdio.h>

double CircleArea(float fRadius)
{
    float fPi = 3.14;
    float fArea = 0.0;

    fArea = fPi*fRadius*fRadius;

    return fArea;


}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("enter radius = \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    
    printf("Area of circle = %lf",dRet);



    return 0;
}