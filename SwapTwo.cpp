#include<iostream>
using namespace std ;
int main (){
    int a , b   ;
    cout<<"Enter the value of a and b :";
    cin >> a >> b ;
     cout<<"Entered Value of a is :"<<a<< endl <<" Entered Value of b is :"<<b<<endl;
    a= a+b ; 
    b = a - b ;
    a = a - b ;
    cout<<"Values after Swap"<<endl;
    cout<<"Value of a is :"<<a<< endl <<"Value of b is :"<<b;
}