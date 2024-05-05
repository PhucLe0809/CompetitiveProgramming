#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int64_t multi = 1;
    scan.push_back(multi);
    for (int i = 1; i < 32; i++){
        multi *= 2; scan.push_back(multi);
    }
    int64_t n, pos;
    while (test--){
        cin >> n;
        pos = upper_bound(scan.begin(), scan.end(), n)-scan.begin();
        cout << n*(n+1)/2-2*int64_t(pow(2, pos)-1) << '\n';
    }
    return 0;
}