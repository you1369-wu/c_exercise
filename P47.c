//P47
//数的拼装与组合
//给定不超过6的正整数A，考虑从A开始的连续四个数字。请输出所有由他们组成的无重复数字的三位数
//输出要求，每六个换一行，且行末不能有空格：用计数器
#include <stdio.h>
int main(){
    int A;
    printf("请输入不超过6的正整数：");
    scanf("%d",&A);
    int bai;
    int num;
    int cnt;
    for(bai=A;bai<=A+3;bai++){
        int shi=0;
        for(shi=A;shi<=A+3;shi++){
            if(bai!=shi){
                int ge=0;
                for(ge=A;ge<=A+3;ge++){
                    if(ge!=bai&&ge!=shi){
                        num=bai*100+shi*10+ge;
                        cnt++;
                        if(cnt%6==0){
                            printf("%d\n",num);
                        }else{
                        printf("%d ",num);}
                    }
                }
            }
        }
    }
    return 0;
}