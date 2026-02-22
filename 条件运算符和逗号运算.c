//条件运算
#include <stdio.h>
int main(){
    int count;
    count=(count>20)?count-10:count+10;
    return 0;
}


/*
if (count>20)
    count=count-10;
else
    count=count+10;
*/
//逗号运算：逗号是所有运算中最低优先级的
//for（i=0，j=0;i<j;i++,j--）
//逗号表达式可以用于要放多个条件时使用