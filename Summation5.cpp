#include <iostream>

const int MAX_INDEX = 100;

using namespace std;

int main()
{
    int index;
    int j;
    cout << "Enter number of index: ";
    cin >> index;
    cout << "Enter number of skips: ";
    while(!(cin >> j) || j > MAX_INDEX || j <= 0)
    {
        cin.ignore(80, '\n');
        cin.clear();
    }

    for (int i = j; i < index; i += j)
    {
        cout << "\t" << i << endl;
    }
}
