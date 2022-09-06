#include <stdio.h>
int main(){
    printf("P0\n");
    printf("\n");
    double cou = 0;
    for(int x = 10000; x > 7; x--){
        if((x % 7) == 0){
            printf("%d, ",x);
            cou++;
        }
    }
    printf("7\n");
    printf("---\n");
    double per = cou / 100;
    printf("%.2f percent\n",per);

    return 0;
}