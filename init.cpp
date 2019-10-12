#include <iostream>

using namespace std;

//Initialize an array in logaritmic time
template <typename T> void init(T *v, int len, T value)
{
	v[0] = value;
	int size = 1;
	while(size*2 < len)
	{
		memcpy(v+size, v, size*4);
		size *= 2;
	}
	
	memcpy(v+size, v, (len-size)*4);
}

//That takes O(n) time
template <typename T> void _init(T *v, int len, T value)
{
	for(int i=0; i<len; i++)
		v[i] = value;
}

int main()
{
	
	return 0;
}
