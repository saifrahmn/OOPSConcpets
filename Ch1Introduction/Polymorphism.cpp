#include<iostream>

class Bishop{
    public:
        void move(){
            std::cout<< "Bishops move diagonally"<<std::endl;
        }
};

class Knights{
    public:
        void move(){
            std::cout<<"Knights can move two squares vertically and one square horizontally, or two square horizontally and one square vertically"<<std::endl;
        }
};
void test_move(Bishop chess_piece){
    chess_piece.move();
}
void test_move(Knights chess_piece){
    chess_piece.move();
}
int main(){
    Bishop b;
    Knights k;
    test_move(b);
    test_move(k);

}