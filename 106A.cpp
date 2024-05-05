#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    char key; cin >> key;
    string a, b; cin >> a >> b;
    char scan[]={'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    if (a[1]!=b[1] && a[1]!=key){
        cout << "NO\n"; return 0;
    } else if (a[1]!=b[1] && a[1]==key){
        cout << "YES\n"; return 0;
    }
    int x, y; x = y = 0;
    while (scan[x]!=a[0]) x++;
    while (scan[y]!=b[0]) y++;
    if (x>y) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}