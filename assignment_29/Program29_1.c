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
void Perfect(PNODE First)
{
    int iCnt = 1;
    int iSum = 0;    
    
    while(First != NULL)
    {
        for(iSum = 0, iCnt = 1; iCnt <= (First->data)/2;iCnt++)
        {
            if((First->data)%iCnt == 0)
            {
                iSum = iSum + iCnt; 
            }    
        if((First->data)==iSum)
        {
            printf("%d \t",iSum);
            break;
        }
        }
           
        First = First -> next;
    }
    
    
}

int main()
{
    PNODE Head = NULL;
    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    
    Display(Head);



    Perfect(Head);

    
    return 0;
}
