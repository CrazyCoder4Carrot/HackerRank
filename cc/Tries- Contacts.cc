#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

typedef struct node{
	char content;
	bool isLeaf;
	vector<struct node *> children;
	int count;
	node(){content = ' '; isLeaf = false; count = 0;}
	node(char c){content = c; count = 0;}
} TrieNode;


class Trie{
public:
	Trie();
	~Trie();
	void addWord(string s);
	bool searchWord(string s);
	TrieNode *findChild(TrieNode *node, char c);
	int findPartial(string s);
private:
	TrieNode *root;
};

Trie::Trie()
{
	root = new TrieNode();
}

Trie::~Trie()
{
	delete root;
}
TrieNode * Trie::findChild(TrieNode *node, char c){
	for(auto child : node->children){
		if(child->content == c)
			return child;
	}
	return NULL;
}
void Trie::addWord(string s){
	TrieNode *cur = root;
	if(s.empty()){
		cur->isLeaf = true;
		return;
	}
	for(auto c : s){
		TrieNode* child = findChild(cur, c);
		if(child)
			cur = child;
		else{
			auto tmp = new TrieNode(c);
			cur->children.push_back(tmp);
			cur = tmp;
		}
		cur->count++;
	}
	cur->isLeaf = true;
}
bool Trie::searchWord(string s){
	TrieNode *cur = root;
	for(auto c : s){
		TrieNode *tmp = findChild(cur, c);
		if(!tmp)
			return false;
		cur = tmp;
	}
	return cur->isLeaf;
}
int Trie::findPartial(string s){
	TrieNode *cur = root;
	for(auto c: s){
		TrieNode *tmp = findChild(cur, c);
		if(!tmp)
			return 0;
		cur = tmp;
	}
	return cur->count;
}
int main() {
	int n;
	cin >> n;
	Trie *trie = new Trie();
	for (int a0 = 0; a0 < n; a0++) {
		string op;
		string contact;
		cin >> op >> contact;
		if(op == "add"){
			trie->addWord(contact);
		}
		if(op == "find")
			cout << trie->findPartial(contact)<<endl;
	}
	return 0;
}
