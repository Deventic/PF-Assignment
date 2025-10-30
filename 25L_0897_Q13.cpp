#include <iostream>

using namespace std;

int main(){
    int day1, month1, year1, hour1, min1, sec1;
    bool isleap, leapday;

    cout << "Enter year:";
    cin >> year1;

    cout << "Enter month:";
    cin >> month1;
    if(month1 <=0 || month1 > 12){
        cout << "Invalid month";
        return 0;
    }

    cout << "Enter day:";
    cin >> day1;
    if(day1 < 0 || day1 > 31){
        cout << "Invalid day";
        return 0;
    }

    cout << "Enter hours:";
    cin >> hour1;
    if(hour1 <0 || hour1 > 24){
        cout << "Invalid hours:";
        return 0;
    }

    cout << "Enter minutes:";
    cin >> min1;
    if(min1 < 0 || min1 > 60){
        cout << "Invalid minutes:";
        return 0;
    }

    cout << "Enter seconds:";
    cin >> sec1;
    if(sec1 < 0 || sec1 > 60){
        cout << "Invalid seconds:";
        return 0;
    }

    if(year1%4 == 0 && year1%100 !=0 || year1%400 == 0){
        isleap = true;
    }
    else{
        isleap = false;
    }

    if(month1 == 2){
        if((day1 > 29) || (day1 == 29 && !isleap)){
            cout << "Invalid date";
            return 0;
        }
    }

    if((month1 == 2 || month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11) && day1 > 30){
        cout << "Invalid date";
        return 0;
    }




    int day2, month2, year2, hour2, min2, sec2;
    bool isleap2, leapday2;

    cout << "Enter year:";
    cin >> year2;

    cout << "Enter month:";
    cin >> month2;
    if(month2 <=0 || month2 > 12){
        cout << "Invalid month";
        return 0;
    }

    cout << "Enter day:";
    cin >> day2;
    if(day2 < 0 || day2 > 31){
        cout << "Invalid day";
        return 0;
    }

    cout << "Enter hours:";
    cin >> hour2;
    if(hour2 <0 || hour2 > 24){
        cout << "Invalid hours:";
        return 0;
    }

    cout << "Enter minutes:";
    cin >> min2;
    if(min2 < 0 || min2 > 60){
        cout << "Invalid minutes:";
        return 0;
    }

    cout << "Enter seconds:";
    cin >> sec2;
    if(sec2 < 0 || sec2 > 60){
        cout << "Invalid seconds:";
        return 0;
    }

    if(year2%4 == 0 && year2%100 !=0 || year2%400 == 0){
        isleap2 = true;
    }
    else{
        isleap2 = false;
    }

    if(month2 == 2){
        if((day2 > 29) || (day2 == 29 && !isleap2)){
            cout << "Invalid date";
            return 0;
        }
    }

    if((month2 == 2 || month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11) && day2 > 30){
        cout << "Invalid date";
        return 0;
    }

    int daydiff = abs(day2-day1);
    int monthdiff = abs(month2-month1);
    int yeardiff = abs(year2-year1);
    int hourdiff = abs(hour2-hour1);
    int mindiff = abs(min2-min1);
    int secdiff = abs(sec2-sec1);

    cout << "Time difference" << endl;

    cout << daydiff << " Days " << monthdiff << " Months " << yeardiff << "Years " << hourdiff << " Hours " << mindiff << " Minutes " << secdiff << " Seconds" << endl;

}