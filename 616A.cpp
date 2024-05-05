#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string a, b; cin >> a >> b;
    int m = max(a.size(), b.size());
    for (int i = 0; i < a.size(); i++){
        if (a[i]!='0'){
            a = a.substr(i, a.size()-i);
            break;
        }
    }
    for (int i = 0; i < b.size(); i++){
        if (b[i]!='0'){
            b = b.substr(i, b.size()-i);
            break;
        }
    }
    if (a[0]=='0') a="0";
    if (b[0]=='0') b="0";
    if (a.size()<b.size() || a.size()==0) cout << "<";
    else if (a.size()>b.size() || b.size()==0) cout << ">";
        else{
            if (a<b) cout << "<";
            else if (a>b) cout << ">"; else cout << "=";
        }
    return 0;
}