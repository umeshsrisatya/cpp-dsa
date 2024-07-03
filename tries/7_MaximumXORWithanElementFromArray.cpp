// leetcode 1707
struct Node{
    Node* links[2];
    bool containsKey(int bit){
        return (links[bit]!=nullptr);
    }
    Node* getChild(int bit){
        return links[bit];
    }
    void put(int bit, Node* node){
        links[bit]=node;
    }
};
class Trie{
    private: Node* root;
    public: Trie(){
        root = new Node();
    }
    public: void insert(int num){
        Node* node = root;
        for(int i = 31; i >= 0; i--){
            int bit = (num >> i) & 1;
            if(!node->containsKey(bit)){
                node->put(bit, new Node());
            }
            node = node->getChild(bit);
        }
    }
    public:int getMaxi(int num){
        Node* node = root;
        int maxi = 0;
        for(int i = 31; i >= 0; i--){
            int bit = (num >> i) &1;
            int nbit = 1 - bit;
            if(node->containsKey(nbit)){
                maxi = maxi | (1<<i);
                node = node->getChild(nbit);
            }
            else{
                node = node->getChild(bit);
            }
        }
        return maxi;
    }
};
class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        ios:: sync_with_stdio(false);
        cin.tie(nullptr);
        
       sort(nums.begin(), nums.end());
        // creating require data structure
        vector<pair<int,pair<int,int>>> offlineQueries;
        // creating answer that stores xor values
        int q = queries.size();
        int n = nums.size();
        vector<int> ans(q, 0);
        for(int i = 0; i < q; i++){
            offlineQueries.push_back({queries[i][1], {queries[i][0], i}});
        }
        sort(offlineQueries.begin(), offlineQueries.end());
        int index = 0;
        Trie trie;
        for(int i = 0; i < q; i++){
            int ai = offlineQueries[i].first;
            int xi = offlineQueries[i].second.first;
            int order = offlineQueries[i].second.second;
            while((index < n) and (nums[index] <= ai)){
                trie.insert(nums[index]);
                index++;
            }
            if(index == 0) ans[order] = -1;
            else ans[order] = trie.getMaxi(xi);
        }        
        return ans;
    }
};