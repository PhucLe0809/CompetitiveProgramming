#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string num, scan; int answer;
    while (test--){
        cin >> num;
        answer = (num.size()-1)*9;
        scan = "";
        for (int i = 0; i < num.size(); i++) scan += num[0];
        answer += (num[0]-'0');
        if (scan>num) answer--;
        cout << answer << '\n';
    }
    return 0;
}