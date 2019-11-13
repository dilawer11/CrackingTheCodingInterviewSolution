#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;
template<class T>
struct Node{
    Node * next;
    Node * prev;
    T val;
};
template<class T>
class LinkedList{
    private:
        Node<T> * head;
        Node<T> * tail;
        int length;
    public:
        LinkedList();
        void insert(T);
        void del(Node<T> *);
        Node<T> * search(T);
        void print();
        int getLength();
        Node<T> * getHead();
};
#endif