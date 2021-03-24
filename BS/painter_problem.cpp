// Google

/*
	We have to paint n boards of length {A1, .. An}. 

	{3, 4 , 5}

	 1 1 1  |  2 2 2 2 | 3 3 3 3 3 

	1) k painters
	2) each takes 1 unit time to paint 1 unit of board. 
	3) any painter will only paint [continuous section]s of boards.
	4) A painter could either completely paint a selected board 
		or leave it completely.

	Objective: Minimum Time.
*/

/*
	Time limit ==> Painter 
	Time limit : 20s
	[1 2 3 4 5] 6 7 8 9 10
	// Left to right []	// [continuous section]
	// Greedy [max  ( |section| ) ]
*/


// t_lim increase
// n_painters decrease

int func(int t_lim){

	for(int i=0;i<n;i++){
		if(a[i] > t_lim)	return INF;	// Impossible	
	}

	// assert(finite number of painters);

	int time_taken = 0, painter_cnt = 1;

	for(int i=0;i<n;i++){
		time_taken += a[i];

		if(time_taken > t_lim){
			painter_cnt++;
			time_taken = a[i];
			// time_taken = 0; ???
		}
	}
	return painter_cnt;
}

void solve(){	
	int l = ma(a), r = sum(a);
	// int ans = mi_time to complete painting.


	// ans = l ??  // k??  k >= n 		Best case
	// ans = r ??  // K??  k == 1		Worst case

	while(l<=r){
		int mid = (l+r)/2;
		if(func(mid) > k)	{
			l = mid + 1;
		}else{
			ans = min(ans, mid);
			r = mid - 1;
		}
	}

	// O(log(sum) * O(func))
	// O(func) = O(N)
	// cout << ans << "\n";

	// Time Complexity: O(N*log(sum))	
	// Space Complexity:  O(1)

	// Psuedo Polynomial Complexity
	int a[n];	//Static memory allocation
	vector<int>a {1,2};	// Dynamic Containers


	// Complexity 
	// a.push_back(4);	
	// new_size = a.size() + [4bytes]; 
	// Free cell memory , Lookup overhead [Operating System]
	// a.back() = 4;

	// exponentiallly allocate memory

	a.size() == 2  
	a.reserve(a.size()+1) 
	| a.reserve(a.size()*2)
	
	a.size() == 3 ||  4  
	a.size()[6] == 4 || 8
	a.size()


	// An algorithm whose worst case time complexity depends on 
	// numeric value of input (not number of inputs) is called 
	// [Pseudo-polynomial algorithm]. 

	// O(N  * 5000) // Not Pseudo-polynomial
}

signed main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
    #ifndef ONLINE_JUDGE    
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout); 
    #endif
   	solve();
    return 0;
}


// TS / Recursion
// recusrion / DP [2]
// Paradigm


// Graphs
// [DFS, BFS, Prims, SCC, Toposort]
// Recursion
// Segment tree, Lazy Propgation
// Fenwick Tree
// [DSU]  // Internship interview
