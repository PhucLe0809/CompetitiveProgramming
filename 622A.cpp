#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    vector <int64_t> scan;
    int64_t cnt = 1;    
    while (cnt*(cnt+1)/2 <= n){
        scan.push_back(cnt*(cnt+1)/2);
        cnt++;
    }
    if (n-scan.back()!=0) cout << n-scan.back(); else cout << scan.size();
    return 0;
}