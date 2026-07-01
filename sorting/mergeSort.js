
function mergeArr (nums1 , nums2 ){
   let res = [];
   let i = 0 , j = 0  
while(i < nums1.length && j < nums2.length){
    if(nums1[i] < nums2[j]){
       res.push(nums1[i]);
       i++;
    }
    else{
        res.push(nums2[j]);
        j++
    }
}
return [...res , ...nums1.slice(i) , ...nums2.slice(j)];


}
function mergeSort(arr){
    if(arr.length <= 1) return arr ; 
   
  let mid = Math.floor(arr.length/2);
  let left = mergeSort(arr.slice(0 , mid))
  let right = mergeSort(arr.slice(mid))
  return  mergeArr(left , right )
 
  
}
 console.log(mergeSort([1,5,2,7,10,3,6,8]))


