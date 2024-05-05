#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t a, b;
    cin >> a >> b;
    int64_t two, five; two = five = 0;
    int64_t left, right;
    int64_t pow2 = 1;
    for (int p = 1; p < 61; p++){
        pow2 *= 2;
        left = (a-1) / pow2;
        right = b / pow2;
        (right - left != 0)?(two = p):(false);
    }
    int64_t pow5 = 1;
    for (int p = 1; p < 27; p++){
        pow5 *= 5;
        left = (a-1) / pow5;
        right = b / pow5;
        (right - left != 0)?(five = p):(false);
    }
    cout << min(two, five) << '\n';
    return 0;
}