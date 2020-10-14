#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1,n2;
	cin>>n1>>n2;
	while(n2--)
	{
	    int r=n1%10;
	    if(r==0)
	    {
	        n1=n1/10;
	    }
	    else
	    {
	        n1=n1-1;
	    }
	    
	}
	cout<<n1<<endl;
	return 0;
}
