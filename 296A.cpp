#include <bits/stdc++.h>
using namespace std;
int arr[1001];
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		arr[a]++;
	}
	for(int i=0;i<=1000;i++){
		if(arr[i]>(n+1)/2){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}