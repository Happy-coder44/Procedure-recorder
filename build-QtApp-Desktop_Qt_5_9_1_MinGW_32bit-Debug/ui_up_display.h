/********************************************************************************
** Form generated from reading UI file 'up_display.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UP_DISPLAY_H
#define UI_UP_DISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Up_Display
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *cbb_upperItem;
    QComboBox *cbb_dispalyMethod;
    QLCDNumber *lcd;

    void setupUi(QFrame *Up_Display)
    {
        if (Up_Display->objectName().isEmpty())
            Up_Display->setObjectName(QStringLiteral("Up_Display"));
        Up_Display->resize(260, 188);
        Up_Display->setStyleSheet(QLatin1String("#Up_Display{\n"
"border-image: url(:/images/fatherTimer_drawer_up_2.png);\n"
"}"));
        Up_Display->setFrameShape(QFrame::StyledPanel);
        Up_Display->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Up_Display);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(Up_Display);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("#widget{\n"
"border-image: url(:/images/fatherTimer_drawer_up_2.png);\n"
"}"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(42, 25, 45, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(189, 161, 96);"));

        verticalLayout->addWidget(label);

        cbb_upperItem = new QComboBox(widget);
        cbb_upperItem->setObjectName(QStringLiteral("cbb_upperItem"));
        cbb_upperItem->setMaximumSize(QSize(16777215, 32));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        cbb_upperItem->setFont(font1);
        cbb_upperItem->setStyleSheet(QString::fromUtf8("\n"
"/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"border-image: url(:/images/label_2.png);\n"
"font: 13pt \"Arial\";\n"
"\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background-color: rgb(58, 43, 87);\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"border-image: url(:/images/listbox_back.png);\n"
"/*QFont font ( \342\200\234Microsoft YaHei\342\200\235,15,100); */\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"width: 62px\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */ QComboBox::down-arrow {\n"
"background-color: rgba(255, 255, 255, 0);\n"
"width:23px;\n"
""
                        "height:18px;\n"
"}\n"
"\n"
" QComboBox::down-arrow:pressed {\n"
"border-image: url(:/images/listbox_btn_pressed.png);\n"
"width:23px;\n"
"height:18px;\n"
"}\n"
"\n"
""));
        cbb_upperItem->setFrame(false);

        verticalLayout->addWidget(cbb_upperItem);

        cbb_dispalyMethod = new QComboBox(widget);
        cbb_dispalyMethod->setObjectName(QStringLiteral("cbb_dispalyMethod"));
        cbb_dispalyMethod->setMaximumSize(QSize(50, 16777215));
        cbb_dispalyMethod->setStyleSheet(QString::fromUtf8("\n"
"/* \346\234\252\344\270\213\346\213\211\346\227\266\357\274\214QComboBox\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox {\n"
"color: rgb(189, 161, 91);\n"
"font: 13pt \"Arial\";\n"
"	background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"background-color: rgb(58, 43, 87);\n"
"}\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\346\213\251\347\232\204\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"color: rgb(55, 42, 82);\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\346\241\206\346\240\267\345\274\217 */\n"
"QComboBox::drop-down {\n"
"\n"
"}\n"
"\n"
"/* \344\270\213\346\213\211\347\256\255\345\244\264\346\240\267\345\274\217 */ QComboBox::down-arrow {\n"
"width:23px;\n"
"height:18px;\n"
"}\n"
"\n"
" QComboBox::down-arrow:pressed {\n"
"\n"
"}\n"
""));
        cbb_dispalyMethod->setFrame(false);

        verticalLayout->addWidget(cbb_dispalyMethod);

        lcd = new QLCDNumber(widget);
        lcd->setObjectName(QStringLiteral("lcd"));
        lcd->setStyleSheet(QStringLiteral("border-image: url(:/images/label_2.png);"));
        lcd->setProperty("intValue", QVariant(100));

        verticalLayout->addWidget(lcd);


        horizontalLayout->addWidget(widget);


        retranslateUi(Up_Display);

        QMetaObject::connectSlotsByName(Up_Display);
    } // setupUi

    void retranslateUi(QFrame *Up_Display)
    {
        Up_Display->setWindowTitle(QApplication::translate("Up_Display", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("Up_Display", "\347\210\266\351\241\271\347\233\256:", Q_NULLPTR));
        cbb_upperItem->clear();
        cbb_upperItem->insertItems(0, QStringList()
         << QApplication::translate("Up_Display", "     \346\226\260\345\273\272\351\241\271  \347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("Up_Display", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
        );
        cbb_dispalyMethod->clear();
        cbb_dispalyMethod->insertItems(0, QStringList()
         << QApplication::translate("Up_Display", "D:", Q_NULLPTR)
         << QApplication::translate("Up_Display", "H:", Q_NULLPTR)
         << QApplication::translate("Up_Display", "M:", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class Up_Display: public Ui_Up_Display {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UP_DISPLAY_H
