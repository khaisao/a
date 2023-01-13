#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map <int, long long> f_n;

long long F(long long n){
	if(n==1)	return 0;
	else if(n%2==0 && n > 1){
		if(f_n[n]==0)	f_n[n] = 1 + F(n/2);
		return f_n[n];
	}
	else if(n%2==1 && n > 1){
		if(f_n[n]==0)	f_n[n] = 1 + F(3*n+1);
		return f_n[n];
	}
}

int main(){
	long long n;
	cin>>n;
	cout<<F(n);
}
