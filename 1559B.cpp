#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, i, j;
    string str;
    while (test--){
        cin >> n >> str;
        scan.clear();
        for (int i = 0; i < n; i++){
            if (str[i]!='?') scan.push_back(i);
        }
        if (scan.empty()) scan.push_back(0);
        for (int t = 0; t < scan.size(); t++){
            i = max(scan[t]-1, 0);
            j = min(scan[t]+1, n-1);
            while (i>=0 && str[i]=='?'){
                if (str[i+1]=='R') str[i]='B';
                else str[i]='R'; 
                i--;
            }
            while (j<n && str[j]=='?'){
                if (str[j-1]=='R') str[j]='B';
                else str[j]='R';
                j++;
            }
        }
        cout << str << '\n';
    }
    return 0;
}