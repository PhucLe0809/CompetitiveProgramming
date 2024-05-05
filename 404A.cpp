#include <bits/stdc++.h>

using namespace std;
char arr[305][305];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    char x;
    set <char> a, b;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> x;
            if (i==j || j==n-i-1) a.insert(x);
            else b.insert(x);
        }
    }
    if (a.size()==1 && b.size()==1 && *a.begin()!=*b.begin()) cout << "YES";
    else cout << "NO";
    return 0;
}