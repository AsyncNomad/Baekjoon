#include<stdio.h>
#include<stdlib.h>
int f(int n) {
    int *fibonacci = malloc(sizeof(int) * (n + 2));
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        fibonacci[2] = 1;
        for (int i = 3; i <= n; i++) {
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }
        int result = fibonacci[n];
        free(fibonacci);
        return result;
    }
}
int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%d", f(n));
    system("pause");
}