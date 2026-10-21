#include <iostream>
using namespace std;

int main()
{
    int a[10], n, id, pos;

    for(int i = 0; i < 10; i++)
        a[i] = -1;

    cout << "Enter number of vehicles: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter vehicle number: ";
        cin >> id;

        pos = id % 10;
        int count = 0;

        while(a[pos] != -1 && count < 10)
        {
            pos = (pos + 1) % 10;
            count++;
        }

        if(count == 10)
            cout << "Parking full\n";
        else
            a[pos] = id;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << i << " : ";

        if(a[i] == -1)
            cout << "Empty";
        else
            cout << a[i];

        cout << endl;
    }

    return 0;
}
