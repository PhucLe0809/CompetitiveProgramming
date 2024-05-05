#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    int inp[n/k][k];
    for (int i = 0; i < n/k; i++){
        for (int j = 0; j < k; j++){
            cin >> inp[i][j];
        }
    }
    int answer = 0;
    int one, two;
    for (int j = 0; j < k; j++){
        one = two = 0;
        for (int i = 0; i < n/k; i++){
            if (inp[i][j]==1) one++; else two++;
        }
        answer += min(one, two);
    }
    cout << answer;
    return 0;
}