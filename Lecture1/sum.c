#include <stdio.h>
int sum(int num){
    if(num==1){
        return 1;
    }
    return num+sum(num-1);
}
void sum_p(int* num_p){
    int num = *num_p;
    for(int i=1;i<num;i++){
        *num_p+=i;
    }
}
int main(){
    //printf("%d\n",sum(5));
    int x=5;
    int* p = &x;
    sum_p(p);
    printf("%d\n",*p);
}