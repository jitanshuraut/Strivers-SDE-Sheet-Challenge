class Solution {
 public long kthElement( int arr1[], int arr2[], int n, int m, int 
k) {
 int i = 0, j = 0;
 int ptr = 0;
 int ans = -1;
 while (i < n && j < m) {
 if (ptr == k) {
 return ans;
 }
 if (arr1[i] > arr2[j]) {
 ans = arr2[j];
 j++;
 } else {
 ans = arr1[i];
 i++;
 }
 ptr++;
 }
 while (i < n) {
 if (ptr == k) {
 return ans;
 }
 ans = arr1[i];
 i++;
 ptr++;
 }
 while (j < m) {
 if (ptr == k) {
 return ans;
 }
 ans = arr2[j];
 j++;
 ptr++;
 }
 return ans;
 }
}
