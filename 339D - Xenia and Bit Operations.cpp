#include <bits/stdc++.h>
using namespace std;
const int N=131073;
int a[N];
struct segment{
    int value;
   int  level;
}seg[4*N];
 
void build(int ind,int l,int r)
{
    if(l>r)
    {
        return;
    }
    if(l==r)
    {
        seg[ind].value=a[l];
        seg[ind].level =1;
        return;
    }
    int mid=(l+r)/2;
    build(2*ind+1,l,mid);
    build(2*ind+2,mid+1,r);
    seg[ind].level=seg[ind*2+1].level+1;
    if(seg[ind].level&1)
    {
       seg[ind].value=seg[2*ind+1].value^seg[2*ind+2].value; 

    }
    else
    {
        seg[ind].value=seg[2*ind+1].value|seg[ind*2+2].value;
    }
    
    
}
void update(int i,int ind,int val,int l,int r)
{
    if(l>r)
    {
        return;
    }
 if(l==r)
 {
     seg[i].value=val;
 }
 else
 {
 int mid =(l+r)/2;
 if(ind>=l&&ind<=mid)
 {
 update(2*i+1,ind,val,l,mid);
 }
 else
 {
 update(2*i+2,ind,val,mid+1,r);
 }
  if(seg[i].level&1)
    {
       seg[i].value=seg[2*i+1].value^seg[2*i+2].value; 

    }
    else
    {
        seg[i].value=seg[2*i+1].value|seg[i*2+2].value;
    }
 }
    
}

int main() {
	int n,m;
	cin>>n>>m;
	int t=pow(2,n);
	for(int i=0;i<t;i++)
	{
	    cin>>a[i];
	}
	build(0,0,t-1);
	while(m--)
	{
	    int a,b;
	    cin>>a>>b;
	    update(0,a-1,b,0,t-1);
	    cout<<seg[0].value<<endl;
	}
	return 0;
}
