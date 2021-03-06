#include "base.hpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Ceil.cpp"
#include "Decorator.hpp"
#include "Rand.hpp"
#include "Op.hpp"
#include "DubOp.cpp"
#include "DoubRand.cpp"
#include "Iterator.hpp"
#include "BinaryIterator.cpp"
#include "NullIterator.cpp"
#include "UnaryIterator.cpp"
#include "PreorderIterator.cpp"
#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(){
    // DubOp* op1 = new DubOp(4);
    // cout << "1" << endl;
    // DubOp* op2 = new DubOp(6);
    // cout << "1" << endl;
    // Add* a1 = new Add(op1,op2);
    // cout << "1" << endl;
    // DubOp* op3 = new DubOp(7);
    // cout << "1" << endl;
    // Add* root = new Add(a1, op3);
    // cout << "1" << endl;
    // Ceil* c = new Ceil(root);
    // cout << "1" << endl;
    // PreorderIterator* tree = new PreorderIterator(c);
    // cout << "1" << endl;
    // tree->first();
    // cout << "1" << endl;
    // cout << tree->current()->evaluate() << endl;
    // cout << "1" << endl;
    
    DubOp* x = new DubOp(3.5);
    DubOp* y = new DubOp(-4.3);
    
    DubOp* xx = new DubOp(2.8);
    DubOp* yy = new DubOp(10.6);
    
    Mult* m1 = new Mult(x, y);
    Add* a1 = new Add(m1, xx);
    Sub* s1 = new Sub(a1, y);
    
    Ceil* c1 = new Ceil(s1);
    
    cout << c1->stringify() << endl;
    
    PreorderIterator* iter = new PreorderIterator(c1);
    iter->first();
    cout << iter->current()->stringify() << endl;
    iter->next();
    cout << iter->current()->stringify() << endl;
    iter->next();
    cout << iter->current()->stringify() << endl;
    iter->next();
    cout << iter->current()->stringify() << endl;
    iter->next();
    cout << iter->current()->stringify() << endl;
    iter->next();
    cout << iter->current()->stringify() << endl;
    iter->next();
    cout << iter->current()->stringify() << endl;
}

