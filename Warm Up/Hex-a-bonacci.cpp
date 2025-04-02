// Problem link ---->
https://lightoj.com/problem/hex-a-bonacci

// Add some code
#include <bits/stdc++.h>
using namespace std;
#define MOD 10000007
int a, b, c, d, e, f, n;
const long long N=1e4+10;
int dp[N];
int fn(int n) {
    if (n == 0) return a % MOD;
    if (n == 1) return b % MOD;
    if (n == 2) return c % MOD;
    if (n == 3) return d % MOD;
    if (n == 4) return e % MOD;
    if (n == 5) return f % MOD;
    
    int &res = dp[n];
    if (res != -1) {
        return res;
    }
    res =  fn(n-1) % MOD + fn(n-2) % MOD + fn(n-3) % MOD + fn(n-4) % MOD + fn(n-5) % MOD + fn(n-6) % MOD;
    
    return res;
}
int main() {
    int n, cases;
    scanf("%d", &cases);

    for (int caseno = 1; caseno <= cases; ++caseno) {
        memset(dp, -1, sizeof(dp));
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", caseno, (fn(n) + MOD) % MOD);
    }
    return 0;
}