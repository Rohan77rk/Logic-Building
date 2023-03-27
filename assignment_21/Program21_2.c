 #include<stdio.h>

void Pattern(int iRow,int iCol)
{
    
    int i = 0, j = 0, iOddTemp = 1,iEvenTemp = 2;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iRow ; j++)
        {

            if((i % 2) == 0)
            {
                printf("%d\t",iOddTemp);
                iOddTemp=iOddTemp+2;
            }
            else
            
            {
                printf("%d\t",iEvenTemp);
                iEvenTemp=iEvenTemp+2;;
            }
        
        
            
            
        }
        iOddTemp = 1;
        iEvenTemp = 2;
        


        printf("\n");
    }
        
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("enter number of rows :\n");
    scanf("%d",&iValue1);

    
    printf("enter number of columns :\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

}