import sys

call = [[0] * 41 for _ in range(2)]

# 초기값 설정
call[0][0] = 1; call[1][0] = 0  # N=0
call[0][1] = 0; call[1][1] = 1  # N=1

# 점화식: fibonacci call(n) = fibonacci call(n - 1) + fibonacci call(n - 2)
for i in range(2, 41):
    call[0][i] = call[0][i-1] + call[0][i-2]
    call[1][i] = call[1][i-1] + call[1][i-2]

T = int(sys.stdin.readline())

for _ in range(T):
    N = int(sys.stdin.readline())
    # call[0][N], call[1][N] 순서로 접근
    print(call[0][N], call[1][N])