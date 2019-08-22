#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,arr[100],search,a;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cin>>search;

    int first =  0;
    int last = n-1;
    int middle = (first+last) / 2;

    cout<<first<<" "<<middle<<" "<<last<<endl;

    while(first <= last){

          if(arr[middle] == search){
            cout<<"Found"<<endl;
            break;
          }
          else if(arr[middle] < search ){
            first = middle + 1;
          }
          else{
            last = middle - 1;
          }
          middle = (first + last) / 2;

          cout<<first<<" "<<middle<<" "<<last<<endl;

    }

    if(first>last) cout<<"Not found"<<endl;

    return 0;
}

/*
  Complexity -  O(log n)

*/
