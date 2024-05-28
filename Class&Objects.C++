#include <iostream>
using namespace std;
class Car{
    public:
    int model;
    string color;
    string name; 
};
int main() {
    
Car audi;
audi.model=2024;
audi.color="white";
audi.name="Audi A5";

Car daala;
daala.model=2024;
daala.color="white";
daala.name="Vigo Dala";

cout<<"The name of the car is : "<<audi.name<<" and the model of the car is : "<<audi.model<<" and the color is : "<<audi.color<<endl;

cout<<"The name of the car is : "<<daala.name<<" and the model of the car is : "<<daala.model<<" and the color is : "<<daala.color;
    return 0;
}
