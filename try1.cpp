#include<iostream>
#include<iomanip>
#include<conio.h>

using namespace std;



class Bank{

    private:
    float total;
    virtual void open(){}
    virtual void customerlist(){}
    virtual void update(){}
    virtual void transaction(){}
    virtual void view_records(){}
    virtual void remove_act(){}


    public:
        Bank(){
        }
        Bank(float t):total(t){};


void choice(){

    while(1)
    {

        char ch;
        cout<<"Press ......"<<endl;
        cout<<setw(5)<<"1.Open a new account"<<endl;
        cout<<setw(5)<<"2.Show the customer list"<<endl;
        cout<<setw(5)<<"3. Update information of an existing accout"<<endl;
        cout<<setw(5)<<"4.Check the details of an existing account"<<endl;
        cout<<setw(5)<<"5.For transaction"<<endl;
        cout<<setw(5)<<"6.Remove an existing accout"<<endl;
        cout<<setw(5)<<"7.Exit"<<endl;
        ch=getch();

    }
}

};
class open_acc{

private:

struct person{
    string name,address,id;
    int contact_number;
    float cash,acc;
    };

public:
    open_acc(){}
    open_acc(struct person p):person(p){}

    void open()
    {


        cout<<"Name:"<<endl;
        cin>>p.name;
        cout<<"Address"<<endl;
        cin>>p.address;
        cout<<"ID: "<<endl;
        cin>>p.id;
        cout<<"Contact: "<<endl;
        cin>>p.contact_number;
        cout<<"Opening account fees "<<endl;
        cin>>acc;
        cout<<"HOw much money you want to deposite"<<endl;
        cin>>cash;


    }




};



int main(){




}


