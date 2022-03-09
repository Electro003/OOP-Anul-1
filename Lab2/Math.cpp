#include "Math.h"

int Math::Add(int x, int y){
	return x + y;
}
int Math::Add(int x, int y,int z){
	return x + y + z;
}
int Math::Add(double x, double y){
	return x + y;
}
int Math::Add(double x, double y, double z){
	return x + y + z;
}
int Math::Mul(int x, int y){
	return x * y;
}
int Math::Mul(int x, int y ,int z){
	return x * y * z;
}
int Math::Mul(double x, double y){
	return x * y;
}
int Math::Mul(double x, double y, double z){
	return x * y * z;
}

int Math::Add(int count, ...) {
	int suma = 0;
	va_list lista;
	va_start(lista, count);
	for (int i = 0; i < count; i++)
		suma += va_arg(lista, int);
	va_end(lista);
	return suma;
}
char* Add(const char* s1, const char* s2) {

	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	const char* s3 = new const char;

}