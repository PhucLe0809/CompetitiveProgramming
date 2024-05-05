#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n; cin >> n; 
    long long sum = 0;
    long long x;
    for (int i = 0; i < n; i++) cin >> x, sum += x;
    cout << (n + 1)*(n + 2)/2 - sum;
}
