class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> um;
        vector<int> v;
        for (int num : nums) {
            um[num]++;
        }
        vector<pair<int, int>> vec(um.begin(), um.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        for (int i = 0; i < k; ++i) {
            v.push_back(vec[i].first);
        }

        return v;
    }
};
