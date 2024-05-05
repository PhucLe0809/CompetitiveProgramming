#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        char arr[3][3];
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                cin >> arr[i][j];
            }
        }
        bool a, b, c; a = b = c = 1;
        for (int i = 0; i<3 && a*b*c!=0; i++){
            set <int> st;
            for (int j = 0; j < 3; j++) st.insert(arr[i][j]);
            if (st.size()==1 && *st.begin()!='.'){
                if (*st.begin() == 'X') a = 0;
                if (*st.begin() == 'O') b = 0;
                if (*st.begin() == '+') c = 0;
            }
        }
        for (int j = 0; j<3 && a*b*c!=0; j++){
            set <int> st;
            for (int i = 0; i < 3; i++) st.insert(arr[i][j]);
            if (st.size()==1 && *st.begin()!='.'){
                if (*st.begin() == 'X') a = 0;
                if (*st.begin() == 'O') b = 0;
                if (*st.begin() == '+') c = 0;
            }
        }
        if (a*b*c!=0){
            set <int> st;
            for (int i = 0; i < 3; i++) st.insert(arr[i][i]);
            if (st.size()==1 && *st.begin()!='.'){
                if (*st.begin() == 'X') a = 0;
                if (*st.begin() == 'O') b = 0;
                if (*st.begin() == '+') c = 0;
            }
        }
        if (a*b*c!=0){
            set <int> st;
            for (int i = 0; i < 3; i++) st.insert(arr[i][3-i-1]);
            if (st.size()==1 && *st.begin()!='.'){
                if (*st.begin() == 'X') a = 0;
                if (*st.begin() == 'O') b = 0;
                if (*st.begin() == '+') c = 0;
            }
        }
        if (a*b*c == 1) cout << "DRAW\n";
        else{
            if (!a) cout << "X\n";
            if (!b) cout << "O\n";
            if (!c) cout << "+\n";
        }
    }
    return 0;
}