#include<stdio.h>

int FactDiff(int iNo)
{
    int iCntFact = 0;
    int iFactSum = 0;
    int iDiff = 0;
    for(iCntFact = 1; iCntFact <= (iNo/2); iCntFact++)
    {
        if((iNo % iCntFact)==0)
        {
            iFactSum = iFactSum + iCntFact;
        }

    }

    int iCntNonFact = 0;
    int iNonFactSum = 0;
    for(iCntNonFact = 1; iCntNonFact <= iNo; iCntNonFact++)
    {
        if((iNo % iCntNonFact)!=0)
        {
            iNonFactSum = iNonFactSum + iCntNonFact;
        }

}
iDiff = iFactSum - iNonFactSum;

return iDiff;

}

int main ()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    iRet = FactDiff(iValue);
    printf("%d ",iRet);
    return 0;
}