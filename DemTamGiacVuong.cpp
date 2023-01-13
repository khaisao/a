#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int s, count;
	cin>>s;
	for(int m = 1; m < sqrt(s/2); m++){
		for(int n = 1 + m%2; n < m; n+=2){
			int a = m*m - n*n;
			int b = 2*m*n;
			int c = m*m + n*n;
			count+=s/(a+b+c);
		}
	}
	cout<<count;
}
