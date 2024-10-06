#include<iostream>
using namespace std;

struct node
{
    int number;
    struct node* right;
    struct node* left;
};

node* FindMinimum(node* tree)
{
    if (tree == NULL)
    {
        // Handle empty tree case
        cout << "Empty tree!" << endl;
        return NULL; // Or any other appropriate handling
    }

    while (tree->left != NULL)
    {
        tree = tree->left;
    }

    return tree;
}

int FindMaximum(node* tree)
{
    if (tree == NULL)
    {

        cout << "Empty tree!" << endl;
        return -1;
    }

    while (tree->right != NULL)
    {
        tree = tree->right;
    }

    return tree->number;
}

node* Insert(node* tree, int n)
{
    if (tree == NULL)
    {
        node* temp = new node();
        temp->left = NULL;
        temp->right = NULL;
        temp->number = n;
        tree = temp;
    }

    else if (n < tree->number)
    {
        tree->left = Insert(tree->left, n);
    }

    else if (n > tree->number)
    {
        tree->right = Insert(tree->right, n);
    }

    return tree;
}
node* Delete(node* tree, int n)
{
    if (tree == NULL)
    {
        // Handle empty tree case
        cout << "Empty tree!" << endl;
        return NULL; // Or any other appropriate handling
    }

    if (n < tree->number)
    {
        tree->left = Delete(tree->left, n);
    }
    else if (n > tree->number)
    {
        tree->right = Delete(tree->right, n);
    }
    else
    {
        if (tree->left == NULL && tree->right == NULL)
        {
            delete tree;
            tree = NULL;
        }
        else if (tree->left == NULL)
        {
            node* temp = tree;
            tree = tree->right;
            delete temp;
        }
        else if (tree->right == NULL)
        {
            node* temp = tree;
            tree = tree->left;
            delete temp;
        }
        else
        {

            node* temp = FindMinimum(tree->right);
            tree->number = temp->number;
            tree->right = Delete(tree->right, temp->number);
        }
    }

    return tree;
}

node* DeleteMin(node* tree)
{
    if (tree == NULL)
    {
        // Handle empty tree case
        cout << "Empty tree!" << endl;
        return NULL; // Or any other appropriate handling
    }

    if (tree->left == NULL)
    {
        node* temp = tree;
        tree = tree->right;
        delete temp;
    }
    else
    {
        tree->left = DeleteMin(tree->left);
    }

    return tree;
}

node* Search(node* tree, int n)
{
    if (tree == NULL)
    {
        cout << "NOT FOUND" << endl;
        return NULL;
    }

    if (tree->number == n)
    {
        cout << "FOUND" << endl;
        return tree;
    }

    if (n < tree->number)
    {
        return Search(tree->left, n);
    }

    else
    {
        return Search(tree->right, n);
    }
}

void inorder(node *tree, int n)
{
    int i;
    if (tree != NULL)
    {
        inorder(tree->left, n+1);

        for (i=0; i<n; i++)
            printf("-");
        printf("%d \n",tree->number);

        inorder(tree->right, n+1);
    }
}

void pre_order(node *tree, int n)
{
    int i;
    if (tree != NULL)
    {
        printf("%d \n",tree->number);
        pre_order(tree->left, n+1);
        pre_order(tree->right, n+1);
    }
}

void post_order(node *tree, int n)
{
    int i;
    if (tree != NULL)
    {
        pre_order(tree->left, n+1);
        pre_order(tree->right, n+1);
        printf("%d \n",tree->number);

    }
}

int getHeight(node* root) {
    if (root == nullptr) {
        return -1; // Height of an empty tree is -1
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    // Return the maximum height between the left and right subtrees, plus 1 for the current node
    return max(leftHeight, rightHeight) + 1;
}

int main()
{
    node* ptr_root = NULL;
    ptr_root = Insert(ptr_root, 15);
    ptr_root = Insert(ptr_root, 10);
    ptr_root = Insert(ptr_root, 16);
    ptr_root = Insert(ptr_root, 13);
    ptr_root = Insert(ptr_root, 19);
    ptr_root = Insert(ptr_root, 21);
    ptr_root = Insert(ptr_root, 13);
    ptr_root = Insert(ptr_root, 11);
    ptr_root = Insert(ptr_root, 17);
    ptr_root = Delete(ptr_root, 10);
    ptr_root = Delete(ptr_root, 19);

    //Search(ptr_root, 19);
    inorder(ptr_root, 0);

    cout<<"Max is:"<<FindMaximum(ptr_root)<<endl;
    cout<<"Min is:"<<(FindMinimum(ptr_root))<<endl;
    cout<<"Height is:"<<(getHeight(ptr_root))<<endl;
    return 0;
}
