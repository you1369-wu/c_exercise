//输入数量不确定的【0，9】的数字，统计每个数字出现的次数
#include <stdio.h>
int main(){
    int num[10];
    int enter=10;
    int m=0;
    for(m=0;m<=9;m++){
        num[m]=0;
    }
    
    while(enter!=-1){
        printf("请输入数字：\n");
        scanf("%d",&enter);
        if(enter!=-1){
        num[enter]+=1;
        }
    }
    int i;
    for(i=0;i<=9;i++){
        printf("%d出现的次数是%d次\n",i,num[i]);
    }
}