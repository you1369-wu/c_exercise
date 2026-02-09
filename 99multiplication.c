//Êä³ö99³Ë·¨±í
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++){
        j=1;
        for(j=1;j<=i;j++){
            printf("%d*%d=%d",i,j,i*j);
            if(i==j){
                printf("\n");
            }
            else if(i*j<10)
            {printf("  ");}
            else{printf(" ");}
        }
    }
    return 0;
}