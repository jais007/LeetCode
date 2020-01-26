class Solution {
public:
    static bool compare(pair<int,int> a, pair<int,int> b){
        if(a.second==b.second)
             return a.first > b.first;
        return a.second > b.second;
    }
    vector<int> filterRestaurants(vector<vector<int>>& rest, int veg, int maxPrice, int maxDistance) {
        vector<pair<int,int>> res;
        int count=0;
        for(int i=0;i<rest.size();i++){
               if(veg==1){
                   if( rest[i][2]==1 && rest[i][3] <=maxPrice && rest[i][4] <=maxDistance)
                    res.push_back({rest[i][0],rest[i][1]});
                }
            else{
                 if(rest[i][3] <=maxPrice && rest[i][4] <=maxDistance)
                    res.push_back({rest[i][0],rest[i][1]});
            }
              
            
            }
      sort(res.begin(),res.end(),compare);
        vector<int> out;
        for(int i=0;i<res.size();i++){
            out.push_back(res[i].first);
        }
        return out;
    }
};
