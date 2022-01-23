#include <iostream>
#include <string>
#include <map>
#include <fstream>

int main() {
    std::multimap<int, std::string> mjesta;
    int posBrInput = 0;
    int posBr;
    std::string naselje;
    std::ifstream file("./mjesta.csv");
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            posBr = stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            naselje = line.substr(0, line.length() - 1);
            mjesta.insert({posBr, naselje});
        }
        file.close();
    }

    for (auto loc : mjesta) {
        std::cout << loc.first << " " << loc.second << std::endl;
    }

    return 0;
}
