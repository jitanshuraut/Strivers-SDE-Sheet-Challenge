class Solution {
public:
 int singleNonDuplicate(vector<int>& nums) {
 int left = 0;
 int n = nums.size()-1;
 int right = n;
 while(left<=right){
 int mid = left+(right-left)/2;
 //edge case, if mid is single element
 if((mid == 0 || nums[mid] != nums[mid-1]) &&( mid == n || 
nums[mid] != nums[mid+1] )) return nums[mid];
 //as size of nums is odd logic to find which side to move
 int leftpart;
 if(nums[mid] == nums[mid-1])
 leftpart = mid-1;
 else leftpart = mid;
 
 if(leftpart%2 == 1) right = mid-1;
 else left = mid+1;
 }
 return 0;
 }
}