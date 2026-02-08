//输出100以内的素数
//循环的嵌套
#include <stdio.h>
int main(){
    int num=2;
    
    for(num=2;num<=100;num++){
        int i=2;
        int isprime=1;/*典型错误是把i和isprime在num循环外，开头定义，这样i和isprime就变成了全局变量，
        每次判断num是不是素数会受到上一个num是不是素数的影响，因此每次对num循环都要对这两个变量初始化*/
        for(i=2;i<num;i++){
            if(num%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d ",num);
        }
    }
    return 0;
}