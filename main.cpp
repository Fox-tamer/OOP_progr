#include <iostream>
using namespace std;
class car{  //
public:
    string name;
    string model;
    int year;
    string color;
    int speed;
    int cylinders;
    // constructor
    car(string n,string m, int y, string c, int sp, int cyl)
       {
        name = n;
        model = m;
        year = y;
        color = c;
        speed= sp;
        cylinders=cyl;
       }
    void introduce(){
    cout<<"My car name is "<<name<<" "<<model<<" "<<year<<" which is "<<color<<" in color, with speed of "<<speed<<" Km/h, and it has "<<cylinders<<" cylinders";
    }


};
int main()
{
   car car1("toyota","corolla",1984,"red",180,4);
   car1.introduce();
    return 0;
}
