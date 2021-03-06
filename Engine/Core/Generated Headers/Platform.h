/*
 * This file was automatically generated by AutoBind.
 * Any changes made to this file will be lost when it
 * is next regenerated.
 */

#ifndef CLASS_Engine_Platform
#define CLASS_Engine_Platform

/* Imports */
class Object;
namespace Engine { class InternalConstructorOnlyException; } 
#include "Object.h"
#include "Platforms/Backend.h"
#include "Platforms/Windows/Backend.h"

/* Using declarations */

namespace Engine
{
    /* Begin class declaration */
    class Platform : public Object
    {
        /* Variable declarations */
        private: Native::Backend * m_Backend;

        /* Method and constructor declarations */
        public: Platform(lua_State * L, bool byuser);
        public: Platform();
        public: void Init();
        public: void Update();
        public: bool IsKeyPressed();
        public: void ShowBuffer();
        public: long GetMilliseconds();

        /* Automatic dispatchers for overloaded methods */

        /* Automatic property getter-setter declarations */

        /* Binding variables */
        public: static const char *ClassName;
        public: static const char *Inherits;
        public: static const Bindings<Platform>::FunctionType Functions[];
        public: static const Bindings<Platform>::PropertyType Properties[];
        public: static int (__cdecl *Dispatcher)(lua_State * L);
    };
} 

#endif

