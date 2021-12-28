#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int s=0,d=0;
int i=0,j=n-1;
int  turn =0,max;
while(i<=j)
{
    if(arr[i]>arr[j])
    {
        max=arr[i];
        i++;
    }
    else
    {
        max=arr[j];
        j--;
    }
    if(turn%2==0)
    {
        s+=max;
    }
    else
    {
        d+=max;
    }
    turn++;
}

cout<<s<<" "<<d<<"\n";
	return 0;
}
