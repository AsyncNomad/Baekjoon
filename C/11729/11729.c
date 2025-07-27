#include<stdio.h>
#include<math.h>

void hanoi(int n, int start, int end, int use);
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n) - 1);
    hanoi(n, 1, 3, 2);
}

void hanoi(int n, int start, int end, int use) { // move n - 1 disks from  column 1 to 2
    if (n == 1) {
        printf("%d %d\n", start, end);
        return;
    }
    hanoi(n - 1, start, use, end);
    printf("%d %d\n", start, end);
    hanoi(n - 1, use, end, start);
}