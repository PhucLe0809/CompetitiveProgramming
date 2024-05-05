#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, answer;
    string a, b;
    while (test--){
        cin >> n >> a >> b;
        vector <int> scan;
        for (int i = 0; i < n; i++){
            if (a[i]!=b[i]) scan.push_back(2);
            else scan.push_back('1'-a[i]);
        }
        int i = 0; answer = 0; 
        while (i<n){
            if (scan[i]==2) answer += scan[i];
            else{
                if (i==n-1) answer += scan[i];
                else if (scan[i]+scan[i+1]==1){ answer += 2; i++; }
                    else answer += scan[i];
            }
            i++;
        }
        cout << answer << '\n'; 
    }
    return 0;
}