#include <bits/stdc++.h>
using namespace std;

struct Heap
{
  int *arr;
  int size;
  int capacity;
};

int left(int i)
{
  return 2 * i + 1;
}

int right(int i)
{
  return 2 * i + 2;
}

int parent(int i)
{
  return (i - 1) / 2;
}

void heapify(Heap &heap, int index)
{
  int l = left(index);
  int r = right(index);
  int minimum = index;

  if (l < heap.size && heap.arr[l] < heap.arr[minimum])
  {
    minimum = l;
  }
  if (r < heap.size && heap.arr[r] < heap.arr[minimum])
  {
    minimum = r;
  }

  if (minimum != index)
  {
    swap(heap.arr[index], heap.arr[minimum]);
    heapify(heap, minimum);
  }
}

void buildHeap(Heap &heap)
{
  for (int i = heap.size / 2 - 1; i >= 0; i--)
  {
    heapify(heap, i);
  }
}

int extractMin(Heap &heap)
{
  if (heap.size <= 0)
  {
    cout << "underflow\n";
    return INT_MAX;
  }
  int root = heap.arr[0];
  heap.arr[0] = heap.arr[heap.size - 1];
  heap.size--;
  heapify(heap, 0);
  return root;
}

int main()
{
  Heap heap;
  heap.size = 7;
  heap.capacity = 7;
  heap.arr = new int[heap.capacity];
  for (int i = 0; i < heap.capacity; i++)
  {
    heap.arr[i] = i + 3;
  }
  cout << extractMin(heap) << endl;
  cout << extractMin(heap) << endl;
  cout << extractMin(heap) << endl;
  cout << extractMin(heap) << endl;
  cout << extractMin(heap) << endl;
  cout << extractMin(heap) << endl;
  cout << extractMin(heap) << endl;
  return 0;
}