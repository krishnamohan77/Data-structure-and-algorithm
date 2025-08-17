#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
    }
};

class doublyLinkedList{
    public:
    Node* head;
    Node* tail;

    doublyLinkedList(){
        head - NULL;
        tail = NULL;
    }

};

int main()
{
    Node* new_node = new Node(3);

    doublyLinkedList dl1;
    dl1.head = new_node;
    dl1.tail = new_node;

    cout<<dl1.head->data<<endl;


    return 0;
}