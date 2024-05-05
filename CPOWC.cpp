#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n, w; cin >> n >> w;
    vector <string> inp;
    string str; int32_t j;
    for (int i = 0; i < n; i++){
        cin >> str;
        j = 0;
        while (j < w-1){
            if (str[j]==str[j+1] && str[j]=='T'){
                str[j]='P'; str[j+1]='C';
                j++;
            }
            j++;
        }
        inp.push_back(str);
    }
    for (int i = 0; i < n; i++)
        cout << inp[i] << '\n';
    return 0;
}