class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        multiset<int>s;
       
        for(int i=0;i<v.size();i++){
            s.insert(v[i]*v[i]);
        }
        v.clear();
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};