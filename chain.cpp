#include "chain.h"
#include "chain_given.cpp"

// PA1 functions you need to implement:

Chain::~Chain(){ 
	/*your code here*/
}

void Chain::insertFront(const Block & ndata){
	/*your code here*/
}

void Chain::insertBack(const Block & ndata){
   	/*your code here*/
}

const Block* Chain::getBlock(int index) {
	/*your code here*/
	return NULL;
}

void Chain::removeFront() {
	/*your code here*/
}

void Chain::removeBack() {
	/*your code here*/
}

void Chain::replaceBlock(int index, const Block& newB) {
	/*your code here*/
}

void Chain::swap(int pos1, int pos2){
	/*your code here*/
}

void Chain::checkeredSwap(Chain &other) {
	/*your code here*/
}

void Chain::moveToBack(int startPos, int len){
	/*your code here*/
}

void Chain::rotate(int k){
   /*your code here*/
}

