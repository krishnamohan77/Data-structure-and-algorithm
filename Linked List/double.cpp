#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    // Constructor for single data input
    Node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }

    // Constructor with data, next, and back pointers
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};

// Function to convert vector to doubly linked list
Node *arrToDLL(vector<int> &arr)
{
    if (arr.empty())
        return NULL; // Handle empty array case

    // Create the head node
    Node *head = new Node(arr[0]);
    Node *prev = head;

    // Create remaining nodes and link them
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->back = prev; // Link back pointer
        prev->next = temp; // Link next pointer
        prev = temp;       // Move prev to the current node
    }

    return head;
}

// Function to print the doubly linked list
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Delete at the beginning of the list
Node *deleteAtBegin(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *prev = head; // Save the old head
    head = head->next; // Move the head to the next node
    head->back = NULL; // Update the new head's back pointer
    prev->next = NULL; // Disconnect the old head
    delete prev;

    return head;
}

// Delete at the end of the list
Node *deleteAtTail(Node *head)
{
    // Handle empty list or single-node list
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    // Traverse to the tail node
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    // Update the second last node's next pointer
    Node *prev = tail->back;
    prev->next = NULL;

    // Disconnect the tail node
    tail->back = NULL;
    delete tail; // Free the memory

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4};

    // Create the doubly linked list
    Node *head = arrToDLL(arr);

    head = deleteAtBegin(head);

    // Perform deletion at the tail
    head = deleteAtTail(head);

    // Print the doubly linked list
    print(head);

    return 0;
}
