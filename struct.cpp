#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

struct Student
{
    string name;
    int age;
    string course;
    int yearLevel;
    string specialization;
};

Student people[10];
int numPeople = 0;

int searchPerson(string name)
{
    for (int i = 0; i < numPeople; i++)
    {
        if (people[i].name == name)
        {
            return i;
        }
    }
    return -1;
}

void addPerson(Student &person)
{

    if (numPeople >= 10)
    {
        cout << "Error: too many people" << endl;
        return;
    }

    while (1)
    {
        cout << "Enter Name: ";
        getline(cin, person.name);
        int index = searchPerson(person.name);
        bool valid = true;
        if (index != -1)
        {
            cout << "Name is already on the list.\n";
            valid = false;
        }
        for (int i = 0; i < person.name.size(); i++)
        {
            if (!isalpha(person.name[i]) && !isspace(person.name[i]))
            {
                cout << "Invalid name. You can only input letters and spaces.\n";
                valid = false;
                break;
            }
        }

        if (valid)
            break;
    }

    while (1)
    {
        cout << "Enter Age: ";
        cin >> person.age;
        cin.ignore();
        if (person.age >= 17 && person.age <= 35)
        {
            break;
        }
        cout << "Invalid age. Please enter a value between 17 and 35.\n";
    }

    while (1)
    {
        cout << "Enter Course (BSIT, BSCS): ";
        getline(cin, person.course);
        if (person.course == "BSIT" || person.course == "BSCS")
        {
            break;
        }
        cout << "Invalid Course. Please enter 'BSIT' or 'BSCS'.\n ";
    }

    while (1)
    {
        cout << "Enter Year Level (1-4): ";
        cin >> person.yearLevel;
        cin.ignore();
        if (person.yearLevel >= 1 && person.yearLevel <= 4)
        {
            break;
        }
        cout << "Invalid Year Level. Please enter within 1-4.\n";
    }

    if (person.course == "BSCS")
    {

        while (1)
        {
            cout << "Enter Specialization (SE, DS)";
            getline(cin, person.specialization);
            if (person.specialization == "SE" || person.specialization == "DS")
            {
                break;
            }
            cout << "Invalid Specialization. Please enter SE or DS.\n";
        }
    }
    else if (person.course == "BSIT")
    {

        while (1)
        {
            cout << "Enter Specialization (WMA, DA, AGD, SMBA): ";
            getline(cin, person.specialization);
            if (person.specialization == "WMA" || person.specialization == "DA" || person.specialization == "AGD" || person.specialization == "SMBA")
            {
                break;
            }
            cout << "Invalid Specialization. Please enter WMA, DA, AGD or SMBA.\n";
        }
    }
    people[numPeople] = person;
    numPeople++;
}

void viewPerson()
{
    for (int i = 0; i < numPeople; i++)
    {
        cout << "\nStudent #" << i + 1 << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Course: " << people[i].course << endl;
        cout << "Year Level: " << people[i].yearLevel << endl;
        cout << "Specialization: " << people[i].specialization << endl;
        cout << "\n";
    }
}

void editPerson(int index)
{
    while (1)
    {
        bool valid = true;
        cout << "Enter New Name: ";
        getline(cin, people[index].name);
        for (int i = 0; i < people[index].name.size(); i++)
        {
            if (!isalpha(people[index].name[i]) && !isspace(people[index].name[i]))
            {
                cout << "Invalid name. You can only input letters and spaces.\n";
                valid = false;
                break;
            }
        }
        if (valid)
        {
            break;
        }
    }

    while (1)
    {
        cout << "Enter New Age: ";
        cin >> people[index].age;
        cin.ignore();
        if (people[index].age >= 17 && people[index].age <= 35)
        {
            break;
        }
        cout << "Invalid age. Please enter a value between 17 and 35.\n";
    }

    while (1)
    {
        cout << "Enter New Course (BSIT, BSCS): ";
        getline(cin, people[index].course);
        if (people[index].course == "BSIT" || people[index].course == "BSCS")
        {
            break;
        }
        cout << "Invalid Course. Please enter 'BSIT' or 'BSCS'.\n ";
    }

    while (1)
    {
        cout << "Enter New Year Level (1-4): ";
        cin >> people[index].yearLevel;
        cin.ignore();
        if (people[index].yearLevel >= 1 && people[index].yearLevel <= 4)
        {
            break;
        }
        cout << "Invalid Year Level. Please enter within 1-4.\n";
    }

    if (people[index].course == "BSCS")
    {

        while (1)
        {
            cout << "Enter New Specialization (SE, DS)";
            getline(cin, people[index].specialization);
            if (people[index].specialization == "SE" || people[index].specialization == "DS")
            {
                break;
            }
            cout << "Invalid Specialization. Please enter SE or DS.\n";
        }
    }
    else if (people[index].course == "BSIT")
    {

        while (1)
        {
            cout << "Enter New Specialization (WMA, DA, AGD, SMBA): ";
            getline(cin, people[index].specialization);
            if (people[index].specialization == "WMA" || people[index].specialization == "DA" || people[index].specialization == "AGD" || people[index].specialization == "SMBA")
            {
                break;
            }
            cout << "Invalid Specialization. Please enter WMA, DA, AGD or SMBA.\n";
        }
    }
}

void deletePerson(int index)
{
    if (index != -1)
    {
        people[index].name = people[index + 1].name;
        people[index].age = people[index + 1].age;
        people[index].course = people[index + 1].course;
        people[index].yearLevel = people[index + 1].yearLevel;
        people[index].specialization = people[index + 1].specialization;
    }
    numPeople--;
}

void displayMenu()
{
    cout << "\n=========================\n";
    cout << "Student Record" << endl;
    cout << "1. Add" << endl;
    cout << "2. View" << endl;
    cout << "3. Edit" << endl;
    cout << "4. Delete" << endl;
    cout << "5. Exit" << endl;
    cout << "Maximum of 10 Students" << endl;
    cout << "No. of Students: " << numPeople << endl;
    cout << "=========================\n";
}

int main()
{
    int choice;
    while (1)
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            Student person;
            addPerson(person);
            break;
        }
        case 2:
        {
            viewPerson();
            break;
        }
        case 3:
        {
            string name;
            cout << "Enter the name of the person: ";
            getline(cin, name);
            int index = searchPerson(name);
            if (index != -1)
            {
                editPerson(index);
            }
            else
            {
                cout << "Person not found";
            }
            break;
        }
        case 4:
        {
            string name;
            cout << "Name of the person you want to remove: ";
            getline(cin, name);
            int index = searchPerson(name);
            if (index != -1)
            {
                deletePerson(index);
                cout << "Successfully removed: " << name;
            }
            else
            {
                cout << "Person not found.";
            }
            break;
        }
        case 5:
            exit(1);

        default:
            cout << "Wrong Choice";
            break;
        }
    }

    return 0;
}
