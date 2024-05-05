#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> pos, neg, zero;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, sum, a, b;
    while (test--){
        cin >> n; sum = a = b = 0;
        pos.clear(); neg.clear(); zero.clear();
        for (int i = 0; i < n; i++){
            cin >> x; sum += x;
            if (x>0){
                pos.push_back(x); a += x;
            }
            if (x<0){
                neg.push_back(x); b += x;
            }
            if (x==0) zero.push_back(x);
        }
        if (sum==0){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            if (a > abs(b)){
                for (auto it:pos) cout << it << " ";
                for (auto it:neg) cout << it << " ";
                for (auto it:zero) cout << it << " ";
            }else{
                for (auto it:neg) cout << it << " ";
                for (auto it:zero) cout << it << " ";
                for (auto it:pos) cout << it << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}