#include <stdio.h>

int KmToMeter(int iNo)
{
    int iKm = 0;
    iKm = 1000*iNo;


    return iKm;


}
int main()
{
    int iValue = 0, iRet =0;
    printf("enter Distance :");

    
    
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);
    
    printf("%d kilometers in meters is %d",iValue,iRet);



    return 0;
}