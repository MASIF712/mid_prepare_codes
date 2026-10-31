#include <iostream>
#include <iomanip>
#define STARTING_CHARGE 200
using namespace std;
int main()
{
    double charge = STARTING_CHARGE;
    cout << "Enter passenger name : ";
    string name;
    getline(cin, name);
    float kilometer;
    cout << "Enter distance : ";
    cin >> kilometer;
    int wait_min;
    cout << "Enter waiting time(0-23) : ";
    cin >> wait_min;
    int num_bag;
    cout << "Enter total number of bag : ";
    cin >> num_bag;
    int start_time;
    cout << "Enter trip start time(0-23) :  ";
    cin >> start_time;
    int num_pasanger;
    cout << "Enter number of passengers : ";
    cin >> num_pasanger;
    int cash_given;
    cout << "Enter cash given   : ";
    cin >> cash_given;
    char ride;
    cout << "Night Ride! : ";
    cin >> ride;
    float exact_fare, payable_fare;

    charge += kilometer * 45 + wait_min * 5;
    if (num_bag > 2)
    {
        charge += (num_bag - 2) * 30;
    }
    if ((start_time > 22 && start_time < 24) || (start_time >= 0 && start_time < 5))
    {
        charge += charge * 0.20;
    }
    if (kilometer > 20)
    {
        charge -= charge * 0.10;
    }
    exact_fare = static_cast<float>(charge);
    payable_fare = static_cast<int>(charge);
    int share_each = exact_fare / num_pasanger;
    int reverse, still_left;
    if(charge-cash_given>0)
    {
        still_left = charge - cash_given;
        if(still_left/10==0)
        {
            reverse = 10 - still_left;
        }else if(still_left/100==0)
        {
            reverse = 100 - still_left;
        }else if(still_left/1000==0)
        {
            reverse = 1000 - still_left;
        }
    }
    cout << left<<setw(25) << "Exact Fare : " << right << setprecision(2) << fixed << exact_fare << endl;
    cout << left<<setw(25) << "Payable Fare : " << right << payable_fare << endl;
    cout << left<<setw(25) << "Share Each : " << right << share_each << endl;
    cout << left << setw(25) << "Change : " << right << reverse << endl;
    return 0;
}