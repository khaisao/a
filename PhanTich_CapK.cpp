#include <iostream>
using namespace std;
const int MAX = 100;
int n, a[MAX], k_check, count;

void gen(int m, int k, int p, int c){
	if(p>=n){
		if(p==n){
			if(c>=k_check){
				count++;
			}
			return;
		}else{
			return;
		}
	}
	for(int i = m; i >= 1; i--){
		int c_tmp = c;
		a[k] = i;
		c_tmp*=i;
		gen(i, k+1, p+i, c_tmp);
	}
}
int main(){
	cout<<"N = "; cin>>n;
	cout<<"K = "; cin>>k_check;
	gen(n, 1, 0, 1);
	cout<<"So cach phan tich cap K = "<<count;
}
