// Software Engineering Tp3.1
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;



using namespace std;

class ZooAnimal
{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    void Create(char * n, int cageno, int wD, int w)
    {
        this->name = n;
        this->cageNumber = cageno;
        this->weightDate = wD;
        this->weight = w;
    }
    void Print()
    {
        cout << this->name << " " << this->cageNumber << " " << this->weightDate << " " << this->weight << endl;
    }
    void Destroy (); // destroy function
    char* reptName ();
    int daysSinceLastWeighed (int today)
    {
        int startday, thisday;
        thisday = today/100*30 + today - today/100*100;
        startday = weightDate/100*30 + weightDate - weightDate/100*100;
        if (thisday < startday)
            thisday += 360;
        return (thisday-startday);
    }
};

void ZooAnimal::Destroy ()
{
    delete [] name;
}

// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
}


int main()
{
    ZooAnimal za;
    za.Create("\nOstrich", 10, 78,20);
    za.Print();
    cout << za.daysSinceLastWeighed(150) << endl;

    ZooAnimal bozo;
    bozo.Create ("\nBozo", 408, 1027, 400);
    cout << "\nThis animal's name is " << bozo.reptName() << endl;

    return 0;

}
