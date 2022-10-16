#include<iostream>

using namespace std;

class apple
{

public:
    int appleAmount;
    void appleCount()
    {
        cout << "Enter the amount of apple: ";
        cin >> appleAmount;
    }

};
class mangoes
{
public:
    int mangoAmount;
    void mangoCount()
    {
        cout << "Enter the amount of mango: ";
        cin >> mangoAmount;
    }
};
class fruit : public apple, public mangoes
{
public:
    void display()
    {
        cout << "Total amount of apple is "<<appleAmount<<endl;
        cout << "Total amount of mango is "<<mangoAmount<<endl;
        cout << "Total amount of fruits is "<<appleAmount+mangoAmount<<endl;

    }

};

int main()
{
    fruit objt;
    objt.appleCount();
    objt.mangoCount();
    objt.display();

    return 0;
}
