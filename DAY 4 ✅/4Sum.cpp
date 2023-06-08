vector<vector<int>> nSum(vector<int> &nums, int target, int start, int n) {
    vector<vector<int>> result;
    if (start == nums.size() || nums[start] * n > target ||
        target > nums.back() * n) {
      return result;
    }

    if (n == 2) {
      // 3. We simply calculate twoSum when we need to.
      return twoSum(nums, target, start);
    }

    for (int i = start; i < nums.size(); i++) {
      if (i == start || nums[i - 1] != nums[i]) {
        for (auto &j : nSum(nums, target - nums[i], i + 1, n - 1)) {
          result.push_back({nums[i]});
          result.back().insert(end(result.back()), begin(j), end(j));
        }
      }
    }
    return result;
  }

  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    sort(begin(nums), end(nums));
    return nSum(nums, target, 0, 4);
  }
};
 
