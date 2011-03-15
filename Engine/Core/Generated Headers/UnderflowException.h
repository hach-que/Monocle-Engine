/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#ifndef CLASS_Engine_UnderflowException
#define CLASS_Engine_UnderflowException

/* Imports */
class Object;
namespace Engine { class LowLevelException; } 
#include "Object.h"
#include "LowLevelException.h"

/* Using declarations */

namespace Engine
{
    /* Begin class declaration */
    class UnderflowException : public Engine::LowLevelException
    {
        /* Variable declarations */
        public: static const char* Message;

        /* Method and constructor declarations */
        public: UnderflowException();
        public: UnderflowException(lua_State * L, bool byuser);
        public: virtual const char* GetMessage();
        public: virtual const char* GetName();
        private: int GetMessageL(lua_State * L);

        /* Automatic dispatchers for overloaded methods */

        /* Automatic property getter-setter declarations */

        /* Binding variables */
        public: static const char *ClassName;
        public: static const char *Inherits;
        public: static const Bindings<UnderflowException>::FunctionType Functions[];
        public: static const Bindings<UnderflowException>::PropertyType Properties[];
        public: static int (__cdecl *Dispatcher)(lua_State * L);
    };
} 

#endif
