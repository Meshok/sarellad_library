#ifndef SRC_STRUCTURES_LIST_
#define SRC_STRUCTURES_LIST_

struct list {
	struct node *first;
};

struct node {
	int data;
	node* next;
};

#endif  // SRC_STRUCTURES_LIST_
