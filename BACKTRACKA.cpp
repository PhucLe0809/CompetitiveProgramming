#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int answer = LONG_MAX;
int arr[55][55];
bool status[55];
vector <int> best(55);

void generate_path(int &n, int &k, int id, int &sum, vector<int> &path){
    if (id > k) return;
    for (int i = 1; i <= n; i++){
        if (status[i]) continue;
        path.push_back(i); status[i] = true;
        sum += arr[path[id-2]][path[id-1]];

        if (sum >= answer){
            sum -= arr[path[id-2]][path[id-1]];
            path.pop_back(); status[i] = false;
            continue;
        }

        if (id == k){
            if (sum + arr[path[id-1]][1] < answer){
                answer = sum + arr[path[id-1]][1];
                for (int i = 0; i < k; i++) best[i] = path[i];
            }
        }else generate_path(n, k, id+1, sum, path);
        
        sum -= arr[path[id-2]][path[id-1]];
        path.pop_back(); status[i] = false;
    }
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    vector <int> path(1, 1);
    memset(status, false, sizeof(status));
    int sum = 0; status[1] = true;
    generate_path(n, k, 2, sum, path);
    cout << answer << endl;
    for (int i = 0; i < k; i++) cout << best[i] << " ";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}