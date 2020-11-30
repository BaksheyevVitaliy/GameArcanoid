#pragma once

#include <QtWidgets/QMainWindow>
#include <QGraphicsView>
#include <QTimer>
#include "ui_Arcanoid2.h"
#include "GameArea.h"

class Arcanoid2 : public QMainWindow
{
    Q_OBJECT

public:
    Arcanoid2(QWidget* parent = Q_NULLPTR);
    ~Arcanoid2();

private:
    static const int _vertSize = 600;
    static const int _horSize = 600;

    QGraphicsView* _view = nullptr;
    QGraphicsScene* _scene = nullptr;
    QTimer* _timer = nullptr;

    GameArea* _gameArea = nullptr;

    Ui::Arcanoid2Class ui;
};