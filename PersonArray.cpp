#include <iostream>

using namespace std;

struct Person
{
    char name[50];
    int age;

};

void enterDetails(Person p[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "What is the person's name: ";
        cin.get(p[i].name, 50);
        cin.get();
        cout << "What is the person's age: ";
        cin >> p[i].age;
        cin.get();
    }

}

void displayDetails(Person p[3])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Name: " << p[i].name << endl;
        cout << "Age: " << p[i].age << endl;
    }
}

int main()
{
    Person p[3];
    enterDetails(p);
    displayDetails(p);

}
