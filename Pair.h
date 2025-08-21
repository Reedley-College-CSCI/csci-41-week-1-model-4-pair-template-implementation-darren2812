// Pair.h
// Christopher and Darren
#ifndef PAIR_H
#define PAIR_H

// initializing the class template
template <typename T>
class Pair {
private:
   // initializing private member variables
   T first;
   T second;
public:
   // initializing default and parameterized constructors
   Pair();
   Pair(T f, T s);
   // initializing getters and setters
   T getFirst() const;
   T getSecond() const;
   void setFirst(T f);
   void setSecond(T s);
};
#endif