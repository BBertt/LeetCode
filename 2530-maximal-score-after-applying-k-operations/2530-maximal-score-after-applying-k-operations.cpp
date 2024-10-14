class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        priority_queue<long> maxHeap;
        long long total = 0;

        for (const auto& element: nums) {
            // cout << element << ' ';
            maxHeap.push(element);
        }

        for (int i = 0; i < k; i++) {
            if (!maxHeap.empty()) {
                double temp = maxHeap.top();
                total += maxHeap.top();
                maxHeap.pop();
                maxHeap.push(ceil(temp / 3));
            }
        }

        //while (!maxHeap.empty()) {
          //  cout << maxHeap.top() << ' ';
            //maxHeap.pop();
        //}

        return total;
    }
};