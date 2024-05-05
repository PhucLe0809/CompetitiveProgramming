#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_vowel(char &key){
    return (key == 'a' || key == 'e');
}
bool is_contants(char &key){
    return (key == 'b' || key == 'c' || key == 'd');
}

void solve(){
    int n; cin >> n;
    string str; cin >> str;
    vector <int> scan;
    for (int i = 0; i < n-1; i++){
        if (is_contants(str[i]) && is_contants(str[i+1])){
            scan.push_back(i);
        }
    }
    string ansi = "";
    int i = 0, t = 0;
    while (i < n){
        if (scan.empty() || t == scan.size()){
            if (i == n-3){
                int j = i;
                while (j < n) ansi += str[j], j++;
                ansi += '.'; i = j; continue;
            }
            ansi += str[i]; ansi += str[i+1]; ansi += '.';
            i += 2; continue;
        }
        if (i + 2 == scan[t] || i + 3 == scan[t]){
            int j = i;
            while (j <= scan[t]) ansi += str[j], j++;
            ansi += '.'; i = j; t++;
            continue;
        }
        ansi += str[i]; ansi += str[i+1]; ansi += '.';
        i += 2; continue;
    }
    ansi.pop_back();
    cout << ansi << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        solve();
    }
    return 0;
}