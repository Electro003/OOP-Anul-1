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
	return 0;
}