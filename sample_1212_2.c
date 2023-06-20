#include <stdio.h>
#include <stdlib.h>
#include"list.h"

typedef char* String;
typedef String* Strings;

int offsetOfTarget(String str,char target){
    String ptr = str+1;      //if first char is target
    int offset = 1;          //so this is the least offset in this HW
    while(*ptr && *ptr!=target){
        offset++;
        ptr++;
    }
    return offset;
}

String cutToOffset(String str,int offset){
    int i;
    String temp_str = (String)malloc(sizeof(char)*(offset+1));
    for(i=0;i<offset;i++){
        temp_str[i] = str[i];
    }
    temp_str[i] = '\0';
    return temp_str;
}

Strings our_split(String str,char target){
    String str_ptr = str;
    int target_num = 0;
    Strings split_temp = NULL;
    while(*str_ptr){         //count how many target
        if(*str_ptr == target){
            target_num++;
        }
        str_ptr++;
    }
    split_temp = (Strings)malloc(sizeof(String)*(target_num+2)); //alloc

    int offset;
    int i;
    str_ptr = str;           //reset
    for(i=0;i<=target_num;i++){
        offset = offsetOfTarget(str_ptr,target); //count offset to target
        split_temp[i] = cutToOffset(str_ptr,offset); //Use offset to Cut String
        str_ptr = str_ptr+offset; //Use offset move pointer
    }
    split_temp[i] = NULL;
    return split_temp;
}

int main(int argc, char *argv[])
{
    char **test = our_split("ABC,CDF,GAB,QQQ",',');
    while(*test!=NULL){
        printf("%s\n",*test);
        test++;
    }
    return 0;
}
