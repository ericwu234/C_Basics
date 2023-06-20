#include <stdio.h>
#include <stdlib.h>
enum eCompany
{
    CHT = 1,
    FET,
    TWN
};
typedef struct telephone
{
    int area_code;
    int number;
} tTelephone;
typedef struct celephone
{
    int company;
    int number;
} tCelephone;
typedef struct contact_information
{

    char name[10];
    int ways;
    union {
        tCelephone celephone;
        tTelephone telephone;
    } phone;

} tCon;
void sort(int times, tCon *info);

void swap(tCon *a, tCon *b, int times);
int main(void)
{
    tCon *information;
    int times;
    char *c_company[3] = {"CHT", "FET", "TWN"};
    printf("How many information you want to enter:");
    scanf("%d", &times);
    information = (tCon *)malloc(sizeof(tCon) * times);
    printf("company number:(1)CHT (2)FET (3)TWN \n");
    for (int i = 0; i < times; i++)
    {
        printf("Name:");
        scanf("%s", &(information + i)->name);
        printf("if you want to enter telephone enter 0,celephont enter 1 :");
        scanf("%d", &(information + i)->ways);
        if ((information + i)->ways == 0)
        {
            printf("area code:");
            scanf("%d", &(information + i)->phone.telephone.area_code);
            printf("telephone number:");
            scanf("%d", &(information + i)->phone.telephone.number);
        }
        else
        {
            printf("company number:");
            scanf("%d", &(information + i)->phone.celephone.company);
            printf("celephone number:");
            scanf("%d", &(information + i)->phone.celephone.number);
        }
    }

    sort(times, information);

    printf("===========\n");
    for (int i = 0; i < times; i++)
    {

        if ((information + i)->ways == 0)
        {
            printf("Name:%s\n", (information + i)->name);
            printf("telephone number:0%d ", (information + i)->phone.telephone.area_code);
            printf("%d\n", (information + i)->phone.telephone.number);
        }
    }
    for (int i = 0; i < times; i++)
    {
        if ((information + i)->ways == 1)
        {
            for (enum eCompany com = CHT; com <= TWN; com++)
            {
                if (((information + i)->phone.celephone.company) == com)
                {
                    printf("Name:%s\n", (information + i)->name);
                    printf("celephone number:%s ", c_company[com - 1]);
                    printf("%d\n", (information + i)->phone.celephone.number);
                }
            }
            
        }
    }
    return 0;
}
void sort(int times, tCon *info)
{
    for (int i = 0; i < times; i++)
    {
        for (int j = i; j < times; j++)
        {
            if (((info + j)->phone.telephone.area_code > (info + i)->phone.telephone.area_code) && (info + j)->ways == 0)
            {
                swap((info + i), (info + j), times);
            }
            if (((info + j)->phone.celephone.company > (info + i)->phone.celephone.company) && (info + j)->ways == 1)
            {
                swap((info + i), (info + j), times);
            }
        }
    }
}
void swap(tCon *a, tCon *b, int times)
{
    tCon *temp;
    temp = (tCon *)malloc(sizeof(tCon) * times);
    *temp = *a;
    *a = *b;
    *b = *temp;
}