#include <bits/stdc++.h>
using namespace std;


bool isValid(int a, int b, int c) {
    
    int left = pow(c, 2);
    int right = pow(a, 2) + pow(b, 2);
    
    return left == right;
}
int main() {

    // https://lightoj.com/problem/higher-math
    
    int test; cin >> test;
    int arr[3];
    
    for (int i = 1; i <= test; ++i) {
         
        cin >> arr[0] >> arr[1] >> arr[2];
        
        sort(arr, arr+3);
        
        if(isValid(arr[0], arr[1], arr[2])) cout << "Case " << i << ": " << "yes" << endl;
        else cout << "Case " << i << ": " << "no" << endl;
    }
    return 0;
}
