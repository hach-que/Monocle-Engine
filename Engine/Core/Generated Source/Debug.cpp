/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "Debug.h"
#include "InternalConstructorOnlyException.h"

namespace Engine
{
    /* Variable assignments */

    /* Method and constructor definitions */
    Debug::Debug(lua_State * L, bool byuser)
    {
        if (byuser)
		{
			throw new Engine::InternalConstructorOnlyException();
		}
		// TODO: Implement.
	}

    Debug::Debug()
    {
        }

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* Debug::ClassName = "Engine.Debug";
    const char* Debug::Inherits = "Object";
    const Bindings<Debug>::FunctionType Debug::Functions[] =
    {
        {0}
    };
    const Bindings<Debug>::PropertyType Debug::Properties[] =
    {
        {0}
    };
    int (__cdecl *Debug::Dispatcher)(lua_State * L) = &(Bindings<Debug>::FunctionDispatch);
} 

