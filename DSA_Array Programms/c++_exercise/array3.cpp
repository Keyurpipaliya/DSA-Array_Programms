//C++ Program to Problems involving accessing Array in different ways. 
#include <iostream>

using namespace std;

int main() {

    int a[100], num;

    cout << "Enter Number of elements: ";
    cin >> num;

    cout <<"Enter " << num << "element:\n";

    for (int i = 0; i < num; i++)
    {
        cin>>a[i];
    }

    cout<<"Forward access"<<endl;
    
    for (int i = 0; i < num; i++)
    {
        cout<<"a["<<i<<"]= "<< a[i] <<endl;
    }

    // Reverse Access 
    cout<<"Reverse access"<<endl;

    for (int i = 0; i >= 0; i--)
    {
        cout<<"a["<<i<<"]= "<< a[i] <<endl;
    }

    // Even Numbers Access

    for (int i = 2; i < num; i+=2)
    {
       cout<<"a["<<i<<"]="<<a[i] <<endl;
    }

    cout<<"odd Position"<<endl;

    for (int i = 1; i < num; i+=2) 
    {
        cout<<"a["<<i<<"]="<<a[i] <<endl;
    }
    

    return 0;
    

}