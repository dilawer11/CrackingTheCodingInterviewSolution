#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;
struct Node{
    Node * next;
    Node * prev;
    string val;
};
class LinkedList{
    private:
        Node * head;
        Node * tail;
        int length;
    public:
        LinkedList();
        void insert(string);
        void del(Node *);
        Node * search(string);
        void print();
        int getLength();
        Node * getHead();
};
#endif