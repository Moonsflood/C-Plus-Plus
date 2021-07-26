#include <iostream>

using namespace std;

struct Node
{ // struct node
  int data;
  Node *next;
};

class Queue
{
  struct Node *head, *tail; // inilizaing head and tail nodes
public:
  Queue()
  {
    head = tail = NULL;
  }
  void enQ();
  void deQ();
  void displayQ();
  void purge();
  void menu();
  int elem;
  int choice;
};

void Queue::enQ()
{
  cout << "Enter your element to be inserted the queue:" << endl;
  cin >> elem;
  Node *pointer = new Node;
  pointer->data = elem;
  pointer->next = NULL;
  if (head == NULL)
  {
    head = pointer;
  }
  else
    tail->next = pointer;
  tail = pointer;
  cout << "Element has been inserted in the queue!" << endl;
}
void Queue::deQ()
{
  if (head == NULL)
  {
    cout << "Queue is empty!" << endl;
  }
  Node *temp = head;
  head = head->next;
  delete temp;
}
void Queue::displayQ()
{
  Node *pointer1 = head;
  if (head == NULL)
  {
    cout << "Queue is empty!" << endl;
  }
  else
    cout << "Elements of your QUEUE!" << endl;
  while (pointer1 != NULL)
  {
    cout << pointer1->data << endl;
    pointer1 = pointer1->next;
  }
  cout << "End" << endl;
}

void Queue::purge()
{

  head = tail = NULL;
}

void Queue::menu()
{
  while (1)
  {
    cout << "                       ~~~~~~~~~~~~~" << endl;
    cout << "                      |  Queue Menu |                                      " << endl;
    cout << "                       ~~~~~~~~~~~~~" << endl;
    cout << "                                                              " << endl;
    cout << "                      1. Enqueue"
         << "\n";
    cout << "                      2. Dequeue"
         << "\n";
    cout << "                      3. Display Queue"
         << "\n";
    cout << "                      4. Purge"
         << "\n";
    cout << "                      5. Exit"
         << "\n";
    cout << "                      ++++++++++++++++++++++" << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "                   Please select a choice from the Menu" << endl;
    cin >> choice;
    cout << "       " << endl;
    switch (choice)
    {
    case 1:
      enQ();
      break;
    case 2:
      deQ();
      break;
    case 3:
      displayQ();
      break;
    case 4:
      purge();
      break;
    case 5:
      break;

    default:
      cout << "Please enter correct choice(1-4)!!";
      break;
    }
  }
}
int main()
{
  Queue linkedQ;
  linkedQ.menu();
}
