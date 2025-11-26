#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*funptr)(int, int) = add;
    printf("Sum = %d\n", funptr(10, 20));
    return 0;
}
