#include "linked_list.h"
#include <iostream>
#include <cstddef>


linked_list::linked_list(){
	this->head = NULL;
	this->tail = NULL;
	this->list_size = 0;
}
linked_list::linked_list(int d){
	node *new_node = new node;
	new_node->data = d;
	new_node->next = NULL;
	new_node->prev = NULL;
	this->head = new_node;
	this->tail = new_node;
	this->list_size = 1;
}
void linked_list::append(int d){
	node *train = this->head;
	node *new_node = new node;
	new_node->data = d;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (this->head == NULL){
		this->head = new_node;
		this->tail = new_node;
	} else {
		while (train->next != NULL)
			train = train->next;
		
		train->next = new_node;
		new_node->prev = train;
		this->tail = new_node;
		this->list_size++;
	}
}

int linked_list::pop(){
	int data = this->tail->data;
	node *tmp = this->tail;
	this->tail = this->tail->prev;
	this->tail->next = NULL;
	delete tmp;
	this->list_size--;
	return data;
}

const int linked_list::get_data(int index){
	int count = 0;
	node *train = this->head;
	while (train->next != NULL){
		if (count == index){
			return train->data;
		}
		count++;
		train = train->next;	
		
	}
	return -1;

}

int linked_list::set_data(int index, int data){
	int count = 0;
	node *train = this->head;
	while (train->next != NULL){
		if (count == index){
			train->data = data;
			return data;
		}
		count++;
		train = train->next;	
		
	}
	return -1;

}





const void linked_list::show_list(){
	node *train = this->head;

	while (train != NULL){
		std::cout << train->data << std::endl;
		train = train->next;
	}

}

linked_list::~linked_list(){
	node *train = this->head;
	node *tmp;
	while (train != NULL) {
		tmp = train;
		train = train->next;
		delete tmp;	
	}
}

