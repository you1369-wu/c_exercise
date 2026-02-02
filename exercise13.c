//switch case??????
#include <stdio.h>
int main()
{
    int score =0;
    printf("??????????");
    scanf("%d",&score);
    score=score/10;
    switch(score){
        case 10:
        case 9:
            printf("????\n");
            break;
        case 8:
            printf("????\n");
            break;
        case 7:
            printf("?е?\n");
            break;
        case 6:
            printf("????\n");
            break;
        default:
            printf("??????\n");
            break;
    }
    return 0;
}