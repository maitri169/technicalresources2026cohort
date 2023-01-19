#include<iostream>
using namespace std;

int main(){
    int low;
    int high;

    cout<<"enter lower limit ";
    cin>>low;

    cout<<"enter upper limit ";
    cin>>high;

    for(int i=low;i<=high;i++){
        int count=0;

        for(int j=1;j<=i;j++){

            if((i%j)==0){
                count=count+1;

        }
               if (count>2){
                   continue;
        }
        else{
            cout<<i<<endl;
        }
    }

    return 0;
}
