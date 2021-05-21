
////////////////////////////////////////////////////////////////////////////////////
//Function Name :  InsertFirst
//Paramiter     :  Address of First Pointer,Integer
//Return Value  :  None
//Description   :  It takes address of first pointer of linked list and insert integer in the linked list                              
//Author        :  Prajwal Pradeep Kadam
//Date          :  16th April 2021
//////////////////////////////////////////////////////////////////////////////////////////
#include"Header.h"

void InsertFirst(PPNODE Head,int No)
{
    PNODE newn = NULL;
    PNODE Temp =*Head;

    newn=(PNODE)malloc(sizeof(NODE));
    newn-> Data = No;
    newn-> Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else{
        while(Temp->Next!=NULL)
        {
            Temp = Temp -> Next;
        }
        Temp-> Next = newn;
        newn-> Next = NULL;
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchFirstOcc
// Parameters    : First pointer , Integer 
// Return Value  : Integer
// Description   : It takes first pointer of linked list and one integer as input and return first occurence of that integer  
// Author        : Prajwal Pradip Kadam
// Date          : 16th April 2021
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Maximum(PNODE Head)
{
    PNODE Temp=Head;
    int iMax=0;
    int SecMax=0;
    
    while(Temp != NULL)
    {
        if(Temp->Data > iMax)
        {
            SecMax = iMax;
            iMax = Temp->Data;
        }
        if((Temp->Data<iMax)&&(Temp->Data > SecMax))
        {
            SecMax=Temp->Data;
        }
    
       Temp=Temp->Next;
    }
            return SecMax;
} 
