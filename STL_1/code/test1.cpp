#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int arr[10];
    arr[0]=100;
    int *p=arr;
    cout<<(*p)<<"\n";


    vector<int>a{100, 200, 300};
    /*
        a.begin()    => 100
        a.begin()+1  => 200
        a.begin()+2  => 300
        a.end()      => Garbage
    */

    // Iterators :: Pointers
    auto it = a.begin();    // Iterator.
    auto it2 = a.end();     
    cout<<(*it)<<"\n";      // Dereferencing an iterator. [For access]
    cout<<(*it2)<<"\n";     // Garbage.

    set<int> s;
    set<int>::iterator s_it=s.begin();
    // Use of *auto*. (More concise and elegant)  
    auto it3=s.begin();
    auto it4=s.end();

    set<int>ss{1,2,3};    // Initializing a set.


     
    // Set Traversal
    for(auto it:s)  cout<<it<<" ";  //for-each loops
    cout<<"\n";

    for(auto it=s.begin();it!=s.end();it++) // Conventional for loop
        cout<<(*it)<<" ";
    
    multiset<int>ms;     // Duplicacy Allowed 
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    for(auto x:ms)   cout<<x<<" ";      // 2 2 3
    cout<<"\n";

    // auto it3 = ms.find(5);  // Returns ms.end(), since 5 is not present in ms.
    
    // ms.erase(2);                        // 3
    ms.erase(ms.find(2));               // 2, 3
    for(auto x:ms)   cout<<x<<" ";     
    
    vector<int>(1000);
    vector<int>(1e9); // Not feasible  [Map ka entri]
    // Dont run the above line of code. [Stack overflow hoga]

    /*
        map<> Use Case 1:
        Requirements: 
        Q=1e5 queries either to insert/check if an element exisits.
        Range of data is around 1e18.
    */
    
    // map is a container that holds {key, value} pair.
    /*
        Default values 
        int 0 
        string ""
    */

    map<int,int>m;
    m[1]=2;
    m[1e9]+=10;

    string phrase= "Jas is called as Jas ";
    map<string,int>freq;

    string word;
    for(auto x:phrase){
        if(x==' ')  {
            freq[word]++;
            word="";
        }else{
            word+=x;
        }
    }

    // Pairs ka usage.
    for(auto x:freq)    
        cout<<x.first<<" "<<x.second<<"\n";

    if(freq["jnarutoj"])   // Automatically creates {"jnarutoj", 0}.
        cout<<"jnarutoj\n";
    
    // freq.find("jnarutoj")     [Use this to avoid the above.]
    // O(freq["jnarutoj"]) == O(freq.find("jnarutoj")) [Complexity is same.]
 
    int  _count = freq.count("Jas");
    cout<<_count<<"\n";
    
    // m.erase({1,2});

    // map, multimap        
    // set, multiset

    /* 
        Things looks good but still getting TLE ==> 
        Constant Factor of set/map could be a reason.
        O(logn * k)  k<5    
    */

    // unordered_set, unordered_map   [Unordered, Hashing] [TODO]

    // int => 4 bytes => 32 bits {2^32}
    // ll  => 64 bits => 64 bits {2^64} 1e18
}

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    solve();
}

// C++ Style Guide  [Optional] [Suggestion: Try to follow to some extent.   ]
