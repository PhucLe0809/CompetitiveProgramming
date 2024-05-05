#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string str, ansi;
    int i;
    while (test--){
        cin >> str;
        ansi = ""; i = 0;
        while (i < str.size()){
            if (i<str.size()-1 && str[i]==str[i+1]){
                i++;
            }else ansi += str[i];
            i++;
        }
        sort(ansi.begin(), ansi.end());
        ansi.erase(unique(ansi.begin(), ansi.end()), ansi.end());
        cout << ansi << '\n';
    }
    return 0;
}