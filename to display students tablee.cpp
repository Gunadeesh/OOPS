#include <iostream>

using namespace std;

class Student_Info{
    int roll_number;
    char student_name[50], grade[2];

    public:
        void read_data(int count){
            cout<<"\n\n--------- Enter student "<<count+1<<" information ---------\n";
            cout<<"Name of the Student is : ";
            cin>>student_name;
            cout<<"Roll Number of the student is : ";
            cin>>roll_number;
            cout<<"Grade (A+,A,B+,B,C,D,E,F) is : ";
            cin>>grade;
            cout<<"\nStudent information with roll number "<<roll_number<<" has saved!";
        }
        void display_data(int count){
            cout<<"\n\n**** Student "<<count+1<<" Information ****";
            cout<<"\nName of the Student: "<<student_name;
            cout<<"\nRoll Number: "<<roll_number;
            cout<<"\nGrade Secured: "<<grade;
            cout<<"\n---------------------------------------\n";
        }
};

int main(){
    Student_Info stud[3];
    int i;
    for(i=0; i<3; i++)
        stud[i].read_data(i);
    cout<<"The information of 3 students has been saved.";
    for(i=0; i<3; i++)
        stud[i].display_data(i);
    return 0;
}
