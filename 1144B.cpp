#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> even, odd;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, x; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x%2==0) even.push_back(x);
        else odd.push_back(x);
    }
    int32_t a = even.size();
    int32_t b = odd.size();
    if (abs(a-b)<2) cout << 0 << '\n';
    else{
        int32_t sum = 0;
        n = min(even.size(), odd.size());
        if (even.size() > odd.size()){
            sort(even.begin(), even.end());
            for (int i = 0; i < even.size()-n-1; i++) sum += even[i];
        }else{
            sort(odd.begin(), odd.end());
            for (int i = 0; i < odd.size()-n-1; i++) sum += odd[i];
        }
        cout << sum << '\n';
    }
    return 0;
}