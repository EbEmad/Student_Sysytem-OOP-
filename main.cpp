#include <bits/stdc++.h>
#include "Controller/Controller.cpp"
using namespace std;
void DisplaySystem(){
    cout<<"Please Enter Your Process\n";
    cout<<"1-About Student\t\t2-About Courses\n";
    cout<<"3-About Teacher\t\t4-Exist\n";
}
void show(string value){
    cout<<"1-Add "<<value<<"\t\t2-Remove "<<value<<"\n";
    cout<<"3-Edit "<<value<<"\t\t4-Show "<<value<<"\n";
    cout<<"5-Exist\n";
}
void addstudent(){
    cout << "Please Enter Student Data\n";
    string Name,phonenumber;
    double gpa;
    int age;
    Student student;

    cout << "Enter Student Name\n";
    cin>>Name;
    student.setName(Name);
    cout << "Enter Student age\n";
    cin>>age;
    student.setAge(age);
    cout << "Enter Student PhoneNumber\n";
    cin>>phonenumber;
    student.setPhone_Number(phonenumber);
    cout << "Enter Student gpa\n";
    cin>>gpa;
    student.setGpa( gpa);
    StudentController studentController;
    cout<<"We go to our trip\n";
    int id= studentController.addStudent(student);
    cout<<"Success Added Student with id =  : "<<id<<"\n";
}
void addcourse(){
    Course data;
    double hour;
    string name;
    cout << "Please Enter Course Data\n";
    cout << "Enter Course Name\n";
    cin>>name;
    data.setName(name);
    cout << "Enter Course Hour\n";
    cin>>hour;
    data.setHour(hour);
    CourseController coursecontroller;
    int id=coursecontroller.addCourse(data);
    if(id!=-1)
    cout<<"Success Added Course with id =  : "<<id<<"\n";
}
void addteacher(){
    Teacher data;
    double salary;
    string Name,phone_number;
    int age;
    cout << "Please Enter Course Data\n";
    cout << "Enter Teacher Name\n";
    cin>>Name;
    data.setName(Name);
    cout << "Enter Teacher age\n";
    cin>>age;
    data.setAge(age);
    cout << "Enter Teacher PhoneNumber\n";
    cin>>phone_number;
    data.setPhone_Number(phone_number);
    cout << "Enter Teacher salary\n";
    cin>>salary;
    data.setSalary(salary);
    TeacherController teachercontroller;
    int id=teachercontroller.addTeacher(data);
    if(id!=-1)
    cout<<"Success Added Teacher with id =  : "<<id<<"\n";
}
signed main() {
    int process;
    int flag=0;
    int TypeProcess;
        while(true){
           DisplaySystem();
            cin>>process;
            switch (process) {
                case 1:
                    show("Student");
                    cin>>TypeProcess;
                    switch (TypeProcess) {
                        case 1:
                            addstudent();
                            break;
                        case 2:
                            cout<<"2\n";
                            break;
                        case 3:
                            cout<<"3\n";
                            break;
                        case 4:
                            cout<<"4\n";
                            break;
                        case 5:
                            break;
                        default:
                            cout<<"Invalid Case\n";
                            break;
                    }
                    break;
                case 2:
                    show("Course");
                    cin>>TypeProcess;
                    switch (TypeProcess) {
                        case 1:
                            addcourse();
                            break;
                        case 2:
                            cout<<"Remove Course\n";
                            break;
                        case 3:
                            cout<<"Edit Course\n";
                            break;
                        case 4:
                            cout<<"Show Course\n";
                            break;
                        case 5:
                            break;
                        default:
                            cout<<"Invalid Case\n";
                            break;
                    }
                    break;
                case 3:
                    show("Teacher");
                    cin>>TypeProcess;
                    switch (TypeProcess) {
                        case 1:
                            addteacher();
                            break;
                        case 2:
                            cout<<"Remove Teacher\n";
                            break;
                        case 3:
                            cout<<"Edit Teacher\n";
                            break;
                        case 4:
                            cout<<"Show Teacher\n";
                            break;
                        case 5:
                            break;
                        default:
                            cout<<"Invalid Case\n";
                            break;
                    }
                    break;
                case 4:
                    flag=1;
                    break;
                default:
                    cout<<"Invalid Case\n";
            }
            if(flag)
                break;
        }


    return 0;
}
