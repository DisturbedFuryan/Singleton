#ifndef SINGLETON_HPP
#define SINGLETON_HPP


//======================================================================================================================
/**
 * Template automatically defines the singleton pointer.
 * 
 * @author   Marcin Rainka
 * @version  2.0
 */
template < typename T >
class ISingleton {
public:
    ISingleton( void );
    
    ~ISingleton( void );

    /**
     * @return  reference to singleton
     */
    static T& Singleton( void );
    
    /**
     * @return  pointer to singleton
     */
    static T* SingletonPtr( void );


private:

    /**
     * Pointer to singleton.
     */
    static T* ms_singleton;
};
//======================================================================================================================


#include "Singleton.cpp"

#endif
