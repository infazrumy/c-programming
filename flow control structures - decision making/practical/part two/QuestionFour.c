#include <stdio.h>

//printing half pyramid
int main(){

    for(int x = 1; x<=5; x++){
        for(int y = 1; y<=x; y++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}