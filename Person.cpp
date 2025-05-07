#include <iostream>

using namespace std;

struct Person
{
    char name[50];
    int age;
};

void enterDetails(Person person)
{
    cout << "What is the name of the person: ";
    cin.get(person.name, 50);
    cin.get();
    cout << "How old is that person: ";
    cin >> person.age;
    cin.get();

    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
}


int main()
{
    Person person;
    enterDetails(person);
    //displayDetails(person);
}
