#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int x = 0, b = 0;   // 입력받은 숫자 x에 대해 b진법 계산
    int n = 0;  // b진법으로 변환했을 때의 자릿수
    char minus_flag = 0; // x < 0, b > 0인 경우 flag 1로 변환
    scanf("%d %d", &x, &b);

    if (x == 0) {
        printf("0");
        system("pause");
        return 0;
    }
    if (x < 0 && b > 0) {
        minus_flag = 1;
        printf("-");
        x = -x;
    }

    int y = x;
    while (y != 0) {
        if (y < 0) {
            double co = (double)y / b; // 나눗셈 결과의 실수형
            y = (int)ceil(fabs(co));
        }
        else {
            y /= b;
        }
        n += 1;
    }

    int *coefficient = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
        if (x < 0) {
            double co = (double)x / b; // 나눗셈 결과의 실수형
            coefficient[i] = x - (int)ceil(fabs(co)) * b; // 음수에서 나눌 경우 나눗셈 결과에 절댓값 후 올림으로 몫 계산 후 나머지 계산
            x = (int)ceil(fabs(co));
            //printf("** x < 0 c: %d, s: %d **\n", x, coefficient[i]);
        }
        else {
            coefficient[i] = x - (x / b) * b;
            x /= b;
            //printf("** x > 0 c: %d, s: %d **\n", x, coefficient[i]);
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        printf("%d", coefficient[i]);
    }

    free(coefficient);
    system("pause");
    return 0;
}