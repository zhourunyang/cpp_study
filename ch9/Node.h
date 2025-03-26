#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
private:
    Node<T>* next;

public:
    T data;

    Node(const T& data, Node<T> *next = nullptr);

};
#endif  // NODE_H