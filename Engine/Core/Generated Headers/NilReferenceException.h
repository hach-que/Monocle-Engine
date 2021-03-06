/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#ifndef CLASS_Engine_NilReferenceException
#define CLASS_Engine_NilReferenceException

/* Imports */
class Object;
namespace Engine { class InterpreterException; } 
#include "Object.h"
#include "InterpreterException.h"

/* Using declarations */

namespace Engine
{
    /* Begin class declaration */
    class NilReferenceException : public Engine::InterpreterException
    {
        /* Variable declarations */
        public: static const char* Message;

        /* Method and constructor declarations */
        public: NilReferenceException();
        public: NilReferenceException(lua_State * L, bool byuser);
        public: virtual const char* GetMessage();
        public: virtual const char* GetName();
        private: int GetMessageL(lua_State * L);

        /* Automatic dispatchers for overloaded methods */

        /* Automatic property getter-setter declarations */

        /* Binding variables */
        public: static const char *ClassName;
        public: static const char *Inherits;
        public: static const Bindings<NilReferenceException>::FunctionType Functions[];
        public: static const Bindings<NilReferenceException>::PropertyType Properties[];
        public: static int (__cdecl *Dispatcher)(lua_State * L);
    };
} 

#endif

