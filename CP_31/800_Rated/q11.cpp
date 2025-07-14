#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    set<int> st;
    for(int i=0; i < n; ++i) {
        int val; cin >> val;
        st.insert(abs(val));
    }
    
    if(st.size() == 1){
        cout << *st.begin() <<'\n';
    }else{
        auto it = st.lower_bound(0);
        if(*it == 0) {
            cout << 0 << '\n';
        }else {
            if(it == st.end()) {
                --it;
                cout << abs(*it) << '\n';
            }else if (it == st.begin()) {
                cout << abs(*it) << '\n';
            }else {
                cout << abs(*it) << '\n';
            }
        }
    }    
    return 0;
} 
