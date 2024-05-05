#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, answer, a, b, x;
    while (test--){
        cin >> n;
        answer = a = b = 0;
        vector <int> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i];
            if (inp[i]==1) a++;
            else{
                b += a; a = 0;
            }
            x = (b!=0)?(b/2+1):(0);
            answer = max(answer, a+x);
        }
        cout << answer << '\n'; 
    }
    return 0;
}