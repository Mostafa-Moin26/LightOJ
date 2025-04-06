// Problem link --->
https://lightoj.com/problem/circle-in-square

// Solution 

#include <bits/stdc++.h>
#define pi 2 * acos(0.0)

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    double r, ans, t;
    int i = 1;

    cin >> t;

    while (t--)
    {
        cin >> r;

        ans = pow(r + r, 2) - (pi * pow(r, 2));

        printf("Case %d: %.2lf\n", i++, ans);
    }
    return 0;
}