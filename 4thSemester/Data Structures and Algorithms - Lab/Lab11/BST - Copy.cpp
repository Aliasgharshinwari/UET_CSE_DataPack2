#include<iostream>
using namespace std;

class Node
{

public:
    int data;
    Node* left;
    Node* right;

    Node()
    {
        left = NULL;
        right = NULL;

    }

    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class BST
{

public:
    Node* head;

    BST()
    {
        head = NULL;
    }

    void add(int val){
        Node* newNode = new Node(val);
        //Node* tree = new Node();

        tree = head;

        if(head == NULL){
            head = newNode;
        }

        else {

            if(val < head->data )
                head->left = newNode;

            else if(val > head->data)
                head->right = newNode;

            else
                return;

        }
    }

     void printInOrder(Node* node)
    {
        if (node != NULL)
        {
            printInOrder(node->left);
            cout << node->data << " ";
            printInOrder(node->right);
        }
    }

    void print()
    {
        cout << "Printing BST in ascending order: ";
        printInOrder(head);
        cout << endl;
    }

    ~BST(){
        free(head);
    }
};


int main()
{
    BST bst;
    Node* HEAD = bst.head;
    cout<<"HEAD ="<<HEAD->data;
    bst.add(50);
    bst.add(30);
    bst.add(70);
    //bst.add(20);
    //bst.add(40);
    //bst.add(60);
    //bst.add(80);

    //bst.print();
    return 0;
}
