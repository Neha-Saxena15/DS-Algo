#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number of elements in the array :";
	cin>>n;
int arr[n];
cout<<endl<<"enter the elements of the array:"<<endl;
for(int i=0;i<n;i++)
      cin>>arr[i];
	cout<<"before sorting the array is:"<<" ";
 for(int i=0;i<n;i++)
      {
      	cout<<arr[i]<<" ";
	   }     
   cout<<endl<<"after sorting the array is:"<<" "<<endl;
   // Selection Sort
   for(int i=0;i<n;i++)
     {
       int temp = arr[i],ind;
       for(int j=i;j<n;j++)
          {
             if(temp>arr[j])
             
          	    {
          	        ind = j;//index at which the the minimum element present
				} 
		  }
		  //swap the element at beginning and the minmum element in unsorted array
		int x;
		x = arr[ind];
		arr[ind] = arr[i];
		arr[i] = x;
	 }	
	 cout<<endl;
	 //print the sorted array
	  for(int i=0;i<n;i++)
      {
      	cout<<arr[i]<<" ";
	   } 
	   cout<<endl;    
	
	return 0;
}
