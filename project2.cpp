#include<iostream>
using namespace std;
int main(){
    float farhan,celsius;
    int n;
    cout<<"What you want convert :"<<endl;
    cout<<"1.farhanheit to calsius"<<endl;
    cout<<"2.celsius to farhanheit"<<endl;

    cout<<"Enter your choice "<<endl;
    cin>>n;

    if(n==1){
        cout<<"Enter the temprature in farhenheit :  ";
        cin>>farhan;
        celsius=5*(farhan -32)/9;
        cout<<farhan<<" farhenheit is equal to  "<<celsius<<"  centigrade  ";
    }
    else if (n==2){
        cout <<"Enter the temprature in celsius : ";
        cin>>celsius;
        farhan=celsius*9/5+32; 
        cout<<celsius<<" Centigrade is equal to "<<farhan<<" Farhenheit  ";
    }
    else{
        cout<<"Invalid ! ";
    }
    return 0;

}