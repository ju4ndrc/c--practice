 let nums=[3,2,3], result=[],target = 6;
// console.log(nums.length)
// for(let i = 0 ; i <= nums.length ; i++){
//     if(nums[i] + nums[i+1] === target){

//       result.push(i)
//       console.log(result)
//       result.push(i+1)
//       console.log(result)
    
//     }

// }
const map = new Map();
// nums.map((currentValue, index)=>{
//   map1.set(index,currentValue)
// })

// console.log(map1)

// if(map1.get(0) + map1.get(1)===6){
//   console.log(map1.get(0) + map1.get(1))
// }else if(map1.get(1) + map1.get(2)===6){
//   console.log(map1.get(1) + map1.get(2))
// }else if(map1.get(0) + map1.get(2)===6){
//   console.log(map1.get(0) + map1.get(2))

// }
for(let i = 0 ; i <= nums.length ; i++){
  let complement = target - nums[i]  
  if(map.has(complement)){
    console.log([map.get(complement),i])
  }
  map.set(nums[i],i)
}
