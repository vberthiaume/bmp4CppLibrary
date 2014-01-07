//-------------------------------------------------------------------------------------------------------
// Filename     : bmp4CppLibrary.cpp
// Created by   : BMP4 (Vincent Berthiaume)
// Description  : General c++ library
//
// © 2014, Vincent Berthiaume, All Rights Reserved
//-------------------------------------------------------------------------------------------------------	

#include "bmp4CppLibrary.h"

namespace bmp4
{

	template<class T> T List::Sign(T &v)
	{
		return v > 0 ? 1.f : (v < 0 ? -1.f : 0.f);
	}

}