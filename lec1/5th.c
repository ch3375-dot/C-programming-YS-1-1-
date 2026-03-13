#include <stdio.h>

int main() {
    int a = 2;
    float a2 = 3.0;
    int b = 3; 
    float c = 3.0;

    printf("a % b = %d\n", a % b);
    printf("a %%% c = %f\n", (int)a % (int)c);
    printf("a2 %%% b = %f\n", (int)a2 % (int)b);
    return 0;
}