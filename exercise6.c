//printf("%d",a)a是输入，print输出
//scanf（“%d”，&a）空格是输入，a被输入内容定义作为输出
#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf("时间1是多少小时多少分钟？时间2是多少小时多少分钟？");
    scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
    int t1= hour1*60+minute1;
    int t2= hour2*60+minute2;
    int t=t2-t1;
    int a=t/60;
    int b=t%60;
    printf("时间差是：%dhours%dminutes",a,b);
    return 0;
}
