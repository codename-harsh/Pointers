#include <stdio.h>

int main() {
    int a = 0, b = 1, *x = &a, *y = &b;

    printf("%d %d ", *x, *y);

    for(int i = 2; i < 10; i++) {
        int next = *x + *y;
        printf("%d ", next);

        *x = *y;
        *y = next;
    }
}
