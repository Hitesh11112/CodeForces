#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while( t-- ) {
        int n; cin >> n;
        string s; cin >> s;
        int magicAns = 0, ans=0;
        for(int index =0; index <= n; ++index) {
            if(index-1 >= 0 && index+1 < n ){
                if(s[index] == '.' && s[index-1] == '.' && s[index+1] == '.'){
                    magicAns = 2;
                }
            }
            if(s[index] == '.') ans +=1;
        }
        if(magicAns) cout << magicAns << '\n';
        else cout << ans << '\n';
    }

    return 0;
} 
