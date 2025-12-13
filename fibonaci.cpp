#include<iostream>
using namespace std ;
int fibo(int num , int first , int second){

    cout<<first<<" ";
    cout<<second<<" ";
    for(int i = 0 ; i < num -2 ; ++i){
        first=first+second;
        second = first-second ; 
        cout<<first<<" ";
    }

}
int main (){
    int first= 1 , second = 1 ;
    int num ;
    cout<<"enter the terms for fibo :";
    cin>>num ; 
    fibo(num , first , second);

}