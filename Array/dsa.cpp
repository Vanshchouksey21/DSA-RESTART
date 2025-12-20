#include<iostream>
#include<vector>
using namespace std ; 
int main (){
   vector<string> vec = {"zbc" , "rbc" , "dca"};
   for(int i = 0 ; i < vec.size() ; ++i){
    for(int j = 0 ; j < vec.size() - i -1 ; ++j){
        if(vec[j] > vec[j+1]){
            string temp = vec[j+1];
            vec[j+1] = vec[j];
            vec[j] = temp ;
        }
    }
   }
   
string res;
   string str1 = vec[0];
   string str2 = vec[vec.size() - 1];

   for(int i = 0 ; i < str1.size() && i < str2.size() ; ++i){
    if(str1[i] == str2[i]){
        res += str1[i];
    }
    else{
        break ;
    }
   }
   cout<<res;



}