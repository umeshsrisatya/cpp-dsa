// creating node 
struct Node{
    // trie
    Node* links[26]; 

    bool containsKey(char ch){
        return links[ch-'a'] != nullptr;
    }
    Node* getChild(char ch){
        return links[ch-'a'];
    }
    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }
};

int countDistinctSubstrings(string &s)
{
    //    Write your code here.
    Node* root = new Node();
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        // for every iteration we need to come to begining
        Node* node = root;
       for(int j = i; j < s.size(); j++){
            if(!node->containsKey(s[j])){
                cnt++;
                node->put(s[j], new Node());
            }
            node = node->getChild(s[j]);
       }
    }
    return cnt+1;
}