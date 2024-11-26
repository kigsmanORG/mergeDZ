#include <iostream>

using namespace std;

class Auto {
    int countOfDoors;
    int countOfWheels;
    string brand;
    string type;
    string color;
public:
    Auto() {
        countOfDoors = 4;
        countOfWheels = 4;
        brand = "Audi";
        type = "Hybrid";
        color = "Black";
    }

    Auto(int countOfDoors , int countOfWheels , string brand , string type , string color) {
        this->countOfDoors = countOfDoors;
        this->countOfWheels = countOfWheels;
        this->brand = brand;
        this->type = type;
        this->color = color;
    }

    void PrintInfo() {
        cout << "Info about ur car : " << endl;
        cout << "Brand of car : " << brand << endl;
        cout << "Type of car : " << type << endl;
        cout << "Color of car : " << color << endl;
        cout << "Count of doors of car : " << countOfDoors << endl;
        cout << "Count of wheeld of car : " << countOfWheels << endl;
    }


};

int main()
{
    Auto obj;
    Auto obj2 = obj;

    obj.PrintInfo();
    cout << "\n\n\n\n\n\n\n";
    obj2.PrintInfo();
}