#pragma once

class linked_list{
    private:
    	typedef struct node {
		struct node *next;
		struct node *prev;
		int data;
	} node;
        node *n;
        node *head;
        node *tail;
        int list_size;
    public:
        linked_list();
        linked_list(int d);
        void append(int d);
        int pop();
	const int get_data(int index);
	int set_data(int index, int d);
	
	const void show_list();
        ~linked_list();
};
