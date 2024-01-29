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
    cout<<"1-Edit "<<value<<"\t\t2-Show "<<value<<"\n";
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
                    if(TypeProcess==1) {
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

                    }
                    break;
                case 2:
                    show("Course");
                    break;
                case 3:
                    show("Teacher");
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
