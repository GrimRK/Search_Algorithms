#include<bits/stdc++.h>
using namespace std;
#define jump 5


int jump_search(int a,int n,int *ar)
{
	int i;
	for(i=0;i<n;i+=jump)
	{
		if(ar[i]==a)
			return i;
		else if(ar[i]>a)
		{int m;
			
			
			for(m=i;m>i-jump;m--)
			{
				if(ar[m]==a)
				{
					return m;
				}
	 	     	}
			return -1;
			}
	}
	return -1;
}
int main()
{
	int n,i,a;
	cout<<"Enter no. of elements : ";
	cin>>n;
	int ar[n];
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)
		cin>>ar[i];
	cout<<"Enter elements to be searched : ";
	cin>>a;
	int pos=jump_search(a,n,ar);
	if(pos==-1)
		cout<<"Not Found!";
	else
	{
		cout<<"Found at position : "<<pos;
	}
	return 0;
}