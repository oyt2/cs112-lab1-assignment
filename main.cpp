#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string plan_name(){
    string plan;
    cout << "Enter your plan name: " << endl;
    cin >> plan;
    
    while ((plan != "silver") && (plan != "gold"))
    {
        cout << "I'm sorry, " << plan << " is an unknown plan." << endl;
        cout << "Enter your plan name: " << endl;
        cin >> plan;
    }
    return plan;
}

int month_amount()
{
    int months;
    cout << "Enter number of months" << endl;
    cin >> months;
    return months;
}

string total_cost(string plan, unsigned months)
{
    string cost;
    if (plan == "silver" && months > 1 ){
        cost = "60";
    } 

    else if (plan == "gold" && months > 6){
        cost = "35";
    }

    else if (plan == "gold" && months > 1){
        cost = "70";
    }

    else{
        cost = "90";
    }

    return cost;
}

int main()
{
    string x = plan_name();
    unsigned y = month_amount();
    string cost = total_cost(x,y);
    cout << "The cost for your plan is " << cost << "." << endl;
    return 0;
}