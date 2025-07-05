class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int ma=-1;
        for(auto& i:mp ){
            if(i.first==i.second){
                mp=max(ma,i.first);
            }
        }
        return mp;
    }
};