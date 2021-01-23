#include<bits/stdc++.h>
#define ll long long
using namespace std;

// func({x,y})  ==> (x*100 + 20*y)
// {1, 2}  func(1,2) ==> 1*100 + 20*2  ==>140  ==>x
// {2,3}  ==> y

bool cmp(pair<int,int>a, pair<int,int>b){
	return func(a)<func(b);  

	// Order of a, b in the sorted array. 
	// true  = a , b
	// false = b , a 
}

void solve(){
	// 5 4 6 23 
	// 1 2 3 4 5
	vector<int>a{4,1,-9,5};

	// sort(a.begin(), a.end());
	// reverse(a.begin(), a.end());

	// sort(a.begin(), a.end(), greater<int>());

	// sort(start, end) ==> sorts the interval [start, end)

	// sort(a.begin(), a.begin()+1);
	// for(auto x:a)	cout<<x<<" ";

	// vector<node>aa;
	// aa.push_back(node(1,2));

	vector<pair<int,int>>aa;
	aa.push_back({1,2});
	aa.push_back({5,10});
	aa.push_back({4,9});

	// Sufficient for sorting inbuilt data-types, in inc/dec order.
	sort(aa.begin(), aa.end());

	// func({x,y}) => (x*100 + 20*y)
	
	// Comparison of pairs.
	// {4,6},  {4,8}
	
	/*
		Use of Comparators

		To sort according to func({x,y}) or in any customized way, 
		or for sorting user-defined data-types like struct, class.			
	*/
	sort(aa.begin(), aa.end(), cmp);


	// lambda functions. [Give it a read] [Syntatic Sugar]

	// sort(aa.begin(), aa.end(), cmp);

	cout<<__gcd(4, 8);  // O(log(max(m,n)))


	// Ceil_values

	int x=22, y=7;	
	cout<<ceil(double(x)/(double)y)<<"\n";  

	double pi=22/7; // 3.14....... (Irrational number)
	/*
		Preciosion Error/Issue
		double 8 bytes ==> 32bits  
		(Can only store digits upto a certian limit due 
		to memory limits, rest of them are truncated.)
	*/
	
	// 4 2  ==> 2
	// 4 3  ==> 1.33  ==> 2 
	int ans = (x+y-1)/y;

	

	/*
		Small Proof
		
		x, y
		int div=x/y;  4/3 == > 1
		int rem=x%y;  4%3 == > 1
		
		int eqn = (x+y-1)/y;
		Represent x as y*div+ rem
		Substitute x in the eqn.
		eqn = (y*div + rem + y -1)/y;
		eqn = (y*div)/y + (rem+y-1)/y;
		eqn = div + (rem+y-1)/y;
	    (rem+y-1)/y will turn to 1 if rem>0.
	*/

	/*
		"\n"  vs endl
		Extra Time 
		O/P Buffer Clearing

		Interactive Problems  [Be carefull !!]  
		We query to the judge system ==> system responds with some query_result/data.
		Response from the system  will be considered as input. 
		Note: Buffer needs to be cleared for interactive problems.
		
		Preferred:  endl
		Alternative: "\n" + cout.flush();
	*/
}

main(){

	// Used for FAST I/O.
    ios_base::sync_with_stdio(false);cin.tie(NULL);
	// [Be Cautious] Don't use for interactive problems. [I/O Buffer Problems]

    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
    solve();
}
