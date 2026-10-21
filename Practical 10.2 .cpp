#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* a[10];

    for(int i = 0; i < 10; i++)
        a[i] = NULL;

    int n, code, pos;

    cout << "Enter number of books: ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << "Enter book code: ";
        cin >> code;

        pos = code % 10;

        Node* temp = new Node;
        temp->data = code;
        temp->next = a[pos];
        a[pos] = temp;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << i << " : ";

        Node* temp = a[i];

        if(temp == NULL)
            cout << "Empty";

        while(temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    return 0;
}
