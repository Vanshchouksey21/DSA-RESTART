let arr = [1,34,5,7,78,9];

//bubble sort 
for(let i = 0 ; i < arr.length - 1 ; ++i){
    let swaping = true ; 
    for(let j = 0 ; j < arr.length  - 1 - i ; ++j){
        if(arr[j] > arr[j + 1]){
            arr[j]+=arr[j+1];
            arr[j+1] = arr[j] - arr[j+1];
            arr[j]-= arr[j+1]
            swaping = true;
        }
    }
    if(!swaping) break ; 
}
for(let i = 0 ; i < arr.length ; ++i){
    console.log(arr[i]);
}