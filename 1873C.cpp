#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int answer = 0; char key;
        for (int x = 1; x <= 10; x++){
            for (int y = 1; y <= 10; y++){
                cin >> key;
                if (key == 'X'){
                    if (x == 1 || x == 10 || y == 1 || y == 10) answer += 1;
                    else{
                        if ((x==2 && 1<y && y<10) || (x==9 && 1<y && y<10)
                        || (y==2 && 1<x && x<10) || (y==9 && 1<x && x<10)) answer += 2;
                        else{
                            if ((x==3 && 2<y && y<9) || (x==8 && 2<y && y<9)
                            || (y==3 && 2<x && x<9) || (y==8 && 2<x && x<9)) answer += 3;
                            else{
                                if ((x==4 && 3<y && y<8) || (x==7 && 3<y && y<8)
                                || (y==4 && 3<x && x<8) || (y==7 && 3<x && x<8)) answer += 4;
                                else answer += 5;
                            }
                        }
                    }
                }
            }
        }
        cout << answer << '\n';
    }
    return 0;
}