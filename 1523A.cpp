#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, m;
    string str;
    while (test--){
        cin >> n >> m >> str;
        scan.clear();
        for (int i = 0; i < n; i++){
            if (str[i]=='1') scan.push_back(i);
        }
        if (scan.size()==0){
            cout << str << '\n'; continue;
        }
        for (int i = scan[0]-1; i >= max(scan[0]-m, 0); i--)
            str[i] = '1';
        for (int i = scan[scan.size()-1]+1; i < min(scan[scan.size()-1]+m+1, n); i++)
            str[i] = '1';
        for (int i = 1; i < scan.size(); i++){
            if (scan[i]-scan[i-1]<3) continue;
            for (int j = 1; j <= m; j++){
                if (scan[i-1]+j>=scan[i]-j) break;
                str[scan[i-1]+j] = str[scan[i]-j] = '1';
            }
        }
        cout << str << '\n';
    }
    return 0;
}