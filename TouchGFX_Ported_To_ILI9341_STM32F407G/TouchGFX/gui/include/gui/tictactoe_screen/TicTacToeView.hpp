#ifndef TICTACTOEVIEW_HPP
#define TICTACTOEVIEW_HPP

#include <gui_generated/tictactoe_screen/TicTacToeViewBase.hpp>
#include <gui/tictactoe_screen/TicTacToePresenter.hpp>

class TicTacToeView : public TicTacToeViewBase
{
public:
    TicTacToeView();
    virtual ~TicTacToeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // TICTACTOEVIEW_HPP
