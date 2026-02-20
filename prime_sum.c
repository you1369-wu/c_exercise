//统计给定整数M和N区间内的素数的个数并对它求和
#include <stdio.h>
int main(){
    printf("请输入两个正整数M和N，我将给出其中的素数并对它求和：");
    int m,n;
    scanf("%d%d",&m,&n);
    if(m==1){
        m=2;//绕过对1的判断，1一定不是素数
    }
    int i;
    int sum=0;
    for(i=m;i<=n;i++){
        int num=1;
        int isprime=1;//1不进循环isprime为1。但1不是素数，所以要把1的情况单独讨论
        for(num=2;num<i;num++){
            if(i%num==0){
                isprime=0;
                break;
            }
        }
      if(isprime==1){
        printf("%d ",i);
        sum=sum+i;
    }
    }
    printf("素数之和为：%d",sum);
    return 0;
}