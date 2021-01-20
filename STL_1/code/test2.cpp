#include<bits/stdc++.h>
#define ll long long
#define sq(x) x*x
using namespace std;

// push_back vs emplace_back [TODO]
/*
    x = 4+5       
    x*x = 4 + (5 * 4) +5
    4 + 20 +5
    29
*/

// Order of Insertion: 1 , 2 , 3, .... 
/*
    Skewed BST

     1 
      \
       2
        \
         3
          \
            ...
*/

void solve(){
    // vector, queue .....
    // Issertion , Deletion -- Linera Fashion  [front , back]
    // vector<int> a = {1,2,4,5}; {1,2, 3 , 4,5}
    
    // Balanced BST -- > Red Black Tree
    // Bst's height => O(logn) 
    // Inser, del, erase, find  [CRUD]
    // All CRUD operations in O(logn).

    // Ordered Keys
    set<int>s;
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(1);
    s.insert(4);

    // No duplicacy
    // for(auto x:s)   cout<<x<<" ";    
}

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    solve();
}

/*
    C++ = {C , extras}
    extras = OOPS, STL, ...
    Standard template library
*/



