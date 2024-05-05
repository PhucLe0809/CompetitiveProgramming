#include <bits/stdc++.h>
#define maxarray 1005
 
using namespace std;
int inp[maxarray][maxarray], bit[maxarray][maxarray];

void update(int i, int j, int val){
    for (int x = i; x < maxarray; x += (x&(-x))){
        for (int y = j; y < maxarray; y += (y&(-y))){
            bit[x][y] += val;
        }
    }
}
int get(int i, int j){
    int out = 0;
    for (int x = i; x > 0; x -= (x&(-x))){
        for (int y = j; y > 0; y -= (y&(-y))){
            out += bit[x][y];
        }
    }
    return out;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, q; cin >> n >> q;
    char key;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> key;
            if (key == '*'){
                inp[i][j] = 1;
                update(i, j, 1);
            }else inp[i][j] = 0;
        }
    }
    int type, x, y, z, t;
    while (q--){
        cin >> type;
        if (type == 1){
            cin >> x >> y;
            if (inp[x][y] == 1){
                inp[x][y] = 0;
                update(x, y, -1);
            }else{
                inp[x][y] = 1;
                update(x, y, 1);
            }
        }
        if (type == 2){
            cin >> x >> y >> z >> t;
            cout << get(z, t) - get(z, y-1) - get(x-1, t) + get(x-1, y-1) << '\n';
        }
    }
    return 0;
}