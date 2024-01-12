#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string name;
    int product_code;

    Product(string name = "codetree", int product_code = 50) {
        this->name = name;
        this->product_code = product_code;
    } 
};

int main() {
    string name;
    int product_code;
    cin >> name >> product_code;

    Product p1;
    Product p2 = Product(name, product_code);

    cout << "product " << p1.product_code << " is " << p1.name << endl;
    cout << "product " << p2.product_code << " is " << p2.name << endl;

    return 0;
}