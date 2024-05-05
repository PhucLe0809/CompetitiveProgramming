#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    int n = str.size();
    vector <int> deleted(n);
    vector <int> upper, lower;
    for (int i = 0; i < (int)str.size(); i++){
        char key = str[i];
        if (key != 'b' && key != 'B'){
            if ('a' <= key && key <= 'z') lower.push_back(i);
            else upper.push_back(i);
            continue;
        }
        deleted[i]++;
        if (key == 'b' && !lower.empty()){
            deleted[lower.back()]++; lower.pop_back();
            continue;
        }
        if (key == 'B' && !upper.empty()){
            deleted[upper.back()]++; upper.pop_back();
            continue;
        }
    }
    for (int i = 0; i < (int)str.size(); i++){
        if (!deleted[i]) cout << str[i];
    }
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}