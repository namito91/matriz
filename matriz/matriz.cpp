#include "matriz.h"


template < typename T >
matriz<T>:: matriz ( const matriz &mm2 )
{
    this->xmax= mm2.maxx();
    this->ymax = mm2.maxy();

    this->m = new T*[this->xmax];
    for (int i = 0; i < this->xmax; ++i)
        m[i] = new T[this->ymax];

    for (size_t i = 0; i < this->maxx() ; i++)
    {
        for (size_t j = 0; j < this->maxy() ; j++)
        {
            this->m[i][j] = mm2[i][j]; 
        }   
    }
}


template < typename T >
matriz<T>:: matriz ( unsigned xmax, unsigned ymax )
{
    this->xmax = xmax;
    this->ymax = ymax;

    this->m = new T*[this->xmax];
    for (int i = 0; i < this->xmax; ++i)
        m[i] = new T[this->ymax];

}


template < typename T >
matriz<T>:: ~matriz ()
{
    for (int i = 0; i < xmax; ++i)
        delete [] m[i];
    
    delete [] m;
}


template < typename T >
ostream& operator<<( ostream &salida, matriz<T> &m ){
    
    for (size_t i = 0; i < m.maxx() ; i++)
    {
        for (size_t j = 0; j < m.maxy() ; j++)
            {
                cout << setw(5) <<  m[i][j];
            }
            cout << endl;
    }
    return salida;
}            




