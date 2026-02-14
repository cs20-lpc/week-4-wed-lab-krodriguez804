// Krystle Dao Week 4 Wednesday Lab

#include <iostream>
#include "DoublyList.hpp"
#include <string>
using namespace std;

int main() {
    cout << "string list test" << endl;
    DoublyList<string> sList;
    
    cout << "Length: " << sList.getLength() << endl;
    cout << sList;

    sList.append("Hello");
    sList.append("Hi");
    sList.append("Hey");

    cout << "Length: " << sList.getLength() << endl;
    cout << sList;

    cout << sList.getElement(1) << endl;

    sList.insert(2, "Bye");

    cout << sList;

    sList.remove(1);

    cout << "Length: " << sList.getLength() << endl;
    cout << sList;

    cout << "Search Hi in list: " << sList.search("Hi") << endl;
    cout << "Search Bye in list: " << sList.search("Bye") << endl;

    sList.replace(2, "Goodbye");

    cout << "Length: " << sList.getLength() << endl;
    cout << sList;

    // int list test
    cout << endl << "int list test" << endl;
    DoublyList<int> iList;
    cout << "Length: " << iList.getLength() << endl;
    cout << iList;

    iList.append(12);
    iList.append(5445);
    iList.append(2530);

    cout << iList;

    cout << iList.getElement(2) << endl;

    iList.insert(0, 24);

    cout << iList;

    iList.remove(0);

    cout << iList;

    cout << "Search 2530 in list: " << iList.search(2530) << endl;

    iList.replace(1, 514);

    cout << "Length: " << iList.getLength() << endl;
    cout << iList;

    // char list test
    cout << endl << "char list test" << endl;
    DoublyList<char> cList;
    cout << "Length: " << cList.getLength() << endl;
    cout << cList;

    cList.append('A');
    cList.append('B');
    cList.append('C');

    cout << cList;

    cout << cList.getElement(1) << endl;

    cList.insert(1, 'D');

    cout << cList;

    cList.remove(1);
    
    cout << cList;

    cout << "Search Z in list: " << cList.search('Z') << endl;

    cList.replace(2, 'H');

    cout << "Length: " << cList.getLength() << endl;
    cout << cList;

    // double list test
    cout << endl << "double list test" << endl;
    DoublyList<double> dList;
    cout << "Length: " << dList.getLength() << endl;
    cout << dList;

    dList.append(12.125);
    dList.append(1452.10);
    dList.append(65.781);

    cout << dList;

    cout << dList.getElement(1) << endl;

    dList.insert(2, 185.99);

    cout << dList;

    dList.remove(3);

    cout << dList;

    cout << "Search 12.125 in list: " << dList.search(12.125) << endl;

    dList.replace(2, 781.2);

    cout << "Length: " << dList.getLength() << endl;
    cout << dList;

    return 0;
}