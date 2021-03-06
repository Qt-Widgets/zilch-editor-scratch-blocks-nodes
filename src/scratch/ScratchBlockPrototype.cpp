#include "ScratchBlockPrototype.h"
#include "ScratchBlockCategory.h"
#include "ScratchObject.h"
#include "ScratchSprite.h"
#include "ScratchStage.h"

ScratchBlockPrototype::ScratchBlockPrototype(ScratchBlockCategory *Category, std::string Name, ScratchBlockType Type, ScratchBlockFuntion Function) {
	this->Name = Name;
	this->Category = Category;
	this->Type = Type;
	this->Function = Function;

	Category->Block.push_back(this);
}

ScratchBlockPrototype::~ScratchBlockPrototype() {

}

