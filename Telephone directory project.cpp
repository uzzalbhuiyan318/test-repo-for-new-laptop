#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

class Telephone
{
    string telephoneNumber;
public:
    void addNumber();
    void showNumber();
    void modifyNumber();
    //void deleteNumber();
    void searchNumber();
};
void Telephone :: addNumber()
{
    cout << "Please enter your telephone number here:"<<endl;
    cin >> telephoneNumber;
    system("cls");
    ofstream newNumber("Telephone number records.txt",ios:: app);
    newNumber <<telephoneNumber<<endl;
    newNumber.close();

}
void Telephone :: showNumber()
{
    cout << "Press 1 for showing all of your numbers: ";
    int option;
    cin >> option;
    system("cls");
    cout << "All search results are:"<<endl;
    switch(option)
    {
    case 1:
    {
        string records;
        ifstream showingNumber("Telephone number records.txt");
        while(getline(showingNumber,records))
        {
            cout << records <<endl;
        }
        showingNumber.close();
    }
    break;

    default:
        cout << "Wrong choice !!!!";

    }
}

void Telephone :: searchNumber()
{
    string Number,recordNumber;
    cout << "Search your desire number "<<endl;
    cin >> Number;
    system("cls");
    ifstream searchFile("Telephone number records.txt");
    cout << "Search results are:"<<endl;
    while(getline(searchFile,recordNumber))
    {
        if(recordNumber==Number)
        {

            cout << recordNumber <<endl;
        }
    }
    searchFile.close();

}
void Telephone :: modifyNumber()
{
    string editedNumber,replaceNumber;
   cout << "Which number you want to modify?"<<endl;
   cin >> editedNumber;
   ifstream editedfile("Telephone number records.txt");
   while(getline(editedfile,replaceNumber))
   {
       if(replaceNumber==editedNumber)
       {

       }
   }
}


int main()
{
    system("color A");
    int functionOption;
    cout <<setw(70)<< "Telephone Directory"<<endl;
    cout << "1. Add new number"<<endl;
    cout << "2. Search Number"<<endl;
    cout << "3. Showing your all record Numbers"<<endl;
    cout << "4. Modify your contact"<<endl;


    cin >> functionOption;
    Telephone addNumberObject,showNumberObject,searchRecordObject,modifyNumberObject;
    switch(functionOption)
    {
    case 1:
        addNumberObject.addNumber();
        main();
        break;
    case 2:
        searchRecordObject.searchNumber();
        main();
        break;
    case 3:
        showNumberObject.showNumber();
        main();
        break;
    case 4:
        modifyNumberObject.modifyNumber();
        main();
        break;

    default:
        cout << "Wrong choice !!! Please enter correct one he he :)";
        main();
    }





    return 0;
}
