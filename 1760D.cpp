#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int arr[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, c, d; bool a, b;
    while (test--){
        cin >> n; 
        for (int i = 0; i < n; i++) cin >> arr[i];
        arr[n] = arr[n-1]+1;
        vector <int> scan;
        for (int i = 1; i <= n; i++){
            if (arr[i]!=arr[i-1]) scan.push_back(arr[i-1]);
        }
        if (scan.size()<3) cout << "YES\n";
        else{
            a = true;
            for (int i = 1; i<scan.size() && a; i++){
                if (scan[i-1]>scan[i]) a = false;
            }
            b = true;
            for (int i = 1; i<scan.size() && b; i++){
                if (scan[i-1]<scan[i]) b = false;
            }
            c = d = 0;
            for (int i = 1; i<scan.size()-1 && c<2; i++){
                if (scan[i-1]>scan[i] && scan[i]<scan[i+1]){
                    c++;
                }
                if (scan[i-1]<scan[i] && scan[i]>scan[i+1]){
                    d++;
                }
            }
            if (a || b || (c==1 && d==0)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}