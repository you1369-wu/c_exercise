//a[0,9],n[1,8]
//a=2,n=8,S=2+22+222+2222+...+22222222
#include <stdio.h>
int main(){
    int a,n;
    printf("输入a：");
    scanf("%d",&a);
    printf("输入n:");
    scanf("%d",&n);
    printf("%d %d",a,n);
    int sum=0;
    int i=1;
    int t=a;
    for (i=1;i<=n;i++){
        sum=sum+t;
        t=t*10+a;
    }
    printf("和为%d",sum);
    return 0;
}