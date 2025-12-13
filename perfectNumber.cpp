#include<iostream>
using namespace std ;
int isperfect(int pNum){
    int sum = 0 ;
    for(int i = 1 ; i <= pNum/2 ; ++i){
      if ( pNum % i == 0 ) sum+=i ;

    }
   return pNum == sum ;
} 
int main () {
    int perfectNumber ;
    cout<<"Enter a Number to Check Wheather it is Perfect Or not :";
    cin >>perfectNumber;

    if(isperfect(perfectNumber)){
        cout<<"perfect hai";
    }
    else{
        cout<<"nhi hai perFect ";
    }
}