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

// AT TAIL
void enqueue()
{
}

// AT BEGINNING
void dequeue()
{
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
    cout << value;

    outputStack(head);

    delete[] head;
}

struct Stack
{
    Node *pStack = nullptr;

    // operations
    void push2(int x);
    void pop2(int x);
};

void Stack::push2(int x) // push2 belong to the stack

    // different between struct and class
