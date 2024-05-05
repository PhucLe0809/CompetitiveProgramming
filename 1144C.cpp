#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    map <int, int> mp;
    bool check = true;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; mp[inp[i]]++;
        if (mp[inp[i]]>2) check = false;
    }
    if (!check){
        cout << "NO\n"; return 0;
    }
    sort(inp.begin(), inp.end());
    vector <int> a, b; inp.push_back(inp.back()+1);
    for (int i = 0; i < n; ){
        if (inp[i]!=inp[i+1]) a.push_back(inp[i]);
        else{
            a.push_back(inp[i]);
            b.push_back(inp[i+1]);
            i++;
        }
        i++;
    }
    cout << "YES\n";
    cout << a.size() << '\n';
    for (auto &it:a) cout << it << " "; cout << '\n';
    cout << b.size() << '\n'; reverse(b.begin(), b.end());
    for (auto &it:b) cout << it << " "; cout << '\n';
    return 0;
}