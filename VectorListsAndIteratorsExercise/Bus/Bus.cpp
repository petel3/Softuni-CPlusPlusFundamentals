#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <climits>
using namespace std;

int militaryToMinutes(const string &str)
{
    int hour = (str[0] - '0') * 10 + (str[1] - '0') * 1;
    int minutes = (str[2] - '0') * 10 + (str[3] - '0') * 1;

    return hour * 60 + minutes;
}

int main()
{
    size_t busses;

    cin >> busses;
    cin.ignore();

    vector<int> busDepartures;
    busDepartures.reserve(busses);

    for (size_t curBus = 0; curBus < busses; curBus++)
    {
        string strMilitaryTime;
        cin >> strMilitaryTime;

        int curTime = militaryToMinutes(strMilitaryTime);
        busDepartures.push_back(curTime);
    }

    int trainDeparture;
    string trainDepartureStr;

    cin >> trainDepartureStr;
    trainDeparture = militaryToMinutes(trainDepartureStr);

    int bestBusDifference = INT_MAX;
    size_t bestBusIndex = 0;

    for (size_t curBus = 0; curBus < busses; curBus++)
    {

        int curBussArrival = busDepartures[curBus];
        int difference;

        difference = trainDeparture - curBussArrival;
        if (difference)
            difference + (24 * 60);
        if (difference < bestBusDifference)
        {
            bestBusDifference = difference;
            bestBusIndex = curBus + 1;
        }
    }

    cout << bestBusIndex << endl;
}