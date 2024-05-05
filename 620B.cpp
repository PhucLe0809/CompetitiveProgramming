#include <bits/stdc++.h>

using namespace std;
int digit[]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int scan(int n){
    string str = to_string(n);
    int out = 0;
    for (auto &it:str) out += digit[it-'0'];
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    int answer = 0;
    for (int i = a; i <= b; i++){
        answer += scan(i);
    }
    cout << answer;
    return 0;
}