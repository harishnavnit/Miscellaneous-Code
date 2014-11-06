#include <iostream>
#include <cstdlib>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main(int argc, char const* argv[])
{
    map<int, set<int> > test_map;
    set<int> a = {10, 20, 30};

    // Feeding values
    //test_map[1] = {10, 20};
    pair<int, set<int> > temp_pair(1, a);
    test_map.insert(temp_pair);

    // Printing the contents
    map<int, set<int> > :: iterator iter;
    for(iter = test_map.begin(); iter!= test_map.end(); iter++) {
        cout<<iter->first;

        for(set<int>::iterator i = iter->second.begin(); i! = second.end(); i++) {
            cout<<"-->"<<*i;
        }

        cout<<";"<<endl;
    }

    return 0;
}
