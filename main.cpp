#include <iostream>
#include <vector>

using std::cout, std::cin, std::endl, std::string, std::vector, std::getline;

int main() {
    string input = "";
    vector<string> list;

    do {
        if (list.size() == 0) {
            cout << "What is your favorite?\n";
        } else {
            cout << "What is your next favorite?\n";
        }
        
        // Use getline to capture the entire line
        getline(cin, input);

        // Check if input is "done" and don't add it to the list
        if (input != "done") {
            list.push_back(input);
        }

    } while (input != "done");

    cout << "Your favorite list:\n";
    for (int i = 0; i < list.size(); i++) {
        cout << list.at(i) << endl;
    }

    return 0;
}

