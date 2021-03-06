/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "EngineException.h"

namespace Engine
{
    /* Variable assignments */
    const char* EngineException::Message = "A general exception was raised by the engine.";

    /* Method and constructor definitions */
    EngineException::EngineException()
    {
        }

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    EngineException::EngineException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* EngineException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* EngineException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int EngineException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* EngineException::ClassName = "Engine.EngineException";
    const char* EngineException::Inherits = "Engine.Exception";
    const Bindings<EngineException>::FunctionType EngineException::Functions[] =
    {
        {0}
    };
    const Bindings<EngineException>::PropertyType EngineException::Properties[] =
    {
        {"Message", &EngineException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *EngineException::Dispatcher)(lua_State * L) = &(Bindings<EngineException>::FunctionDispatch);
} 

