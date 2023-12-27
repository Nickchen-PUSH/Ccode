#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// struct tag {
//     member-list
//     member-list
//     member-list  
//     ...
// } variable-list ;
//思考：tag、member-list、variable-list哪些是可选的
struct book
{
    char type[10];
    char name[100];
    char author[10];
    int Serial_number;
    int price;
};


// typedef struct{
//     member-list
//     member-list
//     member-list  
//     ...
//} struct_name;
typedef struct{
    char type[10];
    char name[100];
    char author[10];
    int Serial_number;
    int price;
} BOOK;

int main(){
    BOOK LA = {"Textbook","LinearAlgebra","Genious",1145,99};
    BOOK* p = &LA;
    struct book* pointer_LA = (struct book*)malloc(sizeof(struct book));
    //pointer_LA->name = "LinearAlgebra";错误
    //pointer_LA.Serial_number = 1145;错误
    strcpy(pointer_LA,"Textbook");
    strcpy(pointer_LA->name,"LinearAlgebra");
    strcpy(pointer_LA->author,"Genious");
    pointer_LA->Serial_number=1145;
    pointer_LA->price = 99;
    printf("《%s》\ntype:%s\nauthor:%s\nSerial_number:%d\nPrice:%d\n",pointer_LA->name,pointer_LA->type,pointer_LA->author,pointer_LA->Serial_number,pointer_LA->price);
    return 0;
}