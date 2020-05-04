#pragma once
class Node
{
public:
	Node();
	~Node();
	Node* children[26];
	bool isEndOfWord;
};



