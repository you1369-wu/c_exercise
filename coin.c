//用1角、2角、5角凑出10元以下的金额中的一种情况
//方法1：break智能跳出一个循环，如需跳出多个循环，需设置全局变量exit
//接力break
//方法2：goto out
#include <stdio.h>
int main(){
    int num=0;
    printf("请输入金额(10元以下)：");
    scanf("%d",&num);
    num=num*10;
    int one=0;
    int two=0;
    int five=0;
    int exit =0;
    for(one=0;one<num;one++){
        for(two=0;two<num/2;two++){
            for(five=0;five<num/5;five++){
                if(one +two*2+five*5==num){
                    printf("%d个1角+%d个2角+%d个五角\n",one,two,five);
                    exit=1;
                    break;
                    //goto out;
                }
            }
            if(exit==1){break;}
        }
        if(exit==1){break;}
    }
    //out:
    return 0;
}
