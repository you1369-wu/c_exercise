//\b在大部分shell里解释成回退但不删除
//\bA表示回退一个改成A
//\t到下一个制表位
//\""\表示双引号
//\''\表示单引号


#include <stdio.h>
int main(){
    printf("123\bA\n456\n");
    return 0;
} 