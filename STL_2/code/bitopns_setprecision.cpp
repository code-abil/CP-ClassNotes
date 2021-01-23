#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	double x=(double)22/7;
	/*
		Requirement: precision error of ans <= 1e-9
		cout truncates after 4-5 decimal places.

		To Print fixed number of decimal places use fixed, setprecision. 
		0-Padding will be done automatically if lesser number of decimal
		places are present at first place. 
	*/

	cout<<fixed<<setprecision(10);
	cout<<x<<"\n";
	cout<<(double)5/2<<"\n";



	// Bitwise operations  & , | , ^, << , >>
	// On/Off a bit at position pos.

	// Switching ON a bit.
	int k = 13;
	/*		
		13=1101  == >> 1101  ==> 1.2^3 + 1.2^2 + 0.2^1 + 1.2^0
		k          = 1101
		(1ll<<1)   = 0010
	    k|(1ll<<1) = 1111
	*/

	// Switching OFF a bit.
	/*
		(n & ~(1<<i))   // Using Complement
		
		if(ith bit is already set)
			1101 - (1ll<<i)	
	*/

	// xor  ==>   bit1 ^ bit2  ==> 1  iff (bit1+bit2)%2 = 1

	int pow_val=pow(5,4);
	/*
		Chech whether k is of the form (2^x).
		
		Brute force ==> Check for every k = [0..32/64)
		// O(log2(x))

		x ==> 2^k  ==>  (x & (x-1))  == 0
		x      = 1000000
		x-1    = 0111111
		x&(x-1)= 0000000
		// O(1)
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
