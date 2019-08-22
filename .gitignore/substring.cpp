#include<bits/stdc++.h>
using namespace std;


int main(){

  string str;
  cin>>str;

  for(int i=0; i<str.size(); i++){
    for(int j=i; j<str.size(); j++){

        for(int k = i; k<=j; k++)
            cout<<str[k];

        cout<<endl;
    }
  }

}
