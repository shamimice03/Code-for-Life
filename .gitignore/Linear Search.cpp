#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[100],n,key;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;

    for(int i=0; i<n; i++){

        if(arr[i]==key){
            cout<<"Found"<<endl;
            return 0;
        }
    }

    cout<<"Not found"<<endl;

    return 0;
}

/*

  Complexity -  O(n)


*/
