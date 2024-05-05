#include <bits/stdc++.h>

using namespace std;

int convert(int num, int k){
    int out = 0;
    while (num!=0){
        out += num%k; num /= k;
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int total = 0;
    for (int i = 2; i < n; i++) total += convert(n, i);
    int gcd = __gcd(total, n-2);
    cout << total/gcd << "/" << (n-2)/gcd;
    return 0;
}