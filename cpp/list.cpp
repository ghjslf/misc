#include iostream

struct node_t {
	int data;
	node_t next;
};

int main () {
	int list_size = 10;
	node_t np_begin = new node_t;
	node_t np = np_begin;

	for (int i = 0; i  list_size; i++) {
		np-data = i + 1;
		np-next = new node_t;
		np = np-next;
	}

	np-data = 0;
	np-next = nullptr;

	np = np_begin;

	while (np-next != nullptr) {
		stdcout  np-data  'n';
		np = np-next;
	}

	return 0;
}