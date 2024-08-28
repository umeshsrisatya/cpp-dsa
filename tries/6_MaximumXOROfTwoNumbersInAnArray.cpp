// leetcode 421
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
    int findMaximumXOR(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        
        Trie trie;
        for(auto &num : nums){
            trie.insert(num);
        }
        int maxi = 0;
        for(auto &num : nums){
            int tempMaxi = trie.getMaxi(num);
            maxi = max(maxi, tempMaxi);
        }
        return maxi;
    }
};