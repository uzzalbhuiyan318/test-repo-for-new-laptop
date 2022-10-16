#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class manageRoom
{
private:
    string geustName,geustAddress,roomType,roomSize;
    int roomNumber,bedNumber;
    float rentAmount;
public:
    void addRoom();
    void searchRoom();


};
void manageRoom :: addRoom()
{
    system("cls");
    ofstream bookedRoom("Geust records.txt",ios::app);
    cout << "Enter Room Number: ";
    cin >> roomNumber;
    bookedRoom << "Room Number: " <<roomNumber <<endl;

    cout << "Enter Room type AC/Non-AC: ";
    cin.ignore();
    getline(cin,roomType);
    if(roomType=="AC"|| roomType=="ac")
    {
        bookedRoom << "Geust room type: AC" <<endl;
    }
    else
    {
        bookedRoom << "Geust room type: Non-AC"<<endl;
    }
    cout << "Enter room size Big/Small (B/S): ";
    getline(cin,roomSize);
    if(roomSize=="b" || roomSize=="B")
    {
        bookedRoom << "Geust room size: Big"<<endl;
    }
    else if(roomSize=="s" || roomSize=="S")
    {
        bookedRoom << "Geust room size: Small"<<endl;
    }
    cout << "Enter bed numbers: ";
    cin >> bedNumber;
    bookedRoom << "Bed Numbers: "<<bedNumber <<endl;

    cout << "Enter rent amount for a day: ";
    cin >>rentAmount;
    bookedRoom<< "Daily rent: " <<rentAmount <<endl<<endl;
    cout <<endl <<endl;
    cout << "Room number "<<roomNumber << " is successfully added"<<endl <<endl;


    bookedRoom.close();

}
void manageRoom :: searchRoom()
{
    string searchRoomNumber,recordRoomNumber;
    cout << "Enter your room number: ";
    cin >>searchRoomNumber;
    ifstream searchRecord("Geust records.txt");
    while (getline(searchRecord,recordRoomNumber))
    {
        if(searchRoomNumber==recordRoomNumber)
        {
            cout << "Room is available !!!";
            cout << recordRoomNumber;
        }
    }
    searchRecord.close();
}
class checkInRoom
{

};
class availableRoom
{

};
class searchCustomer
{

};
class checkOutRoom
{

};
class summeryReport
{

};

int main()
{
    system("cls");
    manageRoom addRoomObject,searchRoomObject;
    addRoomObject.addRoom();
    searchRoomObject.searchRoom();

    return 0;
}
