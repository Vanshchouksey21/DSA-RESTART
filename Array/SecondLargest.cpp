#include<iostream>
#include<climits>
using namespace std ;
void slargest(int* arr , int &lar , int &slar , int n){
   
for(int i = 0 ; i < n ; ++i){
if(lar < arr[i]){
    slar = lar ;
    lar = arr[i];
}
else if (slar < arr[i] && arr[i] != lar){
    slar = arr[i];
}
}
}
int main (){
   int n ;
   cout<<"ENter the size of Arr:";
   cin>>n;
   int* arr = new int[n];
   for(int i = 0 ; i < n ; ++i){
    cout<<"Enter the Values of Array :";
    cin>>arr[i];
   }
    int lar = INT_MIN ;
    int slar = INT_MIN ;

    slargest(arr , lar , slar , n);
    cout<<lar<<slar ;

}