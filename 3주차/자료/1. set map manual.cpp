#include <iostream>
#include <set>
#include <map>

#define FastIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

using namespace std;

int main()
{
    FastIO;

    set<int> mySet = { 0,1,52,12,4 };
    mySet.insert(-100);
    mySet.insert(+123);
    mySet.insert(+123);
    mySet.insert(+123);

    for (int elem : mySet)
        cout << elem << '\n';

    cout << "===================\n";

    mySet.erase(123);
    for (int elem : mySet)
        cout << elem << '\n';

    cout << "===================\n";

    map<string, int> myMap = { pair<string,int>{"apple",1},{"banana",2} };
    myMap.insert({ "podo",3 });
    myMap.emplace("gyul", 4);
    myMap["cat"] = 5;

    for (pair<string, int> elem : myMap)
        cout << elem.first << ' ' << elem.second << '\n';

    myMap["gyul"] = 9;
    cout << "gyul" << ' ' << myMap["gyul"] << '\n';

    myMap.at("cat")++;
    cout << "cat" << ' ' << myMap.at("cat") << '\n';

    cout << "===================\n";

    myMap.erase("podo");
    myMap.extract("gyul");
    for (pair<string, int> elem : myMap)
        cout << elem.first << ' ' << elem.second << '\n';
}