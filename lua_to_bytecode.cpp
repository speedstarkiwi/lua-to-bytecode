#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdio.h>

const char* script = "print('Im a gay lad')";

int main() {
    lua_State* L = luaL_newstate();//make sure we make lua state
    
    luaL_loadstring(L, script);
    printf(script);
    printf(" will now be ran into lua!\n");
    
    size_t len;//0
    const char* bytecode = lua_dump(L, NULL, &len);//dump it
  
    printf("You bytecode data: \n");
    
    for (size_t i = 0; i < len; i++) {
        printf("%02X ", bytecode[i]);//convert it into bytecode
    }
    
    lua_close(L);//clean
    Sleep(6942000000000);//make sure console doesnt close
    
    return 0;
}
