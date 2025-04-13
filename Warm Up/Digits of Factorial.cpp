#include<bits/stdc++.h>
using namespace std;

#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int              long long


vector<double> precompute_log_factorials(int mxN) {

    vector<double> temp(mxN + 1, 0.0);

    for (int i = 1; i <= mxN; i++) {

        temp[i] = temp[i - 1] + log(i);
    }

    return temp;
}

const int mxN = 1e6; 
vector<double> log_factorials = precompute_log_factorials(mxN); 

signed main() {
    Mostafa

    int test; cin >> test;

    for (int cs = 1; cs <= test; cs++) {

        int n, b; cin >> n >> b;

        int digits;

        if (n == 0) {
            digits = 1;
        } else {

            double log_b = log(b);
            double log_n_fact = log_factorials[n];

            digits = static_cast<int> (log_n_fact / log_b) + 1;

        }

        cout << "Case " << cs << ": " << digits << endl;
    }
    return 0;
}

/*
Explaination

To determine the number of digits of a number M in base B, we can use logarithms.

1. What is Logarithm? 

A logarithm answer the question: "To what power must the base be raised 
to get a certain number?"

For example, log10(1000) = 3 because 10^3 = 1000

2. Number of Digits in Base B

The number of digits D of a positive integer M in base B is given by:

                       D=⌊logB(M)⌋ + 1
Why? 
. logB(M) tells us the highest power of B needed to represent M.
. Taking the floor (⌊⋅⌋) gives the integer part of the logarithm
. Adding 1 accounts for the units place

Example:
Let M = 1000 and B = 10

                  log10(1000) = 3 ==> ⌊3⌋ + 1 = 4 digits
Indeed, 1000 has 4 digits in base 10

3. Applying to Factorials

for N!, we need logB(N!). Directly computing N! is impractical for large N(like 10^6),
but logarithms simplify this:

                       logB(N!) = ln(N!) / lan(B)
where ln is the natural logarithm (base e).

4. Simplifying ln(N!)

Instead of computing N! directly, we use:
        
        ln(N!) = ln(1 x 2 x .... x N) = ln(1) + ln(2) + ...+ ln(N)
This sum can be precomputed for all N up to 10^6 to make queries efficient.

5. Final Formula

combining these, the numer of digits D of N! in base B is:

                       D = floor(ln(N!) / ln(B)) + 1

6. Edge Cases

. N = 0: 0! = 1, so digits = 1 for any base B >= 2.
. N = 1: 1! = 1, digits = 1.


*/