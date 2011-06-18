#include <iostream>

using namespace std;

typedef treeNode node;

class treeNode{
	private:
		KV value;
		node* left;
		node* right;
	public:
		void insert(KV);
		KV get(KV);
		void remove(KV);
}

