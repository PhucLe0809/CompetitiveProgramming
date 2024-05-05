#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> height(n);
    for (int i = 0; i < n; i++) cin >> height[i];
    if (n==1){
        cout << height[0]+1; return 0;
    }
    int answer = n+height[0];
    for (int i = 0; i < n-1; i++){
        answer += abs(height[i+1]-height[i])+1;
    }
    cout << answer;
    return 0;
}