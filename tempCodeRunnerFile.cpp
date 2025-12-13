#include<iostream>
using namespace std ;
int isPrime(int prime){
    
    for(int i = 2 ; i < prime-1 ; ++i){
        if(prime/i == 0){
            cout<<"not a prime Number";
        }
    }
    cout<<"Prime Number";
    

}
int main (){
int prime ;
cout<<"enter the Number to check wheather it is prime or not :";
cin>>prime ;
isPrime(prime);
}