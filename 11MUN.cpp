#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    if (n < 10){
        int num = 1;
        for (int i = 1; i < n; i++) num = num*10 + 1;
        cout << num * num << endl;
        return 0;
    }
    int x = 1, lena = 1;
    while (lena < n){
        char key = (char)(x % 10 + 48);
        if (key != '8'){
            cout << key; lena++;
        }
        x++;
    }
    int y = 1, cnt = 1;
    bool test = true; char pivot;
    while (cnt <= n){
        pivot = (char)(y % 10 + 48);
        test = test && (cnt <= 10);
        if ((test) || (!test && pivot != '1')){
            cnt++;
        }
        y++;
    }
    int lenb = 0;
    while (y % 10 != pivot - '0') y--;
    while (lenb < n){
        char key = (char)(y % 10 + 48);
        bool check = (n - lenb < 10);
        if ((check) || (!check && key != '1')){
            cout << key; lenb++;
        }
        y--;
    }
    return 0;
}