//michaelmorali@gmail.com

#ifndef NODE_HPP
#define NODE_HPP
#include <vector>
using namespace std;

// this class represents a node
template <typename T>
class Node
{

public:
    T key; // key 
    vector<Node<T> *> children; // childrens

    // constractor 
    Node(T value) : key(value) {}

    T get_key() const { return key; }

    vector<Node *> &get_children() { return children; }

    // add children 
    void add_child(Node<T> *child)
    {
        children.push_back(child);
    }

    // clear the childrens
    void clear_children()
    {
        children.clear();
    }
};

#endif
