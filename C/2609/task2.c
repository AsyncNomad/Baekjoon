// 수학(최소공배수와 최대공약수), 유클리드 호제법
#include<stdio.h>
#include<stdlib.h>
int main() {
    int x, y = 0;
    scanf("%d %d", &x, &y);
    int xy = x * y;
    int z = 0;
    int r = 1;
    if (x < y) {
        z = y;
        y = x;
        x = z;
    }
    while (r > 0) {
        r = x % y;
        x = y;
        y = r;
    }
    printf("%d\n%d", x, xy / x);
    system("pause");
}