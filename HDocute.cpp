#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, x, y;
    while (test--){
        cin >> n;
        vector <int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector <int> neg, zero, pos;
        for (int i = 0; i < n; i++){
            m = b[i]-a[i];
            if (m==0) zero.push_back(m);
            else{
                if (m > 0) pos.push_back(m);
                else neg.push_back(m);
            }
        }
        sort(neg.begin(), neg.end(), greater<>());
        sort(pos.begin(), pos.end());
        int answer = 0;
        int i = 0, j = 0;
        while (i<neg.size() && j<pos.size()){
            if (pos[j] >= abs(neg[i])){
                answer++; i++;
            }
            j++;
        }
        answer += (pos.size()-answer + zero.size())/2;
        cout << answer << '\n';
    }
    return 0;
}