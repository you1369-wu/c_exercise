//如果先写main再写函数，，阅读有先后顺序，会error
//要把函数头提前到最前面加分号，这叫函数原型/对函数进行声明
#include <stdio.h>
void sum(int begin,int end);
int main(){
    sum(10,20);
    sum(20,30);
}
void sum(int begin,int end){
        int i;
        int sum=0;
        for(i=begin;i<=end;i++){
            sum=sum+i;
        }
    printf("sum=%d",sum);
    }