#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle(unsigned int wDeck[][FACES]); 
void deal(unsigned int wDeck[][FACES],char wFace[],
          char wSuit[]); 
int main(void)
{
    
    unsigned int deck[SUITS][FACES] = {0};//給每張牌初始標記0

    srand(time(NULL)); // 亂數種子
    shuffle(deck);     // 洗牌，給每張牌進行排序
    
    char suit[SUITS] =
        {"Hearts", "Dianonds", "Clubs", "Spades"};// 建立花色
    
    char face[FACES] =
        {"Ace", "Deuce", "Three", "Four",
         "Five", "Six", "Seven", "Eight",
         "Nine", "Ten", "Jack", "Queen", "King"};// 建立號碼

    deal(deck, face, suit); //
}
//
void shuffle(unsigned int wDeck[][FACES])//給每張牌進行排序
{
    
    for (size_t card = 1; card <= CARDS; ++card)
    {
        size_t row;    // 牌花色變數
        size_t column; // 牌號碼變數
        
        do
        {
            row = rand() % SUITS;//用亂數曲花色
            column = rand() % FACES;//用亂數取號碼
        } while (wDeck[row][column] != 0);//當取出牌已經被排出序號，則繼續取牌
       
        wDeck[row][column] = card;//給取出的牌序號
    }
}

void deal(unsigned int wDeck[][FACES], char wFace[],
        char wSuit[])//處理牌順序
{
    
    for (size_t card = 1; card <=CARDS; ++card)//處理每張牌
    {
        
        for (size_t row = 0; row < SUITS; ++row)//每種花色
        {
            
            for (size_t column = 0; column < FACES; ++column)//每個號碼
            {
                
                if (wDeck[row][column] == card)//如果當前檢驗的牌是當前順序，則輸出此牌
                {
                    printf("%5s of %-8s%c", wFace[column], wSuit[row],
                           card % 2 ==0 ? '\n' : '\t'); //照順序輸出牌，用兩列的格式
                }
            }
        }
    }
}
