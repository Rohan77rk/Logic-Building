 #include<stdio.h>

void Pattern(int iRow,int iCol)
{
    
    int i = 0, j = 0, iTemp = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iRow ; j++)
        {
            printf("%d\t",iTemp);
        if(iTemp >= 9)
        {
            iTemp = 0;

        }
            iTemp++;
            
        }
        


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