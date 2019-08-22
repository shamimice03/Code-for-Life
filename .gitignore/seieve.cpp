#include<bits/stdc++.h>
using namespace std;
#define N 1005

vector< pair<int,int> >gg;

int number[N];

int prime( )

{
    int i,j,sq;

    sq=sqrt(N);
    memset(number,0,sizeof number);
    for(i=4; i<=N; i+=2){
        number[i]=1;
    }
    for(i=5; i<=sq; i+=2){

        if(number[i]==0){
            for(j=i*i; j<=N; j+=i){
                //cout<<j<<endl;
                number[j]=1;
            }
        }
    }
}

int main()
{
      prime( );

      for(int i=1; i<100; i++){
        if(number[i]==0) cout<<i<<endl;
      }



}


