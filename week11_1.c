#include<stdio.h>
#define SIZE 10

void bubblesort(int*const array,const size_t size);//宣告泡泡排序法的函式

int main(void)
{
    int a[SIZE]={2,6,4,8,10,12,89,68,45,37};//給陣列a值

    puts("Data items in original order");

    for(size_t i=0;i<SIZE;i++)
    {
        printf("%4d",a[i]);//輸出陣列a所有的值
    }

    bubblesort(a,SIZE);//使用泡泡排序法的函式，對陣列a的值進行排序

    puts("\nData items in ascending order");

    for(size_t i=0;i<SIZE;i++)
    {
        printf("%4d",a[i]);//輸出排序後的結果
    }

    puts("");
}
void bubblesort(int*const array,const size_t size)
{
    void swap(int*element1ptr,int*element2ptr);//宣告交換的函式
    
    for(unsigned int pass=0;pass<size-1;pass++)//再從頭到尾檢查並試著交換
    {
        for(size_t j=0;j<size-1;j++)//從頭到尾試著交換
        {
            if(array[j]>array[j+1])//如果前一個數值比後一個數值大，則使用交換函式
            {
                swap(&array[j],&array[j+1]);//使用交換的函式，把array[j]和array[j+1]的位址值放入交換函式
            }
            //array[j]的值被element2ptr指向，array[j+1]的值被element1ptr指向
        }
    }
}
void swap(int*element1ptr,int*element2ptr)//宣告一個變數element1ptr為指標，宣告一個變數element2ptr為指標
{//指標element1ptr指向array[j]的內容物，指標element2ptr指向array[j+1]的內容物
    int hold=*element1ptr;//令一個變數hold接收element1ptr的位址的內容物 //指標element1ptr指向hold內容物
    *element1ptr=*element2ptr;//使element1ptr的位址的值變成element2ptr的位址的內容物 //指標element1ptr指向指標element2ptr指向的內容物
    *element2ptr=hold;//使element2ptr的位址的內容物變成hold  //指標element2ptr指向hoid內容物
}