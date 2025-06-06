#include <iostream>
#include <map>
#include <deque>
#include <string>
#include <set>
#include <algorithm>
#include <fstream>
using namespace std;

class microprocessor {
private:
    int AX, BX, CX, DX;
public:
    microprocessor(int a = 0, int b = 0, int c = 0, int d = 0) : AX(a), BX(b), CX(c), DX(d) {}
    void setAX(int val) {
        AX = val;
    }
    void setBX(int val) {
        BX = val;
    }
    void setCX(int val) {
        CX = val;
    }
    void setDX(int val) {
        DX = val;
    }

    int getAX() const {
        return AX;
    }
    int getBX() const {
        return BX;
    }
    int getCX() const {
        return CX;
    }
    int getDX() const {
        return DX;
    }
    map<int, microprocessor>file;
    map<int, string>regis;
    map<int, int> memory;
   //multimap<string,int>instruction;
    map<string, set<int>>instruction;
    void addFile(int id, const microprocessor& reg) {
        file[id] = { reg };
        cout << "File added successfully" << endl;
    }

    void instructionFile(const string& filename) {
        ifstream inFile(filename);
        if (!inFile.is_open()) {
            cerr << "Error opening file: " << filename << endl;
            return;
        }
        string line;
        int lineNum = 0;
        while (getline(inFile, line)) {
            instruction[line].insert(lineNum++);
        }
        cout << "Instruction load from file" << endl;
        inFile.close();
    }

    void displayInstructions() {
        cout << "Instructions loaded:" << endl;
        for (const auto& it : instruction){
            cout << "Instruction: " << it.first << endl;
            cout << "Line numbers: ";
            for (int line : it.second) {
                cout << line << " ";
            }
            cout << endl;
        }
    }

    // 1byte=1 int 64byte=64int
    void calculateInstruct() {
        for (const auto& i : instruction){
            string line = i.first;
            line.erase(remove(line.begin(), line.end(), ','), line.end());
            line.erase(0, line.find("\t"));
            line.erase(line.find("\t") + 1);
       
            string op, l1, l2;
            int n;
            int p = 0;
            n = line.size();
            while (p < n && line[p] != ' ') {
                op += line[p++];
            }
            while (p < n && line[p] == ' ') {
                p++;
            }
            transform(op.begin(), op.end(), op.begin(), ::toupper);
            if (op == "MOV") {
                int value = 0;
                if (l2 == "AX")
                {
                    value = getAX();

                }

            }
            else if(op=="add"){
                int val = 0;
                

            }


        }

    }
};

    int main() {
        microprocessor cpu;
        cpu.instructionFile("instructions.txt");
        cpu.displayInstructions();
        cpu.calculateInstruct();
        cpu.displayInstructions();

        return 0;
    }
