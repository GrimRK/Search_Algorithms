#include <bits/stdc++.h> 
using namespace std; 
  

int binary_search(int *ar, int l, int r, int a) 
{ 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (ar[m] == a) 
            return m; 
  
        if (ar[m] < a) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
  
    return -1; 
} 
  
int main(void) 
{ 
	int n,i,a;
	cout<<"Enter no. of elements : ";
	cin>>n;
	int ar[n];
	cout<<"Enter the elements (in sorted ascending order) : ";
	for(i=0;i<n;i++)
		cin>>ar[i];
	cout<<"Enter elements to be searched : ";
	cin>>a;
    int pos = binary_search(ar, 0, n - 1, a); 
    if(pos==-1)
		cout<<"Not Found!";
	else
	{
		cout<<"Found at position : "<<pos;
	}
    return 0; 
} 