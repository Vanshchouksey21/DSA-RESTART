
function natural (num){
if(num == 0) return 0 ; 
return num + natural(num - 1);
}


let a = natural(5);
console.log(a)