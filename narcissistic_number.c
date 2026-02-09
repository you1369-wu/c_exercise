//水仙花数：一个N位正整数（N》=3），它的每个位上的数字的n次幂之和等于它本身
#include <stdio.h>
int main(){
    int N=0;
    printf("请输入一个正整数N:");
    scanf("%d",&N);
    int i;
    int start=1;
    int end;
    for(i=N;i>1;i--){
        start*=10;
    }
    end=start*10-1;
    //printf("start=%d,end=%d",start,end);
    int num=0;
    for(num=start;num<=end;num++){
        int number=num;//number会被消耗，用于计算各个位数的幂之积，num在循环中用作计数器，不可改变，否则会破坏计数器，因此需制作分身
        int num_ber=num;//储存num的值，用以与幂之积判断
        int sum=0;
        do{
            int digit=number%10;
            int t=0;
            int d=digit;
            for(t=1;t<N;t++){
                digit=digit*d;
            }//对digit乘方,也需制作digit分身，否则digit平方后再平方是四次方
            sum+=digit;//求digit乘方之和
            number/=10;
        }while(number>0);
        //printf("sum=%d",sum);
        if(num_ber==sum){
        printf("%d\n",num_ber);
        }
    }
    return 0;
}
