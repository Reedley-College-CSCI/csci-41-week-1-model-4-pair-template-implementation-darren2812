// Pair.cpp
// Christopher and Darren
// Implement member functions here

#include "Pair.h"

// implementing default constructor
template <typename T>
Pair<T>::Pair() {
   first = 0;
   second = 0;
}

// implementing parameterized constructor
template <typename T>
Pair<T>::Pair(T f, T s) {
   first = f;
   second = s;
}

// implementing getters and setters
template <typename T>
T Pair<T>::getFirst() const {
	return first;
}
template <typename T>
T Pair<T>::getSecond() const {
	return second;
}
template <typename T>
void Pair<T>::setFirst(T f) {
	first = f;
}
template <typename T>
void Pair<T>::setSecond(T s) {
	second = s;
}
