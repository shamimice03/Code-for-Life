#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ss,pp;
    cin>>ss;


    int len = ss.size();

    for(int i= len-1; i>=0; i--){
        pp.push_back(ss[i]);
    }

    cout<<pp<<endl;

    if(ss==pp){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}


