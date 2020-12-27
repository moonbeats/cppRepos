#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;
class Person
{
private:
    char m_name[20];
    char m_id[18];
    int m_age;
    char m_addr[20];
public:
    Person(){}
    Person(char* name,char* id,int age, char* addr){
        strcpy(m_name,name);
        strcpy(m_id,id);
        m_age = age;
        strcpy(m_addr,addr);
    }

    void display()
    {
        cout << "Name: "<< m_name <<endl;
        cout << "Id: "<< m_id <<endl;
        cout << "Age: "<< m_age <<endl;
        cout << "Addr: "<< m_addr <<endl;
    }
};


int main(int argc,char const *argv[]) {
    vector<Person> v;
    vector<Person>::iterator pos;
    char ch;
    ofstream out("./person.dat",ios::out|ios::app|ios::binary);
    char Name[20],ID[18],Addr[20];
    int Age;
    cout << "--------------input personal document---------------"<<endl;
    do{
        cout <<"Name: ";cin>>Name;
        cout <<"Id: ";cin>>ID;
        cout <<"Age: ";cin>>Age;
        cout <<"Addr: ";cin>>Addr;

        Person per(Name,ID,Age,Addr);
        out.write((char*)&per,sizeof(per));
        cout<<"enter another Person(y/n)?"<<endl;
        cin >> ch;

    }while(ch == 'y');
    out.close();

    ifstream in("person.dat",ios::in|ios::binary);
    Person s;
    in.read((char*)&s,sizeof(s));
    while(!in.eof())
    {
        v.push_back(s);
        in.read((char*)&s,sizeof(s));
    }

    cout << "----------------------read from file----------------"<<endl;
    pos = v.begin();
    /*for (pos =v.begin();pos!=v.end();pos++)
    {
        (*pos).display();
    }*/
    for(auto elem: v)
        elem.display();
    system("pause");

    return 0;
}
