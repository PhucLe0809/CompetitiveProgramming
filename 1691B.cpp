#include <bits/stdc++.h>
#define maxarray 100005

using namespace std;
int arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, l; bool check;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++) cin >> arr[i];
        arr[n] = arr[n-1]+1;
        l = 0; check = true;
        vector <int> out;
        for (int r = 1; r<=n && check; r++){
            if (arr[r]!=arr[r-1]){
                if ((r-l)==1){
                    check = false; continue;
                }
                if ((r-l)%2==0){
                    for (int i = r; i > l; i--) out.push_back(i);
                }else{
                    for (int i = r; i > l+(r-l)/2+1; i--) out.push_back(i);
                    for (int i = l+(r-l)/2; i > l; i--) out.push_back(i);
                    out.push_back(l+(r-l)/2+1);
                }
                l = r;
            }
        }
        if (check) for (auto it:out) cout << it << " ";
        else cout << -1;
        cout << '\n';
    }
    return 0;
}