#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int64_t a, b; a = b = 0;
    bool check = true;
    int pivot = str.find('^');
    for (int i = 0; i < str.size(); i++){
        if ('0'<=str[i] && str[i]<='9'){
            if (check) a += (pivot-i)*(str[i]-'0');
            else b += (i-pivot)*(str[i]-'0');
        }
        if (str[i]=='^') check = false;
    }
    if (a<b) cout << "right";
    else if (a>b) cout << "left";
        else cout << "balance";
    return 0;
}