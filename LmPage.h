//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : LmPage.h
//  @ Date : 2009-01-11
//  @ Author : 
//
//


#if !defined(_LMPAGE_H)
#define _LMPAGE_H

#include <string>
#include "LmDate.h"
#include "LmWeather.h"

using namespace std;

class LmPage {
public:
	int m_pageNumber;
	string m_strTitle;
	LmDate m_dateToday;
	LmWeather m_weatherToday;
	string m_strContent;
};

#endif  //_LMPAGE_H
