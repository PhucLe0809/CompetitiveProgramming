#include <bits/stdc++.h>
#define limitvalue 10005
#define maxarray 105

using namespace std; 
int32_t dx[9]={-1, -1, 0, 1, 1, 1, 0, -1};
int32_t dy[9]={0, -1, -1, -1, 0, 1, 1, 1};
bool prime[limitvalue];
int32_t inp[maxarray][maxarray];
int32_t val[maxarray][maxarray];
vector <vector<map<int32_t, int32_t>>> scan(maxarray, vector <map<int32_t, int32_t>> (maxarray));

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> inp[i][j];
        }
    }
    fill(prime, prime+limitvalue, true);
    for (int i = 2; i < limitvalue; i++){
        if (prime[i]){
            for (int j = i*i; j < limitvalue; j += i){
                prime[j] = false;
            }
        }
    }
    int32_t p, cnt, temp;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (inp[i][j]==1){
                scan[i][j][1] = 0;
                continue;
            }
            p = 2; temp = inp[i][j];
            while (temp!=1){
                if (prime[p] && temp%p==0){
                    cnt = 0;
                    while (temp%p==0 && temp!=1){
                        cnt++; temp /= p;
                    }
                    scan[i][j][p] = cnt;
                }
                p++;
            }
        }
    }
    int32_t calc, u, v;
    for (int i = 2; i < n; i++){
        for (int j = 2; j < n; j++){
            map <int32_t, int32_t> mp;
            for (int t = 0; t < 8; t++){
                u=i+dx[t]; v=j+dy[t];
                for (auto x:scan[u][v]){
                    mp[x.first] += x.second;
                }
            }
            calc = 1;
            for (auto it:mp){
                calc *= (it.second+1);
            }
            val[i][j] = calc;
        }
    }
    int32_t maxx = val[2][2];
    int32_t row, col;
    row = col = 2;
    for (int i = 2; i < n; i++){
        for (int j = 2; j < n; j++){
            if (val[i][j]>maxx){
                maxx = val[i][j];
                row = i; col = j;
            }
        }
    }
    cout << row << " " << col << '\n';
    return 0;
}