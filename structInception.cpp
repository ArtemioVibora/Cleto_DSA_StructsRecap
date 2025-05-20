#include <iostream>
#include <cstdlib>

using namespace std;

struct Person
{
    char name[50];
    int age;
};

struct Address
{
    int numberAddress;
    char streetName[50];
    char cityName[50];
};

struct Student
{
    Person person;
    double grade;
    Address address;
};


void enterDetails(Student student[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student name: ";
        cin.get(student[i].person.name, 50);
        cin.get();
        cout << "Enter student age: ";
        cin >> student[i].person.age;
        cin.get();
        cout << "Enter grade: ";
        cin >> student[i].grade;
        cin.get();
        cout << "Enter number address: ";
        cin >> student[i].address.numberAddress;
        cin.get();
        cout << "Enter street name: ";
        cin.get(student[i].address.streetName, 50);
        cin.get();
        cout << "Enter city name: ";
        cin.get(student[i].address.cityName, 50);
        cin.get();
        cout << endl;
    }

}

void printDetails(Student student[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Student Name: " << student[i].person.name << endl;
        cout << "Student Age: " << student[i].person.age << endl;
        cout << "Student Grade: " << student[i].grade << endl;
        cout << "Student Address: " << student[i].address.numberAddress << " " <<
            student[i].address.streetName << " " << student[i].address.cityName << endl;
    }
    cout << endl;
}

int main()
{
    Student student[5];
    enterDetails(student);
    printDetails(student);



}
