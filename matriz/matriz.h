#ifndef __MATRIZ_H
#define __MATRIZ_H
#include <iostream>
#include <iomanip>
using namespace std;

template<typename T> class matriz;  // pre-declare the template class itself
template<typename T> ostream& operator<< (ostream& o, const matriz <T>& x);

template<class T> class matriz {
	
	//friend ostream& operator<<<>( ostream &, matriz<T> & );

	private:		
		T **m;
		unsigned xmax, ymax;
		
	public:
		matriz( const matriz &mm );
		matriz( unsigned xmax, unsigned ymax );
		~matriz();
		unsigned maxx() const { return xmax; }
		unsigned maxy() const { return ymax; }
		T* operator[](unsigned y) const { return m[y]; }
		
};

#endif

