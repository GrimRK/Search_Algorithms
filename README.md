# Search_Algorithms
Linear search / Binary Search / Jump Algorithm

In this there are different search algorithms which can be used if the condition is satisfied

Linear Search:
Here we just run a standard for loop and individually check until the elements is found .
Worst case Complexity here is O(n)

Binary Search:
Here the base condition is that the array should be sorted array (changes can be made according to whether ascending or descending sort)
here we check a[mid] where mid is the middle of the subarray. For ascending array 
initially l=0 and r=n-1
loop:
mid=l+(r-1)/2
if a[mid] < a : l=mid+1 ;
               
else : r=mid-1;

repeat the loop till element found.

Jump Search:
Here also the array should be sorted and then we compare elements of array at intervals .
Say we compare a[0] then we compare a[0+m] then a[0+m+m] theb a[0+m+m+m] and so on.i.e. i+=m should be the increment.

if a[i] > a : then we go back to i-m and then perform linear search from i-m to i and if the element found we return it.
