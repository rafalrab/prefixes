#include "pch.h"
#include "Trie.h"
#include <string>
using namespace std;
Trie::Trie()
{
	root = new Node();
}


Trie::~Trie()
{
}

void Trie::insert(string word) {
	Node* current = root;
	for (int i = 0; i < word.length(); i++) {
		int index = word[i] - 'a';
		if (current->children[index] == NULL) {
			current->children[index] = new Node();
		}
		current = current->children[index];
	}
	current->isEndOfWord = true;


}