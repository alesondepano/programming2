#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;

    Student *next;
};

int main(){
    Student *stud, *head = NULL, *current = NULL;

    int count = 0;
    int id;
    string name;

    // Ask the user how many records to input;
    cout << "How many records do you want to input?: ";
    cin >> count;

    for(int i = 1; i <= count; i++){
        // Input necessary information
        cout << "Enter ID Number: ";
        cin >> id;
        cin.ignore();
        cout << "Enter name: ";
        getline(cin, name);

        // Create the node
        stud = new Student;
        // Set the data fields
        stud->id = id;
        stud->name = name;
        stud->next = NULL;

        // Insert the node to the list
        if(head == NULL){ // Check if linked-list has nodes
            // If the list is still empty
            head = stud;
        } else { // If the list has elements
            // Traverse the list until end is reached
            current = head; // Go to the first node
            // Loop until last node is reached
            while(current->next != NULL){
                current = current->next;
            }
            // Insert the node at the end of the linked-list
            current->next = stud;
        }
    }

    // Display all the records in your list
    current = head; // Go to the head node
    cout << "\n------------------------------------------------\n";
    while(current != NULL){
        cout << "ID Number: " << current->id << endl;
        cout << "Name: " << current->name << endl;
        cout << "------------------------------------------------\n";
        // Got to the next node in you list
        current = current->next;
    }

    // Search a node
    bool found = false;
    cout << "Enter name of student to search: ";
    getline(cin, name);
    current = head;
    while(current != NULL){
        if(current->name.compare(name) == 0){ // The record is found
            cout << "------------------------------------------------\n";
            cout << "ID Number: " << current->id << endl;
            cout << "Name: " << current->name << endl;
            cout << "------------------------------------------------\n";
            found = true;
            break;
        }
        current = current->next;
    }

    if(!found){
        cout << "The record with name " << name << " is not found...";
    }
}