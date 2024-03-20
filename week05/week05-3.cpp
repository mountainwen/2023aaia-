#include <stdio.h>
int main() {
    for(int i=0; i<10; i++) {///基礎型,從0開始
        printf("i是%d",i);
    }
    printf("\n");
    for(int i=1; i<=9; i++) {///進階型,從1開始
        printf("i是%d",i);
    }
    printf("\n");
    for(int i=9-1;i>=0;i--){///倒過來
        printf("i是%d",i);}
}
