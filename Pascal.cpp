#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
	long long tong = 1;
	long long firstN = 1, secondN;
	int n;
	cin>>n;
	for(int i = 1; i <=n; i++){
		secondN = firstN*2;
		if(secondN>1000000000)	secondN%=1000000000;
		tong+=secondN;
		if(tong>1000000000)	tong%=1000000000;
		firstN = secondN;
	}
	cout<<tong;
}
