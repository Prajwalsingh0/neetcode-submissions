class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> returnedVector;
        int numberOfAnagrams=0;
        unordered_map<string,int> anagramMap;
        for(string str:strs){
            string sortedStr=str;
            sort(sortedStr.begin(),sortedStr.end());
            if(anagramMap.count(sortedStr)){
                returnedVector[anagramMap[sortedStr]].push_back(str);
                continue;
            }
            anagramMap[sortedStr]=numberOfAnagrams;
            numberOfAnagrams++;
            vector<string> newVector={str};
            returnedVector.push_back(newVector);

        }
        return returnedVector;
    }
};
