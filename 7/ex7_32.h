#ifndef EX7_32_H
#define EX7_32_H

#include <string>
#include <vector>
#include <iostream>

class Screen;
class Window_mgr;

class Window_mgr{

public:
  using ScreenIndex=std::vector<Screen>::size_type;
  inline void clear(ScreenIndex);
private:
  std::vector<Screen> screens;
};

class Screen{

public:
  typedef std::string::size_type pos;
  friend Window_mgr::clear(Window_mgr::ScreenIndex);
 
  Screen()=default;
  Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
  Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
  
  char get()const{return contents[cursor];}
  inline char get(pos ht,pos wd) const;
  inline Screen &move(pos r,pos c);
  
  inline Screen &set(char);
  inline Screen &set(pos,pos,char);
  
  Screen &display(std::ostream &os){do_display(os);return *this;}
  const Screen &display(std::ostream &os)const{do_display(os);return *this;}

private:
  pos cursor=0;
  pos height=0,width=0;
  std::string contents;
  
  void do_display(std::ostream &os)const{os<<contents;}
};

Screen &Screen::move(pos r,pos c)
{
  pos row=r*width;
  cursor=row+c;
  return *this;
}

char Screen::get(pos r,pos c)const
{
  pos row=r*width;
  return contents[row+c];
}

Screen &Screen::set(char c)
{
  contents[cursor]=c;
  return *this;
}
Screen &Screen::set(pos r,pos c,char ch)
{
  contents[r*width+c]=ch;
  return *this;
}

void Window_mgr::clear(ScreenIndex i)
{
    Screen &s=screens[i];
    s.contents=std::string(s.height*s.width,' ');
}


#endif
