#include<iostream>
#include<vector>
using namespace std;

// Define the Node structure
struct Node {
    public:
    int data;
    Node* next;

    // Constructor with two parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert array to linked list
Node* convertarr2LL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // safety check for empty vector

    Node* head = new Node(arr[0]); // create head node with first value
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head; // return the start of the linked list
}
int lengthofLL(Node *head){
    int count=0;
    Node*temp=head;
    while(temp){
    temp=temp->next;
    count++;
    }
    return count;
}
int searchElement(Node*head,int target){
    Node*temp=head;
    while(temp){
        if(temp->data==target) return 1;
        temp=temp->next;
    }
    return 0;
}
// Main function
int main() {
    vector<int> arr = {2, 5, 9, 11};

    Node* head = convertarr2LL(arr);

    // Print the linked list
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<lengthofLL(head)<<" ";

    return 0;
}
