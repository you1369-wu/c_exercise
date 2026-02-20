//猜数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
   int exit=0;
   while(exit ==0){ 
    srand(time(NULL));
    //int key=rand()%100 + 1;//电脑想的数字
    int key=50;
    int chance=rand()%7+4;//chance要大于3次小于等于10次
    printf("本轮你有%d次机会\n",chance);
    int guess=0;
    printf("我想好了一个新数字，请猜测数字：");
    scanf("%d",&guess);
    int i=1;
    for(i=1;i<=chance;i++){
        if(guess<0){
            printf("game over\n");
            exit=1;
            break;
        }
        else if(guess==key){
            printf("bingo\n");
            if(i<=3){
                printf("lucky you\n");
                }
            else if(i>3 && i<=chance){
                printf("good guess\n");
                }
            break;
        }
        else if(guess<key){
            printf("too small\n");
        }
        else if(guess>key){
            printf("too big\n");
        }
        if(i!=chance){
        printf("请猜测数字：");
        scanf("%d",&guess);
        }
    }
    if(i>chance){
        printf("game over\n");
        exit=1;
    }
   }
    return 0;
}
