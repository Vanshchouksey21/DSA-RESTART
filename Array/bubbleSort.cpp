// basically biggest element last me stack ho jata hai har ek rotation pe 

#include<iostream>
using namespace std ; 
int bubbleSort(int* arr , int n){
        for(int i = 0 ; i < n - 1 ; ++i){
        for(int j = 0 ; j < n - i -1 ; ++j){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ; 
            }
        }
    }
    return *arr ;
}
int main (){
    int n ;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    int* arr = new int[n];


    
    for(int i = 0 ; i < n ; ++i){
        cout<<"Enter the values of  array :"<<endl;
        cin>>arr[i];
    }


    bubbleSort(arr , n );
    cout<<"values are :";
    for(int i = 0 ;i < n ;++i){
        cout<<arr[i]<<" ";
    }

}