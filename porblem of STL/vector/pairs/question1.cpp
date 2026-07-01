#include <bits\stdc++.h>
using namespace std;

vector<pair<string, pair<int, double>>> orders;

void addOrder(string itemName, int quantity, double price)
{
    orders.push_back({itemName, {quantity, price}});
}

void updateOrder(string itemName, int newQuantity, double newPrice)
{
    for (auto &order : orders)
    {
        if (order.first == itemName)
        {
            order.second = {newQuantity, newPrice};
            break;
        }
    }
}

double calculateTotalRevenue()
{
    double totalRevenue = 0;
    for (auto &order : orders)
    {
        totalRevenue += order.second.first * order.second.second;
    }
    return totalRevenue;
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string itemName;
        int quantity;
        double price;
        cin >> itemName >> quantity >> price;
        addOrder(itemName, quantity, price);
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        string itemName;
        int newQuantity;
        double newPrice;
        cin >> itemName >> newQuantity >> newPrice;
        updateOrder(itemName, newQuantity, newPrice);
    }

    cout << calculateTotalRevenue() << endl;

    return 0;
}
