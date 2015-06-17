#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>

template<size_t H,size_t W>
class Screen{
  
  template<size_t H1,size_t W1>
  friend std::istream& operator>>(std::istream&,Screen<H1,W1>&);
  template<size_t H1,size_t W1>
  friend std::ostream& operator<<(std::ostream&,const Screen<H1,W1>&);
public:
  typedef std::string::size_type pos;
 
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
  pos height=H,width=H;
  std::string contents;
  
  void do_display(std::ostream &os)const{os<<contents;}
};

template<size_t H,size_t W>
Screen<H,W> &Screen<H,W>::move(pos r,pos c)
{
  pos row=r*width;
  cursor=row+c;
  return *this;
}

template<size_t H,size_t W>
char Screen<H,W>::get(pos r,pos c)const
{
  pos row=r*width;
  return contents[row+c];
}

template<size_t H,size_t W>
std::istream& operator>>(std::istream& is,Screen<H,W>& screen)
{
  char c;
  is>>screen.height>>screen.width>>c;
  if(is)
    screen.contents=string((screen.height)*(screen.width),c);
  else
    screen=Screen<H,W>();
  return is;
}

template<size_t H,size_t W>
std::ostream& operator<<(std::ostream& os,const Screen<H,W>& screen)
{
  os<<"Height: "<<screen.height<<" Width: "<<screen.width<<" Contents: "<<screen.contents<<std::endl;
}

template<size_t H,size_t W>
Screen<H,W> &Screen<H,W>::set(char c)
{
  contents[cursor]=c;
  return *this;
}

template<size_t H,size_t W>
Screen<H,W> &Screen<H,W>::set(pos r,pos c,char ch)
{
  contents[r*width+c]=ch;
  return *this;
}


#endif
