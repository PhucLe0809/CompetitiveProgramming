#include <bits/stdc++.h>

using namespace std;
vector <int64_t> scan;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t n; 
    while (test--){
        cin >> n;
        cout << int64_t(min(2*ceil(sqrt(n*1.0/4))-1, 2*ceil((-1+sqrt(n))/2))) << "\n";
    }
    return 0;
}