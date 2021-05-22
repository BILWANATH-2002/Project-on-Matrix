#include<iostream>
 using namespace std;

class TIME
{
    long int hrs, minu, sec;
    int t1, t2, t3;
public:
    friend float show(TIME t);//declaring a friend function
    void setdata()
    {
        cout<<"Happy to see you Here!!"<<endl;
        cout<<"Enter the time in hours: ";
        cin>>hrs;
        while(hrs>=60)
        {
            t1=hrs%60;
            hrs=hrs/60;
        }

        cout<<"\nEnter the time in Minutes: ";
        cin>>minu;
        while(minu>=60)
        {
            t2=minu%60;
            minu=minu/60;
        }

        cout<<"\nEnter the time in Seconds: ";
        cin>>sec;
        while(sec>=60)
        {
            t3=sec/60;
            sec=sec%60;
        }
    }
};

float show(TIME t)
{
   cout<<"\nThe time in hours is "<<t.hrs<<"."<<t.t1<<"hrs"<<endl;
   cout<<"The time in minutes is "<<t.minu<<"."<<t.t2<<"min"<<endl;
   cout<<"The time in Seconds is "<<t.sec<<"."<<t.t3<<"sec"<<endl;
}

main()
{
    TIME tt;
    tt.setdata();
    show(tt);//passing object of the class to the friend function

    cout<<"Be Assured our clock is Accurate";
    return 0;
}

