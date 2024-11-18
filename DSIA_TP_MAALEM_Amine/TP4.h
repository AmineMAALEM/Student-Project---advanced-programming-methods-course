#pragma once
#include<iostream>
#include<string>
#include<vector>

class Note
{
    int MAXIMUM_GRADE;
    double value;
public:
    Note(int MAXIMUM = 20, double val = 20);
    double getValue();
    void setValue(double note);
    void setMAXIMUM_GRADE(int note = 20);
    Note note_moyenne(std::vector<Note>notes);
};
class Result
{
    std::string module;
    Note lanote;
public:
    Result(std::string mod = "nom du module", int MAXIMUM = 20, double val = 20);
    Note getNote();
    std::string getModule();
    void setModule(std::string nom);
    void setNote(Note note);
};

class Student
{
    std::string firstName;
    std::string lastName;
    std::vector <Result> results;
public:
    Student(std::string first = "Noobie", std::string last = "DOOBIE");
    std::string getFirstName();
    std::string getLastName();
    std::vector<Result> getResults();
    void setFirstName(std::string name);
    void setLastName(std::string name);
    void addResult(std::string module, Note note);
    std::vector<Note> getNotes();
    double averageNote();
    void printResults();
};
class Promotion
{
    std::string name;
    std::vector<Student>students;
public:
    std::string getName();
    std::vector<Student> getStudents();
    void setName(std::string nom);
    void addStudent(Student student);
    void printStudentsResults();
};
void ExuctionTp4(int &valeurTmp);


