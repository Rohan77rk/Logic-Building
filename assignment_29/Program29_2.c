#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;




void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}
void Prime(PNODE First)
{
    int iCnt = 0;
    int iSum = 0;
    int i = 0;    
    
    while(First != NULL)
    {
        for(i = 1,iCnt=0; i <= (First->data);i++)
        {
            if((First->data)%i == 0)
            {
                iCnt++; 
            }    
        }
        if(iCnt == 2)
        {
            printf("%d \t",First->data);
            
        }
           
        First = First -> next;
    }
    
    
}

int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head,89);
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);
    
    Display(Head);



    Prime(Head);

    
    return 0;
}
