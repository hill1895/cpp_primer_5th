#include <iostream>
#include <string>
#include <map>
using namespace std;

void author_delete(multimap<string,string>&,const string &);

int main()
{
  multimap<string,string> books{{"Allan Lee","Lord of the rings"},{"Steve Jobs","Apple"},{"Steve Jobs","Ipad"},{"Allan Lee","Painting"},{"Paul Graham","Hackers and Painters"}};

  author_delete(books,"Allan Lee");
  author_delete(books,"hell");
  author_delete(books,"Paul Graham");

  for(const auto &i:books)
    cout<<i.first<<": "<<i.second<<endl;

}


void author_delete(multimap<string,string> &books,const string & author)
{
  auto found=books.find(author);
  auto cnt=books.count(author);

  if(found==books.end())
    cout<<"The author "<<author<<" does not exist!"<<endl;
  else
  {
    while(cnt)
    {
      if(found!=books.end())
        books.erase(found);
      ++found;
      --cnt;
    }

  }
}
