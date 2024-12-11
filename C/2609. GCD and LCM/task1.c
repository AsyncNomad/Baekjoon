// 수학(최소공배수와 최대공약수), 둘 중 작은 수까지 직접 나누기, O(n)
#include<stdio.h>
#include<stdlib.h>
int main() {
    int x, y = 0;
    int gcd, lcm = 0;
    scanf("%d %d", &x, &y);
    int z = 0;
    if (x > y) {
        z = y;
    } else {
        z = x;
    }
    for (int i = 1; i <= z; i++) {
        if (x % i == 0 && y % i == 0) {
            gcd = i;
        }
    }
    lcm = x * y / gcd;
    printf("%d\n%d", gcd, lcm);
    system("pause");
}