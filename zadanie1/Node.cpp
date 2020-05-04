#include "pch.h"
#include "Node.h"
#include <string>
using namespace std;

Node::Node()
{
	isEndOfWord = false;
	for (int i = 0;i < 26;i++) {
		children[i] = NULL;
	}
}


Node::~Node()
{
}

