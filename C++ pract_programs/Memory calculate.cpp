#include <iostream>
#include <vector>

using namespace std;

// 1. Define a structure for a student
struct Student {
    int id;
    string name;
    double grade;
};


vector<Student> students;
int nextId = 1; 

// Function Prototypes
void addStudent();
void displayStudents();
void searchStudent();
void deleteStudent();

int main() {
    int choice;
    while (true) {
        cout << "\n--- Student Management System ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search for Student (by ID)" << endl;
        cout << "4. Delete Student (by ID)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle potential non-integer input
        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard bad input
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

// 4. Implement  functionalities
void addStudent() {
    Student newStudent;
    newStudent.id = nextId++;

    cout << "Enter student name: ";
    // Use cin.ignore() to clear the buffer before using getline()
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, newStudent.name);

    cout << "Enter student grade: ";
    cin >> newStudent.grade;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid grade input. Student not added." << endl;
        nextId--; // Revert ID increment if addition fails
        return;
    }

    students.push_back(newStudent); // 2. Add to vector
    cout << "Student with ID " << newStudent.id << " added successfully!" << endl;
}

void displayStudents() {
    if (students.empty()) {
        cout << "No students currently in the system." << endl;
        return;
    }

    cout << "\n--- Current Students ---" << endl;
    for (const auto& student : students) {
        cout << "ID: " << student.id << ", Name: " << student.name 
             << ", Grade: " << student.grade << endl;
    }
}

void searchStudent() {
    int idToFind;
    cout << "Enter student ID to search: ";
    cin >> idToFind;

    for (const auto& student : students) {
        if (student.id == idToFind) {
            cout << "Found Student:" << endl;
            cout << "ID: " << student.id << ", Name: " << student.name 
                 << ", Grade: " << student.grade << endl;
            return;
        }
    }

    cout << "Student with ID " << idToFind << " not found." << endl;
}

void deleteStudent() {
    int idToDelete;
    cout << "Enter student ID to delete: ";
    cin >> idToDelete;

    for (int i = 0; i < students.size(); ++i) {
        if (students[i].id == idToDelete) {
            // Remove the student using the erase method
            students.erase(students.begin() + i);
            cout << "Student with ID " << idToDelete << " deleted successfully." << endl;
            return;
        }
    }

    cout << "Student with ID " << idToDelete << " not found." << endl;
}
