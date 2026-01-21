#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    data = val;
    next = nullptr;
  }
};

class LinkedList
{
private:
  Node *head;

public:
  LinkedList() { head = nullptr; }
  void insert(int val)
  {
    Node *newNode = new Node(val);
    if (!head)
    {
      head = newNode;
      return;
    }
    Node *temp = head;
    while (temp->next)
      temp = temp->next;
    temp->next = newNode;
  }
  void print()
  {
    Node *temp = head;
    while (temp)
    {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL\n";
  }
};

int main(){
  LinkedList list;
  list.insert(12);
  list.insert(534);
  list.insert(534);
  list.insert(12);
  list.insert(12);
  list.insert(534);
  list.insert(12);
  list.print();
  return 0;
}