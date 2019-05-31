/*
 * Author : Jatin Rohilla
 * Date   :
 *
 * Editor   : Dev c++ 5.11
 * Compiler : g++ 5.1.0
 * flags    : -std=c++11
 *

Question - Difference between head and tail recursion
 https://www.geeksforgeeks.org/tail-recursion/

may -

ail recursi�n is a way of recursi�n that some compilers are able to detect this kind of recursi�n and generate optimized code.
There are 2 condici�ns for consider a function tail recursive.

1.the last statement mus be the recursive call. (this is why is called "tail recursi�n"
2.the recursive call must no be part of a expresi�n ie. You cant use (+,-,*,etc) and example of this.

return 4*recursiveCall(n-1); //avoid this
The reason why compilers optimize code it is because the 'stack frame' or 'activation record' are overwritten', instead of push a new one on the stack.
Sorry for my english. Hope this be useful.
 
 */


#include<bits/stdc++.h>
using namespace std;

int main(){

	cout<<"Hello World";

    return 0;
}

