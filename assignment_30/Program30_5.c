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
void MaxDigit(PNODE First)
{
    
    int iMaxDigit = 0;
    
    int iTemp = 0;
    int iDigit = 0;
        
    
    while(First != NULL)
    { 
         iTemp = First->data;
            iMaxDigit = iTemp%10;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > iMaxDigit)
            {
                iMaxDigit = iDigit;
            }
            
            iTemp = iTemp /10;
            
        

            
        }
            printf("%d \t",iMaxDigit);
        
        

        
        
           
        First = First -> next;
    }

    
    
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;
    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);
    InsertFirst(&Head,51);
    
    Display(Head);



    MaxDigit(Head);

    

    
    return 0;
}
