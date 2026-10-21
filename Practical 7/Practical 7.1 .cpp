#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter capacity:";
    cin>>n;

    int queue[100];
    int front = 0;
    int rear = -1;
    int count = 0;

    int choice, token;

    while (1)
    {
        cout << "1. Join"<<endl;
        cout << "2. Serve"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter choice: "<<endl;
        cin >> choice;

        if (choice == 1)
        {
            if (count == n)
            {
                cout <<"Error: Queue is full"<<endl;
            }
            else
            {
                cout <<"Enter token: ";
                cin >> token;

                rear = (rear + 1) % n;
                queue[rear] = token;
                count++;

                cout << "Front token: " << queue[front]<<endl;
            }
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout <<"Error: Queue is empty"<<endl;
            }
            else
            {
                cout <<"Served token: "<<queue[front]<<endl;

                front = (front + 1) % n;
                count--;

                if (count == 0)
                    cout <<"Queue is empty" <<endl;
                else
                    cout << "Front token: "<<queue[front]<< endl;
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout<<"Invalid choice"<<endl;
        }
    }

    return 0;
}
