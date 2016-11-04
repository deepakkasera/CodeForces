#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	int d,sumTime,p=0,q=0;
	cin>>d>>sumTime;
	int minTime[d],maxTime[d];
	for(int i=0;i<d;i++){
		cin>>minTime[i]>>maxTime[i];
		p+=minTime[i];
		q+=maxTime[i];
	}
	if(sumTime>q || sumTime<p)  cout<<"NO";
	else {
		cout<<"YES"<<"\n";
		for (int i = 0; i < d ; ++i)
		{
			cout<<min(maxTime[i],sumTime-p+minTime[i])<<" ";
			sumTime-=min(maxTime[i],sumTime-p+minTime[i]);
			p-=minTime[i];
		}
	} 
	return 0;
}