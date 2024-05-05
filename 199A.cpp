#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> fibo;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t f1, f2, f;
    f2 = 0; f1 = 1; f = f1+f2;
    fibo.push_back(f2); fibo.push_back(f1);
    while (f <= n){
        fibo.push_back(f);
        f2 = f1; f1 = f;
        f = f1+f2;
    }
    bool check = false;
    for (int i = fibo.size()-1; i>=0 && !check; i--){
        if (binary_search(fibo.begin(), fibo.end(), n-fibo[i])){
            cout << 0 << " " << n-fibo[i] << " " << fibo[i];
            check = true;
        }
    }
    if (!check) cout << "I'm too stupid to solve this problem\n";
    return 0;
}