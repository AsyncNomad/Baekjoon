//단순 재귀 활용시 시간 초과, Memorization 필요
#include<stdio.h>
#include<stdlib.h>
int fibonacci(int n, int i, int **arr) {
    if (n == 0) {
        arr[i][1] += 1;
        return 0;
    } else if (n == 1) {
        arr[i][2] += 1;
        return 1;
    } else {
        return fibonacci((n - 1), i, arr) + fibonacci((n - 2), i, arr);
    }
}
int main() {
    int n = 0;
    scanf("%d", &n);
    int **arr;
    arr = (int**)malloc(sizeof(int*) * n);

    for(int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(sizeof(int) * 3); //arr의 행마다 3개의 열 생성(입력받은 수, 0 출력 개수, 1 출력 개수 저장)
        scanf("%d", &arr[i][0]);
        arr[i][1] = 0;
        arr[i][2] = 0;
        int x = fibonacci(arr[i][0], i, arr);
    }
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", arr[i][1], arr[i][2]);
        free(arr[i]);
    }
    free(arr);
    system("pause");
}
