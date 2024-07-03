#include <bits/stdc++.h> 
struct Node{
    Node* links[26];
    bool flag = false;
    void setFlag(){
        flag = true;
    }
    bool getflag(){
        return flag;
    }
    bool containsKey(char ch){
        return links[ch - 'a'] != NULL;
    }
    void put(char ch, Node* node){
        links[ch-'a'] = node;
    }
    Node* getChild(char ch){
        return links[ch - 'a'];
    }
};
class Trie{
    private: Node* root;
    public: Trie(){
        root = new Node();
    }
    public: void insert(string &word){
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(!node->containsKey(word[i])){
                node->put(word[i], new Node());
            }
            node = node->getChild(word[i]);
        }
        node->setFlag();
    }
    public: bool checkIfPrefixExist(string &word){
        Node* node = root;
        for(int i = 0; i < word.size(); i++){
            if(node->containsKey(word[i])){
                node = node->getChild(word[i]);
                if(node->getflag() == false){
                    return false;
                }
            }else{
                return false;
            }
        }
        return node->getflag();
    }
};
string completeString(int n, vector<string> &a){
    // Write your code here.
    Trie trie;
    for(auto &it : a){
        trie.insert(it);
    }

    string longest = "";
    for(auto &it : a){
        if(trie.checkIfPrefixExist(it)){
            if (it.size() > longest.size() || (it.size() == longest.size() && it < longest)) {
                longest = it;
            }
        }
    }
    if(longest.size() == 0) return "None";
    return longest;

}