#include "Mainclass.hpp"
#include <vector>
#include <list>
#include <iostream>
using namespace std;

void PointerVector() {
    const size_t vectorSize = 10;
    vector<Mainclass*> pointerVector;
    pointerVector.reserve(vectorSize); 
    for (int  i = 0; i < vectorSize; ++i) {
        pointerVector.push_back(new Mainclass(i, "Vector Element " + to_string(i), vector<int>{i, i * 2, i * 4}));
    }
    for (int i = 0; i < pointerVector.size(); ++i) {
        pointerVector[i]->show_data();
    }
    for (int i = 0; i < pointerVector.size(); ++i) {
        delete pointerVector[i];
    }
}


Mainclass& modifyInstance(Mainclass& instance) {
    instance.show_data();
    return instance;
}


Mainclass createModifiedInstance(Mainclass instance) {
    instance.show_data();
    return instance;
}


void Vector_list_habdle() {
    const int containerSize = 10;    
    vector<Mainclass> mainclassVector;
    mainclassVector.reserve(containerSize); 

    for (int i = 0; i < containerSize; ++i) {
        mainclassVector.emplace_back(i + 1, "Vector Element " + to_string(i), vector<int>{i, i * 2, i * 4});
    }
    cout << endl;
    for (int i = 0; i < mainclassVector.size(); ++i) {
        mainclassVector[i].show_data();
    }
    list<Mainclass> mainclassList;
    for (int i = 0; i < containerSize; ++i) {
        mainclassList.emplace_back(i + 1, "List Element " + to_string(i), vector<int>{i, i * 2, i * 4});
    }
    cout << endl;
    size_t index = 0;
    for (auto& instance : mainclassList) {
        cout << "List Element [" << index++ << "]:" << endl;
        instance.show_data();
    }
}

int main() {
    Mainclass staticInstance(10, "Static instance", vector<int>{1, 2, 3});
    Mainclass* dynamicInstance = new Mainclass(20, "Dynamic Instance", vector<int>{4, 5, 6});
    staticInstance.show_data();
    dynamicInstance->show_data();
    delete dynamicInstance; 
    PointerVector();
    Mainclass& refInstance = modifyInstance(staticInstance);
    refInstance.show_data();
    Mainclass newInstance = createModifiedInstance(staticInstance);
    newInstance.show_data();
    Vector_list_habdle();
    return 0;
}
