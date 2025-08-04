class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> fruit_count;
        int start=0;
        int max_fruits=0;
        for(int i=0;i<fruits.size();i++){
            fruit_count[fruits[i]]++;
            while(fruit_count.size() > 2)
            {
                fruit_count[fruits[start]]--;
                if(fruit_count[fruits[start]]==0){
                    fruit_count.erase(fruits[start]);
                }
                start++;
            }
            max_fruits=max(max_fruits,i-start+1);
        }
        return max_fruits;
    }
};