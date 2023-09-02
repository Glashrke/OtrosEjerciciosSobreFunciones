#include <stdio.h>
void asteriscos(){
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    asteriscos();
    return 0;
}
