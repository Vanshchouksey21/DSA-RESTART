// Armstrong

#include<iostream>
using namespace std;
int arm(int n){
    int copynum = n ;
    int count = 0 ;
    while(copynum>0){
      
        copynum =  copynum/10; 
        count++;
    }
    int rem  , armnocheck= n  ,  mod  , currval= 1 , finalval=0;
    while (armnocheck > 0){
        rem = armnocheck /10 ;
        mod = armnocheck %10 ; 
        armnocheck = rem ;
        currval = mod*mod*mod;
        finalval+=currval;

    }
  return (finalval == n);
return false ;
}
int main(){
    int num  ;
    cout<<"Enter the Value to find the given number is armStorng or Not " ; 
    cin>>num;
    if(arm(num))
     cout << "true";
    else
        cout << "false";

        return 0 ;
}