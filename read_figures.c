//p53
#include <stdio.h>
#include <math.h>
int main(){
    int num=0;
    printf("输入一个整数：");
    scanf("%d",&num);
    if(num<0){
        printf("fu ");
        num=-num;
    }
    int number=num;
    int initial=1;
   while(num>9){
        num/=10;
        initial=initial*10;
    } ;//循环少跑一轮，得到正确的initial

   do{
        int digit=number/initial;
        switch(digit){
            case 0:printf("ling");break;
            case 1:printf("yi");break;
            case 2:printf("er");break;
            case 3:printf("san");break;
            case 4:printf("si");break;
            case 5:printf("wu");break;
            case 6:printf("liu");break;
            case 7:printf("qi");break;
            case 8:printf("ba");break;
            case 9:printf("jiu");break;
        }
        if(initial>9){
            printf(" ");
        }
        number=number%initial;
        initial=initial/10;
    } while(initial>0);//控制循环的条件是initial而不是number，因为number可能被整除，导致0提早出现
    return 0;
}