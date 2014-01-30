#include "Singleton.hpp"
#include <cassert>
#include <cstdint>


template < typename T >
inline ISingleton< T >::ISingleton( void ) {
    assert( !ms_singleton );
    intptr_t offset = ( ( intptr_t )( T* )1 - ( intptr_t )( ISingleton< T >* )( T* )1 );
    ms_singleton = ( ( T* )( ( intptr_t )this + offset ) );
}


template < typename T >
inline ISingleton< T >::~ISingleton( void ) {
    assert( ms_singleton );
    ms_singleton = nullptr;
}


template < typename T >
inline T& ISingleton< T >::Singleton( void ) {
    assert( ms_singleton );
    return *ms_singleton;
}


template < typename T >
inline T* ISingleton< T >::SingletonPtr( void ) {
    return ms_singleton;
}


template < typename T >
T* ISingleton< T >::ms_singleton = nullptr;
