#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int a, b, id, point; id = point = 0;
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            if (a<=10 && b>point){
                id = i+1; point = b;
            }
        }
        cout << id << '\n';
    }
    return 0;
}