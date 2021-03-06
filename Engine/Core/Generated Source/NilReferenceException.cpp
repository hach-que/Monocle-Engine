/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "NilReferenceException.h"

namespace Engine
{
    /* Variable assignments */
    const char* NilReferenceException::Message = "Attempted to access members or index a key on a nil value.";

    /* Method and constructor definitions */
    NilReferenceException::NilReferenceException()
    {
        }

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    NilReferenceException::NilReferenceException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* NilReferenceException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* NilReferenceException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int NilReferenceException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* NilReferenceException::ClassName = "Engine.NilReferenceException";
    const char* NilReferenceException::Inherits = "Engine.InterpreterException";
    const Bindings<NilReferenceException>::FunctionType NilReferenceException::Functions[] =
    {
        {0}
    };
    const Bindings<NilReferenceException>::PropertyType NilReferenceException::Properties[] =
    {
        {"Message", &NilReferenceException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *NilReferenceException::Dispatcher)(lua_State * L) = &(Bindings<NilReferenceException>::FunctionDispatch);
} 

