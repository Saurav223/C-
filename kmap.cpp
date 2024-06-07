#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;

class KMap {
public:
    KMap(int size);
    void getOnes();
    void getDontcares();
    void setBinary();
    void solve();
    string printResult();

private:
    int size;
    vector<int> ones;
    vector<int> dontCares;
    vector<string> binary;
    vector<string> result;
};

KMap::KMap(int size) {
    this->size = size;
}

void KMap::getOnes() {
    cout << "Enter the positions of ones (separated by commas): ";
    string input;
    getline(cin, input);

    size_t pos = 0;
    while ((pos = input.find(",")) != string::npos) {
        ones.push_back(stoi(input.substr(0, pos)));
        input.erase(0, pos + 1);
    }
    ones.push_back(stoi(input));
}

void KMap::getDontcares() {
    cout << "Enter the positions of don't cares (separated by commas): ";
    string input;
    getline(cin, input);

    size_t pos = 0;
    while ((pos = input.find(",")) != string::npos) {
        dontCares.push_back(stoi(input.substr(0, pos)));
        input.erase(0, pos + 1);
    }
    dontCares.push_back(stoi(input));
}

void KMap::setBinary() {
    for (int i = 0; i < pow(2, size); i++) {
        if (find(ones.begin(), ones.end(), i) != ones.end()) {
            binary.push_back("1");
        } else if (find(dontCares.begin(), dontCares.end(), i) != dontCares.end()) {
            binary.push_back("X");
        } else {
            binary.push_back("0");
        }
    }
}

void KMap::solve() {
    vector<vector<string>> groups(size + 1);

    // Group binary strings by the number of '1' bits
    for (int i = 0; i < binary.size(); i++) {
        int count = std::count(binary[i].begin(), binary[i].end(), '1');
        groups[count].push_back(binary[i]);
    }

    // Perform pairing and merging
    for (int i = 0; i < size; i++) {
        for (const string& str1 : groups[i]) {
            for (const string& str2 : groups[i + 1]) {
                int diffCount = 0;
                string merged;

                for (int j = 0; j < size; j++) {
                    if (str1[j] != str2[j]) {
                        diffCount++;
                        merged += '-';
                    } else {
                        merged += str1[j];
                    }
                }

                if (diffCount == 1) {
                    // Pair and add to the result
                    result.push_back(merged);
                    groups[i].erase(remove(groups[i].begin(), groups[i].end(), str1), groups[i].end());
                    groups[i + 1].erase(remove(groups[i + 1].begin(), groups[i + 1].end(), str2), groups[i + 1].end());
                }
            }
        }
    }

    // Convert result to a simplified Boolean expression
    stringstream ss;
    for (const string& term : result) {
        for (int i = 0; i < size; i++) {
            if (term[i] == '0') {
                ss << "!";
            } else if (term[i] == '1') {
                ss << "";
            }
            ss << "Var" << (i + 1);
            if (i < size - 1) {
                ss << " + ";
            }
        }
        ss << " * ";
    }

    // Remove the trailing " * "
    string expression = ss.str();
    expression = expression.substr(0, expression.length() - 3);

    result.clear();
    result.push_back(expression);
}


string KMap::printResult() {
    stringstream ss;
    ss << "Simplified Boolean Expression: ";
    if (!result.empty()) {
        auto it = result.begin();
        ss << *it;
        ++it;
        for (; it != result.end(); ++it) {
            ss << " + " << *it;
        }
    }
    ss << endl;
    return ss.str();
}

int main() {
    int size;

    cout << "Enter the size of K-map (Number of variables): ";
    cin >> size;
    cin.ignore(); // Ignore the newline character in the input buffer

    KMap kMap(size);
    kMap.getOnes();
    kMap.getDontcares();
    kMap.setBinary();
    kMap.solve();
    cout<<kMap.printResult();

    return 0;
}
