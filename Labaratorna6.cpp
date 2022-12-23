

#include <iostream>
using namespace std;


struct Rubix_Cube
{
    string brand;
    string model;
    int sidecount = 6;
    float price;
    bool i_have;

};
void StatPrint(Rubix_Cube cube);

int main()
{
    Rubix_Cube Cube1;
    Cube1.brand = "Moyu";
    Cube1.model = "RS3M";
    Cube1.price = 9.45f;
    Cube1.i_have = true;

    Rubix_Cube Cube2;
    Cube2.brand = "GAN";
    Cube2.model = "12Maglev";
    Cube2.price = 99.9f;
    Cube2.i_have = false;

    Rubix_Cube Cube3;
    Cube3.brand = "Moyu";
    Cube3.model = "Meilong";
    Cube3.price = 3.95f;
    Cube3.i_have = false;

    Rubix_Cube Cube4;
    Cube4.brand = "Moyu";
    Cube4.model = "Megaminx";
    Cube4.price = 15.5f;
    Cube4.i_have = true;
    Cube4.sidecount = 12;

    cout << "010101010101010101010";
    StatPrint(Cube1);
    StatPrint(Cube2);
    StatPrint(Cube3);
    StatPrint(Cube4);
}
void StatPrint(Rubix_Cube cube) 
{
    cout << "69696969696969696969696969";
    cout << "\nCube brand is: " << cube.brand;
    cout << "\nCube model is " << cube.model;
    cout << "\nCube price is: " << cube.price << "$";
    if (!cube.i_have)
        cout << "\nThis cube is not in your collection";
    if (cube.sidecount != 6)
        cout << "\nThis is not a 3x3!";
}


