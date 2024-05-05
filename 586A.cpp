#include <bits/stdc++.h>

using namespace std;
vector <int> inp;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; inp.push_back(x);
    }
    int i = 0;
    while (i<n && inp[i]==0) i++;
    int answer = 0;
    int cnt;
    while (i<n){
        if (inp[i]){
            answer++; i++;
        }else{
            cnt = 0;
            while (i<n && !inp[i]){ cnt++; i++; }
            if (i==n) break;
            if (!(cnt>=2)) answer += cnt;
        }
    }
    cout << answer;
    return 0;
}