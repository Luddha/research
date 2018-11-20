#pragma once

typedef struct node {
    struct node *next;
    struct node *prev;
    int data;
} node;

class linked_list{
    private:
        node *n;
        node *head;
        node *tail;
        int list_size;
    public:
        linked_list(){
            this->n = new node;
            this->n->data = 0;
            this->n->next = nullptr;
            this->n->prev = nullptr;
            this->head = this->n;
            this->tail = this->n;
            this->list_size = 1;
        }
        linked_list(int d){
            this->n = new node;
            this->n->data = d;
            this->n->next = nullptr;
            this->n->prev = nullptr;
            this->head = n;
            this->tail = n;
            this->list_size = 1;
        }
        void append(int d){
            node *train = this->head;
            node *new_node = new node;
            new_node->data = d;
            new_node->next = nullptr;
            new_node->prev = nullptr;
            while (train->next != nullptr)
                train = train->next;
            
            train->next = new_node;
            new_node->prev = train;
            this->tail = new_node;
            this->list_size++;
        }

        int pop(){
            int data = this->tail->data;
            node *tmp = this->tail;
            this->tail = this->tail->prev;
            delete tmp;
            return data;
        }

        ~linked_list(){
            node *train = this->tail;
            while (train->prev != nullptr)
                this->pop();
            this->pop();
        }
}
