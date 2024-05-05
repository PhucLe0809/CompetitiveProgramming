#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a, b;
    pair <int, int> answer = {n, n};
    for (int i = 0; i <= n/7; i++){
        b = i;
        a = (n-7*b)/4;
        if (4*a+7*b==n){
            if ((a+b<answer.first+answer.second)
            || ((a+b==answer.first+answer.second) && b<answer.second)){
                answer.first = a;
                answer.second = b;
            }
        }
    }
    if (answer.first==n) cout << -1;
    else{
        for (int i = 0; i < answer.first; i++) cout << 4;
        for (int i = 0; i < answer.second; i++) cout << 7;
    }
    return 0;
}