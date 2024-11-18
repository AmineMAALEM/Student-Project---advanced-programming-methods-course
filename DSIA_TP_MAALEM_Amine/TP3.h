#pragma once

#include<iostream>
#include<vector>
#include<string>

struct note
{
    int MAXIMUM_GRADE;//=20
    double value;
};
struct result
{
    std::string module;
    note la_note;
};
struct student
{
    std::string firstName;
    std::string lastName;
    std::vector<result>results;
};
struct promotion
{
    std::string name;
    std::vector<student>students;
};


double getValue(note n);
note calculeNoteMoyenne(std::vector<note>notes);
note getNote(result r);
void addResult(std::string module, note note, std::vector<result>& results);
std::vector<note> getnotes(student s);
double averagenote(student s);
void printResults(student s);
void addStudent(promotion& promotion, student student);
std::vector<student> getStudents(promotion promtion);
void printStudentResults(promotion promotion);

void ExuctionTp3(int &valeurTmp);
