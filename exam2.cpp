#include <iostream>
#include <fstream>
#include <stack>
suing namespace std;

int main() {
    int cmd;
    string name;
    string line;
    ofstream writefile;
    ifstream readfile;

    do{
        cout << "MENU" << endl;
        cout << "1. Add student." << endl;
        cout << "2. List student." << endl;
        cout << "3. Search student." << endl;
        cout << "4. Quit" << endl;
        cout << "Please enter menu :";
        cin >> cmd;

        if (cmd == 1){
            cout << "Enter Std name:";
            cin >> name;

        writefile.open("std.txt",fatream::app);
            if(writefile.is_open()){
                writefile << name << endl;
            }else{
            cout << "unable to open file "
            }
        }
    }
        return 0;
}
