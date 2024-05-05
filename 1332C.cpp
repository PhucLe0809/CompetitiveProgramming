#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        string str; cin >> str;
        vector <map<char, int>> scan(k);
        for (int i = 0; i < k; i++){
            for (int j = i; j < n; j += k) scan[i][str[j]]++;
        }
        int minn, answer = 0;
        for (int i = 0; i < k/2; i++){
            minn = INT_MAX;
            for (char key = 'a'; key <= 'z'; key++){
                minn = min(minn, (n/k-scan[i][key]) + (n/k-scan[k-i-1][key]));
            }
            answer += minn;
        }
        if (k%2 != 0){
            minn = INT_MAX;
            for (char key = 'a'; key <= 'z'; key++){
                minn = min(minn, n/k-scan[k/2][key]);
            }
            answer += minn;
        }
        cout << answer << '\n';
    }
    return 0;
}