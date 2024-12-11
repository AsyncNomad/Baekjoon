#include<stdio.h>
#include<stdlib.h>
int main() {
    int n = 0;
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
    int highest = 0;

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    int **fibonacci;
    fibonacci = (int**)malloc(sizeof(int*) * (highest + 3));
    for(int i = 0; i < highest + 3; i++) {
        fibonacci[i] = (int*)malloc(sizeof(int) * 2);   //입력한 수 중에서 가장 큰 수까지에 대해 피보나치 수열 i번째 항의 0, 1 출력 개수 memorization
        fibonacci[i][0] = 0;
        fibonacci[i][1] = 0;
    }

    fibonacci[0][0] = 1;
    fibonacci[0][1] = 0;
    fibonacci[1][0] = 0;
    fibonacci[1][1] = 1;

    for (int i = 2; i < highest + 3; i++) {
        fibonacci[i][0] = fibonacci[i - 1][0] + fibonacci[i - 2][0];
        fibonacci[i][1] = fibonacci[i - 1][1] + fibonacci[i - 2][1];
    }
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", fibonacci[arr[i]][0], fibonacci[arr[i]][1]);
    }
    for (int i = 0; i < highest + 3; i++) {
        free(fibonacci[i]);
    }
    free(fibonacci);
    free(arr);
    system("pause");
}
