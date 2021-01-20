#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    vector<int>a(5, 2); // (size, initial_value)
    // for(int i=0;i<a.size();i++) 
    //     cout<<a[i]<<" ";


    vector<vector<int>>b(2);
    
    b[0].push_back(4);
    b[0].push_back(5);

    b[1].push_back(4);
    b[1].push_back(5);
    b[1].push_back(4);
    b[1].push_back(5);

    for(int i=0;i<b.size();i++){
        for(int j=0;j<b[i].size();j++)
            cout<<b[i][j]<<" ";
        cout<<"\n";
    }

    // a[0] = {2,2,2}
    // a[1] = {}

    // ..
    // a[4] = {}
}

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    solve();
}
