#include<iostream>

class person{
    private:
        std::string name;
    public:
        person(std::string pname) : name(pname){}
        std::string getname(){
            return name;
        }
        virtual bool is_employee(){
            return false;
        }
};

class employee : public person{
public:
    employee(std::string pname) : person(pname){}

    bool is_employee() override{
        return true;
    }
};

int main(){
    person per("person1");
    std::cout<<per.getname()<<" is a employee "<<( per.is_employee() ? "true" : "false")<<std::endl;
    employee emp("Saif");
    std::cout<<emp.getname()<<" is a employee "<<(emp.is_employee() ? "true" : "false")<<std::endl;
}
// #include<iostream>
// #include<string>

// class emp{
//     private:
//         int id;
//         int salary;
  
//     public:
//         std::string name;
//         emp(std::string empname){
//         name = empname;
//         }
//         void setdata(int id1,int salary1);
//         void getdata(){
//             std::cout<< "Id of the employee is"<< id<<std::endl;
//             std::cout << "Name of the employee is "<< name<<std::endl;
//             std::cout<< "Salary of the employee is"<< salary<<std::endl;
//         }
// };
// void emp::setdata(int id1,int salary1){
//     id= id1;
//     salary= salary1;
// }
// int main(){
//     emp sam("Samir");
//     sam.setdata(1,10000);
//     sam.getdata();
// }