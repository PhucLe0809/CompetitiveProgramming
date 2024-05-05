#include <bits/stdc++.h>

using namespace std;

int mex(set <int> &st){
    int infront = 0;
    for (auto &it:st){
        if (it != infront) return infront;
        else infront++;
    }
    return infront;
}
int calc(vector <vector<int>> &scan, int &n, int &m){
    set <int> out;
    for (int j = 0; j < m; j++){
        set <int> inp;
        for (int i = 0; i < n; i++) inp.insert(scan[i][j]);
        out.insert(mex(inp));
    }
    return mex(out);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, m; cin >> n >> m;
        if (m <= 3){
            if (m == 1){
                cout << 0 << '\n';
                for (int i = 0; i < n; i++) cout << "0\n"; 
            }
            if (m == 2){
                cout << 2 << '\n';
                for (int i = 0; i < n; i++) cout << "0 1\n";
            }
            if (m == 3){
                if (n == 1){
                    cout << 2 << '\n' << "0 1 2\n";
                }
                if (n == 2){
                    cout << 3 << '\n';
                    cout << "1 0 2\n";
                    cout << "0 2 1\n";
                }
                if (n >= 3){
                    cout << 3 << '\n';
                    cout << "1 0 2\n";
                    cout << "0 2 1\n";
                    cout << "1 0 2\n";
                    for (int i = 3; i < n; i++){
                        cout << "0 2 1\n";
                    }
                }
            }
            continue;
        }
        vector <vector<int>> scan(n, vector <int> (m, 0));
        int res;
        for (int i = 0; i < min(n, m)-1; i++){
            for (int j = 0; j <= i; j++){
                scan[i][j] = i-j;
            }
            for (int j = i+1; j < m; j++){
                scan[i][j] = m - (j-i);
            }
        }
        if (m > n){
            for (int i = min(n, m)-1; i < n; i++){
                for (int j = 0; j < m; j++) scan[i][j] = m-j-1;
            }
        }else{
        for (int i = min(n, m)-1; i < n; i++){
            scan[i][0] = 0;
            for (int j = 1; j < m; j++) scan[i][j] = m-j;
        }
        }
        cout << calc(scan, n, m) << '\n';
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << scan[i][j] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}