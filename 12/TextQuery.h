#ifndef TEXTQUERY_H
#define TEXTQUERY_H

#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <memory>
#include <vector>
#include <set>
#include "QueryResult.h"

class TextQuery
{
public:
  using line_no=std::vector<std::string>::size_type;
  TextQuery(std::ifstream &);
  QueryResult query(const std:: string &) const;
private:
  std::shared_ptr<std::vector<std::string>> file;
  std::map<std::string,std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(std::ifstream &is):file(new std::vector<std::string>)
{
  std::string text;
  while(getline(is,text))
  {
    file->push_back(text);
    int n=file->size()-1;//line number
    std::istringstream line(text);
    std::string word;
    while(line>>word)
    {
      auto &lines=wm[word];//lines ia a shared_ptr
      if(!lines)
        lines.reset(new std::set<line_no>);
      lines->insert(n);
    }
  }
}

QueryResult TextQuery::query(const std::string &sought) const
{
  static std::shared_ptr<std::set<line_no>> nodata(new std::set<line_no>);
  auto loc=wm.find(sought);
  if(loc==wm.end())
    return QueryResult(sought,nodata,file);
  else
    return QueryResult(sought,loc->second,file);
}

#endif





