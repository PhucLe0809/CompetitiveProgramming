#include <bits/stdc++.h>

using namespace std; 

int32_t force(int32_t num){
    int32_t multi = 1;
    for (int i = 1; multi<=num; i++){
        if (multi*2 > num) return i-1;
        else multi *= 2;
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t k;
    while (n){
        k = force(n);
        cout << k+1 << " ";
        n -= pow(2, k);
    }
    return 0;
}