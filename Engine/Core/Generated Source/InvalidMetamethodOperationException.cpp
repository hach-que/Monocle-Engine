/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "InvalidMetamethodOperationException.h"

namespace Engine
{
    /* Variable assignments */
    const char* InvalidMetamethodOperationException::Message = "The Lua interpreter attempted to perform an operation on two objects where neither of them defined a metamethod for the operation attempted.";

    /* Method and constructor definitions */
    InvalidMetamethodOperationException::InvalidMetamethodOperationException()
    {
        }

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    InvalidMetamethodOperationException::InvalidMetamethodOperationException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* InvalidMetamethodOperationException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* InvalidMetamethodOperationException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int InvalidMetamethodOperationException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* InvalidMetamethodOperationException::ClassName = "Engine.InvalidMetamethodOperationException";
    const char* InvalidMetamethodOperationException::Inherits = "Engine.InvalidOperationException";
    const Bindings<InvalidMetamethodOperationException>::FunctionType InvalidMetamethodOperationException::Functions[] =
    {
        {0}
    };
    const Bindings<InvalidMetamethodOperationException>::PropertyType InvalidMetamethodOperationException::Properties[] =
    {
        {"Message", &InvalidMetamethodOperationException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *InvalidMetamethodOperationException::Dispatcher)(lua_State * L) = &(Bindings<InvalidMetamethodOperationException>::FunctionDispatch);
} 

