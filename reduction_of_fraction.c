//p53约分最简分式
#include <stdio.h>
int main(){
    int a,b,t,A,B;
    printf("请输入分式a/b：");
    scanf("%d/%d",&a,&b);
    A=a;
    B=b;
    while(b!=0){
        t=a;
        a=b;
        b=t%b;
    }
    printf("分子分母的gcd=%d\n",a);
    B=B/a;
    A=A/a;
    if(B==1){
        printf("约分后的数是：%d",A);
    }
    else{
        printf("约分后的分式是：%d/%d",A,B);
    }
    return 0;
}