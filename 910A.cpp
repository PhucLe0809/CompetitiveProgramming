#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> scan;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, d; cin >> n >> d;
    string str; cin >> str;
    for (int i = 0; i < n; i++){
        if (str[i]=='1') scan.push_back(i);
    }
    int32_t cnt = 0;
    bool check = true;
    int32_t i, j; i = 0;
    while(i<scan.size()-1 && check){
        if (scan[i+1]-scan[i]>d) check = false;
        else{
            cnt++; j = i+1;
            while (j<scan.size() && (scan[j]-scan[i])<=d) j++;
            i = j-1;
        }
    }
    if (!check) cout << -1;
    else cout << cnt;
    return 0;
}