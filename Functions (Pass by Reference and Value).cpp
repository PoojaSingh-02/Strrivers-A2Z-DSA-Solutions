class Solution {
public:
    void reverse(vector<int>& arr) {
        int startindex = 0;
        int endindex = arr.size() - 1;

        while (startindex < endindex) {
            int temp = arr[startindex];
            arr[startindex] = arr[endindex];
            arr[endindex] = temp;

            startindex++;
            endindex--;
        }
    }
};
