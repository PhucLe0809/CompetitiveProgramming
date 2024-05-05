#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int n = str.size();
    vector <int> scan(n);
    iota(scan.begin(), scan.end(), 0);
    set <string> st;
    vector <int> ind;
    do{
        string ansi = "";
        ind.clear();
        for (auto &it:scan) ind.push_back(it);
        for (int i = 0; i < n; i++) ansi += str[ind[i]];
        st.insert(ansi);
    }while (next_permutation(scan.begin(), scan.end()));
    cout << st.size() << '\n';
    for (auto &it:st) cout << it << '\n';
    return 0;
}