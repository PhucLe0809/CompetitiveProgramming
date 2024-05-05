#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    if (n == 2 || n == 3){
        cout << "NO SOLUTION";
        return 0;
    }
    for (int i = 1; i <= n/2; i++) cout << 2*i << " ";
    for (int i = 1; i <= (n+1)/2; i++) cout << 2*i - 1 << " ";
    return 0;
}