#include <iostream>
#include <string>
using namespace std;

const int MAX_PEOPLE = 50;

struct Person
{
    string name;
    int age;
};

Person people[MAX_PEOPLE];
int numPeople = 0;

void addPerson(Person &person)
{
    if (numPeople >= MAX_PEOPLE)
    {
        cout << "Error: too many people" << endl;
        return;
    }
    cout << "Enter Name: ";
    getline(cin, person.name);
    cout << "Enter Age: ";
    cin >> person.age;
    people[numPeople] = person;
    numPeople++;
}

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

void editPerson(int index)
{
    cout << "Enter new name: ";
    getline(cin, people[index].name);
    cout << "Enter new age: ";
    cin >> people[index].age;
}

void displayMenu()
{
    cout << "=========================";
    cout << "1. Add person" << endl;
    cout << "2. Search person" << endl;
    cout << "3. Edit person" << endl;
    cout << "4. Exit" << endl;
    cout << "=========================";
}

int main()
{
    int choice;
    while (1)
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Person person;
            addPerson(person);
            break;
        }
        case 2:
        {
            string name;
            cout << "Enter the name of the person: ";
            getline(cin, name);
            int index = searchPerson(name);
            if (index != -1)
            {
                cout << "Name: " << people[index].name << endl;
                cout << "Age: " << people[index].age << endl;
            }
            else
            {
                cout << "Person not found." << endl;
            }
            break;
        }
        case 3:
        {
            string name;
            cout << "Enter the name of the person: ";
            cin >> name;
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
            exit(1);
        }
    }

    return 0;
}
