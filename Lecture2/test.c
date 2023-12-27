#include <stdio.h>
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
int main(){
    struct book LA;
    struct book* p_LA = &LA;
    // LA.name = "LinearAlgebra";
    //LA->Serial_number = 1145;
    strcpy(LA.type,"Textbook");
    strcpy(p_LA->name,"LinearAlgebra");
    strcpy(p_LA->author,"Genious");
    p_LA->Serial_number=1145;
    LA.price = 99;
    printf("《%s》\ntype:%s\nauthor:%s\nSerial_number:%d\nPrice:%d\n",LA.name,LA.type,p_LA->author,LA.Serial_number,p_LA->price);
}