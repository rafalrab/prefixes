#pragma once
#include <string>
#include "Node.h"
using namespace std;
class Trie
{
public:
	Node* root;
	void insert(string word);   
	Trie();
	~Trie();
};

