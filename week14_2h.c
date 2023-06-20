#include <stdio.h>
#include <stdlib.h>

void our_split_by_Array(char str_arr[][10],char *str,char target){
    char *ptr = str;
    char *ptr_target=ptr;
    char *temp_ptr = NULL;
    int len_1=0,len_2=0;
    while(*ptr!=target && *ptr!='\0'){
        len_1++;
        ptr++;
    }
    ptr_target = ptr;
    while(*ptr!='\0'){
        len_2++;
        ptr++;
    }
    ptr = str;
    temp_ptr = str_arr[0];
    while(ptr != ptr_target){
        *temp_ptr = *ptr;
        temp_ptr++;
        ptr++;
    }
    *temp_ptr = '\0';
     temp_ptr = str_arr[1];
    ptr = ptr_target;
    while(*ptr != '0'){
        *temp_ptr = *ptr;
        temp_ptr++;
        ptr++;
    }
    *temp_ptr = '\0';
}

int main(int argc, char *argv[]){
	char str_array[10][10],s[1000];
    gets(s);
	our_split_by_Array(str_array,s,',');
    
    printf("%s\n",str_array[0]);
    printf("%s\n",str_array[1]);
    return 0;
}
