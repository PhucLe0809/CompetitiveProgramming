#include<bits/stdc++.h>
using namespace std;
int64_t x[505], dis[505][505], answer[505];

int main(){
	int n; cin >> n;
	for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> dis[i][j];
        }
    }
	for (int i = 0; i < n; i++){
        cin >> x[i], x[i]--;
    }
	for (int k = n-1; k >= 0; k--){
		for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                dis[i][j] = min(dis[i][j], dis[i][x[k]]+dis[x[k]][j]);
            }
        }
		for (int i = k; i < n; i++){
            for (int j = k; j < n; j++){
                answer[k] += dis[x[i]][x[j]];
            }
        }
	}
	for (int i = 0; i < n; i++) cout << answer[i] <<" ";
    return 0;
}
  