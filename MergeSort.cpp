#include<iostream>
using namespace std;
void Merge(int [], int,int,int);
void MergeSort(int arr[],int low, int high)
     {
     	int mid;
     	if(low<high)
     	   {
     	   	  mid = (low+high)/2; 
     	   	  MergeSort(arr,low,mid);
     	   	  MergeSort(arr,mid+1,high);
     	   	  Merge(arr,low,mid,high); // function call - to merge the sorted array
     	   	
			}
	 }
	 
	 
void Merge(int arr[],int low, int mid, int high)
 {
 	int i = low, j = mid+1;// i is index of first array and j is index of second array
 	int a = 0;
 	int aux[high-low + 1];
 	while( i <= mid && j<= high)// loop will not run if any of one array all element are processed  
 	  {
 	  	   if(arr[i]<=arr[j])
 	  	      aux[a++] = arr[i++];
 	  	   else
			   aux[a++] = arr[j++];   
	   }
	//now we have to place the excess array value
	while( i<= mid)// if first array has excess element
	   aux[a++] = arr[i++];
	while(j<= high)// if second array has excess element
	   aux[a++] = arr[j++];      
     a = 0;
	 for(int b=low;b<=high;b++ )
		 arr[b] = aux[a++];
		 
}	 
 
     
int main()
{
	int n ; //size of the array
	cout<<"enter the size of the array";
	cin>>n;
	int arr[n];
	cout<<endl<<"enter the values of the array";
	for(int i=0;i<n;i++)
	   cin>>arr[i]; //taking value inside the array
	   //parameter is- array , starting and ending index of array
	MergeSort(arr,0,n-1);   //function call - MergeSort

	cout<<endl<<"after sorting the array is:  ";
	for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";   
	return 0;
}

