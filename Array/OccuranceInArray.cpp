    #include<iostream>
    using namespace std ;
    int occured(int* arr , int n , int occ , int c){
        for(int i = 0 ; i < n ; ++i){
            if(arr[i] == occ){
                c++;

            }
        }
        return c ; 
    }
    int main (){
       int n ; 
       cout<<"enter the size of array :"<<endl;
       cin>>n;
       int* arr = new int[n];
       for(int i = 0 ; i < n ; ++i){
        cout<<"Enter the values of array :";
        cin>>arr[i];
       }
       int research = 1;
       while(research != 0){
       int occurance ;
       cout<<endl<<"enter the no to search his occurance :";
       cin>>occurance;
       int count  = 0 ; 
       cout<<occured(arr , n , occurance , count)<<endl;
        cout<<"do u want to search any other no , if No then press 0 , otherwise press anything "<<endl;
       cin>>research;
       }
       cout<<"Thank u ";
       return 0 ;
        
    }