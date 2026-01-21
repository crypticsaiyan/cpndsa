#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int value = 0) : data{value}, next{nullptr} {};
};

class List
{
private:
  Node *head;

public:
  List() : head{nullptr} {};
  void printList() const;
  void addNode(int value);
};

void List::printList() const
{
  Node *temp = this->head;
  while (temp != nullptr)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << endl;
}

void List::addNode(int value)
{
  Node *temp = this->head;
  Node *newNode = new Node(value);
}

int main()
{

  return 0;
}