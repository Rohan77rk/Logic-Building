#include<stdio.h>

void DisplaySchedule(char ch)
{
    switch(ch)
    {
        case 'A':
        {
            printf("Exam of division A is at 7am");
            break;
        }
        case 'B':
        {
            printf("Exam of division B is at 8.30am");
            break;
        }
        case 'C':
        {
            printf("Exam of division C is at 9.20am");
            break;
        }
        case 'D':
        {
            printf("Exam of division D is at 10.30am");
            break;
        }
        default :
        {
            printf("You have entered invalid division");
        }
    }
}
int main()
{

    char cValue = '\0';
    

    printf("Please Enter Your Division :\n");
    scanf("%c",&cValue);
    DisplaySchedule(cValue);



    return 0;
}