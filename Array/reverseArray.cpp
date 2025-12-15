#include<iostream>
using namespace std ; 
void revArr(int* arr , int n ){
      cout<<"reverse values are "<<endl;
         int start = 0 ;
         int end = n-1  ;
         while(start < end){
            int temp = arr[start] ; 
            arr[start] = arr[end] ; 
            arr[end] = temp ; 
            start++;
            end--;
         }
                   for(int i = 0 ; i < n ; ++i){
            cout<<arr[i]<<endl;
        }
}
int main (){
        int n ;
        cout<<"enter the the size of an array :"<<endl;
        cin>>n;
        int* arr = new int[n];
         
        for(int i = 0 ; i < n ; ++i){
            cout<<"enter the Values of an array :";
            cin>>arr[i];
        }
        cout<<"values are :";
          for(int i = 0 ; i < n ; ++i){
            cout<<arr[i]<<endl;
        }

       revArr(arr , n);
}