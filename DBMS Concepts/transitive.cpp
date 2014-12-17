/* Given a set of functional dependencies, find the transitive and pseudo-transitive dependencies */

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

/* Function prototypes */
void showTransitiveDependencies(multimap<string, string> , string );

/* Begining of the main method */
int main(int argc, char const* argv[])
{
    // Declarations
    int no_of_dependencies;
    multimap<string, string> dependencies;
    string LHS, RHS, dummy, p_key;

    // Get the input
    cout << "\nNumber of dependencies : ";
    cin >> no_of_dependencies;

    cout << "\nEnter the dependencies\n\n";
    for (int i = 0; i < no_of_dependencies; i++) {
        cin >> LHS >> dummy >> RHS;
        dependencies.insert(std::pair<string, string>(LHS, RHS));
    }

    cout << "\nEnter Primary key : ";
    cin >> p_key;

    // Function call
    showTransitiveDependencies(dependencies, p_key);

    return EXIT_SUCCESS;
}

/* Function definition */
void showTransitiveDependencies(multimap<string, string> dep, string pk) {

    vector<string> dv;
    multimap<string, string> :: iterator it;

    // Populating the direct fd's
    for (it = dep.begin(); it != dep.end(); ++it) {
        if ((it->first).find(pk) != std::string::npos) {
            dv.push_back(it->second);
        }
    }

    // Loop for finding transitive dependencies
    for (it = dep.begin(); it != dep.end(); ++it) {
        for (int i = 0; i < dv.size(); i++) {
            if ( (it->first).find(dv[i]) != std::string::npos ) {
                cout << "\nTransitive dependencies found between " << pk << " --> " << it->second << endl;
            }
        }
    }

    // TODO: Find the pseudo transitive functional dependencies
}
