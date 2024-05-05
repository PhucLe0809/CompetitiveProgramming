#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n;
    while (test--)
    {
        cin >> n;
        if(n <= 30) cout << "NO\n";
        else
        {
            set <int> s = {6, 10 ,14};
            vector <int32_t> ans = {6, 10, 14, 0};
            if (n - 30 == 6) {
                ans = {5, 6, 10, 15};
            } else if(n - 30 == 14) {
                ans = {6, 7, 10, 21};
            } else if(n == 40) {
                ans = {5, 6, 14, 15};
            } else {
                ans[3]= n-30;
            }
            cout << "YES\n";
            for (auto &x : ans) cout << x << " ";  
            cout << '\n';
        }      
    }
    return 0;
}