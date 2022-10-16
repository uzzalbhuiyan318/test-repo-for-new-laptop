#include<iostream>
#include<string>

using namespace std;

class YouTubeChannel
{
    int channelId,subscriberCount;
    string channelName, ownerName,listOfVideoTitles;
public:
    YouTubeChannel(string x)
    {
        cout << "\nEnter your channel ID: ";
        cin >> channelId;
        cout << "Enter channel owner Name: ";
        cin.ignore();
        getline(cin,ownerName);
        cout << "Enter the title of Video: ";
        getline(cin,listOfVideoTitles);
        cout << "Your YouTube Channel successfully created !!!"<<endl;

    }

};
class DyouTubeChannel : public YouTubeChannel
{

};

class subscriptionList
{
public:
    subscriptionList(string y)
    {
        cout << "channel lists are:"<<endl;
        cout << y <<endl;
    }
};

int main()
{
    int n;
    string forList;
    cout << "enter your YouTube Channel Name: ";
    cin.ignore();
    getline(cin,forList);

    YouTubeChannel youTubeChannelObject(forList);

    subscriptionList objectforsubscription(forList);
    DyouTubeChannel obj;
    obj.display();




    return 0;
}
