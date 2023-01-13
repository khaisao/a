#include <iostream>
#include <cmath>
#define ll long long int

using namespace std;

int main(){
	ll n;
	cin>>n;
	ll dp[n+1];
	dp[0] = 1;
	dp[1] = 0;
	dp[2] = dp[3] = 1;
	for(int i = 4; i <= n; i++){
		dp[i] = dp[i-2] + dp[i-3];
	}
	cout<<dp[n];
}
