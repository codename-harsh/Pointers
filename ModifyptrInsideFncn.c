#include <stdio.h>

void change(int **p) {
    static int x = 50;
    *p = &x;
}

int main() {
    int a = 10;
    int *ptr = &a;

    change(&ptr);

    printf("Value = %d\n", *ptr);
    return 0;
}
