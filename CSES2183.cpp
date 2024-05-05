#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    sort(inp.begin(), inp.end());
    vector <int> scan(1);
    int i = 0;
    int64_t med = 1;
    while(i < n){
        if (inp[i] > med){
            cout << med;
            return 0;
        }else{
            med += inp[i];
        }
        i++;
    }
    cout << med;
    return 0;
}