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

    void insertAtBegning(int val) {
        Node* new_node = new Node(val);

        if (head == nullptr) {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }
};

int main() {
    doublyLinkedList dl1;
    dl1.insertAtBegning(12);
    dl1.insertAtBegning(15);
    dl1.insertAtBegning(21);

    dl1.display();

    return 0;
}
