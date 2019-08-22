#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ss, rev=0;
    cin>>ss;

   while(ss>0){

    cout<<ss%10<<endl;
    rev = rev*10 + ss%10;
    ss/=10;
   }

   cout<<rev<<endl;
}




