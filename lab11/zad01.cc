#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<int, std::string> mjesta;
    int posBrInput = 0; // za unos
    int posBr; // post. broj
    std::string naselje;

    std::string filename = ("./mjesta.csv");
    std::ifstream file { filename };
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            posBr = std::stoi(line.substr(0, line.find(";")));
            line.erase(0, line.find(";") + 1);
            naselje = line.substr(0, line.length() - 1);

            if (posBr != posBrInput) {
                posBrInput = posBr;
                mjesta[posBr] = naselje;
            }
        }
        file.close();
    }

    for (auto naselje : mjesta) {
        std::cout << naselje.first << " " << naselje.second << std::endl;
    }

    return 0;
}
