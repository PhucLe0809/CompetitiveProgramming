#include <bits/stdc++.h>

using namespace std; 
vector <int32_t> inp;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    for (int i = 1; i <= round(sqrt(n)); i++){
        if (n%i==0){
            inp.push_back(i); 
            if (n/i!=i) inp.push_back(n/i);
        }
    }
    sort(inp.begin(), inp.end());
    // reverse(inp.begin(), inp.end());
    for (auto it:inp){
        reverse(str.begin(), str.begin()+it);
    }
    cout << str;
    return 0;
}