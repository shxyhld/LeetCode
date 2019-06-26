//题目链接：https://leetcode.com/problems/combination-sum/
class Solution {
public:
    void BackTrace(std::vector<int>& input, int target, int idx, std::vector<int> res, std::vector<std::vector<int>> &results) {
	if (target == 0)
	{
		results.push_back(res);
		return ;
	}
	else
	{
		for (int i = idx; i >= 0; i--) {
			if (target >= input[i]) {
				res.push_back(input[i]);
				BackTrace(input, target - input[i], i, res, results);
                res.pop_back();
			}
		}
	}
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        std::vector<std::vector<int>> results;
	    std::vector<int> res;
    	BackTrace(candidates, target, candidates.size() - 1, res, results);
	    return results;
    }
};