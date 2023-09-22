#include <iostream>
#include <string>

using namespace std;

class Food {
public:
    string name;
    int price;
    int cal;

    Food(string name, int price, float cal) {
        this->name = name;
        this->price = price;
        this->cal = cal;
    };

    void Output() {
        cout << this->name << endl;
        cout << this->price << endl;
        cout << this->cal << endl;
    };
};




class Burger : public Food {

public:
    string souce;
    string kotleta;

    Burger(string name, int price, int cal, string souce, string kotleta) : Food(name, price, cal) {
        this->souce = souce;
        this->kotleta = kotleta;
    }

    void Output() {
        Food::Output();
        cout << this->souce << endl;
        cout << this->kotleta << endl;
    }
};





class Pizza : public Food {
public:
    string topping;
    int diametr;
    Pizza(string name, int price, int cal, string topping, int diametr) : Food(name, price, cal) {
        this->topping = topping;
        this->diametr = diametr;
    }
    void Output() {
        Food::Output();
        cout << this->topping << endl;
        cout << this->diametr << endl;
    }
};










int main()
{
    setlocale(LC_ALL, "");
    Burger* burger = new Burger("Чизбургер", 70, 400, "кетчуп", "говядина");
    burger->Output();


    Pizza* pepperoni = new Pizza("Пепперони", 500, 4000, "кетчуп, сыр, пепперони, тесто", 30);
    pepperoni->Output();
}