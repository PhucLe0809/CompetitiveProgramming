#include <bits/stdc++.h>

using namespace std;
int black, white;
char arr[25][25];
int scan[25][25];

int main(){
	int n; cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    bool check = true;
    for (int i = 0; i < n && check; i++){
        black = white = 0;
        for (int j = 0; j < n; j++){
            if (arr[i][j]=='B') black++;
            else white++;
        }
        if (black!=white) check=false;
    }
    for (int j = 0; j < n && check; j++){
        black = white = 0;
        for (int i = 0; i < n; i++){
            if (arr[i][j]=='B') black++;
            else white++;
        }
        if (black!=white) check=false;
    }
    if (!check) cout << 0;
    else{
        for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (arr[i][j]=='B') scan[i][j]=1;
				else scan[i][j]=0;
			}
		}
		int temp;
		for (int i = 0; i < n && check; i++){
			for (int j = 0; j < n-2 && check; j++){
				temp = scan[i][j]+scan[i][j+1]+scan[i][j+2];
				if (temp==0 || temp==3) check=false;
			}
		}
		for (int j = 0; j < n && check; j++){
			for (int i = 0; i < n-2 && check; i++){
				temp = scan[i][j]+scan[i+1][j]+scan[i+2][j];
				if (temp==0 || temp==3) check=false;
			}
		}
		if (check) cout << 1; else cout << 0;
    }
	return 0;
}
