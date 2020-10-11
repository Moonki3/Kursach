#ifndef BASIC_USER_H
#define BASIC_USER_H
#include <QString>

class basic_user
{
protected:
  QString userName;
  QString message;
  QString lang;
  QString logName;
  virtual void addToLog() = 0;
public:
  virtual basic_user() = 0;
  virtual ~basic_user() = 0;
  virtual void send() = 0;
  virtual void setLang() = 0;


};

#endif // BASIC_USER_H
