#include<iostream>
#include<string>
#include<unordered_map>

class ShoppingCart{
public:
    double total = 0;
    std::unordered_map<std::string, int> items;

public:
    void add_item(std::string item_name,int quantity,int price){
        total +=  (quantity* price);
        items[item_name]= quantity;
    }
    void remove_item(std::string item_name, int quantity, int price){
        total -= (quantity*price);
        if(quantity>items[item_name]){
             items.erase(item_name);
        }
        else{
            items[item_name] -= quantity;
        }
    }

    std::string checkout(int cash_paid){
        int balance=0;
        if(cash_paid<total){
            return "you paid " +std::to_string(cash_paid)+ "but cart amount is" + std::to_string(total);
        }
        balance = cash_paid - total;
        return "Exchange amount:" + std::to_string(balance);
    }
};
int main() {
    ShoppingCart cart;

    cart.add_item("A", 10, 50);
    cart.add_item("B", 5, 20);

    cart.remove_item("B", 1, 20);

    std::string cart_res = cart.checkout(600);

    std::cout << "Total cart amount: " << cart.total << std::endl;
    std::cout << "Cart items:" << std::endl;
    for (const auto& item : cart.items) {
        std::cout << item.first << ": " << item.second << std::endl;
    }

    std::cout << cart_res << std::endl;

    return 0;
}