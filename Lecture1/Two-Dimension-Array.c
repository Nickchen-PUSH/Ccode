#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define col 4
#define row 3
int main(){
    
    char** arr;
    arr = malloc(sizeof(char*)*row);
    for (int i = 0; i < row; i++)
    {
        arr[i]=malloc(sizeof(char)*col);
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 'a'+i*(col-1)+j;
        }
        arr[i][3]=0;
    }
    printf(" ---------------------------------\n");
    for(int i=0;i<row;i++){
        printf("|%p|%p|%s|\n",&arr[i],arr[i],arr[i]);
    }
    printf(" ---------------------------------\n");
}