#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        setMarks(m); 
    }
    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }

    
    void setMarks(float newMarks) {
        if (newMarks >= 0 && newMarks <= 100) {
            marks = newMarks;
        } else {
            cout << "Invalid marks for " << name << ". Enter marks between 0 and 100:" << endl;
            marks = 0;
        }
    }

    
    void display() {
        cout << "Roll No: " << rollNo << " | Name: " << name << " | Marks: " << marks << endl;
    }
};


void Result(Student st) {
    cout << st.getName() << " - ";
    if (st.getMarks() >= 40) {
        cout << "PASS" << endl;
    } else {
        cout << "FAIL" << endl;
    }
}

int main() {
    Student students[3] = {
        Student(101, "Aiden", 100),
        Student(102, "Anika", 97),
        Student(203, "Sam", 87)  
    };

    students[0].display();
    students[1].display();
    students[2].display();

    students[1].setMarks(99);

    Result(students[0]);
    Result(students[1]);
    Result(students[2]);

    return 0;
}
