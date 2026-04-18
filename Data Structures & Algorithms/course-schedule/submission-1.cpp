class Solution {
    // Map each course to its prerequisites
    unordered_map<int, vector<int>> preMap;
    // Store all courses along the current DFS path
    unordered_set<int> visiting;

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        //initialize prerequisite map with empty vectors
        for (int i = 0; i < numCourses; i++) {
            preMap[i] = {};
        }

        //create an adjacency list with our hashmap and add each course to its pre req
        for (const auto& prereq : prerequisites) {
            preMap[prereq[0]].push_back(prereq[1]);
        }

        //loop through each course to discover if a cycle exists
        for (int c = 0; c < numCourses; c++) {
            if (!dfs(c)) {return false;} //if cycle exists, exit program
        }
        return true;
    }

    bool dfs(int crs) {
        //the course has been visited already, we have a cycle
        if (visiting.count(crs)) {
            // Cycle detected
            return false;
        }
        //if the course requires no pre reqs, move on
        if (preMap[crs].empty()) {
            return true;
        }
        //if pre reqs are not empty, visit each one and mark it as visited
        visiting.insert(crs);
        for (int pre : preMap[crs]) {
            if (!dfs(pre)) {return false;} //if we find two different courses rely on the same pre req, return false
        }
        visiting.erase(crs); // after looping through each pre req for a given course, remove it from our visited set
        preMap[crs].clear(); // remove pre req course from hashmap if no cycles exist
        return true;
    }
};