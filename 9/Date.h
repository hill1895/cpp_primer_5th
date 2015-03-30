#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

class Date;
void Data_print(const Date&);

class Date{
public:
  friend void Date_print(const Date&);
  Date(const std::string &s)
  {
    const std::vector<std::string> Months{"January","February","March","April","May","June","July","August","September","October","November","December","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec"};

    std::string temp_mon,temp_day,temp_year;
    std::string::size_type pos_mon=0,pos_day=0;
    pos_mon=s.find_first_of(" /");
    if(pos_mon!=std::string::npos)
    {
      temp_mon=s.substr(0,pos_mon);
      pos_day=s.find_first_of(",/ ",pos_mon+1);
      if(pos_day!=std::string::npos)
      {
        temp_day=s.substr(pos_mon+1,pos_day-1-pos_mon);
        temp_year=s.substr(pos_day+1,4);
      }
      else
        std::cout<<"Please Enter the right date!"<<std::endl;
    }
    else
      std::cout<<"Please Enter the right date!"<<std::endl;
    if(temp_mon.size()==1 || temp_mon.size()==2)
      month=stoi(temp_mon);
    else
    {
      for(auto it=Months.cbegin();it!=Months.cend();it++)
      {
        if((*it)==temp_mon)
        {
          month=it-Months.cbegin()+1;
          if(month>12)
            month-=12;
        }
      }
    }

  //  std::cout<<temp_year<<" "<<temp_mon<<" "<<temp_day<<std::endl;

    day=stoi(temp_day);
    year=stoi(temp_year);
   
  }

private:
  unsigned day=1;
  unsigned month=1;
  unsigned year=2000;

};

void Date_print(const Date &date)
{
  std::cout<<date.year<<"."<<date.month<<"."<<date.day<<std::endl;
}

#endif
