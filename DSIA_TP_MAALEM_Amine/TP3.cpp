#include"TP3.h"

//using namespace std;


double getValue(note n)
{
    return n.value;
}

note calculeNoteMoyenne(std::vector<note>notes)
{
    note m;
    double s = 0;
    for (int i = 0; i < notes.size(); i++)
    {
        s = s + notes[i].value;
    }
    m.value = s / notes.size();
    return m;
}

note getNote(result r)
{
    return r.la_note;
}

void addResult(std::string module, note note, std::vector<result>& results)
{
    result nouveuxResult;
    nouveuxResult.module = module;
    nouveuxResult.la_note = note;
    results.push_back(nouveuxResult);
}

std::vector<note> getnotes(student s)
{
    std::vector<note> intermedierNote;
    for (int i = 0; i < s.results.size(); i++)
    {
        intermedierNote.push_back(s.results[i].la_note);
    }
    return intermedierNote;
}

double averagenote(student s)
{
    double m, somme = 0;
    for (int i = 0; i < s.results.size(); i++)
    {
        somme = somme + s.results[i].la_note.value;
    }
    m = somme / s.results.size();
    return m;
}

void printResults(student s)
{

    std::cout << s.firstName << " " << s.lastName << "\n";
    for (int i = 0; i < s.results.size(); i++)
    {
        std::cout << s.results[i].module << " : " << s.results[i].la_note.value << std::endl;//ou on peut mettre dabord getNote(s.results[i]) pour avoir la_note puis getvalue(getNote(s.results[i]))pour avoir la valeur de la note
    }
    std::cout << "Note moyenne :" << averagenote(s);
}

void addStudent(promotion& promotion, student student)
{
    promotion.students.push_back(student);
}

std::vector<student> getStudents(promotion promtion)
{
    return promtion.students;
}

void printStudentResults(promotion promotion)
{
    std::cout << promotion.name << "\n";
    for (int i = 0; i < promotion.students.size(); i++)
    {
        std::cout << promotion.students[i].firstName << " " << promotion.students[i].lastName;
        printResults(promotion.students[i]);
    }
}
void ExuctionTp3(int& valeurTmp)
{
    promotion promotion;
    promotion.name = "1 er année DSIA";
    std::vector <student> students;
    student student1;
    student1.firstName = "zaki";
    student1.lastName = "nygma";
    note note1;
    note1.MAXIMUM_GRADE = 20;
    note1.value = 12;
    note note2;
    note2.MAXIMUM_GRADE = 20;
    note2.value = 15;
    addResult("math", note1, student1.results);
    addResult("info", note2, student1.results);
    addStudent(promotion, student1);
    printStudentResults(promotion);
    std::cout << "\nentrer '0' pour quitter: ";
    std::cin >> valeurTmp;
    return;
}


