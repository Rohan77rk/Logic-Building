#include <stdio.h>

double KmToMeter(int iNo)
{
    double dSqMtr = 0.0;
    
    dSqMtr = iNo * 0.0929;

    return dSqMtr;


}
int main()
{
    int iValue = 0;
     double dRet =0.0;
    printf("enter area in square feet :");

    
    
    scanf("%d",&iValue);

    dRet = KmToMeter(iValue);
    
    printf("%d Square feet in Square meter is %lf",iValue,dRet);



    return 0;
}