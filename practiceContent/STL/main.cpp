#include <iostream>
#include <string>
#include <map>
using namespace  std;
int main() {
    string name[] = {"zhangsan", "lisi", "wangmazi"};
    double salary[] = {1200, 2000, 1450};
    map<string, double> sal;
    map<string, double>::iterator p;
    for (int i = 0; i < 3; i++) {
        sal.insert(make_pair(name[i], salary[i]));
    }

    sal["tom"] = 6256;
    sal["bob"] = 5000;

    for (p = sal.begin(); p != sal.end(); p++) {
        cout << p->first << "\t" << p->second << endl;
    }

    string person;
    cout << "input name of search:";
    cin >> person;
    int flag = 1;
    for (p = sal.begin(); p != sal.end();p++)
    {
        if(p->first == person)
        {
            cout << p->second <<endl;
            flag = 0;
        }
    }
    if(flag) cout << "no result!" <<endl;

    cout << "input name of delete:";
    cin >> person;
    map<string,double>::iterator it;
    it = sal.find(person);
    if(it!=sal.end())
    {
        cout << "successfully search:"<<(*it).first<<":"<<(*it).second<<endl;
        sal.erase(it);
        cout <<"successfully delete"<<endl;
    }

    cout << "result "<<endl;
    for(p = sal.begin();p!=sal.end();p++)
    {
        cout << p->first<<p->second<<endl;
    }
    return 0;
}
