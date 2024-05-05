#include <bits/stdc++.h>

using namespace std; 

bool is_prime(int32_t num){
    for (int i = 2; i <= round(sqrt(num)); i++)
        if (num%i==0) return false;
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t i = 1;
    while (is_prime(n*i+1)) i++;
    cout << i;
    return 0;
}