//
// Created by Ebrahim Emad on 1/28/2024.
//
#include "../Repo/Repository.cpp"
#include "../Validation/Validation.cpp"
////////// Student //////////
// Interface
class StudentService{
public:
    virtual int  addStudent(Student student)=0;

};
class StudentServiceImpl{
private:
    StudentImpl StudentRepo;
    Student_Validation student_validation;

public:
    int addStudent(Student student){
        cout<<"U in StudentService\n";
        if(student_validation.validate_student(student)!=-1){
            return StudentRepo.addStudent(student);
        }
        else return -1;
}
};
////////// Course //////////
// Interface
class CourseService{
public:
    virtual int  addCourse(Course course)=0;
};
// Impl
class CourseServiceImpl{
private:
    CourseImpl CourseRepo;
public:
    int  addCourse(Course course){
        if(course.getName().size()==0 || course.getName().size()<4 ){
            cout<<"Invalid Course Name\n";
        }
        else if(course.getHour()>15 || course.getHour()<5)cout<<"Invalid Hour\n";
        else
       return CourseRepo.addCourse(course);
        return -1;
    }
};
////////// Teacher //////////
// Interface
class TeacherService{
public:
    virtual int  addTeacher(Teacher teacher)=0;
};
// Impl
class TeacherServiceImpl{
private:
    TeacherImpl TeacherRepo;
public:
    int  addTeacher(Teacher teacher){
        if(teacher.getName().size()==0 || teacher.getName().size()>7 || teacher.getName().size()<5 ){
            cout<<"Invalid Name\n";
        }
        else if(teacher.getAge()>60 || teacher.getAge()<30 ){
            cout<<"Invalid Age\n";
        }
        else if((teacher.getPhone_Number()[0]!='0') ||
                (teacher.getPhone_Number()[1]+ teacher.getPhone_Number()[2])!=('1'+'1') &&
                (teacher.getPhone_Number()[1]+ teacher.getPhone_Number()[2])!=('1'+'2')&&
                (teacher.getPhone_Number()[1]+ teacher.getPhone_Number()[2])!=('1'+'0')&&
                (teacher.getPhone_Number()[1]+ teacher.getPhone_Number()[2])!=('1'+'5') ||
                (teacher.getPhone_Number().size()!=11)){
            cout<<"Invalid Phone Number\n";
        }
        else if(teacher.getSalary()<5000 || teacher.getSalary()>15000){
            cout<<"Invalid Salary\n";
        }
        else
        return TeacherRepo.addTeacher(teacher);
        return -1;
    }

};