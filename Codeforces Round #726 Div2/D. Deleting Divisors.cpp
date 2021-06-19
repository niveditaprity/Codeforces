#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	     int c =0;
	   if(n&1)
	   {
	       cout<<"Bob";
	   }
	  
	   else if(!(n&(n-1)))
	   {
	      while(n!=0)
	      {
	          n=n/2;
	          c++;
	      }
	      if(c&1)
	      {
	          cout<<"Alice";
	      }
	      else
	      {
	          cout<<"Bob";
	      }
	   }
	   else{
	       cout<<"Alice";
	   }
	   cout<<"\n";
	}
	return 0;
}
