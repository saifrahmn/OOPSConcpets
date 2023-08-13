#include<iostream>

class Library{
    std::string name, address;
};
class BookItem{
    std::string uniqueBar;
};
class Book : BookItem{
    std::string ISBN,bname,author,subject,publisher;
};
class Author : Book{

};  
class Account{
    std::string type;
    Account(std::string ptype) : type(ptype){}
};