#ifndef __3DVECTOR_H__
#define __3DVECTOR_H__

using namespace std;

#include <math.h>

template<class TYPE>

class Vector3D
{
public:

	TYPE x, y, z; // Variables

	// Constructors

	Vector3D() {
		
	};

	Vector3D(const Vector3D& vect3d)
	{
		x = vect3d.x;
		y = vect3d.y;
		z = vect3d.z;
	}

	Vector3D(const double val1,const double val2,const double val3)
	{
		x = val1;
		y = val2;
		z = val3;
	}

	// Set the operators

	Vector3D operator -( const Vector3D& v) 
	{
		
		x = x - v.x;
		y = y - v.y;
		z = z - v.z;

		return(*this);
		
	}

	Vector3D operator =( const Vector3D& v) 
	{
		
		x = v.x;
		y = v.y;
		z = v.z;

		return(*this);
	}

	Vector3D operator +( const Vector3D& v) 
	{
		

		x = x + v.x;
		y = y + v.y;
		z = z + v.z;

		return(*this);

	}

	const Vector3D& operator -=(const Vector3D& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;

		return(*this);
	}

	const Vector3D& operator +=(const Vector3D& v)
	{
		x += v.x;
		y += v.y;
		z += v.z;

		return(*this);
	}

	bool operator ==(const Vector3D& v) const
	{
		return (x == v.x && y == v.y && z == v.z);
	}

	bool operator !=(const Vector3D& v) const
	{
		return (x != v.x || y != v.y || z != v.z);
	}

	const Vector3D& operator *(const int v)
	{
		x =x* v;
		y =y* v;
		z =z* v;

		return(*this);
	}

	// Usefull methods

	bool IsZero() const  // Verify if the vector is null
	{
		return (x == 0 && y == 0 && z == 0);
	}

	Vector3D& SetToZero() // Sets the vector to zero
	{
		x = y = z = 0;
		return(*this);
	}

	Vector3D& Normalize() // Normalize the vector
	{
		x = y = z = 1;
		return(*this);
	}

	Vector3D& Negate() // Negates the vector
	{
		x = -x;
		y = -y;
		z = -z;

		return(*this);
	}

	TYPE DistanceTo(const Vector3D v) const // Mesures the scalar distance between vectors
	{
		TYPE fx = x - v.x;
		TYPE fy = y - v.y;
		TYPE fz = z - v.z;

		return (TYPE)sqrt((fx * fx) + (fy * fy) + (fz * fz));
	}

};

#endif 