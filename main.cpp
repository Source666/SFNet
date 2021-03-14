#include <stdio.h>

int main() {
    int arr[] = {45, 23, 63, 62, 6, 75, 76, 24, 74, 34};
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("hi super fast net!\n");
    return 0;
}
