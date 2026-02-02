//求平均数
//方法1
/*
#include <stdio.h>
int main()
{
    int sum=0;
    int count=0;
    int num = 0;
    do{
        printf("请输入一个整数（输入-1结束）：");
        scanf("%d",&num);
        if(num==-1){
            break;
        }else{
        sum =sum+num;
        count++;
    } 
    }while(num!=-1);//等不等于-1判断了两次，浪费
    float average =(float)sum/count;
    printf("这些数的平均数就是%lf\n",average);
    return 0;
}
*/
//方法2
#include <stdio.h>
int main()
{
    int sum=0;
    int count=0;
    int num = 0;
    printf("请输入一个整数（输入-1结束）：");
    scanf("%d",&num);
    while(num!=-1){
        sum =sum+num;
        count++;
        scanf("%d",&num);//循环要想不是死循环，必须要能改变循环条件
    }
    float average =(float)sum/count;
    printf("这些数的平均数就是%lf\n",average);
    return 0;
}