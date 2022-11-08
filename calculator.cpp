#include<iostream>
using namespace std;

int fact(int x){
    int fact=1;
    for( int i=1; i<=x; i++){
        fact= fact*1;
    }
    return fact;
}

int exp(int x, int y){
    int ans=1;
    for( int i=1; i<=y; i++){
        ans= ans*x;
    }
    return ans;
}

int main(){
    int a;
    cout<<"chosse the operation:"<<endl;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.multiplication"<<endl<<"4.Division"<<endl<<"5.Exponent"<<endl<<"6.Factorial"<<endl;
    cin>>a;
    int x,y;
    switch(a){
        case 1:
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;
        cout<<x+y<<endl;
        break;

        case 2:
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;
        cout<<x-y<<endl;
        break;

        case 3:
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;
        cout<<x*y<<endl;
        break;

        case 4:
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;
        cout<<x/y<<endl;
        break;

        case 5:
        cout<<"Enter base and power:"<<endl;
        cin>>x>>y;
        cout<<exp(x,y)<<endl;
        break;

        case 6:
        cout<<"Enter a number:"<<endl;
        cin>>x;
        cout<<fact(x)<<endl;
        break;

    return 0;

        

    }
}