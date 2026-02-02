#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int a = rand()%100 + 1; // 生成1到100之间的随机数
    int count = 0;
    int guess=-1;
    //猜数并且计数
    while(guess!=a){
        printf("我已经想好了0-100中的一个数字，来猜猜看吧\n");
        scanf("%d",&guess);
        count++;
        if(guess<a){
            printf("小了\n");}
        else if(guess>a){
            printf("大了\n");
        }
        else{
            break;
        }
    }
    printf("恭喜你，猜对了！你总共猜了%d次\n",count);
    

}