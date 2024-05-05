#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a, b, c; a = b = c = 0;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x==1) a++;
        if (x==2) b++;
        if (x==3) c++;
    }
    cout << min({a+b, a+c, b+c});
    return 0;
}