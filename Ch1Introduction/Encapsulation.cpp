#include <iostream>

class Product {
private:
    int __maxprice;

public:
    Product(){
        __maxprice= 900;
    }

    void sell() {
        std::cout << "Selling Price: " << __maxprice << std::endl;
    }

    void set_max_price(int price) {
        __maxprice = price;
    }
};

int main() {
    Product product;
    product.sell();

    // change the price without the function, an inaccessable error will occur if used in cpp
    product.__maxprice = 1000;
    product.sell();

    // using setter function
    product.set_max_price(1000);
    product.sell();

    return 0;
}
