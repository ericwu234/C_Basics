#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SUITS 4
#define FACES 13
#define CARDS 52

void shuffle_deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[]);  
int main(void)
{
    
    unsigned int deck[SUITS][FACES] = {0};//給每張牌初始標記0

    srand(time(NULL)); // 亂數種子
         
    
    const char *suit[SUITS] =
        {"Hearts", "Dianonds", "Clubs", "Spades"};// 建立花色
    
    const char *face[FACES] =
        {"Ace", "Deuce", "Three", "Four",
         "Five", "Six", "Seven", "Eight",
         "Nine", "Ten", "Jack", "Queen", "King"};// 建立號碼
shuffle_deal(deck, face, suit);// 洗牌，給每張牌進行排序,並且發牌
    
}

void shuffle_deal(unsigned int wDeck[][FACES], const char *wFace[],
          const char *wSuit[])//洗牌並輸出牌
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
        printf("%5s of %-8s%c", wFace[column], wSuit[row],
                           card % 2 ==0 ? '\n' : '\t');//在此順序中輸出此牌，用兩列的格式
    }
}