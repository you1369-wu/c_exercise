//sum函数的定义和使用
#include <stdio.h>
//编写求和函数并打印和
void sum(int begin,int end){
        int i;
        int sum=0;
        for(i=begin;i<=end;i++){
            sum=sum+i;
        }
    printf("sum=%d",sum);
    }
int main(){
    sum(10,20);
    sum(20,30);
}