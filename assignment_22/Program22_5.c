 #include<stdio.h>

void Pattern(int iRow,int iCol)
{
    
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iCol ; j++)
        {

            if(i >= 2 && i <= 3 && j >=2 && j <= 3)
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
            
        
            
            
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