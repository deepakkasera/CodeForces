#include <bits/stdc++.h>
using namespace std;
bool compare (pair<int,int> p1 , pair<int,int>p2)
{
 	return p1.second < p2.second;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	std::vector<pair<int,int> > v(n);
	for (int i = 0; i < n; ++i){
       cin>>v[i].second;
       v[i].first = i+1;     
	}
    sort(v.begin(), v.end(),compare);
    int count=0;
    int a,b,c,d;
    for (int i = 0; i < n-1; ++i)
    {
    	if(v[i].second == v[i+1].second){
    		count++;
            if(count == 1)  a=i,b=i+1;
            if(count == 2)  c=i,d=i+1;
    	}
    }	
    if(count >= 2) {
    	cout<<"YES\n";
    	for(int i=0;i<n;i++)  cout<<v[i].first<<" ";
    	cout<<"\n";
        swap(v[a],v[b]);
        for(int i=0;i<n;i++)  cout<<v[i].first<<" ";
        cout<<"\n";
        swap(v[c],v[d]);
        for(int i=0;i<n;i++)  cout<<v[i].first<<" ";
        return 0;
    }
    cout<<"NO";
	return 0;
}