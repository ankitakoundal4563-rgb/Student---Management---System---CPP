#include<iostream>
#include<string>
using namespace std;

class Student {
private:
   float aadhar_number;
   string email_ID;
public:
    int roll;
    string name;
    float marks;

   void setAadharNumber(float a_num)
   {
       aadhar_number = a_num;
   }
   void setEmailID(string e_id)
   {
       email_ID = e_id;
   }
   float getAadharNumber()
   {
       return aadhar_number;
   }
   string getEmailID()
   {
       return email_ID;
   }

   void input() 
   {
       cout << "Roll: ";
       cin >> roll;
       cout << "Name: ";
       cin >> name;
       cout << "Marks: ";
       cin >> marks;
       cout << "Aadhar: ";
       float a;
       cin >> a;
       setAadharNumber(a);
       cout << "Email: ";
       string e;
       cin >> e;
       setEmailID(e);
   }

   void display()
   {
       cout<< "Roll: "<< roll << endl;
       cout<< "Name: "<< name << endl;
       cout<< "Marks: "<< marks << endl;
       cout<< "Aadhar: "<< aadhar_number << endl;
       cout<< "Email: "<< email_ID << endl;
       cout << "-------------------\n";
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
            bool found = false;
            for(int i=0; i<n; i++) {
                if(s[i].roll == roll) {
                    s[i].display();
                    found = true;
                    break;
                }
            }
            if(!found) cout << "Student nahi mila \n";
        }
        else break;
    }
    return 0;
}
