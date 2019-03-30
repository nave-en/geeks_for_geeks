#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t=0;
	cin>>t;
	while(t>0)
	{
int i=1,n,v=0,max=0,z=0,temp=0;
	cin>>n;
	int arr[n];
	for(int j=0;j<n;j++)
		cin>>arr[j];
		sort(arr,arr+n);
        for(int k=1;k<n;k++)
	{
		if(arr[k]==arr[k-1])
		{
                 z=z+1;
		 temp=arr[k];
		}
		else
		{
			if(z>max)
			{
				max=z;
                                v=temp;
			}
		}

	}
	for(int j=0;j<n;j++)
	{
               if(arr[j]!=arr[j-1]){
		if(i==arr[j]){
			i=i+1;
			
		}
	       }
	}
	/*for(int x=0;x<n;x++)
		cout<<arr[x]<<" ";*/


cout<<temp<<" "<<i<<endl;
t--;
	}
return 0;
}
