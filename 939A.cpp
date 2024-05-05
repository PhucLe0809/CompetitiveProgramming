#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    int32_t x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x-1);
    }
    bool check = false;
    for (int i = 0; i < n && !check; i++){
        if (inp[inp[inp[i]]]==i) check = true;
    }
    if (check) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}