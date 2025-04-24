#include <stdio.h>

#define NUM 5
#define NUM2 4

int add (int a, int b) {
    return a+b;
}

int main() {
    int b = 4, a = 6;
int **ptr = &a; // address
printf("ptr = %p\n", ptr);
printf("ptr = %p\n", *ptr);

    int sum = add(NUM, NUM2);
    printf("%d", sum);
}
    
const char *ptr = &a;
char const *ptr = &b;
