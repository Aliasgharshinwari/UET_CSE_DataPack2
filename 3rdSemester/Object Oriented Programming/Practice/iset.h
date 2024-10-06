#include <iostream>
// #include< >
#define line cout << endl; // for endl
using namespace std;
class iset
{
public:
    iset() // constructor to begin
    {
        a = NULL; // with empty set
        n = 0;
    }
    iset(int x) // constructor to begin
    {
        a = NULL; // with one element x
        *this += x;
        n = 1;
    }
    ~iset() // destructor
    {
        //delete[] a;
    }
    iset &operator+=(int x);     // adds x to the set
    iset &operator-=(int x);     // removes x from the set
    int operator()(int x) const; // is x in the set?
    void print() const;          // prints all elements of // the set on one line
    iset &operator=(iset S);     // assignment operator
    iset(const iset &S);         // copy constructor NB
    operator int()               // convert iset to int
    {
        return n;
    }

private:
    int n, *a;
};

const int blocksize = 5;

static int *memoryspace(int *p0, int n0, int n1)
{
    int *p1 = new int[n1];
    if (p0 != NULL) // copy from p0 to p1:
    {
        for (int i = (n0 < n1 ? n0 : n1) - 1; i >= 0; i--)
            p1[i] = p0[i];
        delete p0;
    }
    return p1;
}

int binsearch(int x, int *a, int n)
{
    int m, l, r;
    if (n == 0 || x <= a[0])
        return 0;
    if (x > a[n - 1])
        return n;
    l = 0;
    r = n - 1;
    while (r - l > 1)
    {
        m = (l + r) / 2;
        (x <= a[m] ? r : l) = m; // ouch! real C!
    }
    return r;
}

iset &iset::operator+=(int x)
{
    int i = binsearch(x, a, n), j; // !!
    if (i >= n || x != a[i])       // x is not yet in set?
    {
        if (n % blocksize == 0)
            a = memoryspace(a, n, n + blocksize);
        for (j = n; j > i; j--)
            a[j] = a[j - 1];
        n++;
        a[i] = x;
    }
    return *this;
}

iset &iset::operator-=(int x)
{
    int i = binsearch(x, a, n), j; // !!
    if (i < n && x == a[i])
    {
        n--;
        for (j = i; j < n; j++)
            a[j] = a[j - 1];
        if (n % blocksize == 0)
            a = memoryspace(a, n + 1, n); // release one
    }                                     // block
    return *this;
}

void iset::print() const
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int iset::operator()(int x) const
{
    int i = binsearch(x, a, n);
    return i < n && x == a[i];
}


// copy a[0], ..., a[n-1] to a newly allocate area
// and return the new start address
static int *newcopy(int n, int *a)
{
    int *p = new int[n];
    for (int i = 0; i < n; i++)
        p[i] = a[i];
    return p;
}
iset &iset::operator=(iset S) // assignment operator
{
    delete a;
    n = S.n;
    a = newcopy(n, S.a);
    return *this;
}
iset::iset(const iset &S) // copy constructor
{
    n = S.n;
    a = newcopy(n, S.a);
}
