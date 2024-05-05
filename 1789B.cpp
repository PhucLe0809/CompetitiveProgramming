#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n; bool check;
    string str, ansi;
    while (test--){
        cin >> n >> str;
        ansi = str;
        reverse(ansi.begin(), ansi.end());
        if (str == ansi) cout << "Yes\n";
        else{
            scan.clear();
            for (int i = 0; i < n/2; i++){
                if (str[i]!=ansi[i]) scan.push_back(i);
            }
            check = true;
            for (int i = 1; i<scan.size() && check; i++){
                if (scan[i]!=scan[i-1]+1) check = false;
            }
            if (check) cout << "Yes\n";
            else cout << "No\n";
        }
    }
    return 0;
}