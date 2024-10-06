#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class HT{

private:
    int capacity = 1000;
    int* items;

public:
    HT(){
        items = new int[capacity];
    }

    unsigned long Hash(const string& key){
        int sum = 0;
        unsigned long hash = 5381;
        for (char c : key){
            sum += static_cast<int>(c);
            hash = ((hash << 5) + hash) ^ static_cast<unsigned long>(c);
        }
        unsigned long scaledHash = (hash % 1000) + 1;
        return static_cast<unsigned long>(sum) + scaledHash;
    }

    void Add(int item, string n){
        unsigned long index = Hash(n);

        items[index] = item;

    }

    void Remove(string n){
        unsigned long index = Hash(n);
        items[index] = -1;
    }

    int Search(string n){
        unsigned long index = Hash(n);
        if(items[index] == -1){
            cout<<"Item Does not exist at this key"<<endl;
            return -1;
        }
        return items[index];
    }

    void Rehash(){
        capacity += capacity;

        for(int i = 0; i<capacity; i++)
            items[capacity + i] = items[i];

    }
    ~HT(){
        delete[] items;
    }
};

int main(){
    HT ht;

    ht.Add(10,"ABD");
    cout<<ht.Search("ABD")<<endl;
    ht.Remove("ABD");
    cout<<ht.Search("ABD");
    return 0;
}
