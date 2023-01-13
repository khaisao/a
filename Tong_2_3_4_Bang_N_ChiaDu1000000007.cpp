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
	dp[4] = 2;
	for(int i = 5; i <= n; i++){
		dp[i] = dp[i-2] + dp[i-3]+dp[i-4];
		dp[i] %= 1000000007;
	}
	cout<<dp[n];
}
