#include <bits/stdc++.h>

using namespace std;

bool check(int64_t num){
    string n = to_string(num);
    vector <int64_t> digit;
    for (auto &x:n){ digit.push_back(x-'0'); }
    sort(digit.begin(), digit.end());
    digit.erase(unique(digit.begin(), digit.end()), digit.end());
    if (digit[0]==0) digit.erase(digit.begin());
    if (digit.size()==1) return true;
    for (auto &it:digit){
        if (num%it) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t num;
    while (test--){
        cin >> num;
        while (true){
            if (check(num)){
                cout << num << '\n'; break;
            }else num++;
        }
    }
    return 0;
}