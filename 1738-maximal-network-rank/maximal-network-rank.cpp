class Solution {
public:
   
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {

        map<int, int> edge;
        set<set<int>> temp;
        for(int i=0; i<roads.size(); i++) {
            edge[roads[i][0]]++;
            edge[roads[i][1]]++;
            temp.insert({roads[i][0], roads[i][1]});
        } 
        int maxN=0;
        map<int, int> :: iterator it;

        vector<pair<int, int>> vec(edge.begin(), edge.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    return a.second > b.second;
});
        for(int i=0; i<vec.size(); i++) {
            cout<<vec[i].first<<" "<<vec[i].second<<endl;
        }
        int nn = vec.size();
        if(nn == 0) {
            return 0;
        }
        else if(nn == 1) {
            return vec[0].first;
        }
        else {
            for(int i=0; i<vec.size(); i++) {
                for(int j=i+1; j<vec.size(); j++) {
                    int r = vec[i].second + vec[j].second;
                    if (temp.count({vec[i].first, vec[j].first})) {
                        r--;
                    }

                    maxN = max(r, maxN);
                }
            }
        }
        return maxN;
    }
};