#include<bits/stdc++.h>
#define ll long long
using namespace std;

int hash(string s){
    // Example: Sum of the characters in s.

    // ay  == 1+25 = 26
    // z   == 26
    // Eventhough ay, z are different they point to the same value. (Collision)
    // There is no hash function which can gurantee 0 collision.
    // But there are ways to resolve colllision.
    // Theoretically, Worst case Time complexity for resolving collision == O(n)
}

void solve(){

    string s = "saurabh";
    
    /*
        Example of a hash function.
        "a" ==> 1       hash(a) => 1
        "b" ==> 2
        "z" ==> 26
        "aa" ==> 27    (a*26^1 + a*26^0)
    */

    map<int,int>m;
    /*
        Keys - sorted ordered.  Red Black Tree
        Self-balancing BST
    */         
    /*
        Always consider {key, value} pair as a whole,
        when thinking about duplicates.      Example: {1,2}  {1,2}   
    */

    
    // c++ stl  (better collision resolving capabilities.)
    unordered_map<string,int>um;   // Duplicates not allowed
    // Internally uses ==> Hashing

    // {key, val}
    // string ==> hash_value

    // um[hash(str)]=val; 

    /* 
        Insertion, deletion
        Best/Avg Time Complexity: O(1)     
        Worst Case complexity : O(n) (Because of Collision)
    */
}

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    solve();
}
