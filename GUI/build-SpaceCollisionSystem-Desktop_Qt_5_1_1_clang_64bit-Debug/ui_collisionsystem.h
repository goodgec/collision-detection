/********************************************************************************
** Form generated from reading UI file 'collisionsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLLISIONSYSTEM_H
#define UI_COLLISIONSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "collisiondisplay2d.h"

QT_BEGIN_NAMESPACE

class Ui_CollisionSystem
{
public:
    QAction *displayTimestepViewable;
    QAction *numCollisionsViewable;
    QAction *systemKEViewable;
    QAction *systemPEViewable;
    QAction *startConditionsViewable;
    QAction *queueSizeViewable;
    QAction *totalEnergyViewable;
    QAction *algTimestepViewable;
    QWidget *centralWidget;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpinBox *numParticlesInput;
    QLabel *label;
    QLineEdit *seedInput;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *lookaheadTimeInput;
    QPushButton *generateSeedButton;
    QTextEdit *systemOutput;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *minRadiusBox;
    QDoubleSpinBox *maxRadiusBox;
    QPushButton *pauseButton;
    QPushButton *stepButton;
    QCheckBox *timestepLimitCheckbox;
    QSpinBox *timestepLimitInput;
    QTabWidget *dimensionSelector;
    QWidget *tab2D;
    QComboBox *algorithmSelector2D;
    QWidget *tab3D;
    QComboBox *algorithmSelector3D;
    QWidget *tabOrbital;
    QComboBox *algorithmSelectorOrbital;
    QSlider *framerateSlider;
    QLabel *label_8;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    CollisionDisplay2D *collisionDisplay2D;
    QPushButton *resetCameraButton;
    QMenuBar *menuBar;
    QMenu *menuView;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *CollisionSystem)
    {
        if (CollisionSystem->objectName().isEmpty())
            CollisionSystem->setObjectName(QStringLiteral("CollisionSystem"));
        CollisionSystem->resize(906, 745);
        CollisionSystem->setMinimumSize(QSize(906, 745));
        displayTimestepViewable = new QAction(CollisionSystem);
        displayTimestepViewable->setObjectName(QStringLiteral("displayTimestepViewable"));
        displayTimestepViewable->setCheckable(true);
        displayTimestepViewable->setChecked(true);
        numCollisionsViewable = new QAction(CollisionSystem);
        numCollisionsViewable->setObjectName(QStringLiteral("numCollisionsViewable"));
        numCollisionsViewable->setCheckable(true);
        numCollisionsViewable->setChecked(true);
        systemKEViewable = new QAction(CollisionSystem);
        systemKEViewable->setObjectName(QStringLiteral("systemKEViewable"));
        systemKEViewable->setCheckable(true);
        systemPEViewable = new QAction(CollisionSystem);
        systemPEViewable->setObjectName(QStringLiteral("systemPEViewable"));
        systemPEViewable->setCheckable(true);
        startConditionsViewable = new QAction(CollisionSystem);
        startConditionsViewable->setObjectName(QStringLiteral("startConditionsViewable"));
        startConditionsViewable->setCheckable(true);
        queueSizeViewable = new QAction(CollisionSystem);
        queueSizeViewable->setObjectName(QStringLiteral("queueSizeViewable"));
        queueSizeViewable->setCheckable(true);
        queueSizeViewable->setChecked(true);
        totalEnergyViewable = new QAction(CollisionSystem);
        totalEnergyViewable->setObjectName(QStringLiteral("totalEnergyViewable"));
        totalEnergyViewable->setCheckable(true);
        algTimestepViewable = new QAction(CollisionSystem);
        algTimestepViewable->setObjectName(QStringLiteral("algTimestepViewable"));
        algTimestepViewable->setCheckable(true);
        algTimestepViewable->setChecked(true);
        centralWidget = new QWidget(CollisionSystem);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        startButton = new QPushButton(centralWidget);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(700, 380, 141, 32));
        stopButton = new QPushButton(centralWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setGeometry(QRect(700, 420, 141, 32));
        stopButton->setFocusPolicy(Qt::NoFocus);
        numParticlesInput = new QSpinBox(centralWidget);
        numParticlesInput->setObjectName(QStringLiteral("numParticlesInput"));
        numParticlesInput->setGeometry(QRect(710, 200, 111, 24));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(700, 180, 141, 16));
        seedInput = new QLineEdit(centralWidget);
        seedInput->setObjectName(QStringLiteral("seedInput"));
        seedInput->setGeometry(QRect(710, 120, 111, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 100, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 630, 121, 20));
        lookaheadTimeInput = new QDoubleSpinBox(centralWidget);
        lookaheadTimeInput->setObjectName(QStringLiteral("lookaheadTimeInput"));
        lookaheadTimeInput->setGeometry(QRect(230, 650, 101, 24));
        lookaheadTimeInput->setFocusPolicy(Qt::NoFocus);
        generateSeedButton = new QPushButton(centralWidget);
        generateSeedButton->setObjectName(QStringLiteral("generateSeedButton"));
        generateSeedButton->setGeometry(QRect(710, 140, 114, 32));
        generateSeedButton->setAcceptDrops(false);
#ifndef QT_NO_TOOLTIP
        generateSeedButton->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        generateSeedButton->setStyleSheet(QStringLiteral(""));
        systemOutput = new QTextEdit(centralWidget);
        systemOutput->setObjectName(QStringLiteral("systemOutput"));
        systemOutput->setEnabled(true);
        systemOutput->setGeometry(QRect(650, 460, 231, 241));
        systemOutput->setFocusPolicy(Qt::NoFocus);
        systemOutput->setReadOnly(true);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(740, 230, 51, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(710, 250, 31, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(790, 250, 31, 17));
        minRadiusBox = new QDoubleSpinBox(centralWidget);
        minRadiusBox->setObjectName(QStringLiteral("minRadiusBox"));
        minRadiusBox->setGeometry(QRect(690, 270, 62, 27));
        maxRadiusBox = new QDoubleSpinBox(centralWidget);
        maxRadiusBox->setObjectName(QStringLiteral("maxRadiusBox"));
        maxRadiusBox->setGeometry(QRect(780, 270, 62, 27));
        pauseButton = new QPushButton(centralWidget);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(70, 650, 71, 31));
        pauseButton->setFocusPolicy(Qt::NoFocus);
        stepButton = new QPushButton(centralWidget);
        stepButton->setObjectName(QStringLiteral("stepButton"));
        stepButton->setGeometry(QRect(140, 650, 71, 31));
        stepButton->setFocusPolicy(Qt::NoFocus);
        timestepLimitCheckbox = new QCheckBox(centralWidget);
        timestepLimitCheckbox->setObjectName(QStringLiteral("timestepLimitCheckbox"));
        timestepLimitCheckbox->setGeometry(QRect(700, 310, 131, 22));
        timestepLimitInput = new QSpinBox(centralWidget);
        timestepLimitInput->setObjectName(QStringLiteral("timestepLimitInput"));
        timestepLimitInput->setGeometry(QRect(710, 340, 111, 27));
        dimensionSelector = new QTabWidget(centralWidget);
        dimensionSelector->setObjectName(QStringLiteral("dimensionSelector"));
        dimensionSelector->setGeometry(QRect(640, 10, 251, 80));
        dimensionSelector->setFocusPolicy(Qt::NoFocus);
        tab2D = new QWidget();
        tab2D->setObjectName(QStringLiteral("tab2D"));
        algorithmSelector2D = new QComboBox(tab2D);
        algorithmSelector2D->setObjectName(QStringLiteral("algorithmSelector2D"));
        algorithmSelector2D->setGeometry(QRect(0, 10, 241, 27));
        algorithmSelector2D->setContextMenuPolicy(Qt::NoContextMenu);
        dimensionSelector->addTab(tab2D, QString());
        tab3D = new QWidget();
        tab3D->setObjectName(QStringLiteral("tab3D"));
        algorithmSelector3D = new QComboBox(tab3D);
        algorithmSelector3D->setObjectName(QStringLiteral("algorithmSelector3D"));
        algorithmSelector3D->setGeometry(QRect(0, 10, 241, 27));
        algorithmSelector3D->setContextMenuPolicy(Qt::NoContextMenu);
        dimensionSelector->addTab(tab3D, QString());
        tabOrbital = new QWidget();
        tabOrbital->setObjectName(QStringLiteral("tabOrbital"));
        algorithmSelectorOrbital = new QComboBox(tabOrbital);
        algorithmSelectorOrbital->setObjectName(QStringLiteral("algorithmSelectorOrbital"));
        algorithmSelectorOrbital->setGeometry(QRect(0, 10, 241, 27));
        algorithmSelectorOrbital->setContextMenuPolicy(Qt::NoContextMenu);
        dimensionSelector->addTab(tabOrbital, QString());
        framerateSlider = new QSlider(centralWidget);
        framerateSlider->setObjectName(QStringLiteral("framerateSlider"));
        framerateSlider->setGeometry(QRect(350, 650, 141, 29));
        framerateSlider->setFocusPolicy(Qt::NoFocus);
        framerateSlider->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 630, 71, 17));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 20, 600, 600));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        collisionDisplay2D = new CollisionDisplay2D(centralWidget);
        collisionDisplay2D->setObjectName(QStringLiteral("collisionDisplay2D"));
        collisionDisplay2D->setGeometry(QRect(30, 20, 600, 600));
        collisionDisplay2D->setFocusPolicy(Qt::NoFocus);
        resetCameraButton = new QPushButton(centralWidget);
        resetCameraButton->setObjectName(QStringLiteral("resetCameraButton"));
        resetCameraButton->setGeometry(QRect(500, 650, 121, 31));
        resetCameraButton->setFocusPolicy(Qt::NoFocus);
        CollisionSystem->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CollisionSystem);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 906, 22));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        CollisionSystem->setMenuBar(menuBar);
        statusBar = new QStatusBar(CollisionSystem);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CollisionSystem->setStatusBar(statusBar);
        mainToolBar = new QToolBar(CollisionSystem);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CollisionSystem->addToolBar(Qt::TopToolBarArea, mainToolBar);
        QWidget::setTabOrder(algorithmSelector2D, algorithmSelector3D);
        QWidget::setTabOrder(algorithmSelector3D, seedInput);
        QWidget::setTabOrder(seedInput, generateSeedButton);
        QWidget::setTabOrder(generateSeedButton, numParticlesInput);
        QWidget::setTabOrder(numParticlesInput, minRadiusBox);
        QWidget::setTabOrder(minRadiusBox, maxRadiusBox);
        QWidget::setTabOrder(maxRadiusBox, timestepLimitCheckbox);
        QWidget::setTabOrder(timestepLimitCheckbox, timestepLimitInput);
        QWidget::setTabOrder(timestepLimitInput, startButton);
        QWidget::setTabOrder(startButton, stopButton);
        QWidget::setTabOrder(stopButton, framerateSlider);
        QWidget::setTabOrder(framerateSlider, resetCameraButton);
        QWidget::setTabOrder(resetCameraButton, stepButton);
        QWidget::setTabOrder(stepButton, pauseButton);
        QWidget::setTabOrder(pauseButton, lookaheadTimeInput);

        menuBar->addAction(menuView->menuAction());
        menuView->addAction(displayTimestepViewable);
        menuView->addAction(algTimestepViewable);
        menuView->addAction(numCollisionsViewable);
        menuView->addAction(systemKEViewable);
        menuView->addAction(systemPEViewable);
        menuView->addAction(totalEnergyViewable);
        menuView->addAction(queueSizeViewable);
        menuView->addAction(startConditionsViewable);

        retranslateUi(CollisionSystem);

        dimensionSelector->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CollisionSystem);
    } // setupUi

    void retranslateUi(QMainWindow *CollisionSystem)
    {
        CollisionSystem->setWindowTitle(QApplication::translate("CollisionSystem", "CollisionSystem", 0));
        displayTimestepViewable->setText(QApplication::translate("CollisionSystem", "Display Timestep", 0));
        numCollisionsViewable->setText(QApplication::translate("CollisionSystem", "Number of collisions", 0));
        systemKEViewable->setText(QApplication::translate("CollisionSystem", "System KE", 0));
        systemPEViewable->setText(QApplication::translate("CollisionSystem", "System PE", 0));
        startConditionsViewable->setText(QApplication::translate("CollisionSystem", "Start Conditions", 0));
        queueSizeViewable->setText(QApplication::translate("CollisionSystem", "Queue Size", 0));
        totalEnergyViewable->setText(QApplication::translate("CollisionSystem", "Total Energy", 0));
        algTimestepViewable->setText(QApplication::translate("CollisionSystem", "Algorithm Timestep", 0));
        startButton->setText(QApplication::translate("CollisionSystem", "Start", 0));
        stopButton->setText(QApplication::translate("CollisionSystem", "Stop", 0));
        numParticlesInput->setSuffix(QString());
        label->setText(QApplication::translate("CollisionSystem", "Number of Particles", 0));
        label_2->setText(QApplication::translate("CollisionSystem", "RNG Seed", 0));
        label_3->setText(QApplication::translate("CollisionSystem", "Warning Window", 0));
        lookaheadTimeInput->setSuffix(QApplication::translate("CollisionSystem", " sec", 0));
        generateSeedButton->setText(QApplication::translate("CollisionSystem", "Generate Seed", 0));
        label_5->setText(QApplication::translate("CollisionSystem", "Radius", 0));
        label_6->setText(QApplication::translate("CollisionSystem", "Min", 0));
        label_7->setText(QApplication::translate("CollisionSystem", "Max", 0));
        pauseButton->setText(QApplication::translate("CollisionSystem", "Pause", 0));
        stepButton->setText(QApplication::translate("CollisionSystem", "Step", 0));
        timestepLimitCheckbox->setText(QApplication::translate("CollisionSystem", "Timestep Limit", 0));
        timestepLimitInput->setSuffix(QString());
#ifndef QT_NO_ACCESSIBILITY
        tab2D->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        dimensionSelector->setTabText(dimensionSelector->indexOf(tab2D), QApplication::translate("CollisionSystem", "2D", 0));
        dimensionSelector->setTabText(dimensionSelector->indexOf(tab3D), QApplication::translate("CollisionSystem", "3D", 0));
        dimensionSelector->setTabText(dimensionSelector->indexOf(tabOrbital), QApplication::translate("CollisionSystem", "Orbital", 0));
        label_8->setText(QApplication::translate("CollisionSystem", "Framerate", 0));
        resetCameraButton->setText(QApplication::translate("CollisionSystem", "Reset Camera", 0));
        menuView->setTitle(QApplication::translate("CollisionSystem", "View", 0));
    } // retranslateUi

};

namespace Ui {
    class CollisionSystem: public Ui_CollisionSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLLISIONSYSTEM_H
