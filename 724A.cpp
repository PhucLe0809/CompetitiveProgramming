#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string fir, sec; cin >> fir >> sec;
    string day[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string firstDay[12]; int a, t = 0;
    for(int j = 0; j < 7; j++)
    {
        a = j;
        for(int i = 0; i < 12; i++)
        {
            a += month[i];
            firstDay[i] = day[a % 7];
            if(i > 0 && firstDay[i] == sec && firstDay[i - 1] == fir)
                t = 1;
        }
    }
    if(t) cout << "YES";
    else cout << "NO";
    return 0;
}