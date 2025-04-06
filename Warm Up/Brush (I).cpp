// Problem link --->
https://lightoj.com/problem/brush-1

// Solution 
// Add some code
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n, i = 1, sum, dust;
    cin >> t;

    while (t--)
    {
        cin >> n;
        sum = 0;

        while (n--)
        {
            cin >> dust;
            if (dust > 0)
                sum += dust;
        }

        cout << "Case " << i++ << ": " << sum << endl;
    }
    return 0;
}