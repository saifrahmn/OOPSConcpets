#include<iostream>

class Parent{
public:
        void common(){
            std::cout<<"In common method of parent"<<std::endl;
        }
        virtual void vary() = 0;
};
class Child1 : public Parent{
    public: 
        void vary() override{
            std::cout<<"In vary method of child 1"<<std::endl;
        }
};
class Child2 : public Parent{
    public:
        void vary() override{
            std::cout<<"In vary method of child 2"<<std::endl;
        }
};

int main(){
    Child1 child1;
    child1.common();
    child1.vary();

    Child2 child2;
    child2.common();
    child2.vary();
}