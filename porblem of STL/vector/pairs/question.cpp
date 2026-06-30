#include <bits\stdc++.h>
using namespace std;

void operate(vector<pair<int, string>> &pairs)
{
    int sum = 0;
    string sumString = "";

    for (int i = 0; i < pairs.size(); i++)
    {
        sum += pairs[i].first;
        sumString += pairs[i].second;
    }

    cout << sum << endl;
    cout << sumString << endl;
    cout << sumString.length() << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int, string>> pairs;

    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;

        pairs.push_back({x, s});
    }

    operate(pairs);

    return 0;
}
