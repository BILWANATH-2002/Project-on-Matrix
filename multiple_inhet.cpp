#include<iostream>
 using namespace std;

class principal//Base class 1
{
public:
    principal()
    {
        cout<<"He/She is the Principal of our College\n";
    }

};

class director
{
public:
    director()
    {
        cout<<"He/She is the director of our college\n";
    }
};

class faculty: public director,public principal
{
public:
    faculty()
    {
        cout<<"He/she is faculty of our college\n";
    }
};

int main()
{
    faculty f;
     return 0;
}
