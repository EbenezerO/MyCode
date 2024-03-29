//
// Created by 13058 on 2019/8/29.
//
#include<iostream>
using namespace std;
void heapSort(int a[], int n);
void maxHeap(int a[], int n);
void buildMaxHeap(int a[], int n);

int size;
int main()
{
    int a[] = { 9, 12, -3, 0, 6, 8, 15, 7 };
    size= sizeof(a) / sizeof(a[0]);
    heapSort(a, size);
    for (int i = 0; i < 8; i++)
        cout << a[i] << " ";
    return 0;
}
void heapSort(int a[], int n)
{
    int i;
    buildMaxHeap(a, n);
    for (i = size; i>1; i--)
    {
        swap(a[0], a[i-1]);
        size = size - 1;
        maxHeap(a, 1);
    }

}
void buildMaxHeap(int a[], int n)
{
    int i = n / 2;
    for (i; i > 0; i--)
        maxHeap(a, i);
}
void maxHeap(int a[], int n)
{
    int leftChild, rightChild, largest;
    leftChild = 2 * n;
    rightChild = 2 * n + 1;
    int q = sizeof(a);
    if (leftChild<=size&&a[leftChild-1]>a[n-1])
        largest = leftChild;
    else
        largest = n;
    if (rightChild<=size&&a[rightChild-1]>a[largest-1])
        largest = rightChild;
    if (largest != n)
    {
        swap(a[n-1], a[largest-1]);
        maxHeap(a, largest);
    }
}
