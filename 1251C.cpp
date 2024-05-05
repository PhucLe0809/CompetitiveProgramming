#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    string str; cin >> str;
    vector <int> even, odd;
    for (auto &it:str){
        if ((int)it % 2 == 0) even.push_back((int)it - 48);
        else odd.push_back((int)it - 48);
    }
    int n = even.size(), m = odd.size(), i = 0, j = 0;
    while (i < n && j < m){
        cout << min(even[i], odd[j]);
        if (even[i] <= odd[j]) i++; else j++;
    }
    while (i < n) cout << even[i++];
    while (j < m) cout << odd[j++];
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}