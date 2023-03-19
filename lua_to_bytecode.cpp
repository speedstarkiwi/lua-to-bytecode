#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>
#include <stdio.h>

const char* script = "print('Im a gay lad')";

int main() {
    lua_State* L = luaL_newstate();
    
    luaL_loadstring(L, script);
    
    size_t len;
    const char* bytecode = lua_dump(L, NULL, &len);
  
    printf("You bytecode data: \n");
    
    for (size_t i = 0; i < len; i++) {
        printf("%02X ", bytecode[i]);//convert it into bytecode
    }
    
    lua_close(L);//clean
    
    return 0;
}
