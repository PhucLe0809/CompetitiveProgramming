#include <bits/stdc++.h>

using namespace std; 
vector <pair<char, int32_t>> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; string str;
    bool check;
    while (test--){
        cin >> n >> str;
        scan.clear();
        for (int i = 0; i < n; i++){
            scan.push_back(pair<char, int32_t>(str[i], i));
        }
        sort(scan.begin(), scan.end());
        check = true;
        int i, j; i = 0;
        while (check && i<n){
            j = i+1;
            while (check && j<n && scan[i].first==scan[j].first){
                if (abs(scan[j].second-scan[i].second-1)%2 == 0)
                    check = false;
                else j++;
            }
            i++;
            while (i<j){
                for (int t = i+1; t<j && check; t++){
                    if (abs(scan[t].second-scan[i].second-1)%2 == 0)
                        check = false;
                }
                i++;
            }
        }
        if (check) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}