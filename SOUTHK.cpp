#include <bits/stdc++.h>
#define maxarray 50005

using namespace std;
int inp[maxarray];
int to[maxarray], down[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> inp[i];
    }
    to[0] = 1;
    for (int i = 1; i < n; i++){
        if (inp[i] == to[i-1]){
            to[i] = to[i-1];
        }else{
            if (inp[i] < to[i-1]){
                to[i] = inp[i];
            }else{
                to[i] = to[i-1] + 1;
            }
        }
    }
    down[n-1] = 1;
    for (int i = n-2; i >= 0; i--){
        if (inp[i] == down[i+1]){
            down[i] = down[i+1];
        }else{
            if (inp[i] < down[i+1]){
                down[i] = inp[i];
            }else{
                down[i] = down[i+1] + 1;
            }
        }
    }
    int answer = 0;
    for (int i = 0; i < n; i++){
        answer = max(answer, min(to[i], down[i]));
    }
    cout << answer;
    return 0;
}