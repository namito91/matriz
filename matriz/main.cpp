#include "matriz.cpp"


void f ( matriz<int> x )
{	
    cout<<x<<'\n';
	x[5][5]=123;
	cout<<x<<'\n';
}


int main()
{
	
	matriz<int> a(10, 10);
	matriz<char> c(10, 10);
	int i, j;

	for(i=0; i<10; i++)
		for(j=0; j<10; j++) 
		{
			a[i][j]=i+j;
			c[i][j]='A'+i+j;
		}

	f(a);
	cout<<a<<'\n';
	cout<<c<<'\n';

	//int matrix [2][2] = { {1,2} , {3,5} };
	//cout << "asd" << matrix[1] << endl;

	return 0;
}