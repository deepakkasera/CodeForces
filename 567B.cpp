#include <bits/stdc++.h>
using namespace std;
int b,m[1000005],x=0,y=0;
char a;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
    while(n--){
    	cin>>a>>b;
    	if(a == '+')  m[b]=1,x++;
    	else{
    		if(m[b] == 0)  y++;
    		else { m[b]=0; x--;}
    	}
    	y=max(x,y);
    }	
    cout<<y;
	return 0;
}