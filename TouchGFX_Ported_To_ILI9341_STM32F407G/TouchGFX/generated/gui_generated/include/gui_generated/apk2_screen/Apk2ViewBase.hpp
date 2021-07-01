/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef APK2VIEWBASE_HPP
#define APK2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/apk2_screen/Apk2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/containers/progress_indicators/CircleProgress.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565Bitmap.hpp>
#include <touchgfx/containers/progress_indicators/LineProgress.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/mixins/Draggable.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/FadeAnimator.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class Apk2ViewBase : public touchgfx::View<Apk2Presenter>
{
public:
    Apk2ViewBase();
    virtual ~Apk2ViewBase() {}
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
    touchgfx::Button BackToMain;
    touchgfx::TextArea textArea1;
    touchgfx::GraphWrapAndClear<100> dynamicGraph1;
    touchgfx::GraphElementLine dynamicGraph1Line1;
    touchgfx::PainterRGB565 dynamicGraph1Line1Painter;
    touchgfx::CircleProgress circleProgress1;
    touchgfx::PainterRGB565Bitmap circleProgress1Painter;
    touchgfx::LineProgress lineProgress1;
    touchgfx::PainterRGB565 lineProgress1Painter;
    touchgfx::DigitalClock digitalClock1;
    touchgfx::Draggable< touchgfx::ClickListener< touchgfx::FadeAnimator< touchgfx::MoveAnimator< touchgfx::Button > > > > button1;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Apk2ViewBase, const touchgfx::AbstractButton&> buttonCallback;

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

#endif // APK2VIEWBASE_HPP