/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "DivideByZeroException.h"

namespace Engine
{
    /* Variable assignments */
    const char* DivideByZeroException::Message = "The operation resulted in a division by zero error occurring within native or interpreted code.";

    /* Method and constructor definitions */
    DivideByZeroException::DivideByZeroException()
    {
        }

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    DivideByZeroException::DivideByZeroException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* DivideByZeroException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* DivideByZeroException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int DivideByZeroException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* DivideByZeroException::ClassName = "Engine.DivideByZeroException";
    const char* DivideByZeroException::Inherits = "Engine.LowLevelException";
    const Bindings<DivideByZeroException>::FunctionType DivideByZeroException::Functions[] =
    {
        {0}
    };
    const Bindings<DivideByZeroException>::PropertyType DivideByZeroException::Properties[] =
    {
        {"Message", &DivideByZeroException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *DivideByZeroException::Dispatcher)(lua_State * L) = &(Bindings<DivideByZeroException>::FunctionDispatch);
} 
