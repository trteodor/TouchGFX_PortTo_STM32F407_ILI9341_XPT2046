/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/apk2_screen/Apk2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

Apk2ViewBase::Apk2ViewBase() :
    buttonCallback(this, &Apk2ViewBase::buttonCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 320, 240);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    box1.setPosition(0, 0, 320, 240);
    box1.setColor(touchgfx::Color::getColorFrom24BitRGB(37, 227, 11));

    BackToMain.setXY(256, 0);
    BackToMain.setBitmaps(touchgfx::Bitmap(BITMAP_MENUSCALEDWHITE_ID), touchgfx::Bitmap(BITMAP_MENUSCALED_ID));
    BackToMain.setAction(buttonCallback);

    textArea1.setXY(49, 215);
    textArea1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID5));

    dynamicGraph1.setScale(1);
    dynamicGraph1.setPosition(-6, 30, 160, 128);
    dynamicGraph1.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 100);

    dynamicGraph1Line1.setScale(1);
    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(20, 151, 197));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);

    dynamicGraph1.addDataPoint(52.4878502289413f);
    dynamicGraph1.addDataPoint(59.7798145911201f);
    dynamicGraph1.addDataPoint(68.1495746710877f);
    dynamicGraph1.addDataPoint(74.7300387817089f);
    dynamicGraph1.addDataPoint(76.9863742955176f);
    dynamicGraph1.addDataPoint(73.3734531763223f);
    dynamicGraph1.addDataPoint(63.753724447527f);
    dynamicGraph1.addDataPoint(49.4716421657178f);
    dynamicGraph1.addDataPoint(33.0647950852881f);
    dynamicGraph1.addDataPoint(17.6808509127814f);
    dynamicGraph1.addDataPoint(6.34155833601827f);
    dynamicGraph1.addDataPoint(1.23260578394772f);
    dynamicGraph1.addDataPoint(3.19203469556696f);
    dynamicGraph1.addDataPoint(11.521514987863f);
    dynamicGraph1.addDataPoint(24.1660345856467f);
    dynamicGraph1.addDataPoint(38.2176626373846f);
    dynamicGraph1.addDataPoint(50.6200224021649f);
    dynamicGraph1.addDataPoint(58.9012921165482f);
    dynamicGraph1.addDataPoint(61.7568780322627f);
    dynamicGraph1.addDataPoint(59.340006338759f);
    dynamicGraph1.addDataPoint(53.1902221191541f);
    dynamicGraph1.addDataPoint(45.8186730626554f);
    dynamicGraph1.addDataPoint(40.0532063568622f);
    dynamicGraph1.addDataPoint(38.3052258699647f);
    dynamicGraph1.addDataPoint(41.9394414125599f);
    dynamicGraph1.addDataPoint(50.9023902397897f);
    dynamicGraph1.addDataPoint(63.7021892412357f);
    dynamicGraph1.addDataPoint(77.7457889750011f);
    dynamicGraph1.addDataPoint(89.9522829064298f);
    dynamicGraph1.addDataPoint(97.4929714394486f);
    dynamicGraph1.addDataPoint(98.4775516432163f);
    dynamicGraph1.addDataPoint(92.4186867947786f);
    dynamicGraph1.addDataPoint(80.3611411823866f);
    dynamicGraph1.addDataPoint(64.6434750602625f);
    dynamicGraph1.addDataPoint(48.3499406076997f);
    dynamicGraph1.addDataPoint(34.5858109587514f);
    dynamicGraph1.addDataPoint(25.7523375112845f);
    dynamicGraph1.addDataPoint(22.9974599559879f);
    dynamicGraph1.addDataPoint(25.97520974434f);
    dynamicGraph1.addDataPoint(32.9710930161391f);
    dynamicGraph1.addDataPoint(41.361149950413f);
    dynamicGraph1.addDataPoint(48.2907108794636f);
    dynamicGraph1.addDataPoint(51.4052342839033f);
    dynamicGraph1.addDataPoint(49.453011317468f);
    dynamicGraph1.addDataPoint(42.6111272938718f);
    dynamicGraph1.addDataPoint(32.4541020273639f);
    dynamicGraph1.addDataPoint(21.5724027304406f);
    dynamicGraph1.addDataPoint(12.9340749974341f);
    dynamicGraph1.addDataPoint(9.14594754295176f);
    dynamicGraph1.addDataPoint(11.7957831119936f);
    dynamicGraph1.addDataPoint(21.0372113410081f);
    dynamicGraph1.addDataPoint(35.5201291359086f);
    dynamicGraph1.addDataPoint(52.6848723164071f);
    dynamicGraph1.addDataPoint(69.3495893902895f);
    dynamicGraph1.addDataPoint(82.4485833843669f);
    dynamicGraph1.addDataPoint(89.7424548248183f);
    dynamicGraph1.addDataPoint(90.3278106424071f);
    dynamicGraph1.addDataPoint(84.8232654697113f);
    dynamicGraph1.addDataPoint(75.1876066243293f);
    dynamicGraph1.addDataPoint(64.2158552670708f);
    dynamicGraph1.addDataPoint(54.8375684480591f);
    dynamicGraph1.addDataPoint(49.3898836527578f);
    dynamicGraph1.addDataPoint(49.0436701441567f);
    dynamicGraph1.addDataPoint(53.5233555479486f);
    dynamicGraph1.addDataPoint(61.1887590953255f);
    dynamicGraph1.addDataPoint(69.4583314918989f);
    dynamicGraph1.addDataPoint(75.4693030105267f);
    dynamicGraph1.addDataPoint(76.8120024449554f);
    dynamicGraph1.addDataPoint(72.1572250823701f);
    dynamicGraph1.addDataPoint(61.6215490462565f);
    dynamicGraph1.addDataPoint(46.7795850261802f);
    dynamicGraph1.addDataPoint(30.3185137413349f);
    dynamicGraph1.addDataPoint(15.4179126029762f);
    dynamicGraph1.addDataPoint(5.00519880129283f);
    dynamicGraph1.addDataPoint(1.06762720293631f);
    dynamicGraph1.addDataPoint(4.1881547915402f);
    dynamicGraph1.addDataPoint(13.4179035378562f);
    dynamicGraph1.addDataPoint(26.5158501710204f);
    dynamicGraph1.addDataPoint(40.4967586088532f);
    dynamicGraph1.addDataPoint(52.3532368252974f);
    dynamicGraph1.addDataPoint(59.7754795752557f);
    dynamicGraph1.addDataPoint(61.6931477404928f);
    dynamicGraph1.addDataPoint(58.507647954104f);
    dynamicGraph1.addDataPoint(51.959131193204f);
    dynamicGraph1.addDataPoint(44.6621663839854f);
    dynamicGraph1.addDataPoint(39.4252815150602f);
    dynamicGraph1.addDataPoint(38.5225998117931f);
    dynamicGraph1.addDataPoint(43.0975068593873f);
    dynamicGraph1.addDataPoint(52.8459362564118f);
    dynamicGraph1.addDataPoint(66.0582866856919f);
    dynamicGraph1.addDataPoint(80.0109923666734f);
    dynamicGraph1.addDataPoint(91.6129665696701f);
    dynamicGraph1.addDataPoint(98.1494482080552f);
    dynamicGraph1.addDataPoint(97.9416552905479f);
    dynamicGraph1.addDataPoint(90.7609350727205f);
    dynamicGraph1.addDataPoint(77.8958915858944f);
    dynamicGraph1.addDataPoint(61.855605523007f);
    dynamicGraph1.addDataPoint(45.7808681567188f);
    dynamicGraph1.addDataPoint(32.7065608215097f);
    dynamicGraph1.addDataPoint(24.8545168286656f);

    circleProgress1.setXY(208, 76);
    circleProgress1.setProgressIndicatorPosition(0, 0, 104, 104);
    circleProgress1.setRange(0, 100);
    circleProgress1.setCenter(52, 52);
    circleProgress1.setRadius(50);
    circleProgress1.setLineWidth(0);
    circleProgress1.setStartEndAngle(0, 360);
    circleProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_CIRCLE_INDICATOR_BG_FULL_ID));
    circleProgress1Painter.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_FILL_MEDIUM_CIRCLE_INDICATOR_FILL_FULL_ID));
    circleProgress1.setPainter(circleProgress1Painter);
    circleProgress1.setValue(60);

    lineProgress1.setXY(0, 149);
    lineProgress1.setProgressIndicatorPosition(0, 0, 178, 62);
    lineProgress1.setRange(0, 100);
    lineProgress1.setBackground(touchgfx::Bitmap(BITMAP_BLUE_PROGRESSINDICATORS_BG_MEDIUM_PROGRESS_INDICATOR_BG_ROUND_15_DEGREES_ID));
    lineProgress1Painter.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 151, 255));
    lineProgress1.setPainter(lineProgress1Painter);
    lineProgress1.setStart(10, 10);
    lineProgress1.setEnd(168, 52);
    lineProgress1.setLineWidth(16);
    lineProgress1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    lineProgress1.setValue(60);

    digitalClock1.setPosition(0, 0, 100, 25);
    digitalClock1.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));
    digitalClock1.setTypedText(touchgfx::TypedText(T_SINGLEUSEID9));
    digitalClock1.displayLeadingZeroForHourIndicator(true);
    digitalClock1.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock1.setTime24Hour(10, 10, 0);

    button1.setXY(158, 58);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTERFLYSMALLER_ID), touchgfx::Bitmap(BITMAP_BUTTERFLYSMALLER_ID));

    add(__background);
    add(box1);
    add(BackToMain);
    add(textArea1);
    add(dynamicGraph1);
    add(circleProgress1);
    add(lineProgress1);
    add(digitalClock1);
    add(button1);
}

void Apk2ViewBase::setupScreen()
{

}

void Apk2ViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &BackToMain)
    {
        //Interaction1
        //When BackToMain clicked change screen to MainScreen
        //Go to MainScreen with no screen transition
        application().gotoMainScreenScreenNoTransition();
    }
}