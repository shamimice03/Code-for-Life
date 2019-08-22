#include<bits/stdc++.h>
using namespace std;

int stackk[100], top=-1;

void push(int val){

    if(top>=100){
        cout<<"Overflow"<<endl;
        return;
    }
    else{

        top++;
        stackk[top] =  val;
        cout<<"Pushed"<<endl;
        return;
    }
}

void pop(){

     if(top<=-1){
        cout<<"Underflow"<<endl;
     }
     else{
        cout<<stackk[top]<<" "<<"Poped"<<endl;
        top--;
     }

}

void display(){

  for(int i=top; i>=0; i--){
    cout<<stackk[i]<<" ";
  }
}

int main()
{
    int choice;
    while(1){

       cout<<"Choice"<<endl;
       cin>>choice;

       if(choice==1){
        int val;
        cin>>val;
        push(val);
       }
       else if(choice==2){
        pop();
       }
        else if(choice==3){

       }
        else if(choice==4){

        display();
        cout<<endl;
       }
    }

}
