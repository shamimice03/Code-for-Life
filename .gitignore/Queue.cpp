#include <iostream>
using namespace std;

int queue[100], n=100, front = -1, End = -1;

void Insert(){

    if(End == (n-1)){
        cout<<"Overflow"<<endl;
        return;
    }
    else{

        if(front == -1){
            front = 0;
        }
        int val;
        cin>>val;
        End++;
        queue[End] = val;
        cout<<"Inserted"<<endl;

    }

}

void Delete(){

   if(front == -1 || front>End){
    cout<<"Underflow"<<endl;
    return;
   }
   else{
    front++;
    cout<<"Deleted"<<endl;
   }

}

void display(){

     if(front == -1 || front>End){
        cout<<"Empty"<<endl;
     }
     else{

        for(int i=front; i<=End; i++){
            cout<<queue[i]<<endl;
        }
     }

}

int main()
{
    int choice;
    while(1){

       cout<<"Choice"<<endl;
       cin>>choice;

       if(choice==1){
        Insert();
       }
       else if(choice==2){
        Delete();
       }
        else if(choice==3){

        display();
        cout<<endl;
       }
    }

}
