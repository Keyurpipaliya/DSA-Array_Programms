// Write an program of sortsqude program into array of integers and sort ascending and desceding order it.

#include <iostream>

using namespace std;

// Define a structure to hold student information
struct Student {
    string name;
    int roll_no;
    float marks;
};

// Function to find the topper from a vector of students
Student findTopper(const vector<Student>& students) {
    if (students.empty()) {

        return {"No students",};
    }

    // Initialize the topper candidate with the first student's record
    Student topper = students[0];

    // Iterate through the rest of the students to find the maximum marks
    for (size_t i = 1; i < students.size(); ++i) {
        if (students[i].marks > topper.marks) {
            topper = students[i]; // Update topper if current student has higher marks
        }
    }

    return topper;
}

int main() {
    vector<Student> students_list;
    int num_students;

    cout << "Enter the number of students: ";
    if (!(cin >> num_students) || num_students <= 0) {
        cout << "Invalid input. Exiting." << endl;
        return 1;
    }

    // Input student details
    for (int i = 0; i < num_students; ++i) {
        Student temp_student;
        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
    
        cout << "Roll No: ";
        cin >> temp_student.roll_no;
        cout << "Marks: ";
        cin >> temp_student.marks;

    }

    // Find the topper
    Student topper_student = findTopper(students_list);

    // Display topper's information
    cout << "\n Topper Information " << endl;
    cout << "Name: " << topper_student.name << endl;
    cout << "Roll No: " << topper_student.roll_no << endl;
    cout << "Marks: " << topper_student.marks << endl;

    return 0;
}
