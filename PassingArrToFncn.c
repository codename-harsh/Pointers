#include <stdio.h>

void print(int *a, int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main() {
    int arr[] = {10, 20, 30, 40};
    print(arr, 4);
    return 0;
}
