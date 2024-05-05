#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> out;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, k, sum, temp;
    while (test--){
        cin >> n >> k;
        sum = 0; out.clear();
        out.push_back(1);
        for (int i = 1; out.size()<=n; i++){ 
            temp = (n-i);
            temp = temp*(temp-1)/2;
            if (sum+temp == k) break;
            else{
                out.push_back(1);
                sum += i;
            }
        }
        if (out.size()>n) cout << "NO\n";
        else{
            cout << "YES\n";
            for (auto x:out) cout << x << " ";
            for (int i = out.size(); i < n; i++) cout << -1 << " ";
            cout << '\n';
        }
    }
    return 0;
}