#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int answer = 0;
    for (int i = 1; i <= 13; i++){
        answer += (n / int(pow(5, i)));
    }
    cout << answer;
    return 0;
}