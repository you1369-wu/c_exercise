//判断是不是素数
//break和continue
#include <stdio.h>
int main()
{
    int num=0;
    printf("请输入一个大于1的自然数，我帮你判断它是不是素数：");
    scanf("%d",&num);
    int i=0;
    int isprime =1;
    for(i=2;i<num;i++){
        if(num%i==0){
            isprime=0;
            break;//只要存在一个数能被整除就不是素数，无需再进行后边的循环 
        }
    }
    if(isprime == 1){
        printf("这个数是素数");
    }
    else{
        printf("这个数不是素数");
    }
    return 0;
}