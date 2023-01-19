#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter your marks";

    cin>>mar;

    if (marks>90){
        cout<<"execellent";
    }
    else if (marks<=90 && marks>80){
        cout<<"good";
    }
    else if (marks<=80 && marks>70){
        cout<<"fair";
    }
    else if (marks<=70 && marks>60){
        cout<<"meets expectation";
    }
    else if (marks<=60){
        cout<<"below par";
    }
    return 0;
}
