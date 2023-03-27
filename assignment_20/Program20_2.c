#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char cCapital = 'A', cSmall = 'a';
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1;j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
            printf("%c\t",cSmall);
            cSmall++;

            }
            else
            {
            printf("%c\t",cCapital);
            cCapital++;

            }
            
        }
        printf("\n");
        cCapital = 'A';
        cSmall = 'a';
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