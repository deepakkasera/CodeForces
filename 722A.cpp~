#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    int c,h,m;
    scanf("%d",&c);
    scanf("%02d:%02d",&h,&m);
    if(m > 59)  m %= 10;
    if( c==24 && h>=24 )  h%=10;
    if( c==12 ){
    	if(h>12)  h%=10;
    	if(h==0)  h=10;
    }	
    printf("%02d:%02d\n",h,m);
	return 0;
}