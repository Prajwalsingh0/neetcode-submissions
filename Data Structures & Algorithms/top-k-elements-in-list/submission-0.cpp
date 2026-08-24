class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>cnt;
        for(int num : nums){
            cnt[num]++;
        }

        vector<pair<int,int>>freqPair;
        for(auto& [num,count] : cnt){
            freqPair.push_back({count,num});
        }

        sort(freqPair.rbegin(),freqPair.rend());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(freqPair[i].second);
        }
        return res;
    }
};
