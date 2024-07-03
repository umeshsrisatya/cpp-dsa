// leetcode 208
struct Node{
    // creates a array which stores pointer to next child
    Node* links[26];
    bool flag = false;

    bool containsKey(char ch){
        return links[ch-'a'] != nullptr; //if character presents in array it returns true 
    }

    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }

    Node* traversal(char ch){
        return links[ch-'a']; // it goes to its child pointer
    }
    void setEnd(){
        flag = true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie {
private: Node* root ;
public:
    Trie() {
        root = new Node();
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(node->containsKey(word[i]) == false){
                node->put(word[i],new Node());
            }
            // traversal to its child
            node=node->traversal(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            // traversal to its child node
            node=node->traversal(word[i]);
        }
        return node->isEnd();        
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
        for(int i = 0; i < prefix.size(); i++){
            if(!node->containsKey(prefix[i])){
                return false;
            }
            // traversal to its child node
            node=node->traversal(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */