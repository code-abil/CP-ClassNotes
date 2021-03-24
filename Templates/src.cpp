#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define vvvi vector<vector<vector<int>>> 

// Templates
// template<typename T>

// Customised code for each and ecery data type. [Lengthy code][Prob 1]

void print(auto a){		// C++ <= 17  auto can't be used for parameters. 
}

void print(vvvi a){		// C++ <= 14/17  auto can't be used for parameters. 
}

void print(vvi a){}


void print(){}

// Code Duplicacy ==> It will lead to multiple consistency problems. [Prob2]

// output stream cout console.

// void print(int a){
// 	// cout<<a<<"\n";
// 	fout<<a<<"\n";
// }

// void print(char a){
// 	cout<<a<<"\n";
// 	fout<<a<<"\n";
// }

// void print(float a){
// 	cout<<a<<"\n";
// 	fout<<a<<"\n";
// }

// Function Signature [Function Overloading]

template<typename T>
void print(T a){
	fout<<a<<"\n";
}

template<typename T, typename TT>
class CP{
	vector<T> a;
	vector<TT> b;
};

void solve(){
	vector<vector<vector<int>>> a = {{{}}};
	auto a = {{{}}};

	vector<vector<int>> a = {{{}}};
	CP<int> node;
	CP<float, double> node;
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
