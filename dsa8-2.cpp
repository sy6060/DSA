// a Trie supporting INSERT, SEARCH, and PREFIX SEARCH operations, and display the result the 
//result of each query
#include <iostream>
#include <unordered_map>
using namespace std;

struct TrieNode {
    bool isEnd;
    unordered_map<char, TrieNode*> children;
    TrieNode() : isEnd(false) {}
};

class Trie {
    TrieNode* root;
public:
    Trie() { root = new TrieNode(); }

    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c]) node->children[c] = new TrieNode();
            node = node->children[c];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c]) return false;
            node = node->children[c];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        TrieNode* node = root;
        for (char c : prefix) {
            if (!node->children[c]) return false;
            node = node->children[c];
        }
        return true;
    }
};

int main() {
    Trie trie;
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");
    trie.insert("ball");

    cout << "Search 'app': " << (trie.search("app") ? "Found" : "Not Found") << endl;
    cout << "Search 'appl': " << (trie.search("appl") ? "Found" : "Not Found") << endl;
    cout << "Prefix 'ap': " << (trie.startsWith("ap") ? "Exists" : "Not Exists") << endl;
    cout << "Prefix 'ba': " << (trie.startsWith("ba") ? "Exists" : "Not Exists") << endl;
    cout << "Prefix 'cat': " << (trie.startsWith("cat") ? "Exists" : "Not Exists") << endl;

    return 0;
}
