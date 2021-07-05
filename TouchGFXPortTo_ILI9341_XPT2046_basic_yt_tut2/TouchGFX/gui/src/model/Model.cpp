#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

#ifndef SIMULATOR

#include "main.h"

extern "C" {
extern uint32_t userButtonPressed;
}
#endif /*SIMULATOR*/

void Model::tick()
{

#ifndef SIMULATOR

if (userButtonPressed == 1)
{
userButtonPressed = 0;
modelListener->userButtonClicked();
}
#endif /*SIMULATOR*/

}
