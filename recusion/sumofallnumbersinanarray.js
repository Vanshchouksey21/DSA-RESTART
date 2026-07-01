let arr = [1,2,3,5,4,6]
function sum(n){
    if(n == 0) return arr[n];
    debugger;
    return arr[n] + sum(n-1);
} 
console.log(
 sum(arr.length -1));
