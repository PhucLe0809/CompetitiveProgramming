#include <bits/stdc++.h>

using namespace std;

bool valid(int r, int c){
    return r >= 0 && r < 3 && c >= 0 && c < 3;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int grid[3][3], ans[3][3];
    for(int i = 0 ;i < 3; i++){
        for(int j = 0; j < 3; j++){
            ans[i][j] = 1;
        }
    }
    for(int i = 0 ;i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> grid[i][j];
            if (grid[i][j] % 2){
                ans[i][j] = !ans[i][j];
                if(valid(i-1,j)) ans[i-1][j] = !ans[i-1][j];
                if(valid(i,j+1)) ans[i][j+1] = !ans[i][j+1];
                if(valid(i+1,j)) ans[i+1][j] = !ans[i+1][j];
                if(valid(i,j-1)) ans[i][j-1] = !ans[i][j-1];
            }
        }
    }
    for(int i = 0 ;i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<ans[i][j];
        }
        cout<<'\n';
    }
    return 0;
}