#ifndef POW_H
#define POW_H

#include "base.hpp"
#include "Op.hpp"
#include "Rand.hpp"
#include "BinaryIterator.h"

class Pow : public Base { 
    
	private:
		Base* left;
		Base* right;
	public:
	Pow(Base* v1, Base* v2){
		left = v1;
		right = v2;
	}
	double evaluate() {
		return left->evaluate() * right->evaluate();
	}
	string stringify(){
		string sent;
		sent = left->stringify() + " + " + right->stringify();
		return sent;
	}
	Base* get_left() {
			if (!this->left) {
				return nullptr;
			}
			else {
				return this->left;
			}
		}
	Base* get_right() {
		if (!this->right) {
			return nullptr;
		}
		else {
			return this->right;
		}
	}
	Iterator* create_iterator(){
		BinaryIterator* iter = new BinaryIterator(this);
		return iter;
	}
};

#endif
