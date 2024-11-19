n = int(input())
dp = [0] * n
dp[0] = 1
if n > 1:
    dp[1] = 2

for i in range(2, n):
    dp[i] = dp[i - 1] + dp[i - 2]

print(dp[n - 1] % 10007)