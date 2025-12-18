#include<iostream>
#include<vector>
using namespace std ; 
void uniqueNumber(int* arr , int n ){
    for(int i = 0 ; i < n ; ++i){
        for(int j = 0 ; j < n-i -1 ; ++j){
         if(arr[j] >arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp ;
         }
        }
    }
     for(int i = 0 ; i < n ; ++i){
        cout<<arr[i]<<endl;
       } 
   vector<int> vec ;
   cout<<"done";
//    1,2,3,3,3,4,5;
    for(int i = 1 ; i < n ; ++i){
        if(arr[i] != arr[i-1]){
            vec.push_back(arr[i-1]);
        }
    }
    vec.push_back(arr[n-1]);
    for(int i = 0 ; i < vec.size() ; ++i){
        cout<<vec[i];
       } 

}
int main(){
     int n ;
     cout<<"enter the size of array :"<<endl;
       cin>>n;
       int* arr = new int[n];
       for(int i = 0 ; i < n ; ++i){
        cout<<"Enter the values of array :";
        cin>>arr[i];
       }   
       uniqueNumber(arr , n);
}