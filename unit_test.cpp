#include "gtest/gtest.h"
#include "base.hpp"
#include "Pow.cpp"
#include "Mult.cpp"
#include "Div.cpp"
#include "Add.cpp"
#include "Sub.cpp"
#include "Rand.hpp"
#include "Op.hpp"
#include "DubOp.h"
#include "DoubRand.h"
#include "Ceil.h"
#include "Decorator.hpp"
#include "BinaryIterator.h"
#include "NullIterator.h"
#include "UnaryIterator.h"
#include "PreorderIterator.h"
#include <list>
#include <string>
#include <iostream>
#include <vector>
#include <stdlib.h>

int main(int argc, char**argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
