//return a；从函数中返回a
//return表达式
//函数的返回值可以被送给一个新变量或者再传递给别的函数
//一个函数可以有多个return，但是单一出口最好
//没有返回值的函数要用void
#include <stdio.h>
int Isprime(int num){
        int i=2;
        int isprime=1;/*典型错误是把i和isprime在num循环外，开头定义，这样i和isprime就变成了全局变量，
        每次判断num是不是素数会受到上一个num是不是素数的影响，因此每次对num循环都要对这两个变量初始化*/
        for(i=2;i<num;i++){
            if(num%i==0){
                isprime=0;
                break;
            }
     }
     return isprime;

}
int main(){
    int num=2;
    for(num=2;num<=100;num++){
        if(Isprime(num)==1){
            printf("%d ",num);
        }
    }
    return 0;
}