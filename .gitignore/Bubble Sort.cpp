#include<bits/stdc++.h>
using namespace std;


void Bubble_sort(int arr[], int n){


       int temp;
       for(int i=0; i<n-1; i++){

        for(int j=i+1; j<n; j++){

            if(arr[i]>arr[j]){

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

  /*
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[j] ^ arr[i];

                Swapping using no extra variable.

                    */
            }
        }
    }


}


void show(int arr[],int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

}

int main()
{
    int arr[100],n,temp;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Bubble_sort(arr,n);
    show(arr,n);


    return 0;
}



///Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.

///Best Case Time Complexity: O(n). Best case occurs when array is already sorted.

///Auxiliary Space: O(1)



