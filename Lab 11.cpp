/*
Gaige Chester
CECS 130-01
Lab 11
*/

#include <iostream>
#include <string>

using namespace std;

class Date
{
    friend ostream& operator<<( ostream&, const Date&);
    friend Date operator+(const Date&, int);
    private:
        int month;
        int day;
        int year;
    public:
        Date();
        Date(int, int, int);
        Date(const Date&);
};

Date::Date()
{
    month = 1;
    day = 1;
    year = 2017;
}

Date::Date(const Date& today) 
{
    month = today.month;
    day = today.day;
    year = today.year;
}

Date::Date( int mm, int dd, int yr)
{
    month = mm;
    day = dd;
    year = yr;
}

Date operator+(const Date& curDate, int numberDays)
{
    Date myDate( curDate.month, curDate.day, curDate.year);
    while(numberDays >= 360)
    {
        myDate.year++;
        numberDays-=360;
    }
    
    while(numberDays>=30)
    {
        myDate.month++;
        numberDays-=30;
    }
    
    myDate.day+=numberDays;
    
    if(myDate.day >30)
    {
        myDate.month++;
        myDate.day -= 30;
    }
    
    if(myDate.month > 12)
    {
        myDate.year++;
        myDate.month -= 12;
    }
    return myDate;
}


ostream& operator<<(ostream& ostr, const Date& myDate)
{
    return ostr << myDate.year <<"/" << myDate.month << "/" << myDate.day;
}

int main()
{
    Date firstDate;
    Date secondDate(11,21,2017);
    Date dateOne;
    Date dateTwo(4,11,2017);
    
    cout << "firstDate: " << firstDate << endl;
    cout << "secondDate: " << secondDate << endl; 
    cout << "\ndateOne: " << dateOne << endl;
    cout << "dateTwo: " << dateTwo << "\n" << endl;
    
    Date newDate(dateTwo);
    cout << "newDate: " << newDate << endl;

    return 0;
}




