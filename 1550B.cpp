#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, a, b, answer, zero, one; 
    string str;
    while (test--){
        cin >> n >> a >> b >> str;
        if (b>-1){
            cout << n*(a+b) << '\n';
            continue;
        }
        zero = one = 0;
        str += to_string('1'-str[n-1]);
        for (int i = 0; i < n; i++){
            if (str[i]!=str[i+1]){
                zero += (str[i]=='0');
                one += (str[i]=='1');
            }
        }
        answer = a*n + (min(zero, one)+1)*b;
        cout << answer << '\n';
    }
    return 0;
}