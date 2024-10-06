#include <iostream>
using namespace std;

class Graph
{
    int **AdjMatrix;
    int vertices;

public:
    void Create(int v)
    {
        vertices=v;
        AdjMatrix = new int*[vertices];
        for(int i=0; i<vertices; i++)
        {
            AdjMatrix[i]= new int[vertices];
            for(int j=0; j<vertices; j++)
                AdjMatrix[i][j]=0;
        }
    }
    void AddEdge(int i,int j)
    {
        AdjMatrix[i][j]=1;
        AdjMatrix[j][i]=1;
    }
    void RemoveEdge(int i,int j)
    {
        AdjMatrix[i][j]=0;
        AdjMatrix[j][i]=0;
    }
    void Print()
    {
        cout<<"    ";
        for(int i=0; i<vertices; i++)
            cout<<i<<"  ";
        cout<<endl;
        for(int i=0; i<vertices; i++)
        {
            cout<<i<<" : ";
            for(int j=0; j<vertices; j++)
            {
                cout<<AdjMatrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    bool isEdge(int i,int j)
    {
        if(AdjMatrix[i][j])
            return true;
        return false;
    }
    ~Graph()
    {
        for (int i = 0; i < vertices; i++)
            delete[] AdjMatrix[i];
        delete[] AdjMatrix;
    }
};

int main()
{
    Graph Grp;
    Grp.Create(5);
    Grp.AddEdge(1,2);
    Grp.AddEdge(1,7);
    Grp.RemoveEdge(1,7);

    if(Grp.isEdge(1,7))
        cout<<"Edge exist between Vertix "<<i<<" and Vertix "<<j<<endl;
    else
        cout<<"Edge does not exist between Vertix "<<i<<" and Vertix "<<j<<endl;

    Grp.Print();


    return 0;
}
