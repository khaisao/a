#include <bits/stdc++.h>
using namespace std;
int n;
int countWays(int n)
{
	int table[n+1];
	for(int i = 0; i < n+1; i++)	table[i] = 0;
	table[0] = 1;
	for (int i=1; i<n; i++)
		for (int j=i; j<=n; j++)
			table[j] += table[j-i];
	return table[n];
}

int main()
{
cout<<"nhap n";
cin>>n;
cout <<"so kieu phan tich la: "<< countWays(n);
return 0;
}
