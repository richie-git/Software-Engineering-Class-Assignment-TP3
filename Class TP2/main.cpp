// Software Engineering Tp3.2
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

enum scale {ounces, kilograms};

class ZooAnimal  {
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
    ZooAnimal *mother;
public:
    void NewAnimal (char*, int, int, int); // create function
    void Destroy (); // destroy function
    void isMotherOf (ZooAnimal& mother){
        this->mother = &mother;
    }
    void changeWeight (int pounds);
    void changeWeightDate (int today){
        this->weightDate = today;
    }
    char* reptName ();
    int reptWeight ();
    void reptWeight (scale which);
    inline int reptWeightDate ();
    int daysSinceLastWeighed (int today);
};

void ZooAnimal::NewAnimal(char *name, int numberCage, int dateWeight, int weight){
    this-> name = name;
    this-> cageNumber = numberCage;
    this-> weightDate = dateWeight;
    this-> weight = weight;
    }

inline int ZooAnimal::reptWeightDate()
{
    return this->weightDate;
}

    // -------- member function to return the animal's name
char* ZooAnimal::reptName(){
    return name;
    }

int main()
{
    ZooAnimal child_panda, mother_panda;
    child_panda.NewAnimal("RICHARD", 1021, 125, 70);
    mother_panda.NewAnimal("ABIGAIL", 1502, 100, 150);
    child_panda.isMotherOf(mother_panda);
    cout << "\nRICHARD'S WEIGHT DATE IS EQUAL TO : " << child_panda.reptWeightDate() << endl;
    cout << "\nTHE MOTHER OF RICHARD IS: " << mother_panda.reptName() << endl;

}
