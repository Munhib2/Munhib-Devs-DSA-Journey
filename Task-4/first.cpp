#include <iostream>
using namespace std;
 
class node
 {
    public:
    int value;
    node* previous;
    node* next;
 };

int main()
{
    node node_1;
    node node_2;
    node node_3;
    node node_4;

    node_1.previous = &node_4;
    node_1.value = 10;
    node_1.next = &node_2;

    node_2.previous = &node_1;
    node_2.value = 20;
    node_2.next = &node_3;

    node_3.previous = &node_2;
    node_3.value = 30;
    node_3.next = &node_4;

    node_4.previous = &node_3;
    node_4.value = 40;
    node_4.next = &node_1;

    cout << node_4.previous->value;
}