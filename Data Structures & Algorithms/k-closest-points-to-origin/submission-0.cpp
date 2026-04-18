class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>, vector<pair<double, int>>, greater<pair<double,int>>> pq;

        for(int i = 0; i < points.size(); i++)
        {
            double distance = std::sqrt((points[i][0]*points[i][0]) + (points[i][1]*points[i][1]));

            pq.push({distance, i});
        }

        int count = 0;
        vector<vector<int>> closestToOrigin;

        while(count < k)
        {
            auto [distance, index] = pq.top(); pq.pop();

            closestToOrigin.push_back(points[index]);
            
            count++;
        }

        return closestToOrigin;
    }
};
