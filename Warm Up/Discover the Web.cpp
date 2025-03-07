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

signed main() {
    Mostafa

    // https://lightoj.com/problem/discover-the-web
    
    int t; cin >> t;

    for (int i = 1; i <= t; i++) {

        cout << "Case " << i << ":" << endl;
        string s;
        stack<string> backward, forward;

        string current = "http://www.lightoj.com/";
        backward.push(current);

        while (getline(cin, s) && s != "QUIT") {

            if (s[0] == 'V') {
                current = s.substr(6, s.size());
                cout << current << endl;
                backward.push(current);
                stack<string> ().swap(forward);
            } else if (s[0] == 'B') {
                if (backward.size() == 1) {
                    cout << "Ignored" << endl;
                } else {
                    forward.push(backward.top());
                    backward.pop();
                    cout << backward.top() << endl;
                }
  
            } else if (s[0] == 'F') {

                if (forward.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    cout << forward.top() << endl;
                    backward.push(forward.top());
                    forward.pop();
                }

            }
        }
    }
    return 0;
}