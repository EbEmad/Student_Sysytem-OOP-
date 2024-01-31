//
// Created by Ebrahim Emad on 1/28/2024.
//
#include "../Model/Models.cpp"
#include <iostream>
using namespace std;
/*
 * Static Data to make the Datashared public to all objects
 * and make the effects on all objects
 */
class StaticData{
public :
    static Student students[25];
    static int student_index;
    static int student_id;
    static Course courses[25];
    static int course_index;
    static int course_id;
    static Teacher teachers[25];
    static int teacher_index;
    static int teacher_id;
};
// to call static members of class and initilize the Array
Student StaticData::students[25];
int StaticData::student_index=0;
int StaticData::student_id=1;
Course StaticData::courses[25];
int StaticData::course_index=0;
int StaticData::course_id=1;
Teacher StaticData::teachers[25];
int StaticData::teacher_index=0;
int StaticData::teacher_id=1;
/////////////////// Student ///////////////////
// interface
class Student_Repo{
public :
    virtual int  addStudent(Student student)=0; // we should assign 0 to virtual function


};

//impl
class StudentImpl:public Student_Repo{
private:
        StaticData Data;
public:
        //overiding
        int  addStudent(Student student){
            cout<<"U in Student_Repo\n";
            if(Data.student_index>=25){
                cout<<"Full Student\n";
            }
            else {
                student.setId(Data.student_id++);
                Data.students[Data.student_index++] = student;
            }
            return student.getId();
        }
};
/////////////////// Course ///////////////////
// interface
class Course_Repo{
    virtual int  addCourse(Course course)=0;
};

//impl
class CourseImpl:public Course_Repo{
private:
    StaticData Data;

public:
    //overiding
    int  addCourse(Course course){
        if(Data.course_index>=25){
            cout<<"Full Course\n";
        }
        else {
            Data.courses[Data.course_index] = course;
            Data.course_index++;
        }
    }
};


/////////////////// Teacher ///////////////////
// interface
class Teacher_Repo{
    virtual int  addTeacher(Teacher teacher)=0;
};

//impl
class TeacherImpl:public Teacher_Repo{
private:
        StaticData Data;
public:
    //overiding
    int  addTeacher(Teacher teacher){
        if(Data.teacher_index>=25){
            cout<<"Full Teacher\n";
        }
        else {
            Data.teachers[Data.teacher_index] = teacher;
            Data.teacher_index++;
        }
    }
};
