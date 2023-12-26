#include <stdio.h>
int main(){
    int integer_arr[4] = {0x44434241,2,3,4};
    char* error_p = &integer_arr;
    int* correct_p = &integer_arr;
    for(int i=0;i<4;i++){
        printf("error_pointer+%d: %c %p  ",i,*(error_p+i),error_p+i);
        printf("correct_pointer+%d: %d %p\n",i,*(correct_p+i),correct_p+i);
    }
    return 0;
}