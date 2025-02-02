#include <iostream>
#include<iomanip>
using namespace std;

class Student
{
protected:
    int roll_num;
    string name;

public:
    void set_roll(int v)
    {
        roll_num = v;
    }
    void set_name(string w)
    {
        name = w;
    }

    void display_roll()
    {
        cout <<"Name : "<<name<<endl
        <<"Roll : "<<roll_num<<endl;
    }
    string re="your result is : ";
};

class Test : virtual public Student
{
protected:
    float math, science;
public:
    void set_marks(float v=0,float w=0){
        math = v;
        science = w;
    }
    void display_marks(){
        cout<<re<<endl<<setw(re.length()+2)
            <<"Math : "<<math<<endl<<setw(re.length()+2)
            <<"Science : "<<science<<endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;
public:
    void set_score(float v){
        score = v;
    }
    void display_score(){
        cout<<setw(re.length()+2)<<"Sports : "<<score<<endl;
    }
};

class Result:public Sports,public Test{
    float total;
    public:
        void display_total(){
            total=math+science+score;
            display_roll();
            display_marks();
            display_score();
            cout<<setw(re.length()+2)<<"your total is : "<<total<<endl;
        }

};

int main()
{
    Result hit;
    hit.set_roll(3790);
    hit.set_name("hit");
    hit.set_marks(12,66);
    // hit.set_marks(12);
    hit.set_score(9);
    hit.display_total();

    return 0;
}