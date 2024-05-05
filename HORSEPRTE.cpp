#include <bits/stdc++.h>

using namespace std; 
int32_t dx[9]={-2, -2, -1, 1, 2, 2, 1, -1};
int32_t dy[9]={1, -1, -2, -2, -1, 1, 2, 2};

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t x, y, z, t;
    cin >> x >> y >> z >> t;
    int32_t u, v;   
    for (int k = 0; k < 8; k++){
        u=x+dx[k]; v=y+dy[k];
        if (0<=u && u<=7 && 0<=v && v<=7){
            if (u==z && v==t){
                cout << k+1; return 0;
            }
        }
    }
    cout << 0;
    return 0;
}