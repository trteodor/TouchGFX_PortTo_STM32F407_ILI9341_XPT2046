/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef TICTACTOEVIEWBASE_HPP
#define TICTACTOEVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/tictactoe_screen/TicTacToePresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class TicTacToeViewBase : public touchgfx::View<TicTacToePresenter>
{
public:
    TicTacToeViewBase();
    virtual ~TicTacToeViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::Line line1_1;
    touchgfx::PainterRGB565 line1_1Painter;
    touchgfx::Line line1_3;
    touchgfx::PainterRGB565 line1_3Painter;
    touchgfx::Line line1_3_1;
    touchgfx::PainterRGB565 line1_3_1Painter;
    touchgfx::Circle circle1;
    touchgfx::PainterRGB565 circle1Painter;
    touchgfx::Circle circle1_1;
    touchgfx::PainterRGB565 circle1_1Painter;
    touchgfx::Line line2;
    touchgfx::PainterRGB565 line2Painter;
    touchgfx::Line line2_1;
    touchgfx::PainterRGB565 line2_1Painter;
    touchgfx::Button BackToMain;
    touchgfx::Line line1_3_2;
    touchgfx::PainterRGB565 line1_3_2Painter;
    touchgfx::Line line1_3_3;
    touchgfx::PainterRGB565 line1_3_3Painter;
    touchgfx::Line line1_4;
    touchgfx::PainterRGB565 line1_4Painter;
    touchgfx::Line line1_5;
    touchgfx::PainterRGB565 line1_5Painter;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea2_1;
    touchgfx::Button Rest;
    touchgfx::TextArea textArea3;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<TicTacToeViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

    /*
     * Canvas Buffer Size
     */
    static const uint16_t CANVAS_BUFFER_SIZE = 4800;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];
};

#endif // TICTACTOEVIEWBASE_HPP