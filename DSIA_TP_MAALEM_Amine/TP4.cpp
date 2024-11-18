#include"TP4.h"

// La classe Note
Note::Note(int MAXIMUM , double val ) : MAXIMUM_GRADE(MAXIMUM), value(val)
{
}
double Note::getValue()
{
    return value;
}
void Note::setValue(double note)
{
    value = note;
}
void Note::setMAXIMUM_GRADE(int note )
{
    MAXIMUM_GRADE = note;
}
Note Note::note_moyenne(std::vector<Note>notes)
{
    double somme = 0;
    Note moyenne;
    for (int i = 0; i < notes.size(); i++)
    {
        somme = somme + notes.at(i).getValue();
    }
    moyenne.value = somme / notes.size();

    return moyenne;
}
//La classe Result
Result::Result(std::string mod , int MAXIMUM , double val ) : module(mod), lanote(MAXIMUM, val)
{
}
Note Result::getNote()
{
    return lanote;
}
std::string Result::getModule()
{
    return module;
}
void Result::setModule(std::string nom)
{
    module = nom;
}
void Result::setNote(Note note)
{
    lanote = note;
}
//La classe Student
Student::Student(std::string first , std::string last ) : firstName(first), lastName(last)
{
}
std::string Student::getFirstName()
{
    return firstName;
}
std::string Student::getLastName()
{
    return lastName;
}
std::vector<Result> Student::getResults()
{
    return results;
}
void Student::setFirstName(std::string name)
{
    firstName = name;
}
void Student::setLastName(std::string name)
{
    lastName = name;
}
void Student::addResult(std::string module, Note note)
{
    Result nouveauResultat;
    nouveauResultat.setModule(module);
    nouveauResultat.setNote(note);
    results.push_back(nouveauResultat);
}
std::vector<Note> Student::getNotes()
{
    std::vector<Note> intermedierNote;
    for (int i = 0; i < results.size(); i++)
    {
        intermedierNote.push_back(results[i].getNote());
    }
    return intermedierNote;
}
double Student::averageNote()
{
    Note m;
    return m.note_moyenne(getNotes()).getValue();
}
void Student::printResults()
{
    std::cout << getFirstName() << " " << getLastName() << std::endl;
    for (int i = 0; i < results.size(); i++)
    {
        std::cout << results.at(i).getModule() << " :" << results[i].getNote().getValue() << std::endl;
    }
    std::cout << "Note moyenne :" << averageNote() << std::endl;
}
//La classe Promotion
std::string Promotion::getName()
    {
        return name;
    }
    std::vector<Student> Promotion::getStudents()
    {
        return students;
    }
    void Promotion::setName(std::string nom)
    {
        name = nom;
    }
    void Promotion::addStudent(Student student)
    {
        students.push_back(student);
    }
    void Promotion::printStudentsResults()
    {
        std::cout << getName() << std::endl;
        for (int i = 0; i < students.size(); i++)
        {
            students.at(i).printResults();
        }
    }
    void ExuctionTp4(int &valeurTmp)
    {
        int choix;
        Promotion promotion;
        std::string tmpName;
        std::cout << "Donner le nom de la promotion :";
        getline(std::cin, tmpName);
        promotion.setName(tmpName);
        std::vector <Student> students(1);
        std::cout << "\nVeuilez Donner le Prenom et NOM de l etudiant:";
        std::cout << "\nPrenom: ";
        getline(std::cin, tmpName);
        students[0].setFirstName(tmpName);
        std::cout << "\nNOM: ";
        getline(std::cin, tmpName);
        students[0].setLastName(tmpName);
        do
        {
            std::cout << "\nVoullez vous ajouter des eleves \n\t(1 pour oui 0 pour non) :";
            std::cin >> choix;
            std::cin.ignore();
            if (choix == 1)
            {
                Student student;
                std::cout << "\nVeuilez Donner le Prenom et NOM de l etudiant:";
                std::cout << "\nPrenom: ";
                getline(std::cin, tmpName);
                student.setFirstName(tmpName);
                std::cout << "\nNOM: ";
                getline(std::cin, tmpName);
                student.setLastName(tmpName);
                students.push_back(student);
            }
        } while (choix != 0);
        std::cout << "\nVeuilez Donner le nom du module concerne  :";
        std::vector<std::string> nomModule(1);
        getline(std::cin, nomModule[0]);
        std::string nameModule;
        do
        {
            std::cout << "\nVoullez vous ajouter d autres modules\n\t(1 pour oui 0 pour non) :";
            std::cin >> choix;
            std::cin.ignore();
            if (choix == 1)
            {
                std::cout << "\nVeuilez Donner le nom du module concerne  :";
                getline(std::cin, nameModule);
                nomModule.push_back(nameModule);
            }
        } while (choix != 0);
        std::vector<std::vector<Note>> notes(students.size(), std::vector<Note>(nomModule.size()));
        Note n;
        double tmpValue;
        for (int k = 0; k < students.size(); k++)
        {
            std::cout << "\nVeuillez Donner la note de " << students.at(k).getFirstName() << " " << students.at(k).getLastName() << std::endl;
            for (int i = 0; i < nomModule.size(); i++)
            {
                std::cout << "en " << nomModule[i] << " :";
                std::cin >> tmpValue;
                n.setValue(tmpValue);
                n.setMAXIMUM_GRADE(20);
                std::cout << std::endl;
                notes[k][i] = n;
            }
        }
        for (int i = 0; i < students.size(); i++)
        {
            for (int j = 0; j < nomModule.size(); j++)
            {
                students[i].addResult(nomModule[j], notes[i][j]);
            }
        }
        for (int i = 0; i < students.size(); i++)
        {
            promotion.addStudent(students[i]);
        }
        promotion.printStudentsResults();
        std::cout << "\nentrer '0' pour quitter: ";
        std::cin >> valeurTmp;
        return;
    }















