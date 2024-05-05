#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a, b; cin >> n >> a >> b;
    if (n % a == 0 && n % b == 0) cout << "Co, tat ca!";
    else{
        if (n % a == 0){
            cout << "Chi chia het cho " << a << ",";
        }else{
            if (n % b == 0){
                cout << "Chi chia het cho " << b << ".";
            }else cout << "Khong chia het cho so nao ca.";
        }
    }
    return 0;
}