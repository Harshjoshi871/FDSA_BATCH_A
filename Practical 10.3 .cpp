#include <iostream>
using namespace std;

int main()
{
    int a[10], n, id, h1, h2, pos, i;

    for(int j = 0; j < 10; j++)
        a[j] = -1;

    cout << "Enter number of students: ";
    cin >> n;

    if(n < 0 || n > 10)
    {
        cout << "Invalid number";
        return 0;
    }

    for(int j = 0; j < n; j++)
    {
        cout << "Enter student ID: ";
        cin >> id;

        h1 = id % 10;
        h2 = 7 - (id % 7);

        i = 0;

        while(i < 10)
        {
            pos = (h1 + i * h2) % 10;

            if(a[pos] == -1)
                break;

            i++;
        }

        if(i == 10)
            cout << "Hash table full\n";
        else
            a[pos] = id;
    }

    for(int j = 0; j < 10; j++)
    {
        cout << j << " : ";

        if(a[j] == -1)
            cout << "Empty";
        else
            cout << a[j];

        cout << endl;
    }

    return 0;
}
