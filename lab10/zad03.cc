#include <iostream>
#include <string>
#include <vector>
#include <queue>

// class:
class Process {
public:
    Process(int priority, std::string name);
    int getPriority();
    std::string name;

private:
    int priority;
};

// constr:
Process::Process(int priority, std::string name) {
    if (priority >= 1 && priority <= 5) {
        this -> priority = priority;
    } else {
        std::cout << "E: Invalid entry! Priority should be 1!\nName: " << name << std::endl;
        std::cout << std::endl;
        this -> priority = 1;
    }
    this -> name = name;
}

int Process::getPriority() {
    return priority;
}

struct compare {
    bool operator() (Process &i1, Process &i2) {
        return i1.getPriority() < i2.getPriority();
    }
};

// driver:
int main() {
    std::priority_queue<Process, std::vector<Process>, compare> processes;

    // add random:
    processes.push(Process(1, "Discord"));
    processes.push(Process(2, "Audacious"));
    processes.push(Process(3, "Dolphin"));
    processes.push(Process(6, "Firefox"));
    processes.push(Process(4, "Konsole"));
    processes.push(Process(5, "KDevelop"));

    while (processes.empty() == false) {
        std::cout << "Process: " << processes.top() .name << std::endl;
        processes.pop();
    }

    return 0;
}
