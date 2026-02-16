#pragma once 
#include <lua.h>
#include <string> 
using namespace std; 

class LuaRuntime 
{
    public: 
    LuaRuntime(); 
    ~LuaRuntime(); 

    bool load_script(const string &path); 
    bool call_function(const string &name); 

    private :

    lua_State *L; 
}; 