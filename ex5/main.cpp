#include <iostream>
#include <string>
using namespace std;
class Car{
    protected: 
    string m_DriveMode="No-wheel";
    private:
    int m_MaxSeating;
    int m_price;
    void m_UpdatePrice(int base=500000){ 
        m_price=m_MaxSeating*base;
    }
    public:
    string m_brand;
    string m_model;
    int m_year;

    Car(string x,string y,int z, int s){
        m_brand=x;
        m_model=y;
        m_year=z;
        m_MaxSeating=s;
        m_price=m_MaxSeating*500000;
    }
    int get_m_MaxSeating(){
        return m_MaxSeating;
    }
    int get_price(){
        return m_price;
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};

class BMW_Car : public Car{
    public:
    BMW_Car(string y,int z,int s):Car("BMW",y,z,s){
    cout<<"Constructing BMW_Car\n";
    m_DriveMode="Front-wheel";
 }
};
class AUDI_Car : public Car{
    public:
    AUDI_Car(string y,int z,int s):Car("AUDI",y,z,s){
    cout<<"Constructing AUDI_Car\n";
    m_DriveMode="Front-wheel";
 }
};
int main(){
    Car car_0("CGU","CSIE",2023,4);
    cout << car_0.m_brand;
    cout <<" : Drive Mode ="<<car_0.get_DriveMode()<<endl;
    
    BMW_Car car_1("X5",2023,6);
    cout << car_1.m_brand;
    cout <<" : Drive Mode ="<<car_1.get_DriveMode()<<endl;
    
    AUDI_Car car_2("A1",2023,5);
    cout << car_2.m_brand;
    cout <<" : Drive Mode ="<<car_2.get_DriveMode()<<endl;
    
    return 0;
}
