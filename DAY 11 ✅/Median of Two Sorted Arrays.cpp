class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
for(int i=0; i<nums2.size(); i++){
nums1.push_back(nums2[i]);
}
int x = nums1.size();
sort(nums1.begin(),nums1.end());
if(x%2!=0){
return nums1[x/2];
}
int n1 = nums1[x/2];
int n2 = nums1[(x/2)-1];
double x2;
x2 = (n1+n2)/(double)2;
return x2;
}
};
