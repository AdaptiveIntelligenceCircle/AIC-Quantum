#include "lua_runtime.h"
#include <iostream>

#include <lauxlib.h>
#include <lualib.h>

LuaRuntime :: LuaRuntime()
{
    L = luaL_newstate(); 
    luaL_openlibs(L); 
}

LuaRuntime :: ~LuaRuntime()
{
    lua_close(L);
}

bool LuaRuntime :: load_script(const string &path)
{
    if (luaL_dofile(L, path.c_str()) != LUA_OK){
        cerr << lua_tostring(L, -1) << endl;
        return false; 
    }
    return true; 
}

bool LuaRuntime ::call_function(const string &name)
{
    lua_getglobal(L, name.c_str()); 

    if (lua_pcall(L, 0, 0 ,0) != LUA_OK){
        cerr << lua_tostring(L, -1) << endl; 
        return false;
    }
    return true; 
}