/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "DebuggerNotAttachedException.h"

namespace Engine
{
    /* Variable assignments */
    const char* DebuggerNotAttachedException::Message = "An unhandled exception occurred within Lua and there is no debugger attached to the process.";

    /* Method and constructor definitions */
    DebuggerNotAttachedException::DebuggerNotAttachedException()
    {
        }

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    DebuggerNotAttachedException::DebuggerNotAttachedException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* DebuggerNotAttachedException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* DebuggerNotAttachedException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int DebuggerNotAttachedException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* DebuggerNotAttachedException::ClassName = "Engine.DebuggerNotAttachedException";
    const char* DebuggerNotAttachedException::Inherits = "Engine.EngineException";
    const Bindings<DebuggerNotAttachedException>::FunctionType DebuggerNotAttachedException::Functions[] =
    {
        {0}
    };
    const Bindings<DebuggerNotAttachedException>::PropertyType DebuggerNotAttachedException::Properties[] =
    {
        {"Message", &DebuggerNotAttachedException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *DebuggerNotAttachedException::Dispatcher)(lua_State * L) = &(Bindings<DebuggerNotAttachedException>::FunctionDispatch);
} 

