/********************************************************************
Chaos Engine Source File.
Copyright (C), Chaos Studios, 2012.
-------------------------------------------------------------------------
File name:   Director.h
Version:     v0.01
Description: Manager which control a lot of thing

-------------------------------------------------------------------------
History:
- 2012-03-06   : Created by Baris YILMAZ

*********************************************************************/

#ifndef __DIRECTOR_H__
#define __DIRECTOR_H__

#include "Object/Object.h"

CHAOS_ENGINE_BEGIN

class CHAOS_DLL Director: public Object {

private:
	static Director* _instance;
	static bool isFirstStart;

	bool _isPaused;
	UINT _fps;

public:
	Director();
	virtual ~Director();

	void mainLoop();
	bool render();
	void showFPS();

	static Director* instance();

};

CHAOS_ENGINE_END

#endif