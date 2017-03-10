#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,m,x,j=0;
	cin>>n>>m;
	map<int,int>a;
	int k[100001];
	for(int i=0;i<n;i++)
		cin>>x,a[x]++;
	for(int i=1;i<=200000;i++)
		if(!a[i] and m>=i)
			k[j]=i,m-=i,j++;
	cout<<j<<endl;
	for(int i=0;i<j;i++)cout<<k[i]<<" ";
}