#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int n, sum = 1;
	cin>>n;
	
	for(int i = 0; i < n; ++i) {
		
		for(int s = 1; s <= n-i+1; ++s) {
			cout<<" ";
		}
		for(int j = 0; j < sum; ++j) {
			cout<<"*";
		}
		cout<<endl;
		sum += 2;
	}
	
	sum = 1;
	for(int i = 0; i < n + 1; ++i) {
		for(int s = 1; s <= n-i+1; ++s) {
			cout<<" ";
		}
		for(int j = 0; j < sum; ++j) {
			cout<<"*";
		}
		cout<<endl;
		sum += 2;
	}
	for(int s = 1; s <= n+1; ++s) {
			cout<<" ";
	}
	cout<<"*"<<endl;
	for(int s = 1; s <= n+1; ++s) {
			cout<<" ";
	}
	cout<<"*"<<endl;
	
	return 0;
}
