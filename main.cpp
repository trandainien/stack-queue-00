#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

void push(Node *&head, int x)
{
    Node *newNode = new Node;
    newNode->value = x;
    newNode->next = head;
    head = newNode;
}

bool pop(Node *&head, int &value)
{
    if (!head)
        return false;
    value = head->value;
    Node *temp = head;
    head = head->next;
    delete temp;
    return true;
}
void outputStack(Node *head)
{
    while (head)
    {
        cout << head->value << ' ';
        head = head->next;
    }
}

int main()
{

    // stack and queue
    stack<int> a;
    a.pop();

    Node *head = nullptr;
    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);

    int value;
    pop(head, value);
    cout<<value;

    outputStack(head);

    delete[] head;
}