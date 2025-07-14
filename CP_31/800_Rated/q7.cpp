#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test; cin >> test;
    while(test--) {
        int len1, len2; 
        cin >> len1 >> len2;
        
        string str1, str2;
        cin >> str1 >> str2;

        string s = str1;
        bool flag = true;
        int i =0;
        if(str1.find(str2) != string::npos) {
            cout << 0 << '\n';
        }else{
            for(i =0;i <=6; ++i) {
                s += s;
                size_t pos = s.find(str2);
                if(pos != string::npos) {
                    flag=false;
                    break;
                }
                
            }
            if(!flag) cout << i+1 << '\n';
            else cout << -1 <<'\n';  
        }

    }
    return 0;
}