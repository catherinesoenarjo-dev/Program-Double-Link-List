#include <iostream>
using namespace std;

struct Node {
    int data; // value
    Node* next; // pointer
};

void insertFirst(Node* & head,int value){
    Node* newNode = new Node;
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
};

int main (){
    Node* head = NULL;
    Node* node1 = new Node;
    node1 -> data = 60;
    node1 -> next = NULL;
    head = node1;

    insertFirst (head,50);

    Node* temp = head;
    while (temp !=NULL){
        cout << temp -> data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}