#include<bits/stdc++.h>
using namespace std;

int partitionn(int arr[],int low,int high){

     int i = low-1;
     int pivot = arr[high];

     for(int j=low; j< high; j++){

        if(arr[j]<= pivot){

            i++;
            swap(arr[i],arr[j]);
        }
     }

     swap(arr[i+1],arr[high]);
     return i+1;

}

void Quick_sort(int arr[],int low,int high){

   if(low < high){

       int point = partitionn(arr,low,high);

       Quick_sort(arr,low,point-1);
       Quick_sort(arr,point+1,high);

   }


}


void show_array(int arr[],int n){

     for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main(){

 int arr[100],n;

 cin>>n;
 for(int i=0; i<n; i++){
    cin>>arr[i];
 }

 Quick_sort(arr,0,n-1);
 show_array(arr,n);

 return 0;
}
/*
Worst Case Time Complexity [ Big-O ]: O(n^2)
Best Case Time Complexity [Big-omega]: O(n*log n)
Average Time Complexity [Big-theta]: O(n*log n)
Space Complexity: O(n*log n)

*/

/// Merge Sort preferred over Quick sort because of Space Complexity.
/// Merge Sort Space Complexity : O(1)
/// Quick Sort Space Complexity : O(n log n)
