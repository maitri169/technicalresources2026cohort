#include<iostream>
using namespace std;

int main(){
    int t;

    cout<<"enter number ";
    cin>>t;

  int number;
    int n=1;


    while(n<=t){
        cout<<"enter the number ";
        cin>>number;
        n=n+1;
        int count=0;
        for(int i=1;i<=number;i++){

            if ((number%i)==0){
                count=count+1;
            }
        }
        if (count>2){
            cout<<"not prime"<<endl;
        }
        else{
            cout<<"prime"<<endl;
        }
    }
    return 0;
}
