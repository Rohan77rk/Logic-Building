#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCs ;
    dCs = (fTemp - 32)*(0.5555);

    return dCs;

}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("enter temperature in fahrenheit :");
    scanf("%f",&fValue);
    dRet = FhToCs(fValue);

    printf("%f F in celsius is %lf",fValue,dRet);

    return 0;
}