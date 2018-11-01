// LuaTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <lua.hpp>

int main()
{
	lua_State *l_state = luaL_newstate();
	luaL_openlibs(l_state);

	luaL_dofile(l_state, "main.lua");

	lua_close(l_state);

	system("pause");


    return 0;
}

