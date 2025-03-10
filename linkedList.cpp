// February 22, 2025
// implementing a linked list in C++
/* Instructions: 1.) singly linked list
define a Node struct with an integer data field and a pointer to the next node
implement functions to:
    insert a node at the end of the list
    delete a node by value
    display all nodes in the list */

/* Objective: to practice the concepts of dynamic memory allocation and pointers
by implementing a singly linked list and optionally extending it to a 
doubly linked list for extra credit */

/* Description: you will implement a basic singly linked list from scratch
and perform basic operations such as insertion, deletion, and traversal.
for extra credit, you can upgrade your implementation to a doubly linked list */

// Due: February 23 (Sunday)
#include <iostream>
using namespace std;

struct Node {
    int var;
    Node* nextNode;
};

void insert(Node head, int num);
void remove(Node* head, int num);
void display(Node head);

int main() {

    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;

    node1->var = 1;
    node2->var = 2;
    node3->var = 3;
    
    Node* head = node1;

    insert(*head, 5);
    insert(*head, 10);
    insert(*head, 15);
    insert(*head, 20);

    display(*head);

    remove(head, 5);
    remove(head, 10);
    remove(head, 15);
    remove(head, 20);

    display(*head);

    return 0;
}

void insert(Node* head, int num){
    Node* node = new Node;
    node->var = num;
    node->nextNode = nullptr;
    Node* current = head;
    while(current->nextNode != nullptr){
        current = current->nextNode;
    }
    current->nextNode = node;
}

void remove(Node* head, int num){
    Node* current = head;
    while(current->nextNode != nullptr && current->nextNode->var != num){
        current = current->nextNode;
    }
    if(current->nextNode != nullptr){
        Node* temp = current->nextNode;
        current->nextNode = current->nextNode->nextNode;
    }
}

void display(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout << current->var;
        current = current->nextNode;
    }
}