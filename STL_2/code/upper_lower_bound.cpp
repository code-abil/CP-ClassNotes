#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){

	vector<int>a{2,3,1,4};
	// Sorted order [Compulsory]   // Binary search
	sort(a.begin(), a.end());

	/*
		0-based Indexing

		1 1 2 2 3 3 5 9  arr.end()

		lower_bound(2)	 Very first element which is >= key.
		lower_bound(4)
		lower_bound(15)

		upper_bound()	 Very first element which is > key.
		strictly greater than key
	*/
	

	// Time Complexity: log2(n)

	/* 
		Syntax
		lower_bound(start_it, end_it, key) ==> returns iterator
		upper_bound(start_it, end_it, key) ==> returns iterator
	*/
	
	auto it = lower_bound(a.begin(), a.end(), 5) - a.begin();
	auto it2 = a.end() - lower_bound(a.begin(), a.end(), 5);
	auto it3 = lower_bound(a.begin(), a.end(), 5);  
	it3--;

	//it ==> a.end()
	if(it3!=a.end()){
		int data = (*it3); 
	}

	if(it3!=a.begin())
		it3--;
}

main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    solve();
}
