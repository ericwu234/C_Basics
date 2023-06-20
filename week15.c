#include <stdio.h>
#include <stdlib.h>
typedef struct num_list
{
    int number;
    struct num_list *next;
} tNumList;
typedef struct list_manager
{
    int count;
    tNumList *head;
    tNumList *tail;
} tListMng;
void add_to_head(tListMng *mng_ptr, int number);
void add_to_tail(tListMng *mng_ptr, int number);
void add_to_any(tListMng *mng_p, int number);
void print_list(tListMng *mmg_p);
int main(void)
{
    int number;
    tListMng *mng_p;
    mng_p = (tListMng *)malloc(sizeof(tListMng));
    mng_p->count = 0;
    mng_p->head = NULL;
    mng_p->tail = NULL;

    //add_to_tail(mng_p, 8);
    //add_to_tail(mng_p, 6);
    //add_to_tail(mng_p, 3);

    while (number != -99)
    {
        printf("Enter number (-99 end):");
        scanf("%d", &number);
        if (number != -99)
        {
            add_to_any(mng_p, number);
            //print_list(mng_p);
        }
    }
    print_list(mng_p);
    return 0;
}
void add_to_tail(tListMng *mng_p, int number)
{
    tNumList *new_p;
    new_p = (tNumList *)malloc(sizeof(tNumList));
    new_p->number = number;
    new_p->next = NULL;
    if (mng_p->count == 0)
    {
        mng_p->head = new_p;
    }
    else
    {
        mng_p->tail->next = new_p;
    }
    mng_p->tail = new_p;
    mng_p->count++;
}
/*void add_to_head(tListMng *mng_p, int number)
{
    tNumList *new_p;
    int temp1;
    new_p = (tNumList *)malloc(sizeof(tNumList));

    new_p->number = number;
    new_p->next = mng_p->head;

    if (mng_p->count == 0)
    {
        mng_p->tail = new_p;
    }
    else
    {
        mng_p->head = new_p;
    }

    mng_p->head = new_p;
    mng_p->count++;
}*/
void add_to_any(tListMng *mng_p, int number)
{
    tNumList *new_p, *temp1, *temp2;
    new_p = (tNumList *)malloc(sizeof(tNumList));
    temp1 = (tNumList *)malloc(sizeof(tNumList));
    temp2 = (tNumList *)malloc(sizeof(tNumList));
    new_p->number = number;
    new_p->next = NULL;

    temp1 = mng_p->head;
    temp2 = mng_p->head;

    if (mng_p->count == 0)
    {
        mng_p->head = new_p;
        mng_p->tail = new_p;
    }
    else
    {
        if (new_p->number > mng_p->head->number)
        {
            new_p->next = mng_p->head;
            mng_p->head=new_p;
        }
        else if (new_p->number < mng_p->tail->number)
        {
            mng_p->tail->next = new_p;
            mng_p->tail=new_p;
        }
        else
        {
            temp1 = temp1->next;
            while (temp1->number > new_p->number)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            temp2->next = new_p;
            new_p->next = temp1;
        }
    }

    mng_p->count++;
}
void print_list(tListMng *mng_p)
{
    tNumList *ptr;
    ptr = mng_p->head;
    while (ptr != NULL)
    {
        printf("%d", ptr->number);
        ptr = ptr->next;
        if (ptr != NULL)
        {
            printf("-->");
        }
    }
}