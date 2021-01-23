#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int>dq;
	dq.push_back(10);
	dq.push_front(20);
	cout<<"First element: "<<dq.front()<<"\nLast element: "<<dq.back()<<"\n";
	dq.pop_front();
	dq.pop_back();
	cout<<dq.size()<<"\n";
}
