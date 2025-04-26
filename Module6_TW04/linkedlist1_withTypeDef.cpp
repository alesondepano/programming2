#include<iostream>
using namespace std;

// Declare a stricture to serve as node for the linked list.
typedef struct Student{
    // Data field
    int id;
    string name;

    // Link field (pointer)
    Student *next;
} *NodePtr;

int main(){
    // Create a linked list
    NodePtr head = NULL, current = NULL;

    // 1. Creating a node
    NodePtr stud;
    stud = new Student; // Declare and instantiate the node
    stud->id = 1234; // Setting the data fields
    stud->name = "Joseph";
    stud->next = NULL; // Point the next pointer to nothing

    // 2. Inserting the node to the list
    if (head == NULL) { // Check if the list is empty
        head = stud;
    }

    // 3. Inserting another node
    stud = new Student;
    stud->id = 2345;
    stud->name = "Melissa";
    stud->next = NULL;

    if (head == NULL) {
        head = stud;
    } else {
        current = head;
        // Traversing the linked list
        while(current->next != NULL){
            current = current->next;
        }
        // If the end of the list is found, insert the new node
        current->next = stud;
    }

    stud = new Student;
    stud->id = 55689;
    stud->name = "Janelle";
    stud->next = NULL;

    if (head == NULL) {
        head = stud;
    } else {
        current = head;
        // Traversing the linked list
        while(current->next != NULL){
            current = current->next;
        }
        // If the end of the list is found, insert the new node
        current->next = stud;
    }

    // 4. Traverse and display the data in the linked list
    current = head;
    while(current != NULL){
        cout << "ID Number: " << current->id << endl;
        cout << "Name: " << current->name << endl << endl;

        // Got to the next node in you list
        current = current->next;
    }
}