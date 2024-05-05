#include <bits/stdc++.h>
#define maxarray 505

using namespace std; 
int inp[maxarray];

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, key;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> inp[i];
        }
        key = -1;
        for (int i = 0; i < n; i++){
            if (inp[i]!=i+1){
                key = i+1; break;
            }
        }
        if (key!=-1){
            for (int i = 0; i < n; i++){
                if (inp[i]==key){
                    reverse(inp+key-1, inp+i+1);
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++) cout << inp[i] << " ";
        cout << '\n';
    }
    return 0;
}