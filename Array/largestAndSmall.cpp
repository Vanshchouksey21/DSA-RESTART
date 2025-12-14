// Find largest & smallest element in array


    #include<iostream>
    #include<climits>
    using namespace std ;
    void smallLar(int* arr , int n ){
        int lar = INT_MIN ;
        int min = INT_MAX;
        for(int i = 0 ; i < n  ;++i){
            if(arr[i] > lar){
                lar = arr[i];
            }
             if (arr[i]<min){
                min = arr[i];
            }

        }
        cout<<endl;
        cout<<lar<<endl<<min;
    }
    int main(){
        int n ;
        cin>>n;
        int *arr = new int[n];

        for(int i = 0 ; i < n ; ++i){
            cout<<"enter the values in an array :";
            cin>>arr[i];
        }
         cout<<" values of an array :"<<endl;
            for(int i = 0 ; i < n ; ++i){
           
            cout<<arr[i];
        }

        smallLar(arr , n);

    }