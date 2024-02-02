//
// Created by Ebrahim Emad on 2/2/2024.
//
class Teacher_Validation{
public:
};
class Course_Validation{
public:
};
class Student_Validation{
public:
    int validate_student(Student student){
        if(student.getName().size()==0 || student.getName().size()>7 || student.getName().size()<5 ){
            cout<<"Invalid Name\n";
        }
        else if(student.getAge()>=30 || student.getAge()<=18 ){
            cout<<"Invalid Age\n";
        }
        else if((student.getPhone_Number()[0]!='0') ||
                (student.getPhone_Number()[1]+ student.getPhone_Number()[2])!=('1'+'1') &&
                (student.getPhone_Number()[1]+ student.getPhone_Number()[2])!=('1'+'2')&&
                (student.getPhone_Number()[1]+ student.getPhone_Number()[2])!=('1'+'0')&&
                (student.getPhone_Number()[1]+ student.getPhone_Number()[2])!=('1'+'5') ||
                (student.getPhone_Number().size()!=11)){
            cout<<"Invalid Phone Number\n";
        }
        else if(student.getGpa()>=10 || student.getGpa()<0){
            cout<<"Invalid Gpa\n";
        }
        else {
            return 1;
        }
        return -1;
    }
};
