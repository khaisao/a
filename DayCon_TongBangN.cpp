#include <iostream>
using namespace std;

const int MAX = 100;
int a[MAX], n, s, count;
int f[MAX][MAX];
int c[MAX][1000];

int main(){
	
	cout<<"Nhap m = "; cin>>s;
	cout<<"Nhap n = "; cin>>n;
	for(int i = 1; i <= n; i++){
		cout<<"a["<<i-1<<"] = "; cin>>a[i];
	}
	c[0][0] = 1;
	for(int j=1; j <=s; j++)	c[0][j] = 0;
	for(int i=1; i <= n; i++){
		for(int j=0; j <=s; j++){
			c[i][j] = c[i-1][j];
			if(j >= a[i]){
				c[i][j] += c[i-1][j-a[i]];
			}
		}
	}
	cout<<"Co tat ca "<<c[n][s]<<" cach phan tich.";
	
}
