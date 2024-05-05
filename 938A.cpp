#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t n; cin >> n;
    string str; cin >> str;
    int32_t i = 0;
    while (str.size()>1 && i<str.size()){
        if ((str[i]=='a'||str[i]=='o'||str[i]=='e'||str[i]=='u'||str[i]=='i'||str[i]=='y')
        && (str[i+1]=='a'||str[i+1]=='o'||str[i+1]=='e'||str[i+1]=='u'||str[i+1]=='i'||str[i+1]=='y')){
            str.erase(i+1, 1);
        }else i++;
    }
    cout << str;
    return 0;
}