#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> v) {
    if (v.empty()) {
        cout << "Vector is empty.\n";
        return;
    }
    cout << "Vector elements: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main() {
    vector<int> v;
    int choice, value;

    do {
        cout << "\n========= VECTOR PUSH & POP (DSA PROGRAM) =========\n";
        cout << "1. Push Back (Insert Element)\n";
        cout << "2. Pop Back (Remove Last Element)\n";
        cout << "3. Display Vector\n";
        cout << "4. Find Largest Element\n";
        cout << "5. Find Smallest Element\n";
        cout << "6. Search Element\n";
        cout << "7. Reverse Vector\n";
        cout << "8. Size & Capacity\n";
        cout << "9. Clear Vector\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            v.push_back(value);
            cout << "Element inserted successfully.\n";
            break;

        case 2:
            if (!v.empty()) {
                cout << "Removed element: " << v.back() << endl;
                v.pop_back();
            } else {
                cout << "Vector is empty! Cannot pop.\n";
            }
            break;

        case 3:
            display(v);
            break;

        case 4:
            if (!v.empty())
                cout << "Largest element: " << *max_element(v.begin(), v.end()) << endl;
            else
                cout << "Vector is empty.\n";
            break;

        case 5:
            if (!v.empty())
                cout << "Smallest element: " << *min_element(v.begin(), v.end()) << endl;
            else
                cout << "Vector is empty.\n";
            break;

        case 6:
            cout << "Enter element to search: ";
            cin >> value;
            if (find(v.begin(), v.end(), value) != v.end())
                cout << "Element found.\n";
            else
                cout << "Element not found.\n";
            break;

        case 7:
            reverse(v.begin(), v.end());
            cout << "Vector reversed.\n";
            break;

        case 8:
            cout << "Size: " << v.size() << endl;
            cout << "Capacity: " << v.capacity() << endl;
            break;

        case 9:
            v.clear();
            cout << "Vector cleared.\n";
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}
