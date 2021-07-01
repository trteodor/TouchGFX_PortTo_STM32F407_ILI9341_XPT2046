#ifndef TICTACTOESCREENVIEW_HPP
#define TICTACTOESCREENVIEW_HPP

#include <gui_generated/tictactoescreen_screen/TicTacToeScreenViewBase.hpp>
#include <gui/tictactoescreen_screen/TicTacToeScreenPresenter.hpp>

class TicTacToeScreenView : public TicTacToeScreenViewBase
{
public:
    TicTacToeScreenView();
    virtual ~TicTacToeScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TICTACTOESCREENVIEW_HPP
