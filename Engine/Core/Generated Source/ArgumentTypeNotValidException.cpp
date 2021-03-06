/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#include "autobind/types.h"
#include "autobind/binding/lua.h"
#include "Object.h"
#include "ArgumentTypeNotValidException.h"
#include <vector>
#include <string>
#include <sstream>

namespace Engine
{
    /* Variable assignments */
    const char* ArgumentTypeNotValidException::Message = "The specified argument at position ${1} is not of the correct type (got '${2}', expected '${3}').";

    /* Method and constructor definitions */
    ArgumentTypeNotValidException::ArgumentTypeNotValidException(int narg, std::string got, std::string expect)
    {
        std::stringstream sstr;
		sstr << narg;
		this->Arguments.insert(this->Arguments.end(), sstr.str());
		this->Arguments.insert(this->Arguments.end(), got);
		this->Arguments.insert(this->Arguments.end(), expect);
	}

	/// <summary>
	/// Exception constructor for Lua code.
	/// </summary>
    ArgumentTypeNotValidException::ArgumentTypeNotValidException(lua_State * L, bool byuser)
    {
        }

	/// <summary>
	/// Returns the static Message variable.  Required for downcasting.
	/// <summary>
    const char* ArgumentTypeNotValidException::GetMessage()
    {
        return this->Message;
	}

	/// <summary>
	/// Returns the static ClassName variable.  Required for downcasting.
	/// <summary>
    const char* ArgumentTypeNotValidException::GetName()
    {
        return this->ClassName;
	}

	/// <summary>
	/// A property to access the exception message.
	/// </summary>
	/// <readonly>true</readonly>
    int ArgumentTypeNotValidException::GetMessageL(lua_State * L)
    {

        return Bindings<::string>::Result(L, Engine::Exception::GetParsedMessage(this->Message, this->Arguments).c_str());
	}

    /* Automatic dispatchers for overloaded methods */
    /* Automatic property getter-setter definitions */
    /* Binding variables */
    const char* ArgumentTypeNotValidException::ClassName = "Engine.ArgumentTypeNotValidException";
    const char* ArgumentTypeNotValidException::Inherits = "Engine.InterpreterException";
    const Bindings<ArgumentTypeNotValidException>::FunctionType ArgumentTypeNotValidException::Functions[] =
    {
        {0}
    };
    const Bindings<ArgumentTypeNotValidException>::PropertyType ArgumentTypeNotValidException::Properties[] =
    {
        {"Message", &ArgumentTypeNotValidException::GetMessageL, NULL},
        {0}
    };
    int (__cdecl *ArgumentTypeNotValidException::Dispatcher)(lua_State * L) = &(Bindings<ArgumentTypeNotValidException>::FunctionDispatch);
} 

