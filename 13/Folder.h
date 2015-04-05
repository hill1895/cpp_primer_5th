#ifndef FOLDER_H
#define FOLDER_H

#include <string>
#include <set>
#include "Message.h"

class Folder
{
  friend class Mesage;
public:
  ~Folder();
  Folder(const Folder&);
  Folder& operator=(const Folder&);
  Folder()=default;

  void save(Message&);
  void remove(Message&);




