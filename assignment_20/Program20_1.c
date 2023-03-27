 #include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char cInput = 'A';
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iCol; j++)
        {
            printf("%c\t",cInput);
            cInput++;
        }
        printf("\n");
        cInput = 'A';
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