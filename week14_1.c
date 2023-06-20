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
    char area_code[3];
    char number[9];
} tTelephone;
typedef struct celephone
{
    int company;
    char number[10];
} tCelephon;
typedef struct contact_information
{

    char name[10];
    int ways;
    union phone {
        tCelephon celephone;
        tTelephone telephone;
    };

} tCon;

int main()
{
    tCon *information;
    int times;
    char* c_company[3]={"CHT","FET","TWN"};
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
            scanf("%s", &(information + i)->telephone.area_code);
            printf("telephone number:");
            scanf("%s", &(information + i)->telephone.number);
        }
        else
        {
            printf("company number:");
            scanf("%d", &(information + i)->celephone.company);
            printf("celephone number:");
            scanf("%s", &(information + i)->celephone.number);
        }
    }
    printf("===========\n");
    for (int i = 0; i < times; i++)
    {
        printf("Name:%s\n", (information + i)->name);
        if ((information + i)->ways == 0)
        {
            printf("telephone number:%s ", (information + i)->telephone.area_code);
            printf("%s\n", (information + i)->telephone.number);
        }
        else
        {
            for (enum eCompany com = CHT; com <=TWN; com++)
            {
                if (((information + i)->celephone.company) == com)
                {

                    printf("celephone number:%s ",c_company[com-1]);
                }
            }
            printf("%s\n", (information + i)->celephone.number);
        }
    }
    return 0;
}
