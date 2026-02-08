//正序分解整数
//方法1：正-》逆-》正，但是700会变成7而不是7 0 0；
/*方法1
#include <stdio.h>
int main(){
    //取逆序
    int num=0;
    int reverse=0;
    printf("输入一个整数：");
    scanf("%d",&num);
    while(num>0){
        int digit=0;
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    };
    //对逆序再取逆序，并用空格间隔打印
    do{
        int dig=0;
        dig=reverse%10;
        reverse=reverse/10;
        if(reverse==0){
        printf("%d",dig);
        }
        else{
            printf("%d ",dig);
        }
    }while(reverse>0);
    return 0;
}
*/
//方法2：直接取从左往右取正序的数字
/*
12345/10000--1
12345%10000--2345
2345/1000--2
2345%1000--345
...
45/10--4
45%10--5
5/1=5

*/
#include <stdio.h>
#include <math.h>
int main(){
    int num=0;
    printf("输入一个整数：");
    scanf("%d",&num);
    int number=num;
    int count=0;
    int initial=1;
   while(num>9){
        count+=1;
        num/=10;
        initial=initial*10;
    } ;//循环少跑一轮，得到正确的initial
    printf("count=%d\n",count);
    printf("initial=%d\n",initial);

   do{
        int digit=number/initial;
        number=number%initial;
        initial=initial/10;
        if(initial==0){
        printf("%d",digit);
        }
        else{
        printf("%d/",digit);
        }
        printf("number=%d,initial=%d,digit=%d\n",number,initial,digit);
    } while(initial>0);//控制循环的条件是initial而不是number，因为number可能被整除，导致0提早出现
    return 0;
}