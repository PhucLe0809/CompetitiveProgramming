#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    str += 'A';
    int answer = 0;
    int pivot = -1;
    for (int i = 0; i < str.size(); i++){
        if (str[i]=='A'||str[i]=='O'||str[i]=='E'||str[i]=='U'||str[i]=='I'||str[i]=='Y'){
            answer = max(answer, i-pivot); pivot = i;
        }
    }
    cout << answer;
    return 0;
}