/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "PrivilegedInstructionException.h"

namespace Engine
{
    /* Variable assignments */
    const char* PrivilegedInstructionException::Message = "A privileged assembly operation was attempted within native code which does not have the appropriate permissions.";

    /* Method and constructor definitions */
    PrivilegedInstructionException::PrivilegedInstructionException()
    {
        }

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    PrivilegedInstructionException::PrivilegedInstructionException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* PrivilegedInstructionException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* PrivilegedInstructionException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int PrivilegedInstructionException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* PrivilegedInstructionException::ClassName = "Engine.PrivilegedInstructionException";
    const char* PrivilegedInstructionException::Inherits = "Engine.LowLevelException";
    const Bindings<PrivilegedInstructionException>::FunctionType PrivilegedInstructionException::Functions[] =
    {
        {0}
    };
    const Bindings<PrivilegedInstructionException>::PropertyType PrivilegedInstructionException::Properties[] =
    {
        {"Message", &PrivilegedInstructionException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *PrivilegedInstructionException::Dispatcher)(lua_State * L) = &(Bindings<PrivilegedInstructionException>::FunctionDispatch);
} 
