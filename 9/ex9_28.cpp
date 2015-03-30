#include <iostream>
#include <forward_list>
#include <string>
using namespace std;

void str_flst(forward_list<string> &,const string &,const string &);

int main()
{
  forward_list<string> words {"what","the","hell","are","you","waiting","for"};
  string find_str,insert_str;

  cout<<"Enter the strings you want to find and insert: ";
  cin>>find_str>>insert_str;

  str_flst(words,find_str,insert_str);

  for(auto &str:words)
    cout<<str<<" ";
  cout<<endl;

}

void str_flst(forward_list<string> &flst,const string &find,const string &insert)
{
  forward_list<string>::iterator prev=flst.before_begin(),curr=flst.begin();

  while(curr!=flst.end())
  {
    if((*curr)==find)
    {
      flst.insert_after(curr,insert);
    } 
    else
    {
      prev=curr++;
    }
      if(curr==flst.end())
      {
        flst.insert_after(prev,insert);
        return;
      }
    
  }
  
}



    

