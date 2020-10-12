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
/*
фываолфыралофрыварлоыфвралфыважлофрыва*/
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
