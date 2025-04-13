#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.141592653589793238462
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define w(x)            int x;cin>>x;while(x--)
#define int              long long
#define pb              push_back
#define ff              first
#define ss              second
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int mxN = 1000;
vector<pair<int, int>> pre;

int countDivisors(int n) {

    int count = 0;

    for (int i = 1; i * i <= n; i++) {

        if (n % i == 0) {
            if (n / i == i) {
                count++;
            } else {
                count += 2;
            }
        }
    }

    return count;
}

void func() {

    for (int i = 1; i <= mxN; i++) {

        int divisors = countDivisors(i); 
        pre.pb({divisors, i});
    }
}

bool comp(pair<int, int> x, pair<int, int> y) {

    return x.ff == y.ff ? x.ss > y.ss : x.ff < y.ff;
}
signed main() {
    Mostafa

    // https://lightoj.com/problem/false-ordering

    int t; cin >> t;

    func();
    sort(pre.begin(), pre.end(), comp);

    for (int cs = 1; cs <= t; cs++) {

        int n; cin >> n;

        cout << "Case " << cs << ": " << pre[n - 1].ss << endl;
    }
    return 0;
}