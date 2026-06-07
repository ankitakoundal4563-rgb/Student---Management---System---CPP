#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Roll No: ";
        cin >> roll;
        cout << "Name: ";
        cin >> name;
        cout << "Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll: " << roll << " | Name: " << name << " | Marks: " << marks << endl;
    }
};

int main() {
    Student s[100];
    int n = 0, choice, roll;

    while(true) {
        cout << "\n1. Add Student\n2. Show All\n3. Search\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            s[n].input();
            n++;
            cout << "Student Added! ✓\n";
        }
        else if(choice == 2) {
            for(int i=0; i<n; i++) s[i].display();
        }
        else if(choice == 3) {
            cout << "Enter Roll to search: ";
            cin >> roll;
            for(int i=0; i<n; i++) {
                if(s[i].roll == roll) {
                    s[i].display();
                    break;
                }
            }
        }
        else break;
    }
    return 0;
}