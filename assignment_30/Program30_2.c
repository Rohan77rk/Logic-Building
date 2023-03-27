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
void Pallindrome(PNODE First)
{
    
    int iRev = 0;
    int iTemp = 0;
    int iDigit = 0;
    
        
    
    while(First != NULL)
    { 
         iTemp = First->data;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iRev = (iRev*10)+iDigit;
            iTemp = iTemp /10;
        

        }
        if(iRev == First->data)
        {
            printf("%d \t",iRev);

        }
        iRev = 0;

        
        
           
        First = First -> next;
    }

    
    
}

int main()
{
    
    PNODE Head = NULL;
    InsertFirst(&Head,88);
    InsertFirst(&Head,6);
    InsertFirst(&Head,414);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    
    Display(Head);



    Pallindrome(Head);

    

    
    return 0;
}
