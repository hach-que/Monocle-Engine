/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#ifndef CLASS_Engine_Debug
#define CLASS_Engine_Debug

/* Imports */
class Object;
namespace Engine { class InternalConstructorOnlyException; } 
#include "Object.h"

/* Using declarations */

namespace Engine
{
    /* Begin class declaration */
    class Debug : public Object
    {
        /* Variable declarations */

        /* Method and constructor declarations */
        public: Debug(lua_State * L, bool byuser);
        public: Debug();

        /* Automatic dispatchers for overloaded methods */

        /* Automatic property getter-setter declarations */

        /* Binding variables */
        public: static const char *ClassName;
        public: static const char *Inherits;
        public: static const Bindings<Debug>::FunctionType Functions[];
        public: static const Bindings<Debug>::PropertyType Properties[];
        public: static int (__cdecl *Dispatcher)(lua_State * L);
    };
} 

#endif
