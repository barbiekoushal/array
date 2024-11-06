#include <iostream>
 using namespace std;
class Student {
private:
    string name;
    int age;
    string reg_no;
    int roll_no;
    string semester;
    float attendance;
    float marks[5];
    float percentage;
public:
    void get_Details() {
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Registration Number: ";
        cin>> reg_no;
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Semester: ";
        cin >> semester;
        cout << "Enter Attendance: ";
        cin >> attendance;
        cout << "Enter Marks for 5 subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
        cout<<endl;
    }
    void show_Details() {
     cout<< "Name: " << name << endl;
     cout<< "Age: " << age <<  endl;
     cout<< "Registration No: " << reg_no <<  endl;
     cout<< "Roll No: " << roll_no <<  endl;
     cout<< "Semester: " << semester <<  endl;
     cout<< "Attendance: " << attendance <<  endl;
     cout<< "Marks: ";
        for (int i = 0; i < 5; ++i) {
            cout << marks[i] ;
        }
        cout <<endl;
    }
    void show_Name() {
        cout << "Name: " << name << endl;
    }
    void showRollNo() {
        cout << "Roll No: " << roll_no <<endl;
    }
    void showAttendance() {
        cout << "Attendance: " << attendance <<endl;
    }
    void printAttendance() {
        cout << "Roll No: " << roll_no << ", Name: " << name << ", Attendance: " << attendance << "%" << endl;
    }
    void showShortage() {
        if (attendance < 75) {
        cout << "Roll No " << roll_no <<",name"<<name<< ", Attendance Shortage" << endl;
        }
    }
    float getPercentage() {
        float total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];}
        int percentage=(total / 500)*100;
        cout<<"percentage is:"<<percentage<<"%"<<endl;
    }
    void  show_90percent()
    {    float total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];}
        int percentage=(total / 500)*100;
        if (percentage>=90)
        {
            cout<<"Students with percentage above 90:"<<"Name:"<<name<<" "<<",Percentage:"<<percentage<<endl;
        }
    }
};

int main() {
Student s1,s2;
s1.get_Details();
s1.show_Details();
s1.showShortage();
s1.getPercentage();
s1.printAttendance();
s2.get_Details();
s2.show_Details();
s2.showShortage();
s2.getPercentage();
s2.printAttendance();
s1.show_90percent();
s2.show_90percent();
}
