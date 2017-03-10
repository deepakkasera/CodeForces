#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
int main(int argc, char const *argv[])
{
	ll x,y,n;
	cin >> x >> y >> n;
	ll f1=x,f2=y;
	n--;
	if(n%6==0){
		if(f1<0)cout<<MOD-1-(-1*(f1+1)%MOD)<<endl;
		else cout<<f1%MOD<<endl;
		return 0;
	}
	if(n%6==1){
		if(f2<0)cout<<MOD-1-(-1*(f2+1)%MOD)<<endl;
		else cout<<f2%MOD<<endl;
		return 0;
	}
	if(n%6==2){
		if(f2-f1<0)cout<<MOD-1-(-1*(f2-f1+1)%MOD)<<endl;
		else cout<<(f2-f1)%MOD<<endl;
		return 0;	
	}
	if(n%6==3){
		if((-1*f1)<0)cout<<MOD-1-(-1*(-1*f1+1)%MOD)<<endl;
		else cout<<(-1*f1)%MOD<<endl;
		return 0;	
	}
	if(n%6==4){
		if((-1*f2)<0)cout<<MOD-1-(-1*(-1*f2+1)%MOD)<<endl;
		else cout<<(-1*f2)%MOD<<endl;
		return 0;	
	}
	if(n%6==5){
		if(f1-f2<0)cout<<MOD-1-(-1*(f1-f2+1)%MOD)<<endl;
		else cout<<(f1-f2)%MOD<<endl;
		return 0;	
	}
	return 0;
}