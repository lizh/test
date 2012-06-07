#ifndef _TEST_TEST_TYPEDEF_
#define _TEST_TEST_TYPEDEF_

typedef struct _node_info_{
	void *data;
	struct _node_info *next;
	struct _node_info *prior;
}node_info_t;

struct _aa
{
	int num;
	node_info_t *net;
	int (*hello)(struct _aa* data);
};

int add(int a,int b);
#endif
