#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[3];
	for(int i=0;i<3;i++)
	{
		cin>>arr[i];
	}
	if(arr[0]==arr[1]==arr[2])
	{
		cout<<"3"<<"\n";
	}
	else if(arr[0]==1 && arr[1]==1)
	{
		cout<<(arr[0]+arr[1])*arr[2]<<"\n";
	}
	else if(arr[0]==1&&arr[2]==1)
	{
		cout<<(2+arr[1])<<"\n";
	}
	else if(arr[0]==1)
	{
		cout<<(arr[0]+arr[1])*arr[2];
		
	}
	
	else if(arr[1]==1){
            int x=arr[0]+arr[1];
            int y=arr[1]+arr[2];
            int b=x*arr[2];
            int c=arr[0]*y;
            int d=max(b,c);
            cout<<d<<"\n";
    }
    else if(arr[2]==1){
        cout<<arr[0]*((arr[1])+arr[2])<<"\n";
    }
    else
    {
        cout<<(arr[0]*arr[1]*arr[2])<<"\n";
    }
    return 0;
	
}
