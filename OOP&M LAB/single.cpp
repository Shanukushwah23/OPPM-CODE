#include<iostream>
using namespace std;
class Account{
    public:
    int salary=5500;
};
class shanu:public Account{
    public:
    int bonus=800;
};
int main(void){
    shanu s1;
    cout<<"salary"<<s1.salary<<endl;
    cout<<"bonus"<<s1.bonus<<endl;
    return 0;
    
}

