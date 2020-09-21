#pragma once
#include <iostream>

namespace DataStructure {
	template <typename T>
	class List {
	public:
	    List() {
	        this->head = nullptr;
	        this->size = 0;
	    }
	    
	    void insert(T data) {
	        if (nullptr == this->head) {
	            this->head = new Node;
	            this->head->data = data;
	        }
	        else {
	            Node* ptr = head;
	            while(ptr->next != nullptr) {
	                ptr = ptr->next;
	            }
	            ptr->next = new Node;
	            ptr->next->data = data;
	        }
	        this->size++;
	    }
	    void print() const{
	        Node* current = head;
	        while(current != nullptr) {
	            std::cout << current->data << std::endl;
	            current = current->next;
	        }
	    }
	    size_t get_size() const {
	        return this->size;
	    }
	    ~List() {
	        while (head != nullptr) {
	            Node* p = head;
	            head = head->next;
	            std::cout << "Deleting node with data: " << p->data << std::endl;
	            delete p;
	        }
	        if (nullptr == head) {
	            std::cout << "HEAD -> nullptr, memory freed" << std::endl;
	        }
	    }
	private:
	    struct Node {
	        T data;
	        Node* next = nullptr;
	    };
	    Node* head;
	    size_t size;
	};
}
