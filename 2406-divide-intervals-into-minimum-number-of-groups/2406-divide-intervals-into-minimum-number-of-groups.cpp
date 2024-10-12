class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (const auto& row: intervals) {
            if (!minHeap.empty() && minHeap.top() < row[0]) {
                minHeap.pop();
            }
            minHeap.push(row[1]);
        }

        return minHeap.size();
    }
};