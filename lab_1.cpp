#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cctype> 
#include <windows.h>
#include <sstream>



using namespace std;

string tab(){
    return "    ";
}

bool validNum(const string& str){
    for (int position = 0; position < str.size(); position ++) {
        if(string("0123456789").find(str[position]) == string::npos) {
            return false;
        }
    }
    return true;
}

int main() {
    string type1, type2;
    cout << "Enter type1: ";
    cin  >> type1;
    cout << endl;
    cout << "Enter type2: ";
    cin >> type2;
    std::vector<string> Numbers;
    std::vector<string> Operations; 
    ifstream opFile("operations.txt");
    if (!opFile.is_open()){
        cerr << "Couldn't open :(" << endl;
        return 1;
    }
    std::string line;
    std::string current_section;
    while (getline(opFile, line))
    {
        
        size_t start = line.find_first_not_of(" \t");
        size_t end = line.find_last_not_of(" \t");
        
        

        if(start!=string::npos&&end!=string::npos)
            line = line.substr(start,end-start+1);
        else 
            line.clear();

        if (line.empty() || line.substr(0, 2) == "//") continue;
        
       
        if (line=="Numbers:") {
            current_section = "Numbers:";
            continue;
        }
        if (line=="Operations:") {
            current_section =  "Operations:";
            continue;
        }

        
        if (current_section=="Numbers:"){
            if(validNum(line)) {
                string number = line; 
                Numbers.push_back(number);
            }
            else {
            cerr <<"Invalid number format: " << line << ". Please fix operations.txt." << endl;
                return 1; 
            }
            
            if(Numbers.size()>2) { 
                cerr <<"Number of numbers exceeds 2. Please modify operations.txt :(" << endl;
                return 1; 
            }
        }
        else if (current_section=="Operations:") {
            if(line.length()!=1 || string("+-*/").find(line[0])==string::npos) {
                cerr << "Invalid operation format: " << line << ". Please modify operations.txt." << endl;
                return 1;
            }
            string operation = line;
            Operations.push_back(operation);
        }
    }
    
    opFile.close();

    if (Numbers.size() != 2) {
        cerr << "Exactly 2 numbers are required, found: " << Numbers.size() << endl;
        return 1;
    }

    if (Operations.empty()) {
        cerr << "No operations found." << endl;
        return 1;
    }
	ofstream fout("creation/func_1.cpp");
	fout << "#include <iostream>" << endl;
    fout <<  "#include \"func_1.h\""   << endl;
    fout << "using namespace std;" << endl;
	fout << "int f(void) {"<< endl;

	fout << tab() << type1 << " var1 = " <<  Numbers[0] <<";"<< endl;
	fout << tab() << type2 << " var2 = " <<  Numbers[1] <<";"<<endl;
    for (int position = 0; position < Operations.size(); position ++) {
        fout << tab() <<  "cout << var1 " <<  Operations[position] << " var2 << std::endl;"<< endl;
    }
	fout << tab() <<  "return 0;" << endl;
	fout << "}" << endl;
	fout.close();
	return 0;
}

