#include "Mainclass.hpp"


Mainclass::Mainclass()
    : number(new int(0)), description(new string("Default")), number_vector(new vector<int>()) {
    cout << "Default constructor" << endl;
}

Mainclass::Mainclass(int num, const string& desc, const vector<int>& number_vec)
    : number(new int(num)), description(new string(desc)), number_vector(new vector<int>(number_vec)) {
    cout << "Parameterized constructor" << endl;
}

Mainclass::Mainclass(const Mainclass& v)
    : number(new int(*v.number)), 
      description(new string(*v.description)), 
      number_vector(new vector<int>(*v.number_vector)) {
    cout << "Copy constructor" << endl;
}

Mainclass::Mainclass(Mainclass&& v) noexcept
    : number(v.number), description(v.description), number_vector(v.number_vector) {
    v.number = nullptr;
    v.description = nullptr;
    v.number_vector = nullptr;
    cout << "Null constructor" << endl;
}

Mainclass& Mainclass::operator=(const Mainclass& v) {
    if (this != &v) {
        *number = *v.number;
        *description = *v.description;
        *number_vector = *v.number_vector;
        cout << "Copy operator" << endl;
    }
    return *this;
}


Mainclass& Mainclass::operator=(Mainclass&& v) noexcept {
    if (this != &v) {
        delete number;
        delete description;
        delete number_vector;
        number = v.number;
        description = v.description;
        number_vector = v.number_vector;
        v.number = nullptr;
        v.description = nullptr;
        v.number_vector = nullptr;
        cout << "Move operator" << endl;
    }
    return *this;
}


Mainclass::~Mainclass() {
    delete number;
    delete description;
    delete number_vector; 
    cout << "Destructor" << endl;
}


void Mainclass::show_data() const {
    cout << "Number: " << *number << "\nDescription: " << *description << "\nVector: ";
    for (int num : *number_vector) {
        cout << num << " ";
    }
    cout << endl;
}
