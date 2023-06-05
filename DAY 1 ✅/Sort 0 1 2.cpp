let left = 0;
    let current = 0;
    let right = nums.length - 1;
    while( current <= right ){
        if(nums[current] === 0){
            swap(nums, left, current);
            left++;
            current++;
        }else if (nums[current] === 2){
            swap(nums, current, right);
            right--;
        }else{
            current++;
        }
    }
