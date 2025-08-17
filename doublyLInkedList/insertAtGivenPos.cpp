#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

class doublyLinkedList {
public:
    Node* head;
    Node* tail;

    doublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtEnd(int val) {
        Node* new_node = new Node(val);

        if (tail == nullptr) {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }


    void insertAtPos(int val, int k) {

        //assuming k is less or equal to length of doubly linked list
        Node* temp = head;
        int count = 1;
        while(count<(k-1)){
            temp = temp->next;
            count++;
        }

        Node* new_node = new Node(val);

        new_node->next = temp->next;
        temp->next = new_node;

        new_node->prev = temp;
        new_node->next->prev = temp;
    }
};

int main() {
    doublyLinkedList dl1;
    dl1.insertAtEnd(12);
    dl1.display();

    dl1.insertAtEnd(15);
    dl1.display();
    
    dl1.insertAtEnd(21);
    dl1.display();

    dl1.insertAtPos(14, 1);
    dl1.display();

    dl1.insertAtPos(19, 4);
    dl1.display();

    return 0;
}
