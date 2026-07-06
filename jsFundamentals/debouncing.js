let count = 0 ; 
let showData = () =>{
    console.log("fetching data..... " ,  ++count);  
}

let timer ; 
let debouncing = () =>{
    clearTimeout(timer)
     timer = setTimeout(()=>{
        showData()
    },500)
}
