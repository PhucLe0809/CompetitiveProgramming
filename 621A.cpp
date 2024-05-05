#include <bits/stdc++.h>

using namespace std; 
vector <int64_t> odd;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int64_t sum, x;
    sum = 0;
    for (int i = 0; i < n; i++){
        cin >> x; sum += x;
        if (x%2!=0) odd.push_back(x);
    }
    if (odd.size()%2!=0) 
        sum -= *min_element(odd.begin(), odd.end());
    cout << sum;
    return 0;
}