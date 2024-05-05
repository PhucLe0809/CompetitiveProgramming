#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, sum;
    while (test--){
        cin >> n;
        sum = a = b = 0;
        for (int i = 1; sum < n; i++){
            if ((i%2!=0 && ((i+1)/2)%2!=0)
            || (i%2==0 && (i/2)%2==0))
                a += min(n-sum, i);
            else b += min(n-sum, i);
            sum += i;
        }
        cout << a << " " << b << '\n';
    }
    return 0;
}