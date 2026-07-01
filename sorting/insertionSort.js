let arr = [3, 7 , 1];
for(let i = 1 ; i < arr.length ; ++i ){
    let curr = arr[i];
    let prev = i - 1 ; 
    while( prev >= 0 && curr < arr[prev] ){
        arr[prev + 1] = arr[prev]
        prev--;
    }
    arr[prev + 1] = curr ;
}

for(let i = 0 ; i < arr.length ; ++i){
    console.log(arr[i])
}