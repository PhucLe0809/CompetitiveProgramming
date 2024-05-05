#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    int answer = 0;
    for (int i = 0; i < n; ){
        if (str[i]>='a'){
            set <char> st; 
            while (str[i]>='a' && i<n){ st.insert(str[i]); i++; }
            answer = max(answer, int(st.size()));
        }else i++;
    }
    cout << answer;
    return 0;
}