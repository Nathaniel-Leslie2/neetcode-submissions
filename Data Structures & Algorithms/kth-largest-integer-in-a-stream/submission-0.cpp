class KthLargest {
public:
    vector<int> stream;
    int LargestElementPos = 0;

    KthLargest(int k, vector<int>& nums) {
    stream = nums;
    LargestElementPos = k;
    }
    
    int add(int val) {
        stream.push_back(val);
        sort(stream.begin(), stream.end());
        return stream[stream.size() - LargestElementPos];
        }
};
