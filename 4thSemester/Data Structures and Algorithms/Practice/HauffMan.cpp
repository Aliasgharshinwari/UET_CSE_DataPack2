// new tree definition // new tree definition
struct node
{
    char symbol;
    char symbol;
    float probability;
    float probability;
    node *pleft, *pright;
};

class tree // modified for this application class tree // modified for this application
{

public:
    tree();
    tree();
    ~tree();
    ~tree();
    void add(char s, float p s, float p)
    {
        addnode( addnode(s,p,root);
    }
    void print()
    {
        pr(root,0);
    }
    void print()
    {
        pr(root,0);
    }
    node* & node* &search(int search(int n);
                          int delnode(int delnode(int x);
                                      private private
                                      node *root; node *root;
                                      void deltree( deltree(node* &p); // NB
                                              void addnode( addnode(char s, float p, s, float p, node* &p); node* &p);
                                              void pr(const pr(const node *p, node *p, int nspace) const; ) const;
};
                      void tree::deltree(node tree::deltree(node* &p)
{
    * &p)
    {
// modified parameter to reference parameter // modified parameter to reference parameter
        if (p != NULL)
        {
            if (p != NULL)
            {
                deltree(p deltree(p
                                  -
                                  >pleft);
                        deltree(p deltree(p
                                          -
                                          >pright);
                                delete p; delete p;
                                p = NULL; // return null pointer p = NULL; // return null pointer
            }
        }
        class forest
        {
            class forest
            {
            public:
            public:
                forest(int forest(int size);
                       ~forest(); ~forest();
                       void initialize_forest initialize_forest();
                       void add_to_tree(int add_to_tree(int tree_number tree_number,
                                                        char symbol, float probability); char symbol, float probability);
                       void print_forest print_forest() const; () const;
                       void print_tree(int print_tree(int tree_number tree_number);
                                       void join_trees(int join_trees(int tree_1, tree_1, int tree_2); tree_2);
                                       int empty_tree(int empty_tree(int tree_number tree_number);
                                                      float root_probability(int root_probability(int tree_number tree_number);
                                                              private: private:
                                                              tree tree_array[MAXIMUM_NUMBER_OF_TREES tree_array[MAXIMUM_NUMBER_OF_TREES];
                                                                                              int forest_size forest_size;
                                    };
// inorder inorder traversal from previous part of the course traversal from previous part of the course
//
// recursive function to print the contents of the // recursive function to print the contents of the
// binary search tree // binary search tree
                                                                          void tree::prorder(const tree::prorder(const node *p) const node *p) const
            {
                if (p!=NULL) if (p!=NULL)
                    {
                        prorder(p prorder(p
                                          -
                                          >pleft);
                                cout << p
                                ->data << >data <<
                                “
                                “;
                                prorder(p prorder(p
                                                  -
                                                  >pright);
                    }
            }
// inorder inorder traversal to print only leaf nodes traversal to print only leaf nodes
            void tree::leafnode_traversal(const tree::leafnode_traversal(const node *p) const node *p) const
            {
                if (p != NULL)
                {
                    if (p != NULL)
                    {
                        if (at_leafnode at_leafnode)   // PSEUDO CODE ) { // PSEUDO CODE
                        {
                            visit this node visit this node
                        }
                        else
                        {
                            leafnode_traversal(p leafnode_traversal(p
                                                                    -
                                                                    >pleft);
                                               leafnode_traversal(p leafnode_traversal(p
                                                                  -
                                                                  >pright);
                        }
                    }
                }
// inorder inorder traversal to print only leaf nodes traversal to print only leaf nodes
                void tree::leafnode_traversal(const tree::leafnode_traversal(const node *p) const node *p) const
                {
                    if (p != NULL)
                    {
                        if (p != NULL)
                        {
                            if ((p
                                    -
                                    >pleft == NULL) && == NULL) &&
                                (p
                                 ->right == NULL))   // >right == NULL)) { // leafnode leafnode
                            {
                                cout << p
                                     ->symbol << p >symbol << p
                                     ->probability << >probability <<endl;
                            }
                            else
                            {
                                leafnode_traversal(p leafnode_traversal(p
                                                                        -
                                                                        >pleft);
                                                   leafnode_traversal(p leafnode_traversal(p
                                                                      -
                                                                      >pright);
                            }
                        }
                    }

// pseudocode pseudocode version of version of compute_map compute_map
// to traverse tree and print leaf node and path // to traverse tree and print leaf node and path
// to leaf node // to leaf node
                    void tree::traverse_leaf_nodes(const tree::traverse_leaf_nodes(const node *p, path) node *p, path)
                    {
                        if (at leaf node)
                        {
                            if (at leaf node)
                            {
                                print out symbol and path print out symbol and path
                            }
                            else
                            {
                                add_to_path(path add_to_path(path, 0); // left , 0); // left
                                            traverse_leaf_nodes(p traverse_leaf_nodes(p
                                                                -
                                                                >pleft, path);, path);
                                            remove_element_from_path(path remove_element_from_path(path);
                                                                     Huffman’s Algorithm
                                                                     add_to_path(path add_to_path(path, 1); // right , 1); // right
                                                                             traverse_leaf_nodes(p traverse_leaf_nodes(p
                                                                                     -
                                                                                     >pright, path);, path);
                                                                             remove_element_from_path(path remove_element_from_path(path);
                                                                                     Huffman’s Algorithm
// Definition of path // Definition of path
#define MAX_PATH_LENGTH 20 #define MAX_PATH_LENGTH 20
                                class path { class path {
                                public: public:
                                        path(); path();
                                        ~path(); ~path();
                                        add_to_path(int add_to_path(int direction); direction);
                                        remove_from_path remove_from_path();
                                        print_path print_path();
                                private: private:
                                        int path_components[MAX_PATH_LENGTH path_components[MAX_PATH_LENGTH];
                                                                            int path_length path_length;
                                                    }
// Definition of path // Definition of path
                                                    path::path path::path()
                                    {
                                        int i;
                                        for (i=0; i<MAX_PATH_LENGTH; i++)
                                        {
                                            for (i=0; i<MAX_PATH_LENGTH; i++)
                                            {
                                                path_components[i path_components[i] = 0; ] = 0;
                                            }
                                            path_length path_length = 0;
                                        }
// Definition of path // Definition of path
                                        path::~path path::~path()
                                        {
                                        }
// Definition of path // Definition of path
                                        path::add_to_path(int path::add_to_path(int direction) direction)
                                        {
                                            if (path_length path_length < MAX_PATH_LENGTH)
                                            {
                                                < MAX_PATH_LENGTH)
                                                {
                                                    path_components[path_length path_components[path_length] = direction; ] = direction;
                                                    path_length path_length++;
                                                }
                                                else
                                                {
                                                    cout <<
                                                         “Error maximum path length reached Error maximum path length reached
                                                         ”;
                                                }
                                            }
// Definition of path // Definition of path
                                            path::remove_from_path path::remove_from_path()
                                            {
                                                if (path_length path_length > 0)
                                                {
                                                    path_length path_length--;
                                                }
                                                else
                                                {
                                                    cout <<
     “Error:
     no path exists Error:
                                                         no path exists
                                                         ”;
                                                }
                                            }
// Definition of path // Definition of path
                                            path::print_path path::print_path()
                                            {
                                                for (i=0; i< for (i=0; i<path_length path_length; i++)
                                                {
                                                    ;
                                                    i++)
                                                    {
                                                        cout << path_components[i path_components[i];
                                                      }
                                                           cout <<
                                                           “
                                                           “;
                                                  }
// Definition of // Definition of traverse_leaf_nodes traverse_leaf_nodes
// to traverse tree and print leaf node and path // to traverse tree and print leaf node and path
// to leaf node // to leaf node
                                              void tree::traverse_leaf_nodes(const tree::traverse_leaf_nodes(const node *p, path &code) node *p, path &code)
                                            {
                                                if (p != NULL)
                                                    {
                                                        if (p != NULL)
                                                        {
                                                            if ( (p if ( (p
                                                                              -
                                                                              >pleft == NULL) && == NULL) &&
                                                                        (p
                                                                         -
                                                                         >pright == NULL))   // leaf node == NULL)) { // leaf node
                                                            {
                                                                cout << p
                                                                     ->symbol << " ";
                                                                >symbol << " ";
                                                                code.print_path code.print_path();
                                                                    cout << endl;
                                                                }
                                                                else
                                                                {
                                                                    code.add_to_path(0); // left code.add_to_path(0); // left
                                                                    traverse_leaf_nodes(p traverse_leaf_nodes(p
                                                                                        -
                                                                                        >pleft, code);, code);
                                                                    code.remove_from_path code.remove_from_path();
                                                                    code.add_to_path(1); // right code.add_to_path(1); // right
                                                                    traverse_leaf_nodes(p traverse_leaf_nodes(p
                                                                                        -
                                                                                        >pright, code);, code);
                                                                    code.remove_from_path code.remove_from_path();
                                                                }
                                                        }
                                                    }
                                                    void tree::compute_map tree::compute_map()
                                                    {
// new function to print leaf nodes // new function to print leaf nodes
                                                        path code; // and the path to leaf nodes path code; // and the path to leaf nodes
                                                        traverse_leaf_nodes(root traverse_leaf_nodes(root, code);, code);
                                                    }
                                                    void forest::compute_map forest::compute_map()
                                                    {
                                                        int i;
                                                        for (i=0; i<MAXIMUM_NUMBER_OF_TREES; i++)
                                                        {
                                                            for (i=0; i<MAXIMUM_NUMBER_OF_TREES; i++)
                                                            {
                                                                if (tree_array[i].empty_tree tree_array[i].empty_tree() == FALSE)
                                                                {
                                                                    () == FALSE)
                                                                    {
                                                                        tree_array[i].compute_map tree_array[i].compute_map();
                                                                    }
                                                                }
                                                            }
