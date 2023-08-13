#include <iostream>
#include <string>

enum class BookFormat{
    Hardcover=1,
    PaperBack,
    AudioBook,
    EBook,
    Newpaper,
    Magazine,
    Journal
};

enum class BookStatus{
    Avaliable=1,
    Reserved,
    Loaned,
    Lost
};

enum class ReservationStatus{
    Waiting = 1,Pending,Canceled, None
};

enum class AccountStatus{
    Active=1,
    Closed,
    Cancelled,
    BackListed,
    None
};

class Address{
    Address(std::string street,std::string city,std::string state, int zipcode, std::string country) :
     street_address(street), _city(city), _state(state), _zipcode(zipcode), _country(country){}

    private:
        std::string street_address;
        std::string _city;
        std::string _state;
        int _zipcode;
        std::string _country;
};

class Person{
    Person(std::string name, std::string address, std::string email, int phone) : 
    _name(name),_address(address),_email(email),_phone(phone){}

    private:
        std::string _name;
        std::string _address;
        std::string _email;
        int _phone;

};

class Constants{
    public:
        const int MAX_BOOKS_ISSUED_TO_A_USER = 5;
        const int MAX_LENDING_DAYS = 10; 
};