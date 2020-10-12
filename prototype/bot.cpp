#include "bot.h"

bot::bot()
{
  userName = "BOT";
  lang = "ru";
  logName = QDate::currentDate().toString();
  logName.append(".txt");//logs
}
bot::~bot()
{

}
void bot::send()
{

}
void bot::setLang()
{

}
void bot::addToLog()
{

}
QString bot::getLogName()
{
  return logName;
}
