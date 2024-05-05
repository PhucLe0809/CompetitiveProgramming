#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m;
    string str;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        cin >> str;
        vector <pair<int, int>> a, b;
        vector <int> out(n+5);
        for (int i = 0; i < n; i++){
            if (str[i]=='1') a.push_back({arr[i], i});
            else b.push_back({arr[i], i});
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        m = a.size();
        for (int i = m-1; i >= 0; i--) out[a[i].second]=n--;
        m = b.size();
        for (int i = m-1; i >= 0; i--) out[b[i].second]=n--;
        for (int i = 0; i < str.size(); i++) cout << out[i] << " ";
        cout << '\n'; 
    }
    return 0;
}