class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr;
        
        for (int i = 0; i < n; i++) {
            arr.push_back({nums[i], i});
        }
        
        sort(arr.begin(), arr.end());
        
        int left = 0, right = n - 1;
        
        while (left < right) {
            long long sum = (long long)arr[left].first + arr[right].first;
            
            if (sum == target) {
                int idx1 = arr[left].second;
                int idx2 = arr[right].second;
                if (idx1 < idx2) return {idx1, idx2};
                return {idx2, idx1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        
        return {};
    }
};