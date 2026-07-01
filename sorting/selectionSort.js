let arr = [4,2,9,3,77,1];


for(let i = 0 ; i < arr.length ; ++i){
    let min = i ; 
    for(let j = i + 1 ; j < arr.length ; ++j){
       
        if(arr[min] > arr[j]){
          min = j ; 
          iswap = true
        }
    }
    if(min != i){
          let temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp ;
           
          
    }

}
for(let i = 0 ; i < arr.length ; ++i){
    console.log(arr[i])
}
