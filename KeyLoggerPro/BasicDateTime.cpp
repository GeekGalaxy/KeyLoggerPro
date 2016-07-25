#include "stdafx.h"
#include "BasicDateTime.h"

namespace KeyLoggerPro {

  BasicDateTime::BasicDateTime(void) {
    struct tm* tmInf = new tm();

    time(&m_DeltaT);    
    localtime_s(tmInf, &m_DeltaT);

    m_Day = tmInf->tm_mday;
    m_Month = tmInf->tm_mon;
    m_Year = tmInf->tm_mday;
    m_Hour = tmInf->tm_mday;
    m_Minute = tmInf->tm_mday;
    m_Second = tmInf->tm_mday;
  }

  BasicDateTime::BasicDateTime(const short &_day, const short &_month, const short &_year) :
      m_Day(_day), m_Month(_month), m_Year(_year) {
    m_Hour = m_Minute = m_Second = -1;
  }

  BasicDateTime::BasicDateTime(const short &_day, const short &_month, const short &_year,
      const short &_hour, const short &_minute, const short &_second) : 
      m_Day(_day), m_Month(_month), m_Year(_year),
      m_Hour(_hour), m_Minute(_minute), m_Second(_second) { }

  short BasicDateTime::getDay(void) const {
    return this->m_Day;
  }

  short BasicDateTime::getMonth(void) const {
    return this->m_Month;
  }

  short BasicDateTime::getYear(void) const {
    return this->m_Year;
  }

  short BasicDateTime::getHour(void) const {
    return this->m_Hour;
  }

  short BasicDateTime::getMinute(void) const {
    return this->m_Minute;
  }

  short BasicDateTime::getSecond(void) const {
    return this->m_Second;
  }

  void BasicDateTime::setDay(const short &_day) {
    this->m_Day = _day;
  }

  void BasicDateTime::setMonth(const short &_month) {
    this->m_Month = _month;
  }

  void BasicDateTime::setYear(const short &_year) {
    this->m_Year = _year;
  }

  void BasicDateTime::setHour(const short &_hour) {
    this->m_Hour = _hour;
  }

  void BasicDateTime::setMinute(const short &_minute) {
    this->m_Minute = _minute;
  }

  void BasicDateTime::setSecond(const short &_second) {
    this->m_Second = _second;
  }

}